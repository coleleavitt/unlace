unsigned __int64 __fastcall sub_13CA710(
        __int64 **a1,
        _BYTE **a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 *a8,
        _BYTE *a9,
        bool *a10,
        _BYTE *a11,
        unsigned __int8 **a12,
        unsigned __int8 a13)
{
  __m128i si128; // xmm0
  char v17; // al
  char *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  size_t v21; // rdx
  unsigned __int64 v22; // r12
  char *v24; // rax
  _BYTE *v25; // rax
  __int64 *v26; // rsi
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // r8
  char v30; // al
  size_t v31; // rdx
  const void *v32; // r9
  unsigned __int8 v33; // al
  __int64 v34; // rdi
  __int64 v35; // rdx
  char *v36; // rsi
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned __int8 *v40; // rsi
  __int64 *v43; // [rsp+10h] [rbp-928h]
  size_t v45; // [rsp+20h] [rbp-918h]
  _BYTE *v46; // [rsp+28h] [rbp-910h]
  _QWORD v47[4]; // [rsp+30h] [rbp-908h] BYREF
  __int16 v48; // [rsp+50h] [rbp-8E8h]
  char v49[32]; // [rsp+60h] [rbp-8D8h] BYREF
  __int16 v50; // [rsp+80h] [rbp-8B8h]
  _QWORD v51[4]; // [rsp+90h] [rbp-8A8h] BYREF
  __int16 v52; // [rsp+B0h] [rbp-888h]
  void *v53; // [rsp+C0h] [rbp-878h] BYREF
  __m128i v54; // [rsp+C8h] [rbp-870h]
  _BYTE v55[1032]; // [rsp+D8h] [rbp-860h] BYREF
  void *ptr; // [rsp+4E0h] [rbp-458h] BYREF
  __m128i v57; // [rsp+4E8h] [rbp-450h]
  _WORD v58[544]; // [rsp+4F8h] [rbp-440h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
  *a9 = 0;
  *a11 = 0;
  v54 = si128;
  a12[1] = nullptr;
  v53 = v55;
  v17 = (*((_BYTE *)a1 + 8) >> 3) & 3;
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      v22 = sub_13C9F00(a1, *a2, (size_t)a2[1], a3, a5, a6, a7, a8, a9, a10);
      goto LABEL_9;
    }
    v43 = nullptr;
    if ( v17 == 2 )
      v43 = *a1;
    v18 = *a2;
    v19 = (__int64)a2[1];
    v57 = si128;
    ptr = v58;
    v20 = sub_13BEA60(v43, (unsigned __int8 *)v18, v19, &ptr);
    if ( v21 )
    {
      v51[0] = v20;
      v46 = (_BYTE *)v20;
      *a11 = 1;
      v51[1] = v21;
      v45 = v21;
      v52 = 261;
      v30 = sub_228B190(v51, 0);
      v31 = v45;
      v32 = v46;
      if ( v30 )
      {
        sub_A1FE50(a12, v46, &v46[v45]);
        v39 = (__int64)a12[1];
        v40 = *a12;
        a2[1] = (_BYTE *)v39;
        *a2 = v40;
        v32 = (const void *)sub_13BEA60(v43, v40, v39, &ptr);
      }
      v22 = sub_12ED8B0(*(_QWORD *)(a3 + 40), v32, v31, a13, 1u);
      if ( v22 )
      {
        if ( a5 )
        {
          v33 = (*((_BYTE *)a1 + 8) >> 3) & 3;
          if ( v33 < 2u )
          {
            v35 = **a1;
            v36 = (char *)(*a1 + 4);
          }
          else
          {
            v34 = 0;
            if ( v33 == 2 )
              v34 = (__int64)*a1;
            v36 = (char *)sub_13BE950(v34);
          }
          a5[1] = 0;
          sub_A1FE50(a5, v36, &v36[v35]);
        }
        if ( a6 )
        {
          a6[1] = 0;
          sub_A1FE50(a6, *a2, &a2[1][(_QWORD)*a2]);
        }
        v37 = v22;
        while ( 1 )
        {
          v38 = *(_QWORD *)(v37 + 8);
          if ( !v38 )
            break;
          v37 = v38 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v38 & 4) == 0 || !v37 )
            goto LABEL_37;
        }
        v37 = 0;
LABEL_37:
        if ( !(unsigned __int8)sub_13C8900(a3, v22, *(_QWORD *)(v37 + 48), a7, a8, ((_BYTE)a1[1] & 7) != 0) )
          v22 = 0;
        goto LABEL_7;
      }
      sub_13C4640(a3, ((__int64)a1 - *(_QWORD *)(a3 + 48)) >> 4, a4);
    }
    v22 = 0;
LABEL_7:
    if ( ptr != v58 )
      free(ptr);
    goto LABEL_9;
  }
  sub_A1FE50(&v53, (_BYTE *)*a1 + 32, (_BYTE *)*a1 + **a1 + 32);
  v24 = *a2;
  v58[4] = 257;
  v47[0] = v24;
  v25 = a2[1];
  v52 = 257;
  v50 = 257;
  v48 = 261;
  v47[1] = v25;
  sub_228A3B0(&v53, v47, v49, v51, &ptr);
  if ( a5 )
  {
    if ( ((_BYTE)a1[1] & 0x18) != 0 )
      BUG();
    v26 = *a1;
    v27 = **a1;
    a5[1] = 0;
    sub_A1FE50(a5, (_BYTE *)v26 + 32, (_BYTE *)v26 + v27 + 32);
  }
  if ( a6 )
  {
    a6[1] = 0;
    sub_A1FE50(a6, *a2, &a2[1][(_QWORD)*a2]);
  }
  v28 = *((_BYTE *)a1 + 8);
  v29 = 0;
  if ( (v28 & 0x18) == 0 )
    v29 = (*a1)[1];
  v22 = sub_13C8A80(a3, v53, v54.m128i_u64[0], a4, v29, (v28 & 7) != 0, a7, a8, a13, 1u);
LABEL_9:
  if ( v53 != v55 )
    free(v53);
  return v22;
}
