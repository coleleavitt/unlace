void *__fastcall dyld4::RuntimeState::_instantiateTLVs(
        dyld4::RuntimeState *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  void *v10; // x21
  _QWORD v12[8]; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v13; // [xsp+40h] [xbp-60h] BYREF
  __int64 *v14; // [xsp+48h] [xbp-58h]
  __int64 v15; // [xsp+50h] [xbp-50h]
  __int64 v16; // [xsp+58h] [xbp-48h]
  __int64 v17; // [xsp+60h] [xbp-40h] BYREF
  __int64 *v18; // [xsp+68h] [xbp-38h]
  __int64 v19; // [xsp+70h] [xbp-30h]
  __int64 v20; // [xsp+78h] [xbp-28h]

  v17 = 0;
  v18 = &v17;
  v19 = 0x2000000000LL;
  v20 = 0;
  v13 = 0;
  v14 = &v13;
  v15 = 0x2000000000LL;
  v16 = 0;
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 0x40000000;
  v12[2] = ___ZN5dyld412RuntimeState16_instantiateTLVsEm_block_invoke;
  v12[3] = &unk_95930;
  v12[6] = this;
  v12[7] = a2;
  v12[4] = &v17;
  v12[5] = &v13;
  ((void (__fastcall *)(dyld4::RuntimeState *, _QWORD *, __int64, __int64, __int64, __int64, __int64, __int64))dyld4::RuntimeState::withTLVLock)(
    this,
    v12,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8);
  if ( v18[3] )
  {
    v10 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 8LL))(
                    *((_QWORD *)this + 15),
                    v14[3]);
    _platform_memmove(v10, (const void *)v18[3], v14[3]);
    (*(void (__fastcall **)(_QWORD, __int64, void *))(**((_QWORD **)this + 15) + 72LL))(*((_QWORD *)this + 15), a2, v10);
  }
  else
  {
    v10 = nullptr;
  }
  _Block_object_dispose(&v13, 8);
  _Block_object_dispose(&v17, 8);
  return v10;
}
