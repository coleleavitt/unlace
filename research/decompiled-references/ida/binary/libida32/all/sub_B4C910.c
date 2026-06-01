__int64 __fastcall sub_B4C910(__int64 a1, __int64 a2)
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
  void *v12[2]; // [rsp+A8h] [rbp-F0h] BYREF
  int v13; // [rsp+B8h] [rbp-E0h]
  char v14; // [rsp+BCh] [rbp-DCh]
  _QWORD v15[5]; // [rsp+C0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+E8h] [rbp-B0h]
  __int64 v17; // [rsp+F0h] [rbp-A8h]
  _DWORD v18[26]; // [rsp+F8h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+160h] [rbp-38h]
  __int16 v20; // [rsp+168h] [rbp-30h]
  char v21; // [rsp+16Ah] [rbp-2Eh]

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
  while ( v12 != v2 );
  v12[1] = &byte_4;
  v12[0] = v15;
  v17 = 0x400000000LL;
  v13 = 0;
  v14 = 1;
  v15[4] = 0;
  ptr = v18;
  v18[24] = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v3 = sub_B4C7F0(a1, a2, (__int64)&v8);
  if ( ptr != v18 )
    free(ptr);
  if ( !v14 )
    free(v12[0]);
  if ( (v10 & 1) == 0 )
    operator delete();
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

