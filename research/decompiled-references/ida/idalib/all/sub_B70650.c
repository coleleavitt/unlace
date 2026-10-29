__int64 __fastcall sub_B70650(__int64 a1, __int64 a2)
{
  void **v2; // rax
  unsigned int v3; // r13d
  void **v4; // rbp
  void **v5; // rdi
  void **v6; // r12
  __int64 v8; // [rsp+0h] [rbp-198h] BYREF
  void *v9[3]; // [rsp+8h] [rbp-190h] BYREF
  __int64 v10; // [rsp+20h] [rbp-178h]
  __int64 v11; // [rsp+28h] [rbp-170h] BYREF
  unsigned int v12; // [rsp+30h] [rbp-168h]
  void *v13[2]; // [rsp+A8h] [rbp-F0h] BYREF
  int v14; // [rsp+B8h] [rbp-E0h]
  char v15; // [rsp+BCh] [rbp-DCh]
  _QWORD v16[5]; // [rsp+C0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+E8h] [rbp-B0h]
  __int64 v18; // [rsp+F0h] [rbp-A8h]
  _DWORD v19[26]; // [rsp+F8h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+160h] [rbp-38h]
  __int16 v21; // [rsp+168h] [rbp-30h]
  char v22; // [rsp+16Ah] [rbp-2Eh]

  v8 = 0;
  v9[2] = nullptr;
  v10 = 1;
  v9[1] = v9;
  v9[0] = v9;
  v2 = (void **)&v11;
  do
  {
    *v2 = nullptr;
    v2 += 2;
  }
  while ( v13 != v2 );
  v13[1] = &byte_4;
  v13[0] = v16;
  v18 = 0x400000000LL;
  v14 = 0;
  v15 = 1;
  v16[4] = 0;
  ptr = v19;
  v19[24] = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v3 = sub_B70530(a1, a2, (__int64)&v8);
  if ( ptr != v19 )
    free(ptr);
  if ( !v15 )
    free(v13[0]);
  if ( (v10 & 1) == 0 )
    operator delete(v11, 16LL * v12, 8);
  v4 = (void **)v9[0];
  if ( v9[0] != v9 )
  {
    while ( 1 )
    {
      v5 = (void **)v4[2];
      v6 = (void **)*v4;
      if ( v5 == v4 + 4 )
      {
        operator delete(v4);
        if ( v6 == v9 )
          return v3;
      }
      else
      {
        free(v5);
        operator delete(v4);
        if ( v6 == v9 )
          return v3;
      }
      v4 = v6;
    }
  }
  return v3;
}
