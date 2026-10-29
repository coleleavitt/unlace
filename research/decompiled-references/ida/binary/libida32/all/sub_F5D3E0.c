__m128 *__fastcall sub_F5D3E0(__m128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void **v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  void **v9; // rbp
  void **v10; // rdi
  void **v11; // r13
  __int64 v13; // [rsp+0h] [rbp-198h] BYREF
  void *v14[3]; // [rsp+8h] [rbp-190h] BYREF
  __int64 v15; // [rsp+20h] [rbp-178h]
  __int64 v16; // [rsp+28h] [rbp-170h] BYREF
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

  v13 = 0;
  v14[2] = nullptr;
  v15 = 1;
  v14[1] = v14;
  v14[0] = v14;
  v6 = (void **)&v16;
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
  v25 = 256;
  v26 = 0;
  sub_B4C7F0(a4, a3, (__int64)&v13);
  sub_F5D0B0(a1, a2, a4, (__int64)v14[0] + 16, v7, v8);
  if ( ptr != v23 )
    free(ptr);
  if ( !v19 )
    free(v17[0]);
  if ( (v15 & 1) == 0 )
    operator delete();
  v9 = (void **)v14[0];
  if ( v14[0] != v14 )
  {
    while ( 1 )
    {
      v10 = (void **)v9[2];
      v11 = (void **)*v9;
      if ( v10 == v9 + 4 )
      {
        operator delete(v9);
        if ( v11 == v14 )
          return a1;
      }
      else
      {
        free(v10);
        operator delete(v9);
        if ( v11 == v14 )
          return a1;
      }
      v9 = v11;
    }
  }
  return a1;
}

