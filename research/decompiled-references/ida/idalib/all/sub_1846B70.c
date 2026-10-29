__int64 __fastcall sub_1846B70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v10; // r8
  unsigned __int8 v11; // al
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rdx
  _QWORD *v21; // r12
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned int v24; // eax
  __int16 v25; // dx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  _DWORD *v32; // rdx
  __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  char v45; // r9
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // rax
  int v53; // [rsp+8h] [rbp-60h]
  _QWORD *v54; // [rsp+8h] [rbp-60h]
  _QWORD *v55; // [rsp+10h] [rbp-58h]
  __int64 v56; // [rsp+10h] [rbp-58h]
  __int64 v57; // [rsp+18h] [rbp-50h]
  __int64 v58; // [rsp+20h] [rbp-48h]
  __int64 v59; // [rsp+28h] [rbp-40h]

  v10 = a4;
  v11 = *(_BYTE *)(a4 + 28) & 0x7F;
  v12 = v11;
  if ( (unsigned int)v11 - 53 <= 1 )
  {
    v10 = *(_QWORD *)(a4 + 64);
    v11 = *(_BYTE *)(v10 + 28) & 0x7F;
    v12 = v11;
  }
  if ( (unsigned int)(v12 - 68) > 6 )
  {
LABEL_6:
    if ( v11 != 38 )
      goto LABEL_7;
    v35 = sub_E900C0(*(_QWORD *)(a3 + 64));
    v40 = *(_QWORD *)(a1 + 544);
    v54 = (_QWORD *)v35;
    if ( v40 )
    {
      v41 = *(_QWORD *)(v40 + 40);
      sub_7052B0((__int64 *)(v41 + 96), v41, v36, v37, v38, v39);
      v45 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(v40 + 64) + 20LL) )
      {
        v46 = sub_1845530(v40 - 64, v41, v42, v43, v44, 0);
        v56 = v47;
        v51 = v46;
        if ( v46 == v47 )
          goto LABEL_48;
        while ( 1 )
        {
          v52 = *(_QWORD *)(**(_QWORD **)(v51 + 16) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (*(_BYTE *)(v52 + 8) & 0xF) != 0 )
            v52 = sub_F64F00(**(_QWORD **)(v51 + 16), v41, v47, v48, v49);
          if ( v54 == sub_F63270(*(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFF0LL), v41, v47, v48, v49, v50) )
            break;
          v51 += 24LL;
          if ( v56 == v51 )
            goto LABEL_48;
        }
        v45 = *(_BYTE *)(v51 + 12) & 1;
      }
      v14 = (__int64)sub_B9A060(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 544), *(_DWORD *)(a3 + 24), a3, a4, v45);
      goto LABEL_8;
    }
LABEL_48:
    BUG();
  }
  v13 = *(_QWORD *)(v10 + 48);
  if ( v13 )
  {
    v11 = *(_BYTE *)(v13 + 28) & 0x7F;
    goto LABEL_6;
  }
LABEL_7:
  v59 = v10;
  v58 = *(_QWORD *)(v10 + 40);
  v57 = *(_QWORD *)(a1 + 544);
  v55 = *(_QWORD **)(a1 + 248);
  v53 = *(_DWORD *)(a3 + 24);
  v14 = sub_B902D0(80, v55, v57, 0);
  sub_B99ED0(v14, 0x35u, (__int64)v55, v57, v53, v58, a3, v59);
LABEL_8:
  sub_B9A2E0(a3, v14);
  v18 = *(_BYTE *)(a3 + 29) & 0x60;
  *(_BYTE *)(v14 + 29) = v18 | *(_BYTE *)(v14 + 29) & 0x9F;
  if ( *(char *)(a4 + 28) >= 0 && *(char *)(a3 + 28) >= 0 )
  {
    if ( a5 )
      goto LABEL_11;
LABEL_20:
    v19 = v14;
    *(_QWORD *)(v14 + 56) = v14;
    v26 = *(_QWORD *)(v14 + 48);
    if ( (v26 & 1) != 0 )
      goto LABEL_21;
    goto LABEL_15;
  }
  sub_B88650(v14, 1);
  if ( !a5 )
    goto LABEL_20;
LABEL_11:
  v19 = *(_QWORD *)(a5 + 56);
  *(_QWORD *)(v14 + 56) = v19;
  v20 = *(_QWORD *)(v19 + 48);
  if ( (v20 & 1) != 0 )
  {
    v31 = v20 & 0xFFFFFFFFFFFFFFFELL;
LABEL_26:
    v32 = (_DWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
    v21 = v32;
    v23 = (unsigned __int64)v32;
    if ( v31 )
    {
      if ( (v31 & 4) != 0 )
      {
        v23 = 0;
        if ( v32 )
        {
          v33 = *(_QWORD *)v32;
          v34 = *(_DWORD *)(*(_QWORD *)v32 + 12LL);
          if ( v32[2] != v34 )
          {
            v32[2] = v34;
            (*(void (__fastcall **)(__int64, __int64, _DWORD *, _QWORD))(*(_QWORD *)v33 + 152LL))(v33, v19, v32, 0);
          }
          v23 = v21[2];
          v21 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
        }
      }
    }
    goto LABEL_32;
  }
  v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v20 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    v22 = *(_QWORD *)(v19 + 48) & 2LL;
    v23 = (unsigned __int64)v21;
    if ( !(_DWORD)v22 )
      goto LABEL_14;
    v31 = sub_6E2500(v21, v19, v22, (__int64)v21, v16, v17) & 0xFFFFFFFFFFFFFFFELL;
    v20 = v31 | 1;
    *(_QWORD *)(v19 + 48) = v31 | 1;
    goto LABEL_26;
  }
  v23 = 0;
LABEL_32:
  v19 = *(_QWORD *)(v14 + 56);
LABEL_14:
  v24 = *(unsigned __int16 *)(v14 + 30);
  *(_QWORD *)(v14 + 48) = v21;
  v25 = *(_WORD *)(v23 + 30);
  v15 = v24;
  LOWORD(v15) = v24 & 0x3FFF;
  v18 = (unsigned int)v15 | v25 & 0x26;
  *(_WORD *)(v14 + 30) = v18 | v24 & 0xC000;
  v26 = *(_QWORD *)(v19 + 48);
  if ( (v26 & 1) != 0 )
  {
LABEL_21:
    v29 = v26 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v26 & 0xFFFFFFFFFFFFFFFELL) != 0 && (v26 & 4) != 0 && (v30 = v26 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      *(_QWORD *)(v30 + 16) = v14;
    else
      v29 = v14 & 0xFFFFFFFFFFFFFFFALL;
    v27 = v29 | 1;
    *(_QWORD *)(v19 + 48) = v27;
    if ( a2 )
      goto LABEL_17;
LABEL_35:
    sub_B94AD0(*(__m128i **)(a1 + 544), v14, v27, v15, v16, v17);
    return v14;
  }
LABEL_15:
  if ( (v26 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_21;
  *(_QWORD *)(v19 + 48) = sub_6E2500((_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL), v14, v18, v15, v16, v17) | 1;
  if ( !a2 )
    goto LABEL_35;
LABEL_17:
  sub_17B7670(a1, v14, a2, 1, v16, v17);
  return v14;
}
