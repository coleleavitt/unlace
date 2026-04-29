void __fastcall dyld4::RuntimeState::notifyDebuggerLoad(dyld4::RuntimeState *this, const dyld4::Loader *a2)
{
  __int64 v4; // x9
  __int64 v5; // x10
  _QWORD v6[2]; // [xsp+0h] [xbp-120h] BYREF
  _BYTE *v7; // [xsp+10h] [xbp-110h] BYREF
  __int64 v8; // [xsp+18h] [xbp-108h]
  __int64 v9; // [xsp+20h] [xbp-100h]
  __int64 v10; // [xsp+28h] [xbp-F8h]
  _BYTE v11[48]; // [xsp+30h] [xbp-F0h] BYREF
  _OWORD v12[9]; // [xsp+60h] [xbp-C0h] BYREF

  memset(v12, 0, sizeof(v12));
  lsl::EphemeralAllocator::EphemeralAllocator((lsl::EphemeralAllocator *)v11, v12, 0x90u);
  v7 = v11;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  lsl::Vector<dyld4::Loader const*>::reserveExact(&v7, 1);
  lsl::Vector<dyld4::Loader const*>::reserve((__int64)&v7, v9 + 1);
  v4 = v9++;
  v5 = v9;
  *(_QWORD *)(v8 + 8 * v4) = a2;
  v6[0] = v8;
  v6[1] = v5;
  dyld4::RuntimeState::notifyDebuggerLoad(this, v6);
  if ( v8 )
    lsl::Vector<dyld4::Loader const*>::resize(&v7, 0);
  lsl::EphemeralAllocator::~EphemeralAllocator((lsl::EphemeralAllocator *)v11);
}
