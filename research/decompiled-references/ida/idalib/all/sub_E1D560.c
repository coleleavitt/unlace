__int64 __fastcall sub_E1D560(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v8; // r14
  __int64 v9; // r12
  unsigned __int8 **v10; // rax
  __int64 *v11; // rbp
  unsigned int v12; // r12d
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  unsigned __int64 v33; // rdi
  int v34; // r12d
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rsi
  __int64 v39; // rdi
  unsigned int v40; // r13d
  unsigned __int64 v41; // rdi
  unsigned __int64 *v42; // rax
  __int64 *v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // [rsp+8h] [rbp-90h]
  __int64 v49; // [rsp+10h] [rbp-88h]
  unsigned __int64 v50; // [rsp+10h] [rbp-88h]
  __int64 v51; // [rsp+18h] [rbp-80h]
  __int64 v52; // [rsp+24h] [rbp-74h] BYREF
  char v53; // [rsp+2Ch] [rbp-6Ch]
  _QWORD v54[3]; // [rsp+30h] [rbp-68h] BYREF
  int v55; // [rsp+48h] [rbp-50h]
  __int64 v56; // [rsp+50h] [rbp-48h]
  __int64 v57; // [rsp+58h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 176);
  sub_E21760(v8, 48);
  sub_E23260(v54);
  sub_E21790(v8, 48);
  if ( !v55 )
  {
    if ( !v56 )
      goto LABEL_3;
LABEL_9:
    v12 = sub_CFEE20(a1, (__int64)a2);
    goto LABEL_10;
  }
  if ( v55 != 2 )
  {
    if ( v55 == 3 || v57 | v54[0] )
      goto LABEL_9;
LABEL_3:
    v9 = sub_E1EF60(*(_QWORD *)(a1 + 400));
    v10 = (unsigned __int8 **)sub_E33C10(a1, v9, 2460, 0);
    v11 = (__int64 *)v10;
    if ( v10 )
    {
      sub_AE9DF0(v10, *(_QWORD *)(v9 + 32), 0xFu);
      v53 = 1;
      v52 = sub_EEC8C0(v9);
      sub_AEC610(v11, &v52);
    }
LABEL_5:
    v12 = 0;
    goto LABEL_10;
  }
  v14 = v56;
  if ( !v56 )
    goto LABEL_3;
  v48 = (*(__int64 *)(v56 + 16) >> 2) & 1;
  if ( ((*(__int64 *)(v56 + 16) >> 2) & 1) != 0 || (*(_QWORD *)(v56 + 16) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_9;
  v49 = *(_QWORD *)(a1 + 184);
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v18 = sub_BFB6C0(a4, v15, v16, v17);
  v50 = sub_CE6180(v49, v18, v19, v20, v21);
  v23 = *(_QWORD *)(v14 + 16);
  v51 = *(_QWORD *)(a1 + 184);
  v24 = v23 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v23 & 4) != 0 )
    v24 = v48;
  v25 = sub_C1D490(v24, v18, v48, v22);
  v29 = sub_CE6180(v51, v25, v26, v27, v28);
  if ( BYTE4(v29) != BYTE4(v50) || BYTE4(v29) && (_DWORD)v29 != (_DWORD)v50 )
    goto LABEL_5;
  v32 = *(_QWORD *)(v14 + 16);
  if ( (v32 & 4) != 0 )
    BUG();
  v33 = v32 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v33 + 29) & 1) != 0 )
  {
    v42 = sub_B8C3D0(v33, v25, HIDWORD(v29), HIDWORD(v50), v30, v31);
    v43 = (__int64 *)*v42;
    v44 = *v42 + 8LL * *((unsigned int *)v42 + 2);
    if ( *v42 >= v44 )
    {
      if ( v43 == (__int64 *)v44 )
        goto LABEL_21;
      if ( *(_WORD *)(*(_QWORD *)v44 + 36LL) != 100 )
      {
        v46 = (__int64 *)(v44 + 8);
        while ( v46 != v43 )
        {
          v47 = *v46++;
          if ( *(_WORD *)(v47 + 36) == 100 )
            goto LABEL_35;
        }
        goto LABEL_21;
      }
    }
    else
    {
      v45 = *v42;
      while ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 100 )
      {
        v45 += 8LL;
        if ( v44 == v45 )
          goto LABEL_21;
      }
      if ( v44 == v45 )
        goto LABEL_21;
    }
LABEL_35:
    v12 = sub_DCC5B0((_QWORD *)a1, (__int64)a2, v14, a4, a3);
    if ( !(_BYTE)v12 )
      goto LABEL_10;
  }
LABEL_21:
  v34 = *(_DWORD *)(v14 + 28);
  v35 = sub_E29180(13);
  v38 = *(unsigned __int8 *)(v14 + 504);
  v39 = *(_QWORD *)(v14 + 16);
  v40 = ((v35 + 7) & 0xFFFFFFF8) * (((*(_BYTE *)(v14 + 504) & 4) != 0) + ((*(_BYTE *)(v14 + 504) & 8) != 0)) + a3 - v34;
  if ( (v39 & 4) == 0 )
  {
    v41 = v39 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v41 )
    {
      if ( (*(_BYTE *)(v41 + 28) & 0x7Fu) - 35 <= 3 )
      {
        if ( (unsigned __int8)sub_B981D0((_QWORD *)v41, v38) )
          v40 -= (sub_E29180(13) + 7) & 0xFFFFFFF8;
        LOBYTE(v38) = *(_BYTE *)(v14 + 504);
      }
    }
  }
  if ( (v38 & 0x80u) != 0LL )
    v12 = sub_E1D030((_QWORD *)a1, a2, v14, v40);
  else
    v12 = sub_E1CCA0(a1, a2, v14, v40, v36, v37);
LABEL_10:
  sub_E232A0(v54);
  return v12;
}
