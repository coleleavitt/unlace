__int64 __fastcall sub_17A45C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  void **v4; // rax
  void **v5; // rbp
  void **v6; // rdi
  void **v7; // r12
  __int64 v9; // [rsp+8h] [rbp-200h] BYREF
  _QWORD v10[4]; // [rsp+10h] [rbp-1F8h] BYREF
  void *v11; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-1D0h]
  int v13; // [rsp+40h] [rbp-1C8h]
  char v14; // [rsp+44h] [rbp-1C4h]
  __int64 v15; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-198h] BYREF
  void *v17[3]; // [rsp+78h] [rbp-190h] BYREF
  __int64 v18; // [rsp+90h] [rbp-178h]
  __int64 v19; // [rsp+98h] [rbp-170h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp-168h]
  void *v21[2]; // [rsp+118h] [rbp-F0h] BYREF
  int v22; // [rsp+128h] [rbp-E0h]
  char v23; // [rsp+12Ch] [rbp-DCh]
  _QWORD v24[5]; // [rsp+130h] [rbp-D8h] BYREF
  void *ptr; // [rsp+158h] [rbp-B0h]
  __int64 v26; // [rsp+160h] [rbp-A8h]
  _DWORD v27[26]; // [rsp+168h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+1D0h] [rbp-38h]
  __int16 v29; // [rsp+1D8h] [rbp-30h]
  char v30; // [rsp+1DAh] [rbp-2Eh]

  v9 = a3;
  v13 = 0;
  v12 = 4;
  v14 = 1;
  v16 = 0;
  v17[2] = nullptr;
  v18 = 1;
  v11 = &v15;
  v17[1] = v17;
  v17[0] = v17;
  v4 = (void **)&v19;
  do
  {
    *v4 = nullptr;
    v4 += 2;
  }
  while ( v21 != v4 );
  v10[1] = a1;
  v10[2] = &v11;
  v21[0] = v24;
  v26 = 0x400000000LL;
  v29 = 1;
  v21[1] = &byte_4;
  v22 = 0;
  v23 = 1;
  v24[4] = 0;
  ptr = v27;
  v27[24] = 0;
  v28 = 0;
  v30 = 0;
  v10[0] = &v9;
  sub_B6EFE0(a2, (__int64 *)sub_179CEA0, (__int64)v10, (__int64)&v16, 0);
  LOBYTE(v3) = HIDWORD(v12) != v13;
  if ( ptr != v27 )
    free(ptr);
  if ( !v23 )
    free(v21[0]);
  if ( (v18 & 1) == 0 )
    operator delete(v19, 16LL * v20, 8);
  v5 = (void **)v17[0];
  if ( v17[0] != v17 )
  {
    while ( 1 )
    {
      v6 = (void **)v5[2];
      v7 = (void **)*v5;
      if ( v6 == v5 + 4 )
      {
        operator delete(v5);
        if ( v7 == v17 )
          break;
      }
      else
      {
        free(v6);
        operator delete(v5);
        if ( v7 == v17 )
          break;
      }
      v5 = v7;
    }
  }
  if ( !v14 )
    free(v11);
  return v3;
}
