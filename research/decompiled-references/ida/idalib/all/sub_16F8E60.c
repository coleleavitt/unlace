__int64 __fastcall sub_16F8E60(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __m128i a5, double a6)
{
  _QWORD *v8; // rbp
  __int64 v10; // rcx
  __int16 v11; // ax
  unsigned __int8 v12; // r15
  __int64 v13; // r13
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // r15
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rsi
  __int64 v37; // rdi
  unsigned __int64 v38; // rsi
  __int64 v39; // rax
  size_t v40; // rax
  __int64 v41; // r9
  unsigned int v42; // eax
  __int64 *v43; // [rsp+0h] [rbp-58h]
  unsigned int v44; // [rsp+8h] [rbp-50h]
  unsigned int v45; // [rsp+Ch] [rbp-4Ch]
  __int64 v46; // [rsp+10h] [rbp-48h]
  unsigned __int64 v47; // [rsp+10h] [rbp-48h]

  v8 = (_QWORD *)a2;
  v10 = *(_QWORD *)(a3 + 32);
  v11 = *(_WORD *)a3 & 0x1FF;
  if ( v11 == 91 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 > 3 )
      goto LABEL_3;
    *(double *)a5.m128i_i64 = sub_18C2050(a1, a2, a4, v10);
    v45 = v29;
    v43 = (__int64 *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32);
    v44 = *(_DWORD *)(a3 + 16);
    if ( !(unsigned __int8)sub_B771C0(a2, a2, v30, v31) )
    {
      --v44;
      v13 = *v43++;
LABEL_26:
      if ( v13 )
      {
        v32 = *(_QWORD *)(v13 + 8);
        v33 = a1[31];
        v46 = a1[31];
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 42 )
        {
          a2 = *(_QWORD *)(v13 + 8);
          v32 = sub_A70010(v33, v32);
          v46 = a1[31];
        }
        v36 = sub_B987D0(v8, a2);
        v37 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v37 + 16) - 43 <= 1
          || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
          && (v37 = sub_F63050(v37, v36, v34, v35)) != 0 )
        {
          while ( 1 )
          {
            v36 = *(_QWORD *)(v37 + 32);
            if ( (*(_BYTE *)(v37 + 18) & 0x10) == 0 )
              break;
            while ( 1 )
            {
              v38 = v36 & 0xFFFFFFFFFFFFFFF0LL;
              v37 = *(_QWORD *)v38;
              if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v38 + 16LL) - 43 <= 1 )
                break;
              v39 = sub_F63050(v37, v38, v34, v35);
              v36 = *(_QWORD *)(v39 + 32);
              if ( (*(_BYTE *)(v39 + 18) & 0x10) == 0 )
                goto LABEL_33;
            }
          }
        }
LABEL_33:
        v47 = sub_A70010(v46, v36);
        v40 = j__strlen("'this'");
        a2 = *(unsigned int *)(a3 + 20);
        v41 = v32;
        v12 = 1;
        sub_16D4620((__int64)a1, a2, (__int64)v8, (__int64)"'this'", v40, v41, v47);
      }
      else
      {
        v12 = 1;
      }
      goto LABEL_4;
    }
  }
  else
  {
    if ( v11 != 92 )
    {
LABEL_3:
      v12 = 0;
      *(double *)a5.m128i_i64 = sub_18C2050(a1, a2, a4, v10);
      v13 = 0;
      v45 = v14;
      v43 = (__int64 *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32);
      v44 = *(_DWORD *)(a3 + 16);
      goto LABEL_4;
    }
    *(double *)a5.m128i_i64 = sub_18C2050(a1, a2, a4, v10);
    v45 = v28;
    v43 = (__int64 *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32);
    v44 = *(_DWORD *)(a3 + 16);
  }
  if ( *(_BYTE *)(a2 + 81) >> 5 == 2 )
  {
    v12 = 1;
    v13 = 0;
    goto LABEL_4;
  }
  v12 = 1;
  v13 = 0;
  if ( !(unsigned __int8)sub_B771C0(a2, a2, v26, v27) )
  {
    v13 = sub_C94680(a3);
    goto LABEL_26;
  }
LABEL_4:
  v15 = sub_EEC8C0(*(_QWORD *)(a3 + 32), a2, *(double *)a5.m128i_i64);
  sub_16E9510((__int64)a1, (__int64)v8, a4, v13, (__int64)v43, v44, a5, v12, *(_DWORD *)(a3 + 20), v15, v45);
  v16 = v8[5];
  if ( (v16 & 7) != 0 )
    return 0;
  v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v16 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return 0;
  if ( !(unsigned int)sub_B75A50((__int64)v8, 0) )
  {
    v42 = sub_C00A40(a3, 0, v18, v19, v20);
    sub_16EFD60((__int64)a1, (__int64 *)v42, (__int64)v8);
  }
  sub_16F8570(a1, a3, (__int64)v8, *(double *)a5.m128i_i64);
  sub_16D6C70((__int64)a1, a3, (__int64)v8, v21, v22, a5, a6);
  v23 = v8[5];
  if ( (v23 & 7) == 0 && (v23 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    sub_16CE090((__int64)a1, a3, (__int64)v8, *(double *)a5.m128i_i64);
    if ( (*(_BYTE *)(a1[29] + 2) & 4) == 0 )
      goto LABEL_11;
LABEL_36:
    sub_1A8AED0(a1[92], v8, v43, v44);
    goto LABEL_11;
  }
  if ( (*(_BYTE *)(a1[29] + 2) & 4) != 0 )
    goto LABEL_36;
LABEL_11:
  v24 = sub_B81D10((__int64)v8);
  if ( v24 == 1245 )
  {
    sub_16DB0E0((__int64)a1, a3, v17, a5, a6);
    return 0;
  }
  if ( v24 > 0x4DD )
  {
    if ( v24 - 1265 <= 1 )
    {
      sub_16DB700((__int64)a1, a3, v17, a5, a6);
      return 0;
    }
    goto LABEL_40;
  }
  if ( v24 )
  {
    if ( v24 == 641 )
    {
      sub_16DE010((__int64)a1, a3, *(double *)a5.m128i_i64);
      return 0;
    }
LABEL_40:
    sub_16D9670((__int64)a1, a3, v24, v17, a5, a6);
  }
  return 0;
}
