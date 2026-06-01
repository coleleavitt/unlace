__int64 __fastcall sub_207FBB0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // r12
  unsigned __int8 v7; // cl
  bool v8; // cc
  unsigned int v9; // edi
  _QWORD *v10; // rcx
  __int64 v11; // rdi
  _QWORD *v12; // r8
  __int64 v13; // r8
  __int64 v14; // rcx
  int v17; // ebx
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // eax
  _QWORD *v21; // rdi
  __int64 v22; // rsi
  int v23; // r10d
  _QWORD *v24; // r9
  unsigned __int8 v25; // dl
  __int64 v26; // r11
  _QWORD *v27; // rdx
  __int64 v28; // r13
  _BYTE *v29; // rdx
  unsigned __int8 v30; // r14
  _BYTE *v31; // r14
  unsigned __int8 v32; // r14
  _QWORD *v33; // r14
  __int64 v34; // rdx
  unsigned int v35; // edx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+8h] [rbp-C0h]
  __int64 v41; // [rsp+10h] [rbp-B8h]
  __int64 v42; // [rsp+18h] [rbp-B0h]
  int v43; // [rsp+20h] [rbp-A8h]
  int v44; // [rsp+24h] [rbp-A4h]
  __int64 v45; // [rsp+28h] [rbp-A0h]
  __int64 v46; // [rsp+30h] [rbp-98h]
  int v47; // [rsp+38h] [rbp-90h]
  int v48; // [rsp+3Ch] [rbp-8Ch]
  int v49; // [rsp+40h] [rbp-88h]
  int v50; // [rsp+44h] [rbp-84h]
  __int64 v51; // [rsp+48h] [rbp-80h]
  __int64 v52; // [rsp+50h] [rbp-78h]
  __int64 v53; // [rsp+58h] [rbp-70h]
  __int64 v54; // [rsp+60h] [rbp-68h]
  __int64 v55; // [rsp+68h] [rbp-60h]
  __int64 v56; // [rsp+70h] [rbp-58h]
  __int64 v57; // [rsp+78h] [rbp-50h]
  char v58; // [rsp+80h] [rbp-48h]

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v5 = *a2;
  v6 = *a1;
  v7 = *(_BYTE *)(*a2 - 16);
  if ( (v7 & 2) == 0 )
  {
    v11 = 8LL * ((v7 >> 2) & 0xF);
    v12 = (_QWORD *)(v5 + -16 - v11);
    v39 = v12[1];
    v40 = *(_QWORD *)(v5 - v11);
    v41 = v12[3];
    if ( *(_BYTE *)v5 == 16 )
    {
      v42 = v5;
      v43 = *(_DWORD *)(v5 + 16);
      v44 = *(_DWORD *)(v5 + 20);
    }
    else
    {
      v42 = *(_QWORD *)(v5 + -16 - v11);
      v43 = *(_DWORD *)(v5 + 16);
      v44 = *(_DWORD *)(v5 + 20);
      v7 = *(_BYTE *)(v5 - 16);
      v12 = (_QWORD *)(v5 + -16 - 8LL * ((v7 >> 2) & 0xF));
    }
    v45 = v12[4];
    LOWORD(v9) = (*(_WORD *)(v5 - 16) >> 6) & 0xF;
    if ( ((*(_WORD *)(v5 - 16) >> 6) & 0xFu) <= 8 )
      v46 = 0;
    else
      v46 = v12[8];
    v47 = *(_DWORD *)(v5 + 24);
    v48 = *(_DWORD *)(v5 + 28);
    v49 = *(_DWORD *)(v5 + 32);
    v50 = *(_DWORD *)(v5 + 36);
    v13 = v5 - 8LL * ((v7 >> 2) & 0xF) - 16;
    v9 = (unsigned __int8)v9;
    v51 = *(_QWORD *)(v13 + 40);
    if ( (unsigned __int8)v9 <= 9u )
    {
      v52 = 0;
      v38 = v5 - 8LL * ((v7 >> 2) & 0xF);
      v53 = *(_QWORD *)(v38 + 32);
      v54 = *(_QWORD *)(v38 - 16 + 56);
      goto LABEL_52;
    }
    v52 = *(_QWORD *)(v13 + 72);
LABEL_20:
    v10 = (_QWORD *)(v5 - 8LL * ((v7 >> 2) & 0xF) - 16);
    v53 = v10[6];
    v54 = v10[7];
    if ( v9 != 10 )
    {
      v55 = v10[10];
      if ( v9 != 11 )
      {
        v56 = v10[11];
        if ( v9 != 12 )
          goto LABEL_23;
LABEL_71:
        v14 = 0;
        goto LABEL_24;
      }
LABEL_53:
      v56 = 0;
      v14 = 0;
      goto LABEL_24;
    }
LABEL_52:
    v55 = 0;
    goto LABEL_53;
  }
  v39 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 8LL);
  v40 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 16LL);
  v41 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 24LL);
  if ( *(_BYTE *)v5 == 16 )
    v42 = v5;
  else
    v42 = **(_QWORD **)(v5 - 32);
  v43 = *(_DWORD *)(v5 + 16);
  v44 = *(_DWORD *)(v5 + 20);
  v8 = *(_DWORD *)(v5 - 24) <= 8u;
  v45 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 32LL);
  if ( v8 )
    v46 = 0;
  else
    v46 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 64LL);
  v47 = *(_DWORD *)(v5 + 24);
  v48 = *(_DWORD *)(v5 + 28);
  v49 = *(_DWORD *)(v5 + 32);
  v50 = *(_DWORD *)(v5 + 36);
  v51 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 40LL);
  v9 = *(_DWORD *)(v5 - 24);
  if ( v9 <= 9 )
  {
    v52 = 0;
    v53 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 48LL);
    v54 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 56LL);
    goto LABEL_52;
  }
  v52 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 72LL);
  if ( (v7 & 2) == 0 )
    goto LABEL_20;
  v53 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 48LL);
  v54 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 56LL);
  if ( v9 == 10 )
    goto LABEL_52;
  v55 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 80LL);
  if ( v9 == 11 )
    goto LABEL_53;
  v56 = *(_QWORD *)(*(_QWORD *)(v5 - 32) + 88LL);
  if ( v9 == 12 )
    goto LABEL_71;
  v10 = *(_QWORD **)(v5 - 32);
