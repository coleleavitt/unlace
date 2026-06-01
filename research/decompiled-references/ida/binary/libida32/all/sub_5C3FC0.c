unsigned __int64 __fastcall sub_5C3FC0(_BYTE *a1, __int64 a2, const char *a3, char a4)
{
  _BYTE *v4; // rbx
  size_t v7; // rax
  size_t v8; // r14
  size_t v9; // r13
  _BYTE *v10; // rax
  __int64 v11; // rbp
  unsigned __int64 func_qty; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  unsigned __int64 v17; // r14
  const char *v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v21; // r13
  _QWORD *v22; // r12
  void *v23; // rdi
  void *v24; // rdi
  unsigned __int64 *v25; // rax
  unsigned int *i; // r14
  size_t *v27; // [rsp+18h] [rbp-1B0h]
  _QWORD v28[2]; // [rsp+30h] [rbp-198h] BYREF
  __int128 v29; // [rsp+40h] [rbp-188h]
  __int64 v30; // [rsp+50h] [rbp-178h]
  __int128 v31; // [rsp+58h] [rbp-170h]
  int v32; // [rsp+68h] [rbp-160h]
  __int16 v33; // [rsp+6Ch] [rbp-15Ch]
  _QWORD v34[2]; // [rsp+70h] [rbp-158h] BYREF
  __int128 v35; // [rsp+80h] [rbp-148h]
  __int64 v36; // [rsp+90h] [rbp-138h]
  __int128 v37; // [rsp+98h] [rbp-130h]
  int v38; // [rsp+A8h] [rbp-120h]
  __int16 v39; // [rsp+ACh] [rbp-11Ch]
  __int64 v40; // [rsp+B0h] [rbp-118h]
  __int64 v41; // [rsp+B8h] [rbp-110h]
  __int64 v42; // [rsp+C0h] [rbp-108h]
  char v43; // [rsp+C8h] [rbp-100h] BYREF
  unsigned __int64 v44; // [rsp+188h] [rbp-40h] BYREF

  v4 = a1;
  v44 = __readfsqword(0x28u);
  a1[8] = 0;
  *(_QWORD *)a1 = &off_2B05DB0;
  *((_QWORD *)a1 + 2) = a2;
  *((_QWORD *)a1 + 3) = 0;
  *((_OWORD *)a1 + 2) = 0;
  if ( a3 )
  {
    v7 = strlen(a3);
    v8 = v7 + 1;
    v9 = v7;
    v10 = (_BYTE *)qvector_reserve(a1 + 24, 0, v7 + 1, 1);
    *((_QWORD *)a1 + 3) = v10;
    a1 = v10;
    *((_QWORD *)v4 + 4) = v8;
    memmove(v10, a3, v9);
    *(_BYTE *)(*((_QWORD *)v4 + 3) + v9) = 0;
    a2 = *((_QWORD *)v4 + 2);
  }
  v4[74] = a4;
  *((_QWORD *)v4 + 6) = 0;
  *((_WORD *)v4 + 36) = 0;
  v4[75] = 0;
  *((_WORD *)v4 + 38) = 0;
  *(_OWORD *)(v4 + 56) = 0;
  v11 = *(_QWORD *)(a2 + 1480);
  func_qty = get_func_qty(a1);
  v17 = *((_QWORD *)v4 + 7);
  v18 = (const char *)func_qty;
  v27 = (size_t *)(v4 + 48);
  if ( func_qty != v17 )
  {
    v28[1] = 0;
    v28[0] = 0xFFFFFFFFLL;
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
        v22 = (_QWORD *)(*((_QWORD *)v4 + 6) + (v21 << 6));
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
      *((_QWORD *)v4 + 7) = v18;
    }
    else
    {
      v19 = *((_QWORD *)v4 + 6);
      if ( (unsigned __int64)v28 < v19 || (unsigned __int64)v28 >= (*((_QWORD *)v4 + 8) << 6) + v19 )
      {
        LODWORD(a2) = (_DWORD)v18;
        sub_5C3D50(v27, v18, (__int64)v28);
      }
      else
      {
        LODWORD(a2) = (_DWORD)v18;
        v34[1] = 0;
        v34[0] = 0xFFFFFFFFLL;
        v36 = 0;
        v38 = 0;
        v39 = 0;
        v35 = 0;
        v37 = 0;
        sub_5C3D50(v27, v18, (__int64)v34);
      }
    }
  }
  if ( v18 )
    callui(27, a2, v13, v14, v15, v16);
  if ( !v4[74] )
  {
    v40 = -1;
    v42 = 0;
    v41 = 0xFFFFFFFFLL;
    v25 = (unsigned __int64 *)&v43;
    do
    {
      *(_WORD *)v25 = 0;
      v25 += 3;
      *((_WORD *)v25 - 11) = 0;
      *((_WORD *)v25 - 10) = 0;
      *((_DWORD *)v25 - 1) = 0;
      *((_WORD *)v25 - 9) = 0;
      *(v25 - 2) = 0;
      *((_DWORD *)v25 - 2) = 0;
    }
    while ( &v44 != v25 );
    LODWORD(a2) = -1;
    for ( i = sub_4EEB90(v11 + 1552, 0xFFFFFFFF); i; i = sub_4EEB90(v11 + 1552, *i) )
    {
      if ( *((_BYTE *)i + 96) == 1 && *i < i[1] )
        callui(27, a2, v13, v14, v15, v16);
      LODWORD(a2) = *i;
    }
  }
  if ( (int)*((_QWORD *)v4 + 7) > 0 )
    callui(27, a2, v13, v14, v15, v16);
  return v44 - __readfsqword(0x28u);
}

