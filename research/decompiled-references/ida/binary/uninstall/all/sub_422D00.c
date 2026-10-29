__int64 __fastcall sub_422D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned int v8; // edx
  int v9; // r14d
  __int64 v11; // rdx
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  _BYTE *v21; // rcx
  char v22; // al
  _BYTE *v23; // rcx
  char v24; // al
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rsi
  bool v31; // zf
  _BYTE *v32; // rcx
  int v33; // edx
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  _BYTE *v36; // rcx
  int v37; // ebx
  _BYTE *v38; // rcx
  _BYTE *v39; // rcx
  _BYTE *v40; // rcx
  __int64 v41; // rdx
  _BYTE *v42; // rcx
  __int64 v43; // rcx
  int v44; // eax
  int v45; // edx
  _BYTE *v46; // rcx
  _BYTE *v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rbx
  int v50; // eax
  int v51; // [rsp+4h] [rbp-44h]
  int *v52; // [rsp+8h] [rbp-40h]
  int v53; // [rsp+10h] [rbp-38h]
  unsigned int v54; // [rsp+14h] [rbp-34h] BYREF

  v6 = *(_QWORD *)(a4 + 3264);
  v8 = 1;
  v9 = *(_DWORD *)(v6 + 28) - 1;
  if ( (unsigned int)(*(_DWORD *)(a2 + 28) - 3) > 1 )
    return v8;
  v11 = *(_QWORD *)(a2 + 32);
  v13 = v11 + 24LL * *(int *)(v11 + 20) + 24;
  v14 = v13;
  v53 = sub_41FD20(v13, a4);
  v8 = 1;
  if ( v53 < 0 )
    return v8;
  v15 = v13 + 24LL * *(int *)(v13 + 20) + 24;
  if ( *(_DWORD *)(a2 + 28) != 4 )
  {
    v54 = 1;
    goto LABEL_6;
  }
  v49 = *(int *)(v15 + 20);
  v52 = (int *)sub_47B0B0(v14, a4, 1);
  v51 = 0;
  if ( !(unsigned int)sub_439010(v15 + 24 * v49 + 24, v52) || (unsigned int)sub_47C180(0, v52, &v54) == 1 )
    v51 = 1;
  v50 = *v52 - 1;
  v31 = *v52 == 1;
  *v52 = v50;
  if ( v50 < 0 || v31 )
    sub_47B120(v52);
  v8 = 1;
  if ( !v51 )
  {
LABEL_6:
    if ( *(_DWORD *)v15 == 2 )
    {
      v37 = sub_471010(a4, *(_QWORD *)(v15 + 32), *(unsigned int *)(v15 + 40), 0);
      if ( v37 <= 255 )
      {
        v46 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v46 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v46 = *(_BYTE **)(a4 + 120);
        }
        *v46 = 1;
        v47 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v47;
        *v47 = v37;
        v48 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v44 = dword_65442C;
        v21 = (_BYTE *)(v48 + 1);
        *(_QWORD *)(a4 + 120) = v21;
      }
      else
      {
        v38 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v38 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v38 = *(_BYTE **)(a4 + 120);
        }
        *v38 = 2;
        v39 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v39;
        *v39 = HIBYTE(v37);
        v40 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v40;
        *v40 = BYTE2(v37);
        v41 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v41 + 1;
        *(_BYTE *)(v41 + 1) = BYTE1(v37);
        v42 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v42;
        *v42 = v37;
        v43 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v44 = dword_65444C;
        v21 = (_BYTE *)(v43 + 1);
        *(_QWORD *)(a4 + 120) = v21;
      }
      if ( !v44 )
        goto LABEL_8;
      if ( v44 == 0x80000000 )
        v44 = 1 - v37;
      if ( v44 < 0 )
      {
        v45 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v45 )
        {
          *(_DWORD *)(a4 + 44) = v45;
          *(_DWORD *)(a4 + 48) = v44 + v45;
          goto LABEL_8;
        }
      }
      else
      {
        v45 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v44 + v45;
    }
    else
    {
      v16 = *(_QWORD *)(v6 + 16);
      v17 = 24LL * v9;
      v18 = *(_QWORD *)(v17 + v16 + 8);
      v19 = *(_QWORD *)(*(_QWORD *)(v17 + v16 + 16) + 16LL);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v18 + 8);
      v20 = *(unsigned int *)(v15 + 20);
      *(_QWORD *)(a4 + 3288) = v19;
      sub_4399D0(a1, v15 + 24, v20, a4);
      v21 = *(_BYTE **)(a4 + 120);
    }
LABEL_8:
    if ( (unsigned __int64)(v21 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v21 = *(_BYTE **)(a4 + 120);
    }
    *v21 = 113;
    v22 = HIBYTE(v54);
    v23 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v23;
    *v23 = v22;
    v24 = BYTE2(v54);
    v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v25;
    *v25 = v24;
    v26 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    v27 = v54 >> 8;
    *(_QWORD *)(a4 + 120) = v26;
    *v26 = v27;
    v28 = *(_QWORD *)(a4 + 120);
    LOBYTE(v27) = v54;
    *(_QWORD *)(a4 + 120) = v28 + 1;
    *(_BYTE *)(v28 + 1) = v27;
    *(_DWORD *)(a4 + 3276) = 0;
    v29 = dword_65522C;
    v30 = *(_QWORD *)(a4 + 120) + 1LL;
    v31 = dword_65522C == 0;
    v32 = (_BYTE *)v30;
    *(_QWORD *)(a4 + 120) = v30;
    if ( !v31 )
    {
      if ( v29 == 0x80000000 )
        v29 = 1 - v54;
      if ( v29 < 0 )
      {
        v33 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v33 )
          *(_DWORD *)(a4 + 44) = v33;
      }
      else
      {
        v33 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v33 + v29;
    }
    if ( (unsigned __int64)(v30 + 4) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v32 = *(_BYTE **)(a4 + 120);
    }
    *v32 = HIBYTE(v53);
    v34 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v34;
    *v34 = BYTE2(v53);
    v35 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v35;
    *v35 = BYTE1(v53);
    v36 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v36;
    *v36 = v53;
    v8 = 0;
    ++*(_QWORD *)(a4 + 120);
  }
  return v8;
}

