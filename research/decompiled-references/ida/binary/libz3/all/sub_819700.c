__int64 __fastcall sub_819700(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  unsigned int v7; // r12d
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r13
  _BYTE *v15; // r15
  __int64 **v16; // rax
  __int64 **v17; // r12
  __int64 **v18; // r15
  __int64 *v19; // rdx
  __int64 *v20; // rax
  __int64 *v21; // r12
  __int64 *v22; // r15
  __int64 v23; // rdx
  unsigned __int64 *v24; // r13
  unsigned __int64 *v25; // r12
  unsigned __int64 v26; // rdx
  __int64 result; // rax
  __int64 v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+8h] [rbp-70h]
  double v30[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v31; // [rsp+20h] [rbp-58h] BYREF
  __m128 v32; // [rsp+28h] [rbp-50h]

  v6 = a2;
  a3 = (unsigned int)a3;
  v7 = a3;
  v9 = a1[11];
  v10 = *(__int64 **)(v9 + 8LL * a2);
  v30[0] = *(double *)(v9 + 8LL * (unsigned int)a3);
  v11 = **(_QWORD **)&v30[0];
  *(_QWORD *)&v30[1] = v10;
  v12 = *v10;
  v29 = v11;
  v13 = a1[23];
  v14 = *(_QWORD *)(v13 + 8LL * (unsigned int)a3);
  v15 = *(_BYTE **)(v13 + 8LL * a2);
  if ( *(_BYTE *)v14 && !*v15 )
    sub_818860(a1, a2);
  if ( !v15[1] || !*(_BYTE *)(v14 + 1) && (sub_818B10(a1, v7), !v15[1]) )
  {
    if ( *(_BYTE *)(v14 + 1) )
      sub_818B10(a1, a2);
  }
  v16 = *(__int64 ***)(v14 + 8);
  if ( v16 )
  {
    a3 = *((unsigned int *)v16 - 1);
    v17 = &v16[a3];
    if ( v17 != v16 )
    {
      v18 = *(__int64 ***)(v14 + 8);
      do
      {
        v19 = *v18++;
        sub_819390((__int64)a1, a2, v19);
      }
      while ( v17 != v18 );
    }
  }
  v20 = *(__int64 **)(v14 + 16);
  if ( v20 )
  {
    a3 = *((unsigned int *)v20 - 1);
    v21 = &v20[a3];
    if ( v21 != v20 )
    {
      v22 = *(__int64 **)(v14 + 16);
      do
      {
        v23 = *v22++;
        sub_818EE0(a1, a2, v23);
      }
      while ( v21 != v22 );
    }
  }
  v24 = *(unsigned __int64 **)(v14 + 24);
  if ( v24 )
  {
    v25 = &v24[*((unsigned int *)v24 - 1)];
    while ( v25 != v24 )
    {
      v26 = *v24++;
      sub_819140(a1, a2, v26);
    }
  }
  if ( *(_WORD *)(v12 + 4) == 2 && *(_DWORD *)(v12 + 16) == 2
    || (result = v29, *(_WORD *)(v29 + 4) == 2) && *(_DWORD *)(v29 + 16) == 2 )
  {
    v31 = 4;
    v32 = _mm_loadh_ps(v30);
    return sub_865240(a1, &v31, a3, v6, a5, a6, v28);
  }
  return result;
}

