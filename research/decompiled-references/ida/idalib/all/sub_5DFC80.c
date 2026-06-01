unsigned __int64 __fastcall sub_5DFC80(__int64 a1, unsigned __int64 a2, const char *a3, char a4)
{
  size_t v7; // rax
  size_t v8; // r14
  size_t v9; // r13
  void *v10; // rax
  __int64 v11; // rbp
  unsigned __int64 func_qty; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  unsigned __int64 v17; // r14
  char *v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v21; // r13
  _QWORD *v22; // r12
  void *v23; // rdi
  void *v24; // rdi
  unsigned __int64 *v25; // rax
  unsigned __int64 *i; // r14
  size_t *v27; // [rsp+18h] [rbp-240h]
  _QWORD v28[2]; // [rsp+30h] [rbp-228h] BYREF
  __int128 v29; // [rsp+40h] [rbp-218h]
  __int64 v30; // [rsp+50h] [rbp-208h]
  __int128 v31; // [rsp+58h] [rbp-200h]
  int v32; // [rsp+68h] [rbp-1F0h]
  __int16 v33; // [rsp+6Ch] [rbp-1ECh]
  _QWORD v34[2]; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v35; // [rsp+80h] [rbp-1D8h]
  __int64 v36; // [rsp+90h] [rbp-1C8h]
  __int128 v37; // [rsp+98h] [rbp-1C0h]
  int v38; // [rsp+A8h] [rbp-1B0h]
  __int16 v39; // [rsp+ACh] [rbp-1ACh]
  __int128 v40; // [rsp+B0h] [rbp-1A8h]
  __int64 v41; // [rsp+C0h] [rbp-198h]
  __int64 v42; // [rsp+C8h] [rbp-190h]
  __int64 v43; // [rsp+D0h] [rbp-188h]
  char v44; // [rsp+D8h] [rbp-180h] BYREF
  unsigned __int64 v45; // [rsp+218h] [rbp-40h] BYREF

  v45 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_2B2FD70;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  if ( a3 )
  {
    v7 = strlen(a3);
    v8 = v7 + 1;
    v9 = v7;
    v10 = (void *)qvector_reserve(a1 + 24, 0, v7 + 1, 1);
    *(_QWORD *)(a1 + 24) = v10;
    *(_QWORD *)(a1 + 32) = v8;
    memmove(v10, a3, v9);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v9) = 0;
    a2 = *(_QWORD *)(a1 + 16);
  }
  *(_BYTE *)(a1 + 74) = a4;
  *(_QWORD *)(a1 + 48) = 0;
  *(_WORD *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 75) = 0;
  *(_WORD *)(a1 + 76) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v11 = *(_QWORD *)(a2 + 1672);
  func_qty = get_func_qty();
  v17 = *(_QWORD *)(a1 + 56);
  v18 = (char *)func_qty;
  v27 = (size_t *)(a1 + 48);
  if ( func_qty != v17 )
  {
    v28[0] = -1;
    v28[1] = 0;
    v30 = 0;
    v32 = 0;
    v33 = 0;
    v29 = 0;
    v31 = 0;
    if ( func_qty < v17 )
    {
      v21 = func_qty;
      do
      {
        v22 = (_QWORD *)(*(_QWORD *)(a1 + 48) + (v21 << 6));
        v23 = (void *)v22[4];
        if ( v23 )
        {
          v22[5] = 0;
          qfree(v23);
        }
        v24 = (void *)v22[1];
        if ( v24 )
        {
          v22[2] = 0;
          qfree(v24);
        }
        ++v21;
      }
      while ( v17 != v21 );
      *(_QWORD *)(a1 + 56) = v18;
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 48);
      if ( (unsigned __int64)v28 < v19 || (unsigned __int64)v28 >= (*(_QWORD *)(a1 + 64) << 6) + v19 )
      {
        LODWORD(a2) = (_DWORD)v18;
        sub_5DFA10(v27, v18, (__int64)v28);
      }
      else
      {
        LODWORD(a2) = (_DWORD)v18;
        v34[0] = -1;
        v34[1] = 0;
        v36 = 0;
        v38 = 0;
        v39 = 0;
        v35 = 0;
        v37 = 0;
        sub_5DFA10(v27, v18, (__int64)v34);
      }
    }
  }
  if ( v18 )
    callui(27, a2, v13, v14, v15, v16);
  if ( !*(_BYTE *)(a1 + 74) )
  {
    v41 = -1;
    v25 = (unsigned __int64 *)&v44;
    v42 = 0;
    v43 = 0;
    v40 = -1;
    do
    {
      *(_WORD *)v25 = 0;
      v25 += 5;
      *((_WORD *)v25 - 19) = 0;
      *((_WORD *)v25 - 18) = 0;
      *((_DWORD *)v25 - 2) = 0;
      *((_WORD *)v25 - 17) = 0;
      *((_OWORD *)v25 - 2) = 0;
      *(v25 - 2) = 0;
    }
    while ( &v45 != v25 );
    LODWORD(a2) = -1;
    for ( i = sub_5060F0(v11 + 1624, 0xFFFFFFFFFFFFFFFFLL); i; i = sub_5060F0(v11 + 1624, *i) )
    {
      if ( *((_BYTE *)i + 184) == 1 && *i < i[1] )
        callui(27, a2, v13, v14, v15, v16);
      a2 = *i;
    }
  }
  if ( (int)*(_QWORD *)(a1 + 56) > 0 )
    callui(27, a2, v13, v14, v15, v16);
  return v45 - __readfsqword(0x28u);
}
