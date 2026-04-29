__n128 __fastcall dyld4::FileRecord::swap(dyld4::FileRecord *this, dyld4::FileRecord *a2)
{
  __int128 v4; // q0
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 *v7; // x9
  __int64 *v8; // x8
  __int64 v9; // x10
  __int64 v10; // x11
  __int64 v11; // x9
  __int64 v12; // x8
  __n128 result; // q0
  __int128 v14; // q1
  _QWORD v15[4]; // [xsp+8h] [xbp-38h] BYREF

  v4 = *(_OWORD *)((char *)this + 24);
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *(_OWORD *)((char *)a2 + 24) = v4;
  v5 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = v5;
  v6 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  *((_QWORD *)a2 + 2) = v6;
  v7 = (__int64 *)((char *)this + 40);
  v8 = (__int64 *)((char *)a2 + 40);
  v15[0] = 0;
  if ( v15 == (_QWORD *)((char *)this + 40) )
  {
    v9 = 0;
  }
  else
  {
    v9 = *v7;
    v15[0] = *v7;
    *v7 = 0;
  }
  if ( a2 != this )
  {
    v10 = *v7;
    *v7 = *v8;
    *v8 = v10;
  }
  if ( v15 != v8 )
  {
    v11 = *v8;
    *v8 = v9;
    v15[0] = v11;
  }
  lsl::UniquePtr<char const>::~UniquePtr(v15);
  v12 = *(_QWORD *)this;
  *(_QWORD *)this = *(_QWORD *)a2;
  *(_QWORD *)a2 = v12;
  result = *((__n128 *)a2 + 3);
  v14 = *((_OWORD *)this + 3);
  *((__n128 *)this + 3) = result;
  *((_OWORD *)a2 + 3) = v14;
  LODWORD(v12) = *((_DWORD *)this + 16);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)a2 + 16) = v12;
  LODWORD(v12) = *((_DWORD *)this + 17);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)a2 + 17) = v12;
  LOWORD(v12) = *((_WORD *)this + 36);
  *((_WORD *)this + 36) = *((_WORD *)a2 + 36);
  *((_WORD *)a2 + 36) = v12;
  LOBYTE(v12) = *((_BYTE *)this + 74);
  *((_BYTE *)this + 74) = *((_BYTE *)a2 + 74);
  *((_BYTE *)a2 + 74) = v12;
  return result;
}
