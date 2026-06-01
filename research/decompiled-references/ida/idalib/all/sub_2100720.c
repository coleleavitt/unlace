void __fastcall sub_2100720(__int64 a1, __int64 a2, __int64 a3)
{
  void **v3; // r12
  char v4; // r13
  bool v5; // zf
  _QWORD *v6; // r12
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  void **v9; // rbp
  void **v10; // rbx
  char *v11; // rbp
  char *v12; // rbx
  char *v13; // rdi
  char v14; // [rsp+7h] [rbp-1E1h] BYREF
  void **v15; // [rsp+8h] [rbp-1E0h] BYREF
  void *v16; // [rsp+10h] [rbp-1D8h] BYREF
  char *v17; // [rsp+18h] [rbp-1D0h]
  __int64 v18; // [rsp+20h] [rbp-1C8h]
  void *v19; // [rsp+28h] [rbp-1C0h]
  void **v20; // [rsp+30h] [rbp-1B8h]
  __int64 v21; // [rsp+38h] [rbp-1B0h]
  __int64 v22; // [rsp+40h] [rbp-1A8h]
  __int64 v23; // [rsp+48h] [rbp-1A0h]
  __int128 v24; // [rsp+50h] [rbp-198h] BYREF
  void *v25; // [rsp+60h] [rbp-188h]
  __int64 v26; // [rsp+68h] [rbp-180h]
  _BYTE v27[16]; // [rsp+70h] [rbp-178h] BYREF
  __int64 v28; // [rsp+80h] [rbp-168h]
  int v29; // [rsp+88h] [rbp-160h]
  void *v30; // [rsp+90h] [rbp-158h]
  __int64 v31; // [rsp+98h] [rbp-150h]
  _BYTE v32[16]; // [rsp+A0h] [rbp-148h] BYREF
  void *v33; // [rsp+B0h] [rbp-138h]
  __int64 v34; // [rsp+B8h] [rbp-130h]
  _BYTE v35[16]; // [rsp+C0h] [rbp-128h] BYREF
  void *v36[2]; // [rsp+D0h] [rbp-118h]
  __int64 v37; // [rsp+E0h] [rbp-108h]
  _BYTE *v38; // [rsp+E8h] [rbp-100h]
  __int64 v39; // [rsp+F0h] [rbp-F8h]
  _BYTE v40[240]; // [rsp+F8h] [rbp-F0h] BYREF

  v16 = nullptr;
  v17 = nullptr;
  v18 = 0;
  v19 = nullptr;
  v20 = nullptr;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( a2 )
  {
    v3 = *(void ***)(a1 + 80);
    v4 = 0;
    if ( !v3 )
    {
      v3 = *(void ***)(a1 + 88);
      v4 = 1;
    }
  }
  else
  {
    v4 = 0;
    v3 = &v16;
  }
  v5 = *(_QWORD *)(a3 + 16) == 0;
  v24 = 0;
  v25 = v27;
  v30 = v32;
  v33 = v35;
  v26 = 0;
  v27[0] = 0;
  v28 = 0;
  v29 = 0;
  v31 = 0;
  v32[0] = 0;
  v34 = 0;
  v35[0] = 0;
  *(_OWORD *)v36 = 0;
  v37 = 0;
  v38 = v40;
  v39 = 0x400000000LL;
  v15 = v3;
  if ( v5
    || ((*(void (__fastcall **)(__int64, __int128 *, void ***))(a3 + 24))(a3, &v24, &v15),
        v5 = *(_QWORD *)(a1 + 136) == 0,
        v14 = v4,
        v5) )
  {
    std::__throw_bad_function_call();
  }
  (*(void (__fastcall **)(__int64, __int128 *, char *, void **, __int64))(a1 + 144))(a1 + 120, &v24, &v14, v3, a1 + 96);
  v6 = v38;
  v7 = &v38[48 * (unsigned int)v39];
  if ( v38 != (_BYTE *)v7 )
  {
    do
    {
      while ( 1 )
      {
        v7 -= 6;
        v8 = (_QWORD *)v7[2];
        if ( v8 == v7 + 4 )
          break;
        operator delete(v8);
        if ( v6 == v7 )
          goto LABEL_9;
      }
    }
    while ( v6 != v7 );
LABEL_9:
    v7 = v38;
  }
  if ( v7 != (_QWORD *)v40 )
    free(v7);
  if ( v36[0] )
    operator delete(v36[0]);
  if ( v33 != v35 )
    operator delete(v33);
  if ( v30 != v32 )
    operator delete(v30);
  if ( v25 != v27 )
    operator delete(v25);
  v9 = v20;
  v10 = (void **)v19;
  if ( v20 != v19 )
  {
    do
    {
      while ( *v10 != v10 + 2 )
      {
        operator delete(*v10);
        v10 += 4;
        if ( v10 == v9 )
          goto LABEL_23;
      }
      v10 += 4;
    }
    while ( v9 != v10 );
LABEL_23:
    v10 = (void **)v19;
  }
  if ( v10 )
    operator delete(v10);
  v11 = v17;
  v12 = (char *)v16;
  if ( v17 != v16 )
  {
    do
    {
      v13 = v12;
      v12 += 24;
      sub_2239BD0(v13);
    }
    while ( v11 != v12 );
    v12 = (char *)v16;
  }
  if ( v12 )
    operator delete(v12);
}
