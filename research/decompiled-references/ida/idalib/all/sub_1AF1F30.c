__int64 __fastcall sub_1AF1F30(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rcx
  unsigned __int64 v8; // rbp
  __int16 v9; // ax
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r14
  _WORD *v19; // rax
  __int16 v20; // ax
  unsigned int v21; // eax
  unsigned __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int16 v34; // cx
  _BOOL4 v35; // edx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  _BOOL8 v39; // rcx
  int v40; // eax
  __int64 v41; // rax
  __int16 v42; // ax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int16 v47; // ax

  v5 = (unsigned __int64)a2;
  v6 = *a2;
  *(_BYTE *)(a1 + 64) = 1;
  v8 = a2[((v6 & 0x4000) != 0) + 3 + (unsigned int)((v6 & 0x2000) != 0)];
  v9 = *(_WORD *)v8 & 0x1FF;
  if ( v9 == 249 )
  {
    v10 = *(_DWORD *)(v8 + 4);
    if ( !v10 )
      goto LABEL_9;
    if ( v10 > 1 )
    {
      *(_DWORD *)a3 = 1;
      v11 = *(_DWORD *)(v8 + 8);
      goto LABEL_7;
    }
    v8 = *(_QWORD *)(v8 + 16);
    v9 = *(_WORD *)v8 & 0x1FF;
  }
  if ( ((v9 + 394) & 0x1FFu) > 1 )
  {
LABEL_6:
    *(_DWORD *)a3 = 2;
    v11 = sub_EEB7E0(v8, (__int64)a2, a4);
LABEL_7:
    *(_DWORD *)(a3 + 16) = v11;
    *(_DWORD *)(a3 + 4) = v11;
    v12 = sub_EEC8C0(v8, (__int64)a2, a4);
    *(_QWORD *)(a3 + 20) = v12;
    *(_QWORD *)(a3 + 8) = v12;
    return 0;
  }
  if ( ((*(_WORD *)(v8 + 2) >> 3) & 0x3F) != 0x15 )
  {
LABEL_29:
    *(_DWORD *)a3 = 2;
    v29 = *(_DWORD *)(v8 + 4);
    *(_DWORD *)(a3 + 4) = v29;
    *(_DWORD *)(a3 + 16) = v29;
    v30 = sub_EEC8C0(v8, (__int64)a2, a4);
    *(_QWORD *)(a3 + 20) = v30;
    *(_QWORD *)(a3 + 8) = v30;
    return 0;
  }
  a2 = *(__int64 **)(v8 + 16);
  v14 = (unsigned int)v6;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(v8 + 24);
  v15 = *(_QWORD *)(v5 + 8LL * (((v6 & 0x4000) != 0) + ((v6 & 0x2000) != 0)) + 16);
  if ( ((*(_WORD *)v15 + 394) & 0x1FFu) >= 2 )
    v15 = 0;
  LOWORD(v14) = (unsigned __int16)v6 >> 13;
  v16 = *(_QWORD *)(v5 + 8LL * (((v6 & 0x4000) != 0) + ((v6 & 0x2000) != 0)) + 16);
  if ( (*(_WORD *)v16 & 0x1FF) == 0x5B )
  {
    if ( v15 )
    {
      v17 = *(_QWORD *)(v15 + 16);
      v18 = *(_QWORD *)(v15 + 24);
      if ( ((*(_WORD *)(v15 + 2) >> 3) & 0x3F) != 0xE )
        goto LABEL_32;
    }
    else
    {
      v38 = 8 * (((*(_BYTE *)(v16 + 2) & 8) != 0) + 1LL);
      v17 = *(_QWORD *)(v16 + v38 + 32);
      v18 = *(_QWORD *)(v16 + v38 + 40);
    }
    if ( ((*(_BYTE *)(v16 + 3) >> 1) & 0x3F) == 0x1E )
      goto LABEL_17;
LABEL_32:
    *(_DWORD *)a3 = 12;
    v31 = ((v6 & 0x4000) != 0) + ((v6 & 0x2000) != 0);
    v32 = sub_C00A40(*(_QWORD *)(v5 + 8 * v31 + 16), (__int64)a2, v16, v31, v14);
    v33 = *(_QWORD *)v5;
    *(_DWORD *)(a3 + 16) = v32;
    *(_DWORD *)(a3 + 4) = v32;
    v34 = (unsigned __int16)v33 >> 13;
    v35 = (v33 & 0x4000) != 0;
    v36 = v34 & 1;
LABEL_33:
    v37 = sub_EEC8C0(*(_QWORD *)(v5 + 8LL * (v35 + v36) + 16), (__int64)a2, a4);
    *(_QWORD *)(a3 + 20) = v37;
    *(_QWORD *)(a3 + 8) = v37;
    return 0;
  }
  if ( !v15 )
  {
    v42 = v6;
    *(_DWORD *)a3 = 5;
    v39 = (v6 & 0x2000) != 0;
    v43 = v39 + ((v42 & 0x4000) != 0);
LABEL_40:
    v44 = sub_C00A40(*(_QWORD *)(v5 + 8LL * v43 + 16), (__int64)a2, v16, v39, v14);
    v45 = *(_QWORD *)v5;
    *(_DWORD *)(a3 + 16) = v44;
    *(_DWORD *)(a3 + 4) = v44;
    LOWORD(v44) = v45;
    v35 = (v45 & 0x2000) != 0;
    v36 = (v44 & 0x4000) != 0;
    goto LABEL_33;
  }
  v17 = *(_QWORD *)(v15 + 16);
  v18 = *(_QWORD *)(v15 + 24);
  if ( ((*(_WORD *)(v15 + 2) >> 3) & 0x3F) != 0xE )
    goto LABEL_32;
LABEL_17:
  if ( (unsigned __int8)sub_1AE6CD0(*(_QWORD *)a1, (unsigned __int64)a2, v17) )
  {
    *(_QWORD *)(a1 + 16) = v18;
    goto LABEL_19;
  }
  a2 = *(__int64 **)(a1 + 8);
  if ( !(unsigned __int8)sub_1AE6CD0(*(_QWORD *)a1, (unsigned __int64)a2, v18) )
  {
    v46 = *(_QWORD *)v5;
    *(_DWORD *)a3 = 7;
    v47 = v46;
    v16 = (v46 & 0x2000) != 0;
    v43 = v16 + ((v47 & 0x4000) != 0);
    goto LABEL_40;
  }
  *(_QWORD *)(a1 + 16) = v17;
LABEL_19:
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(v5 + 8LL * (((*(_QWORD *)v5 & 0x4000) != 0) + ((*(_QWORD *)v5 & 0x2000) != 0)) + 16);
  v19 = (_WORD *)sub_F04E60((_QWORD *)v5);
  v8 = (unsigned __int64)v19;
  if ( !v19 )
  {
    *(_DWORD *)a3 = 17;
    v40 = *(_DWORD *)(v5 + 4);
LABEL_38:
    *(_DWORD *)(a3 + 16) = v40;
    *(_DWORD *)(a3 + 4) = v40;
    v41 = sub_EEC8C0(v5, (__int64)a2, a4);
    *(_QWORD *)(a3 + 20) = v41;
    *(_QWORD *)(a3 + 8) = v41;
    return 0;
  }
  v20 = *v19 & 0x1FF;
  if ( v20 != 249 )
    goto LABEL_24;
  v21 = *(_DWORD *)(v8 + 4);
  if ( !v21 )
  {
LABEL_9:
    *(_DWORD *)a3 = 0;
    v11 = *(_DWORD *)(v8 + 8);
    goto LABEL_7;
  }
  if ( v21 > 1 )
  {
    *(_DWORD *)a3 = 1;
    v40 = *(_DWORD *)(v8 + 8);
    goto LABEL_38;
  }
  v8 = *(_QWORD *)(v8 + 16);
  v20 = *(_WORD *)v8 & 0x1FF;
LABEL_24:
  if ( ((v20 + 394) & 0x1FFu) > 1 )
    goto LABEL_6;
  if ( ((*(_WORD *)(v8 + 2) >> 3) & 0x3F) != 0x15 )
    goto LABEL_29;
  v22 = *(_QWORD *)(a1 + 8);
  if ( !(unsigned __int8)sub_1AE6CD0(*(_QWORD *)a1, v22, *(_QWORD *)(v8 + 24)) )
  {
    *(_DWORD *)a3 = 13;
    v27 = sub_C00A40(*(_QWORD *)(v8 + 24), v22, v23, v24, v25);
    *(_DWORD *)(a3 + 16) = v27;
    *(_DWORD *)(a3 + 4) = v27;
    v28 = sub_EEC8C0(*(_QWORD *)(v8 + 24), v22, a4);
    *(_QWORD *)(a3 + 20) = v28;
    *(_QWORD *)(a3 + 8) = v28;
    return 0;
  }
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(v8 + 16);
  return sub_1AF03A0((_QWORD *)a1, a3, v23, v24, v25, v26, a4);
}
