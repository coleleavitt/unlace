__int64 __fastcall sub_22E380(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned __int64 *v12; // rdi
  unsigned __int64 v13; // rbp
  unsigned __int64 *v15; // rax
  __int64 v16; // r11
  unsigned __int64 *v17; // r14
  unsigned __int64 v18; // rax
  unsigned int v19; // r13d
  bool v20; // cf
  unsigned __int64 *v21; // rax
  __int64 v22; // r11
  unsigned __int64 *v23; // r14
  unsigned __int64 v24; // rax
  __int64 v25; // r11
  unsigned __int64 *v26; // r15
  unsigned __int64 *v27; // rax
  unsigned __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // r8
  __int64 v32; // r9
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  const char *v35; // rdx
  __int64 v36; // rax
  const void *v37; // rsi
  const char *v38; // rdi
  char v40; // [rsp+0h] [rbp-68h]
  __int64 v41; // [rsp+8h] [rbp-60h]
  const char *v42; // [rsp+10h] [rbp-58h] BYREF
  __int128 v43; // [rsp+18h] [rbp-50h]
  unsigned __int64 v44; // [rsp+28h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( a2 >= a3 )
    return 0;
  v12 = *(unsigned __int64 **)a1;
  v13 = a2;
  v15 = sub_2280A0(v12, *(_QWORD *)(a1 + 8), a2);
  v17 = v15;
  if ( v15 && *((_BYTE *)v15 + 16) )
  {
    v18 = *v15;
    v19 = 0;
    if ( v18 < a2 )
    {
      if ( !(unsigned __int8)set_segm_end(v18, a2, 1) )
        return (unsigned int)-1;
      v20 = *v17 < a2;
      v17[1] = a2;
      v12 = *(unsigned __int64 **)a1;
      v16 = *(_QWORD *)(a1 + 8);
      if ( !v20 )
      {
        if ( (__int64)(0xAAAAAAAAAAAAAAABLL * (&v12[3 * v16] - v17) - 2) >= 0 )
        {
          memmove(v17, v17 + 3, (char *)&v12[3 * v16] - (char *)v17 - 24);
          v16 = *(_QWORD *)(a1 + 8);
          v12 = *(unsigned __int64 **)a1;
        }
        *(_QWORD *)(a1 + 8) = --v16;
      }
      v19 = 1;
    }
  }
  else
  {
    v19 = 0;
  }
  v21 = sub_2280A0(v12, v16, a3);
  v23 = v21;
  if ( !v21 )
    goto LABEL_12;
  if ( !*((_BYTE *)v21 + 16) )
    goto LABEL_12;
  v24 = *v21;
  if ( v24 >= a3 )
    goto LABEL_12;
  if ( !(unsigned __int8)set_segm_start(v24, a3, 1) )
    return (unsigned int)-1;
  v20 = a3 < v23[1];
  *v23 = a3;
  v12 = *(unsigned __int64 **)a1;
  v22 = *(_QWORD *)(a1 + 8);
  if ( !v20 )
  {
    if ( (__int64)(0xAAAAAAAAAAAAAAABLL * (&v12[3 * v22] - v23) - 2) >= 0 )
    {
      memmove(v23, v23 + 3, (char *)&v12[3 * v22] - (char *)v23 - 24);
      v22 = *(_QWORD *)(a1 + 8);
      v12 = *(unsigned __int64 **)a1;
    }
    *(_QWORD *)(a1 + 8) = --v22;
  }
  ++v19;
LABEL_12:
  while ( 1 )
  {
    v26 = sub_2280F0(v12, v22, v13, a3);
    if ( !v26 )
      break;
    v27 = &v12[3 * v25];
    if ( v26 >= v27 )
      break;
    while ( !*((_BYTE *)v26 + 16) )
    {
      v26 += 3;
      if ( v26 >= v27 )
        return v19;
    }
    v13 = v26[1];
    v42 = nullptr;
    v43 = 0;
    v28 = *v26;
    if ( (dword_8BA5B0 & 1) != 0 )
    {
      v29 = getseg(v28);
      get_segm_name(&v42, v29, 0);
      v30 = *v26;
      v41 = v26[1];
      v28 = *v26;
    }
    else
    {
      v41 = 0;
      v30 = 0;
    }
    if ( !(unsigned __int8)del_segm(v28, 5) )
    {
      if ( v42 )
      {
        *(_QWORD *)&v43 = 0;
        qfree(v42, &byte_5);
      }
      return (unsigned int)-1;
    }
    if ( (dword_8BA5B0 & 1) != 0 )
    {
      v35 = &s1;
      if ( (_QWORD)v43 )
        v35 = v42;
      sub_169700(
        (int)"%a: deleted segment %s, end: %a\n",
        v30,
        (__int64)v35,
        v41,
        v31,
        v32,
        (__m128)0LL,
        a5,
        a6,
        a7,
        v33,
        v34,
        a10,
        a11,
        v40);
    }
    v36 = *(_QWORD *)(a1 + 8);
    v37 = v26 + 3;
    if ( (__int64)(0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)a1 + 24 * v36 - (__int64)v26) >> 3) - 2) >= 0 )
    {
      memmove(v26, v37, *(_QWORD *)a1 + 24 * v36 - (_QWORD)v26 - 24);
      v36 = *(_QWORD *)(a1 + 8);
    }
    v38 = v42;
    ++v19;
    *(_QWORD *)(a1 + 8) = v36 - 1;
    if ( v38 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v38, (const char *)v37);
    }
    if ( v13 >= a3 )
      return v19;
    v12 = *(unsigned __int64 **)a1;
    v22 = *(_QWORD *)(a1 + 8);
  }
  return v19;
}
