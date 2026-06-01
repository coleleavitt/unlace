__int64 __fastcall sub_1503160(const __m128i *a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  __int64 v5; // rax
  __int64 v9; // rsi
  char *v10; // rbx
  unsigned __int64 v11; // r10
  signed __int64 v12; // r8
  char *v13; // r9
  unsigned __int64 v14; // r14
  signed __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  char *v17; // r12
  __int64 v18; // rdi
  unsigned __int64 v19; // r11
  char *v20; // r10
  unsigned int v21; // r14d
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  char *v27; // r12
  __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 result; // rax
  unsigned int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // r14
  char *v35; // r14
  size_t v36; // r11
  unsigned __int64 v37; // rdx
  char *v38; // rcx
  __int64 i; // rax
  __int64 v40; // rax
  __int64 v41; // rsi
  signed __int64 v42; // [rsp+0h] [rbp-B8h]
  unsigned int v43; // [rsp+0h] [rbp-B8h]
  __int64 v44; // [rsp+0h] [rbp-B8h]
  __int64 v45; // [rsp+0h] [rbp-B8h]
  signed __int64 v46; // [rsp+0h] [rbp-B8h]
  signed __int64 v47; // [rsp+0h] [rbp-B8h]
  size_t na; // [rsp+8h] [rbp-B0h]
  size_t nb; // [rsp+8h] [rbp-B0h]
  size_t n; // [rsp+8h] [rbp-B0h]
  size_t nc; // [rsp+8h] [rbp-B0h]
  char *v52; // [rsp+10h] [rbp-A8h]
  char *v53; // [rsp+10h] [rbp-A8h]
  signed __int64 v54; // [rsp+10h] [rbp-A8h]
  char *v55; // [rsp+10h] [rbp-A8h]
  signed __int64 v56; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v57; // [rsp+18h] [rbp-A0h]
  char *v58; // [rsp+18h] [rbp-A0h]
  char *v59; // [rsp+18h] [rbp-A0h]
  char *v60; // [rsp+20h] [rbp-98h]
  size_t v61; // [rsp+28h] [rbp-90h]
  _DWORD v62[34]; // [rsp+30h] [rbp-88h] BYREF

  v5 = a2 + 8;
  v9 = *(unsigned int *)(a2 + 16);
  v10 = *(char **)(a3 + 8);
  v11 = *(unsigned int *)(a2 + 20);
  v12 = 8LL * *(unsigned int *)(a3 + 16);
  v13 = &v10[v12];
  v14 = v12 >> 3;
  v15 = 8 * v9;
  v16 = v9 + (v12 >> 3);
  if ( 8 * v9 )
  {
    if ( v11 < v16 )
    {
      v44 = v5;
      v53 = &v10[v12];
      nb = v12;
      sub_2237220(v5, a2 + 24, v16, 8);
      v18 = *(unsigned int *)(a2 + 16);
      v17 = *(char **)(a2 + 8);
      v13 = v53;
      v12 = nb;
      v15 = 8 * v18;
      v5 = v44;
      v20 = &v17[8 * v18];
      v19 = (8 * v18) >> 3;
      if ( v19 < v14 )
        goto LABEL_4;
    }
    else
    {
      v17 = *(char **)(a2 + 8);
      v18 = v9;
      v19 = v15 >> 3;
      v20 = &v17[v15];
      if ( v15 >> 3 < v14 )
      {
LABEL_4:
        v21 = v18 + v14;
        *(_DWORD *)(a2 + 16) = v21;
        if ( v17 != v20 )
        {
          v57 = v19;
          v52 = v20;
          na = (size_t)v13;
          v42 = v15;
          memcpy(&v17[8 * v21 - v15], v17, v15);
          v19 = v57;
          v20 = v52;
          v13 = (char *)na;
          v15 = v42;
        }
        if ( v19 )
        {
          if ( (v17 >= v10 + 16 || v10 >= v17 + 16) && v19 - 1 > 3 )
          {
            v22 = 0;
            v23 = 0;
            v24 = ((v19 - 2) >> 1) + 1;
            do
            {
              a4 = _mm_loadu_si128((const __m128i *)&v10[v22]);
              ++v23;
              *(__m128i *)&v17[v22] = a4;
              v22 += 16;
            }
            while ( v23 < v24 );
            v25 = 2 * v24;
            v26 = 16 * v24;
            v27 = &v17[v26];
            if ( v25 != v19 )
              *(_QWORD *)v27 = *(_QWORD *)&v10[v26];
          }
          else
          {
            for ( i = 0; i != v19; ++i )
              *(_QWORD *)&v17[8 * i] = *(_QWORD *)&v10[8 * i];
          }
          v10 += v15;
        }
        if ( v13 != v10 )
          memcpy(v20, v10, v13 - v10);
        goto LABEL_16;
      }
    }
    n = v15 - v12;
    v35 = &v17[v15 - v12];
    v36 = v12;
    v37 = (v12 >> 3) + v18;
    v45 = v12 >> 3;
    v38 = v20;
    if ( v37 > *(unsigned int *)(a2 + 20) )
    {
      v61 = v12;
      v60 = v20;
      v59 = v13;
      v56 = v12;
      sub_2237220(v5, a2 + 24, v37, 8);
      v18 = *(unsigned int *)(a2 + 16);
      v36 = v61;
      v20 = v60;
      v38 = (char *)(*(_QWORD *)(a2 + 8) + 8 * v18);
      v13 = v59;
      v12 = v56;
    }
    if ( v35 != v20 )
    {
      v58 = v13;
      v54 = v12;
      memmove(v38, v35, v36);
      LODWORD(v18) = *(_DWORD *)(a2 + 16);
      v13 = v58;
      v12 = v54;
    }
    *(_DWORD *)(a2 + 16) = v45 + v18;
    if ( v17 != v35 )
    {
      v46 = v12;
      v55 = v13;
      memmove(&v17[v12], v17, n);
      v13 = v55;
      v12 = v46;
    }
    if ( v10 != v13 )
      memmove(v17, v10, v12);
  }
  else
  {
    if ( v11 < v16 )
    {
      v47 = v12;
      nc = (size_t)&v10[v12];
      sub_2237220(v5, a2 + 24, v16, 8);
      v9 = *(unsigned int *)(a2 + 16);
      v13 = (char *)nc;
      v12 = v47;
    }
    if ( v10 != v13 )
    {
      memcpy((void *)(*(_QWORD *)(a2 + 8) + 8 * v9), v10, v12);
      LODWORD(v9) = *(_DWORD *)(a2 + 16);
    }
    *(_DWORD *)(a2 + 16) = v14 + v9;
  }
LABEL_16:
  *(_DWORD *)(a3 + 16) = 0;
  sub_15D8C50(a2 + 40, a3 + 40);
  *(_DWORD *)(a3 + 56) = 0;
  v28 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v28, a1[1].m128i_i32);
  if ( a1[2].m128i_i16[0] == 3 )
  {
    v29 = a1->m128i_i64[1];
    if ( *(_QWORD *)(v29 + 760) )
    {
      *(_BYTE *)(v29 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v29 + 48) + 6LL) = 1;
    }
    v30 = a1[6].m128i_i64[0];
    a1[2].m128i_i16[0] = 1;
    sub_1711900(*(_QWORD *)(v30 + 656), *(_QWORD *)(v30 + 608));
    return 0;
  }
  else
  {
    v43 = a1[2].m128i_u32[2];
    v32 = sub_13D0F00((__int64)a1[1].m128i_i64);
    if ( v32 > 0xA || ((1LL << v32) & 0x4C0) == 0 )
    {
      v33 = *(_QWORD *)(a2 + 8);
      v34 = v33 + 8LL * *(unsigned int *)(a2 + 16);
      while ( v34 != v33 )
      {
        while ( (*(_BYTE *)(*(_QWORD *)v33 + 34LL) & 0xF) != 1 )
        {
          v33 += 8;
          if ( v34 == v33 )
            goto LABEL_27;
        }
        v33 += 8;
        sub_1564820(v62, a1, a1[1].m128i_u32[0], 1773);
        sub_AEA040((__int64)v62);
      }
    }
LABEL_27:
    switch ( sub_13D0F00((__int64)a1[1].m128i_i64) )
    {
      case 1LL:
        return sub_14F4E90((__int64)a1, v43, a4, a5);
      case 2LL:
        v41 = sub_14F5D30((__int64)a1, v43);
        goto LABEL_48;
      case 5LL:
        return sub_14F8EE0((__int64)a1, v43);
      case 6LL:
        return sub_14FC540(a1, v43, a2, a4, a5);
      case 7LL:
        v41 = sub_1502630(a1, v43, a2, a4, a5);
        goto LABEL_48;
      case 10LL:
        return sub_15020C0((__int64)a1, v43, a2, a4, a5);
      case 23LL:
        v41 = sub_14F5E70((__int64)a1, v43);
        goto LABEL_48;
      case 24LL:
        v41 = sub_14F60A0((__int64)a1, v43);
        goto LABEL_48;
      case 25LL:
        v40 = *(_QWORD *)(a1->m128i_i64[1] + 56);
        if ( (*(_BYTE *)(v40 + 21) & 2) != 0 || (*(_BYTE *)(v40 + 105) & 0x40) != 0 )
        {
          v62[0] = 6;
          v41 = sub_156D770(a1, v43, v62);
LABEL_48:
          result = sub_17A2530(a1[6].m128i_i64[0], v41, 0);
        }
        else
        {
          sub_1564820(v62, a1, v43, 1552);
          sub_AEA040((__int64)v62);
          LOWORD(v62[0]) = 63;
          sub_15680D0(a1, v62, 1, 0);
          result = sub_17A2530(a1[6].m128i_i64[0], 0, 0);
        }
        break;
      default:
        sub_1564820(v62, a1, v43, 1909);
        sub_AEA040((__int64)v62);
        LOWORD(v62[0]) = 63;
        sub_15680D0(a1, v62, 1, 0);
        v41 = 0;
        goto LABEL_48;
    }
  }
  return result;
}
