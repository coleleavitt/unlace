__int64 __fastcall sub_777930(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  void **v3; // rbx
  void **v4; // rdi
  void **v5; // rbp
  __int64 v7; // [rsp+0h] [rbp-198h] BYREF
  void *v8[3]; // [rsp+8h] [rbp-190h] BYREF
  __int64 v9; // [rsp+20h] [rbp-178h]
  __int64 v10; // [rsp+28h] [rbp-170h]
  __int64 v11; // [rsp+38h] [rbp-160h]
  __int64 v12; // [rsp+48h] [rbp-150h]
  __int64 v13; // [rsp+58h] [rbp-140h]
  __int64 v14; // [rsp+68h] [rbp-130h]
  __int64 v15; // [rsp+78h] [rbp-120h]
  __int64 v16; // [rsp+88h] [rbp-110h]
  __int64 v17; // [rsp+98h] [rbp-100h]
  void *v18; // [rsp+A8h] [rbp-F0h]
  __int64 v19; // [rsp+B0h] [rbp-E8h]
  int v20; // [rsp+B8h] [rbp-E0h]
  char v21; // [rsp+BCh] [rbp-DCh]
  char v22; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-B8h]
  void *ptr; // [rsp+E8h] [rbp-B0h]
  __int64 v25; // [rsp+F0h] [rbp-A8h]
  _BYTE v26[96]; // [rsp+F8h] [rbp-A0h] BYREF
  int v27; // [rsp+158h] [rbp-40h]
  __int64 v28; // [rsp+160h] [rbp-38h]
  __int16 v29; // [rsp+168h] [rbp-30h]
  char v30; // [rsp+16Ah] [rbp-2Eh]

  v7 = 0;
  v18 = &v22;
  v8[1] = v8;
  v25 = 0x400000000LL;
  v8[0] = v8;
  v8[2] = nullptr;
  v9 = 1;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 4;
  v20 = 0;
  v21 = 1;
  v23 = 0;
  ptr = v26;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v2 = sub_777820(a1, a2, &v7);
  if ( ptr != v26 )
    free(ptr);
  if ( !v21 )
    free(v18);
  if ( (v9 & 1) == 0 )
    operator delete();
  v3 = (void **)v8[0];
  if ( v8[0] != v8 )
  {
    while ( 1 )
    {
      v4 = (void **)v3[2];
      v5 = (void **)*v3;
      if ( v4 != v3 + 4 )
        free(v4);
      operator delete(v3, 0x90u);
      if ( v5 == v8 )
        break;
      v3 = v5;
    }
  }
  return v2;
}

