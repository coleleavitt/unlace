unsigned __int64 __fastcall sub_74FB30(__int16 *a1, __int16 a2)
{
  int v4; // r12d
  __int16 v5; // cx
  __int16 v6; // cx
  unsigned __int16 v7; // cx
  __int16 v8; // di
  _BYTE *v9; // rax
  __int16 v11; // cx
  __int16 v12; // di
  _BYTE *v13; // rax
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE *v17; // rcx
  _BYTE *v18; // r8
  __int64 v19; // rax
  __int16 v20; // cx
  __int16 v21; // di
  _BYTE *v22; // rax
  __int16 v23; // di
  _BYTE *v24; // rax
  __int16 v25; // di
  _BYTE *v26; // rax
  __int16 v27; // r8
  _BYTE *v28; // rax
  int v29; // eax
  __int64 v30; // rsi
  _DWORD *v31; // rsi
  __int64 v32; // r8
  int v33; // edi
  _DWORD *v34; // rsi
  int v35; // ecx
  int v36; // eax
  __int64 v37; // rdi
  _BYTE *v38; // rax
  __int64 v39; // rsi
  _BYTE *v40; // r9
  _DWORD *v41; // rax
  unsigned __int16 v42; // di
  __int64 v43; // rax
  __int64 v44; // rcx
  _DWORD *v45; // rcx
  __int64 v46; // rsi
  _DWORD *v47; // rsi
  __int64 v48; // rsi
  _DWORD *v49; // rsi
  __int64 v50; // rsi
  _DWORD *v51; // rsi
  __int64 v52; // rsi
  _DWORD *v53; // rsi
  int v54; // [rsp+4h] [rbp-34h] BYREF
  int v55; // [rsp+8h] [rbp-30h] BYREF
  int v56; // [rsp+Ch] [rbp-2Ch] BYREF
  int v57; // [rsp+10h] [rbp-28h] BYREF
  int v58; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v59; // [rsp+18h] [rbp-20h]

  v59 = __readfsqword(0x28u);
  if ( (dword_2CAA5CC & 0x4000) != 0 )
    return v59 - __readfsqword(0x28u);
  v4 = a2 & 0xC0;
  if ( (a2 & 0xC0) != 0 )
  {
    v54 = 0;
    if ( (a2 & 1) == 0 )
      goto LABEL_4;
  }
  else
  {
    if ( (dword_2CAA5CC & 0x200) != 0 )
      return v59 - __readfsqword(0x28u);
    v54 = 0;
    if ( (a2 & 1) == 0 )
    {
LABEL_4:
      if ( (a2 & 2) == 0 )
        goto LABEL_5;
      goto LABEL_28;
    }
  }
  sub_74F560(&v58, (__int64)"const", 5u);
  v54 = v58;
  if ( (a2 & 2) == 0 )
    goto LABEL_5;
LABEL_28:
  if ( (_WORD)v54 )
    sub_74F860((__int16 *)&v54, 0x20u);
  sub_74F560(&v55, (__int64)"volatile", 8u);
  v11 = v55;
  if ( (_WORD)v55 )
  {
    v12 = v54;
    if ( (_WORD)v54 )
    {
      v29 = dword_2CAA4F0 - 1;
      if ( dword_2CAA4F0 - 1 < 0 )
        goto LABEL_83;
      v46 = (unsigned int)(dword_2CAA4F0 - 2);
      dword_2CAA4F0 = v46;
      v13 = &byte_2CA2EE0[16 * v29 + 2000];
      if ( (_DWORD)v46 == -1 )
        goto LABEL_84;
      v47 = &byte_2CA2EE0[16 * v46 + 2000];
      *v47 = 0;
      *(_WORD *)v47 = v12;
      *(_QWORD *)v13 = v47;
      *((_WORD *)v13 + 5) = 0;
      *((_WORD *)v13 + 4) = v11;
    }
    else
    {
      v13 = &byte_2CA2EE0[(unsigned __int16)v55];
    }
    LOWORD(v54) = v13 - byte_2CA2EE0;
  }
LABEL_5:
  if ( (a2 & 4) != 0 )
  {
    if ( (_WORD)v54 )
      sub_74F860((__int16 *)&v54, 0x20u);
    sub_74F560(&v56, (__int64)"restrict", 8u);
    v20 = v56;
    if ( (_WORD)v56 )
    {
      v21 = v54;
      if ( (_WORD)v54 )
      {
        v29 = dword_2CAA4F0 - 1;
        if ( dword_2CAA4F0 - 1 < 0 )
          goto LABEL_83;
        v48 = (unsigned int)(dword_2CAA4F0 - 2);
        dword_2CAA4F0 = v48;
        v22 = &byte_2CA2EE0[16 * v29 + 2000];
        if ( (_DWORD)v48 == -1 )
          goto LABEL_84;
        v49 = &byte_2CA2EE0[16 * v48 + 2000];
        *v49 = 0;
        *(_WORD *)v49 = v21;
        *(_QWORD *)v22 = v49;
        *((_WORD *)v22 + 5) = 0;
        *((_WORD *)v22 + 4) = v20;
      }
      else
      {
        v22 = &byte_2CA2EE0[(unsigned __int16)v56];
      }
      LOWORD(v54) = v22 - byte_2CA2EE0;
    }
  }
  if ( (a2 & 0x10) != 0 )
  {
    if ( (dword_2CAA5CC & 0x10000) != 0 )
      goto LABEL_16;
    if ( (_WORD)v54 )
      sub_74F860((__int16 *)&v54, 0x20u);
    sub_74F560(&v57, (__int64)"__unaligned", 0xBu);
    v5 = v57;
    if ( (_WORD)v57 )
    {
      v23 = v54;
      if ( (_WORD)v54 )
      {
        v29 = dword_2CAA4F0 - 1;
        if ( dword_2CAA4F0 - 1 < 0 )
          goto LABEL_83;
        v50 = (unsigned int)(dword_2CAA4F0 - 2);
        dword_2CAA4F0 = v50;
        v24 = &byte_2CA2EE0[16 * v29 + 2000];
        if ( (_DWORD)v50 == -1 )
          goto LABEL_84;
        v51 = &byte_2CA2EE0[16 * v50 + 2000];
        *v51 = 0;
        *(_WORD *)v51 = v23;
        *(_QWORD *)v24 = v51;
        *((_WORD *)v24 + 5) = 0;
        *((_WORD *)v24 + 4) = v5;
      }
      else
      {
        v24 = &byte_2CA2EE0[(unsigned __int16)v57];
      }
      LOWORD(v54) = v24 - byte_2CA2EE0;
    }
  }
  if ( (a2 & 8) != 0 && (dword_2CAA5CC & 0x10000) == 0 )
  {
    if ( (_WORD)v54 )
      sub_74F860((__int16 *)&v54, 0x20u);
    sub_74F560(&v58, (__int64)"transaction_safe", 0x10u);
    v6 = v58;
    if ( (_WORD)v58 )
    {
      v25 = v54;
      if ( (_WORD)v54 )
      {
        v29 = dword_2CAA4F0 - 1;
        if ( dword_2CAA4F0 - 1 < 0 )
          goto LABEL_83;
        v52 = (unsigned int)(dword_2CAA4F0 - 2);
        dword_2CAA4F0 = v52;
        v26 = &byte_2CA2EE0[16 * v29 + 2000];
        if ( (_DWORD)v52 == -1 )
          goto LABEL_84;
        v53 = &byte_2CA2EE0[16 * v52 + 2000];
        *v53 = 0;
        *(_WORD *)v53 = v25;
        *(_QWORD *)v26 = v53;
        *((_WORD *)v26 + 5) = 0;
        *((_WORD *)v26 + 4) = v6;
      }
      else
      {
        v26 = &byte_2CA2EE0[(unsigned __int16)v58];
      }
      LOWORD(v54) = v26 - byte_2CA2EE0;
    }
  }
LABEL_16:
  if ( v4 == 64 )
  {
    v19 = (unsigned __int16)*a1;
    if ( !(_WORD)v19 )
      goto LABEL_42;
    v27 = v54;
    v28 = &byte_2CA2EE0[v19];
    if ( (_WORD)v54 )
    {
      v35 = dword_2CAA4F0;
      v36 = dword_2CAA4F0 - 1;
      dword_2CAA4F0 = v36;
      if ( v36 < 0 )
        goto LABEL_84;
      v37 = 16 * ((unsigned int)v36 + 125LL);
      v38 = &byte_2CA2EE0[v37];
      *(_QWORD *)v38 = 32;
      *((_DWORD *)v38 + 2) = 0x10000;
      if ( v35 == 1 )
        goto LABEL_85;
      dword_2CAA4F0 = v35 - 3;
      v39 = 16 * ((unsigned int)(v35 - 2) + 125LL);
      v40 = &byte_2CA2EE0[v39];
      if ( v35 == 2 )
        goto LABEL_84;
      LOWORD(v54) = 16 * (v35 - 2 + 125);
      v41 = &byte_2CA2EE0[16 * (v35 - 3) + 2000];
      *v41 = 0;
      *(_WORD *)v41 = v27;
      *(_QWORD *)v40 = v41;
      *((_WORD *)v40 + 5) = 0;
      *((_WORD *)v40 + 4) = v37;
      v42 = *a1;
      if ( !*a1 )
      {
LABEL_42:
        *(_DWORD *)a1 = v54;
        return v59 - __readfsqword(0x28u);
      }
      v28 = &byte_2CA2EE0[v42];
      if ( (_WORD)v39 )
      {
        v43 = (unsigned int)(v35 - 4);
        if ( v35 == 3 )
          goto LABEL_85;
        v44 = (unsigned int)(v35 - 5);
        dword_2CAA4F0 = v44;
        v28 = &byte_2CA2EE0[16 * v43 + 2000];
        if ( (_DWORD)v44 == -1 )
          goto LABEL_84;
        v45 = &byte_2CA2EE0[16 * v44 + 2000];
        *v45 = 0;
        *(_WORD *)v45 = v39;
        *(_QWORD *)v28 = v45;
        *((_WORD *)v28 + 5) = 0;
        *((_WORD *)v28 + 4) = v42;
      }
    }
    LOWORD(v54) = v28 - byte_2CA2EE0;
    goto LABEL_42;
  }
  if ( v4 == 128 && *a1 )
    sub_74F860(a1, 0x20u);
  if ( (a2 & 0x300) == 0 )
  {
    v7 = v54;
    goto LABEL_20;
  }
  v14 = dword_2CAA4F0;
  v15 = (unsigned int)(dword_2CAA4F0 - 1);
  dword_2CAA4F0 = v15;
  if ( (int)v15 < 0 )
    goto LABEL_84;
  v16 = 16 * (v15 + 125);
  v17 = &byte_2CA2EE0[v16];
  *((_DWORD *)v17 + 2) = 0;
  *(_QWORD *)v17 = 2500128;
  *((_WORD *)v17 + 5) = ((a2 & 0x200) != 0) + 2;
  v7 = v54;
  if ( (_WORD)v16 )
  {
    if ( !(_WORD)v54 )
    {
      v18 = &byte_2CA2EE0[(unsigned __int16)v16];
LABEL_38:
      LOWORD(v54) = (_WORD)v18 - (unsigned __int16)byte_2CA2EE0;
      v7 = v54;
      goto LABEL_20;
    }
    v32 = (unsigned int)(v14 - 2);
    if ( v14 != 1 )
    {
      v33 = v14 - 3;
      dword_2CAA4F0 = v33;
      v18 = &byte_2CA2EE0[16 * v32 + 2000];
      if ( v33 == -1 )
        goto LABEL_84;
      v34 = &byte_2CA2EE0[16 * v33 + 2000];
      *v34 = 0;
      *(_WORD *)v34 = v7;
      *(_QWORD *)v18 = v34;
      *((_WORD *)v18 + 5) = 0;
      *((_WORD *)v18 + 4) = v16;
      goto LABEL_38;
    }
LABEL_85:
    dword_2CAA4F0 = -1;
    goto LABEL_84;
  }
LABEL_20:
  if ( v7 )
  {
    v8 = *a1;
    if ( !*a1 )
    {
      v9 = &byte_2CA2EE0[v7];
LABEL_23:
      *a1 = v9 - byte_2CA2EE0;
      return v59 - __readfsqword(0x28u);
    }
    v29 = dword_2CAA4F0 - 1;
    if ( dword_2CAA4F0 - 1 >= 0 )
    {
      v30 = (unsigned int)(dword_2CAA4F0 - 2);
      dword_2CAA4F0 = v30;
      v9 = &byte_2CA2EE0[16 * v29 + 2000];
      if ( (_DWORD)v30 != -1 )
      {
        v31 = &byte_2CA2EE0[16 * v30 + 2000];
        *v31 = 0;
        *(_WORD *)v31 = v8;
        *(_QWORD *)v9 = v31;
        *((_WORD *)v9 + 5) = 0;
        *((_WORD *)v9 + 4) = v7;
        goto LABEL_23;
      }
LABEL_84:
      __longjmp_chk();
    }
LABEL_83:
    dword_2CAA4F0 = v29;
    goto LABEL_84;
  }
  return v59 - __readfsqword(0x28u);
}

