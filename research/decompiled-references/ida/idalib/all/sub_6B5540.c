__int64 __fastcall sub_6B5540(
        __m128i **a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        void *a13,
        __int64 a14,
        int a15,
        int a16,
        int a17,
        __int64 a18)
{
  unsigned __int64 v19; // rax
  __m128i *v20; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v27; // eax
  int v28; // r14d
  __int64 v29; // r15
  unsigned __int64 *v30; // r13
  unsigned __int64 v31; // rsi
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // rbp
  unsigned __int64 *v35; // rcx
  unsigned __int64 *v36; // rax
  unsigned __int64 *v37; // rbp
  char *v38; // r13
  int v39; // eax
  int v40; // eax
  __int64 v41; // rbp
  unsigned __int64 v42; // r13
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r15
  const __m128i *v46; // rax
  __int64 v47; // r14
  __int64 v48; // rax
  unsigned __int64 v49; // r15
  _QWORD *v50; // rsi
  unsigned __int64 *v51; // rbp
  char *v52; // r13
  unsigned __int64 v53; // [rsp+0h] [rbp-88h]
  void *v54; // [rsp+10h] [rbp-78h] BYREF
  __int128 v55; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v57; // [rsp+38h] [rbp-50h]
  unsigned __int64 v58; // [rsp+48h] [rbp-40h]

  v19 = *(_QWORD *)a2;
  v20 = *a1;
  v58 = __readfsqword(0x28u);
  v53 = v19;
  if ( !(unsigned __int8)sub_3C0260(v20, v19) )
  {
    if ( *((_BYTE *)a1 + 40) )
      return sub_5D4820(*a1, a2, a3, a4, a5, v22, v23, v24, v25, a10, a11, a12, a13, a14, a15, a16, a17, a18);
    else
      return sub_6B4500(a1, v53);
  }
  sub_5B8DA0(*a1, a2);
  v27 = *(_DWORD *)(a2 + 68);
  v54 = nullptr;
  v55 = 0;
  v28 = v27 - 1;
  v29 = 16LL * (unsigned int)(v27 - 1);
  if ( v27 - 1 < 0 )
    goto LABEL_21;
  while ( 1 )
  {
    v30 = (unsigned __int64 *)(v29 + *(_QWORD *)(a2 + 72));
    v31 = *v30;
    if ( *v30 >= *(_QWORD *)a2 && v31 < *(_QWORD *)(a2 + 8) )
      goto LABEL_18;
    v32 = sub_505D70((__int64)&(*a1)[106].m128i_i64[1], v31);
    if ( !v32 )
      break;
    if ( v32[3] != v53 )
    {
      if ( !*((_BYTE *)a1 + 40) )
        goto LABEL_50;
      v33 = *v32;
      v34 = v32[1];
      goto LABEL_12;
    }
LABEL_18:
    --v28;
    v29 -= 16;
    if ( v28 == -1 )
      goto LABEL_19;
  }
  if ( *((_BYTE *)a1 + 40) )
  {
    v33 = *v30;
    v34 = v33 + 1;
LABEL_12:
    v35 = (unsigned __int64 *)((char *)v54 + 16 * v55);
    if ( v54 == v35 )
      goto LABEL_44;
    v36 = (unsigned __int64 *)v54;
    while ( v33 != *v36 || v34 != v36[1] )
    {
      v36 += 2;
      if ( v35 == v36 )
        goto LABEL_44;
    }
    if ( v36 == v35 )
    {
LABEL_44:
      if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)(v55 + 1) )
      {
        v54 = (void *)qvector_reserve(&v54, v54, v55 + 1, 16);
        v35 = (unsigned __int64 *)((char *)v54 + 16 * v55);
      }
      *v35 = v33;
      v35[1] = v34;
      *(_QWORD *)&v55 = v55 + 1;
    }
    goto LABEL_18;
  }
LABEL_50:
  sub_6B4500(a1, v53);
LABEL_19:
  v37 = (unsigned __int64 *)v54;
  v38 = (char *)v54 + 16 * v55;
  if ( v38 != v54 )
  {
    do
    {
      sub_5BAD80(*a1, a2, *v37, v37[1]);
      sub_3A61A0(*a1, *v37, v37[1], 0x28u);
      v37 += 2;
    }
    while ( v38 != (char *)v37 );
  }
LABEL_21:
  sub_5C7820(*a1, a2, 1);
  v39 = *(_DWORD *)(a2 + 128);
  ptr = nullptr;
  v57 = 0;
  v40 = v39 - 1;
  if ( v40 < 0 )
    goto LABEL_39;
  v41 = 16LL * v40;
  v42 = 16 * (v40 - (unsigned __int64)(unsigned int)v40);
  while ( 2 )
  {
    v45 = v41 + *(_QWORD *)(a2 + 136);
    v46 = (const __m128i *)sub_505D70((__int64)&(*a1)[106].m128i_i64[1], *(_QWORD *)v45);
    v47 = (__int64)v46;
    if ( v46 && v46[1].m128i_i8[1] < 0 )
    {
      sub_6B4640((__int64 **)a1, (__int64 *)a2, (unsigned __int64 *)v45, v46);
      sub_5C7D50((*a1)->m128i_i64, v47, v43);
      if ( sub_5CB330((__int64)*a1, v47, v53) )
        goto LABEL_26;
      if ( *((_BYTE *)a1 + 40) )
      {
        if ( !(unsigned __int8)sub_5CF110(*a1, a2, *(_QWORD *)v45, *(_QWORD *)(v45 + 8), 0.0, a4, a5) )
        {
          if ( !under_debugger )
            interr(2435);
          BUG();
        }
LABEL_26:
        v44 = v41 - 16;
        if ( v42 == v41 )
          break;
        goto LABEL_27;
      }
LABEL_42:
      sub_6B4500(a1, v53);
      goto LABEL_26;
    }
    if ( !*((_BYTE *)a1 + 40) )
      goto LABEL_42;
    v48 = v57;
    v49 = *(_QWORD *)v45;
    v50 = ptr;
    if ( *((_QWORD *)&v57 + 1) < (unsigned __int64)(v57 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v57 + 1, 8);
      v50 = ptr;
      v48 = v57;
    }
    v50[v48] = v49;
    v44 = v41 - 16;
    *(_QWORD *)&v57 = v57 + 1;
    if ( v42 != v41 )
    {
LABEL_27:
      v41 = v44;
      continue;
    }
    break;
  }
  v51 = (unsigned __int64 *)ptr;
  v52 = (char *)ptr + 8 * v57;
  if ( v52 != ptr )
  {
    do
      sub_5CE7C0(*a1, a2, *v51++, 0.0, a4, a5);
    while ( v52 != (char *)v51 );
    v51 = (unsigned __int64 *)ptr;
  }
  if ( v51 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v51);
  }
LABEL_39:
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  return v58 - __readfsqword(0x28u);
}
