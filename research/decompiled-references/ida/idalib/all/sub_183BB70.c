__int64 __fastcall sub_183BB70(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void **v6; // rax
  unsigned int v7; // r13d
  void **v8; // rbp
  void **v9; // rdi
  void **v10; // r12
  __int64 v12; // [rsp+0h] [rbp-198h] BYREF
  void *v13[3]; // [rsp+8h] [rbp-190h] BYREF
  __int64 v14; // [rsp+20h] [rbp-178h]
  __int64 v15; // [rsp+28h] [rbp-170h] BYREF
  unsigned int v16; // [rsp+30h] [rbp-168h]
  void *v17[2]; // [rsp+A8h] [rbp-F0h] BYREF
  int v18; // [rsp+B8h] [rbp-E0h]
  char v19; // [rsp+BCh] [rbp-DCh]
  _QWORD v20[5]; // [rsp+C0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+E8h] [rbp-B0h]
  __int64 v22; // [rsp+F0h] [rbp-A8h]
  _DWORD v23[26]; // [rsp+F8h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+160h] [rbp-38h]
  __int16 v25; // [rsp+168h] [rbp-30h]
  char v26; // [rsp+16Ah] [rbp-2Eh]

  v12 = 0;
  v13[2] = nullptr;
  v14 = 1;
  v13[1] = v13;
  v13[0] = v13;
  v6 = (void **)&v15;
  do
  {
    *v6 = nullptr;
    v6 += 2;
  }
  while ( v17 != v6 );
  v17[1] = &byte_4;
  v17[0] = v20;
  v22 = 0x400000000LL;
  v18 = 0;
  v19 = 1;
  v20[4] = 0;
  ptr = v23;
  v23[24] = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v7 = sub_183BAC0(a1, a2, a3, a4, (__int64)&v12, a6);
  if ( ptr != v23 )
    free(ptr);
  if ( !v19 )
    free(v17[0]);
  if ( (v14 & 1) == 0 )
    operator delete(v15, 16LL * v16, 8);
  v8 = (void **)v13[0];
  if ( v13[0] != v13 )
  {
    while ( 1 )
    {
      v9 = (void **)v8[2];
      v10 = (void **)*v8;
      if ( v9 == v8 + 4 )
      {
        operator delete(v8);
        if ( v10 == v13 )
          return v7;
      }
      else
      {
        free(v9);
        operator delete(v8);
        if ( v10 == v13 )
          return v7;
      }
      v8 = v10;
    }
  }
  return v7;
}