LABEL_23:
  v14 = v10[12];
LABEL_24:
  v57 = v14;
  v17 = v3 - 1;
  v58 = (unsigned __int8)BYTE1(*(_QWORD *)v5) >> 7;
  v18 = sub_2075CC0((__int64)&v39);
  v19 = *a2;
  v20 = v17 & v18;
  v21 = (_QWORD *)(v6 + 8LL * v20);
  v22 = *v21;
  if ( *v21 == *a2 )
  {
LABEL_50:
    *a3 = v21;
    return 1;
  }
  v23 = 1;
  v24 = nullptr;
  while ( v22 != -4096 && v22 != -8192 )
  {
    v25 = *(_BYTE *)(v19 - 16);
    if ( (v25 & 2) != 0 )
    {
      v26 = 0;
      v27 = *(_QWORD **)(v19 - 32);
      if ( *(_DWORD *)(v19 - 24) > 9u )
        v26 = v27[9];
    }
    else
    {
      if ( ((*(_WORD *)(v19 - 16) >> 6) & 0xFu) <= 9 )
        v26 = 0;
      else
        v26 = *(_QWORD *)(v19 + -16 - 8LL * ((v25 >> 2) & 0xF) + 72);
      v27 = (_QWORD *)(v19 + -16 - 8LL * ((v25 >> 2) & 0xF));
    }
    v28 = v27[3];
    v29 = (_BYTE *)v27[1];
    if ( (*(_BYTE *)(v19 + 36) & 8) == 0 && v29 != nullptr && v28 != 0 && *v29 == 14 )
    {
      v30 = *(v29 - 16);
      v31 = (v30 & 2) != 0 ? *((_BYTE **)v29 - 4) : &v29[-16 - 8LL * ((v30 >> 2) & 0xF)];
      if ( *((_QWORD *)v31 + 9) && (*(_BYTE *)(v22 + 36) & 8) == 0 )
      {
        v32 = *(_BYTE *)(v22 - 16);
        if ( (v32 & 2) != 0 )
        {
          v33 = *(_QWORD **)(v22 - 32);
          if ( v29 != (_BYTE *)v33[1] )
            goto LABEL_38;
          v34 = v33[3];
          if ( v34 != v28 || !v34 )
            goto LABEL_38;
          v35 = *(_DWORD *)(v22 - 24);
        }
        else
        {
          v33 = (_QWORD *)(v22 + -16 - 8LL * ((v32 >> 2) & 0xF));
          if ( v29 != (_BYTE *)v33[1] )
            goto LABEL_38;
          v37 = v33[3];
          if ( !v37 || v37 != v28 )
            goto LABEL_38;
          v35 = (*(_WORD *)(v22 - 16) >> 6) & 0xF;
        }
        v36 = 0;
        if ( v35 > 9 )
          v36 = v33[9];
        if ( v36 == v26 )
          goto LABEL_50;
      }
    }
LABEL_38:
    v20 = v17 & (v23 + v20);
    v21 = (_QWORD *)(v6 + 8LL * v20);
    v22 = *v21;
    if ( *v21 == v19 )
      goto LABEL_50;
    ++v23;
  }
  if ( v22 != -4096 )
  {
    if ( !v24 )
      v24 = v21;
    goto LABEL_38;
  }
  if ( !v24 )
    v24 = v21;
  *a3 = v24;
  return 0;
}
