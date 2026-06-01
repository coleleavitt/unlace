__int64 __fastcall sub_183BD10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void **v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdi
  _QWORD *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 v17; // r9
  unsigned int v18; // r13d
  void **v19; // rbp
  void **v20; // rdi
  void **v21; // r12
  __int64 v23; // [rsp+0h] [rbp-1A8h] BYREF
  void *v24[3]; // [rsp+8h] [rbp-1A0h] BYREF
  __int64 v25; // [rsp+20h] [rbp-188h]
  __int64 v26; // [rsp+28h] [rbp-180h] BYREF
  unsigned int v27; // [rsp+30h] [rbp-178h]
  void *v28[2]; // [rsp+A8h] [rbp-100h] BYREF
  int v29; // [rsp+B8h] [rbp-F0h]
  char v30; // [rsp+BCh] [rbp-ECh]
  _QWORD v31[5]; // [rsp+C0h] [rbp-E8h] BYREF
  void *ptr; // [rsp+E8h] [rbp-C0h]
  __int64 v33; // [rsp+F0h] [rbp-B8h]
  _DWORD v34[26]; // [rsp+F8h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+160h] [rbp-48h]
  __int16 v36; // [rsp+168h] [rbp-40h]
  char v37; // [rsp+16Ah] [rbp-3Eh]

  v23 = 0;
  v24[2] = nullptr;
  v25 = 1;
  v24[1] = v24;
  v24[0] = v24;
  v8 = (void **)&v26;
  do
  {
    *v8 = nullptr;
    v8 += 2;
  }
  while ( v28 != v8 );
  v9 = (__int64 *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v28[1] = &byte_4;
  v10 = *v9;
  v28[0] = v31;
  v33 = 0x400000000LL;
  v29 = 0;
  v30 = 1;
  v31[4] = 0;
  ptr = v34;
  v34[24] = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v11 = sub_F63270(v10, a2, (__int64)v28, (__int64)v9, a5, a6);
  v16 = sub_F63270(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, v12, v13, v14, v15);
  v18 = sub_183BAC0(a1, a2, (__int64)v16, (__int64)v11, (__int64)&v23, v17);
  if ( ptr != v34 )
    free(ptr);
  if ( !v30 )
    free(v28[0]);
  if ( (v25 & 1) == 0 )
    operator delete(v26, 16LL * v27, 8);
  v19 = (void **)v24[0];
  if ( v24[0] != v24 )
  {
    while ( 1 )
    {
      v20 = (void **)v19[2];
      v21 = (void **)*v19;
      if ( v20 == v19 + 4 )
      {
        operator delete(v19);
        if ( v21 == v24 )
          return v18;
      }
      else
      {
        free(v20);
        operator delete(v19);
        if ( v21 == v24 )
          return v18;
      }
      v19 = v21;
    }
  }
  return v18;
}
