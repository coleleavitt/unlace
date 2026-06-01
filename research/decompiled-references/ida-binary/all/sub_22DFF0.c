__int64 __fastcall sub_22DFF0(
        __int64 a1,
        const char *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        char a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  unsigned __int64 v15; // rbx
  __m128i *v16; // rdi
  unsigned __int64 *v17; // rax
  __int64 v18; // r11
  unsigned __int64 *v19; // rdx
  unsigned __int64 v20; // r13
  unsigned __int64 *v21; // rax
  unsigned __int64 *v22; // rbx
  __int64 v23; // r14
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rax
  unsigned __int64 *next_seg; // rax
  __int64 v28; // r15
  double v29; // xmm4_8
  double v30; // xmm5_8
  unsigned __int64 *v31; // rax
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __m128 v37; // xmm4
  __m128 v38; // xmm5
  const char *v39; // rdx
  char v41; // [rsp+0h] [rbp-288h]
  const char *v43; // [rsp+10h] [rbp-278h]
  const char *v45; // [rsp+20h] [rbp-268h] BYREF
  __int128 v46; // [rsp+28h] [rbp-260h]
  _BYTE v47[520]; // [rsp+40h] [rbp-248h] BYREF
  unsigned __int64 v48; // [rsp+248h] [rbp-40h]

  v43 = a2;
  v48 = __readfsqword(0x28u);
  if ( !a2 || !a3 )
    return 0;
  v15 = *a3;
  v16 = *(__m128i **)a1;
  v17 = sub_2280F0((unsigned __int64 *)v16, *(_QWORD *)(a1 + 8), *a3, a4);
  if ( v17 && (v19 = (unsigned __int64 *)v16 + 3 * v18, v17 < v19) )
  {
    while ( *((_BYTE *)v17 + 16) )
    {
      v17 += 3;
      if ( v17 >= v19 )
        goto LABEL_44;
    }
    v20 = *v17;
    if ( a4 <= *v17 )
      v20 = a4;
  }
  else
  {
LABEL_44:
    v20 = a4;
  }
  v21 = sub_228140((unsigned __int64 *)v16, v18, v15, v20);
  v22 = v21;
  if ( !v21 || (unsigned int)sub_228EC0(v21, (__int64)a2) == -1 )
    return 0;
  v23 = getseg(*v22);
  if ( !*(_QWORD *)(v23 + 16) )
  {
    if ( !sub_226FF0((__int64)v47, 512, (__int64)a2) )
      return 0;
    a2 = v47;
    set_segm_name(v23, v47, 0);
  }
  v24 = *(_QWORD *)v23;
  v25 = *a3;
  v26 = *(_QWORD *)(v23 + 8);
  if ( *(_QWORD *)v23 == *a3 )
  {
    if ( v20 == v26 )
    {
LABEL_40:
      *a3 = v20;
      return 1;
    }
LABEL_20:
    while ( v26 < v20 )
    {
      next_seg = (unsigned __int64 *)get_next_seg(v24);
      if ( !next_seg || *next_seg >= v20 )
      {
        v26 = *(_QWORD *)(v23 + 8);
        break;
      }
      if ( !(unsigned __int8)move_segm_start(*next_seg, next_seg[1], 4294967294LL) )
        return 0;
      v23 = getseg(v24);
      v26 = *(_QWORD *)(v23 + 8);
    }
    if ( v20 < v26 && !a5 && *((_QWORD *)v43 + 10) < v26 && v43[152] == *(_BYTE *)(v23 + 43) )
    {
      v28 = *((_QWORD *)v43 + 18);
      if ( v28 == get_segm_base(v23)
        && !(unsigned __int8)sub_22DCA0(
                               0,
                               (__int64)(v43 + 80),
                               v20,
                               *(_QWORD *)(v23 + 8),
                               a6,
                               a7,
                               a8,
                               a9,
                               v29,
                               v30,
                               a12,
                               a13) )
      {
        return 0;
      }
    }
    a2 = (const char *)v20;
    if ( !(unsigned __int8)set_segm_end(v24, v20, 5) )
      return 0;
    getseg(v24);
    v25 = *a3;
    if ( *a3 < v24 )
      goto LABEL_32;
  }
  else
  {
    if ( v20 != v26 )
      goto LABEL_20;
    if ( v25 >= v24 )
      goto LABEL_42;
    do
    {
LABEL_32:
      sub_228780((const __m128i **)a1, a2);
      v25 = *a3;
      a2 = *(const char **)(a1 + 8);
      v32 = sub_228140(*(unsigned __int64 **)a1, (__int64)a2, *a3, v24);
      if ( !v32 )
        break;
      a2 = (const char *)*v32;
      if ( !(unsigned __int8)move_segm_start(v24, *v32, 4294967294LL) )
        return 0;
      v31 = (unsigned __int64 *)getseg(v24);
      v25 = *a3;
      v24 = *v31;
    }
    while ( *a3 < *v31 );
  }
  if ( v24 == v25 )
  {
LABEL_34:
    if ( (dword_8BA5B0 & 1) != 0 )
    {
      v33 = *a3;
      v45 = nullptr;
      v46 = 0;
      v34 = getseg(v33);
      get_segm_name(&v45, v34, 0);
      v39 = &s1;
      if ( (_QWORD)v46 )
        v39 = v45;
      a2 = (const char *)*a3;
      sub_169700(
        (int)"%a: updated segment %s, end: %a\n",
        *a3,
        (__int64)v39,
        a4,
        v35,
        v36,
        (__m128)0LL,
        a7,
        a8,
        a9,
        v37,
        v38,
        a12,
        a13,
        v41);
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree(v45, a2);
      }
    }
    sub_228780((const __m128i **)a1, a2);
    goto LABEL_40;
  }
LABEL_42:
  a2 = (const char *)v25;
  if ( (unsigned __int8)move_segm_start(v24, v25, 4294967294LL) )
    goto LABEL_34;
  return 0;
}
