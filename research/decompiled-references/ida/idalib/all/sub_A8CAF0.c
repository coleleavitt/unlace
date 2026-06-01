__int64 __fastcall sub_A8CAF0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r15
  __int64 v3; // r13
  int v4; // edx
  int v5; // r14d
  char v6; // al
  __int64 v7; // rsi
  char v8; // r12
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 *v11; // r15
  __int64 v12; // r14
  __int64 v13; // r10
  __int64 v14; // rcx
  unsigned int v15; // r9d
  _QWORD *v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // r13
  unsigned int v25; // esi
  __int64 v26; // rdi
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // r9
  unsigned int v30; // edi
  __int64 v31; // rsi
  int v32; // r11d
  _QWORD *v33; // rdx
  __int64 v35; // r9
  int v36; // edi
  int v37; // edi
  __int64 v38; // r9
  unsigned int v39; // ecx
  int v40; // r11d
  _QWORD *v41; // rdx
  _QWORD *v42; // r10
  _QWORD *v43; // rdx
  __int64 v45; // [rsp+10h] [rbp-48h]
  unsigned int v46; // [rsp+10h] [rbp-48h]
  int v47; // [rsp+10h] [rbp-48h]

  v2 = sub_A51390(a2);
  v3 = sub_A513B0(a2);
  v5 = v4;
  v6 = sub_A513A0(a2);
  v7 = *(_QWORD *)(v2 + 16);
  v8 = v6;
  if ( (v7 & 4) != 0 )
    v9 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v9 )
    v9 -= 64LL;
  if ( v5 )
  {
    v10 = 0;
    v11 = (unsigned __int64 *)v3;
    v12 = v3 + 8LL * (unsigned int)(v5 - 1) + 8;
    while ( 1 )
    {
      v18 = *v11;
      if ( !v8 )
      {
        v18 = v9;
        v9 = *v11;
      }
      v19 = sub_EDE580(a1, v9);
      v23 = *(_QWORD *)(v18 + 128);
      v14 = v19;
      if ( v23
        || (v45 = v19,
            sub_7052B0((__int64 *)(*(_QWORD *)(v18 + 104) + 96LL), *(_QWORD *)(v18 + 104), v20, v19, v21, v22),
            v23 = *(_QWORD *)(v18 + 128),
            v14 = v45,
            v23) )
      {
        v23 = *(_QWORD *)(v23 + 88);
      }
      v24 = *(_QWORD *)(v14 + 72);
      v25 = *(_DWORD *)(v24 + 80);
      v26 = v24 + 64;
      if ( !v25 )
        goto LABEL_15;
      v13 = *(_QWORD *)(v24 + 64);
      v14 = ((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4);
      v15 = (v25 - 1) & (((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4));
      v16 = (_QWORD *)(v13 + 16LL * v15);
      v17 = *v16;
      if ( v23 != *v16 )
        break;
LABEL_8:
      v10 += v16[1];
LABEL_9:
      v9 = *v11++;
      if ( (unsigned __int64 *)v12 == v11 )
        goto LABEL_22;
    }
    if ( v17 != -4096 )
    {
      v47 = 1;
      v43 = nullptr;
      while ( 1 )
      {
        if ( !v43 && v17 == -8192 )
          v43 = v16;
        v15 = (v25 - 1) & (v47 + v15);
        v16 = (_QWORD *)(v13 + 16LL * v15);
        v17 = *v16;
        if ( v23 == *v16 )
          goto LABEL_8;
        if ( v17 == -4096 )
          break;
        ++v47;
      }
      v14 = (unsigned int)v14;
      if ( v43 )
        v16 = v43;
    }
    v20 = *(unsigned int *)(v24 + 72);
    v22 = 3 * v25;
    v21 = (unsigned int)(v20 + 1);
    if ( 4 * (int)v21 >= (unsigned int)v22 )
    {
LABEL_15:
      sub_7055A0(v26, 2 * v25, v20, v14, v21, v22);
      v27 = *(_DWORD *)(v24 + 80);
      if ( !v27 )
        goto LABEL_61;
      v28 = v27 - 1;
      v29 = *(_QWORD *)(v24 + 64);
      v30 = v28 & (((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4));
      LODWORD(v21) = *(_DWORD *)(v24 + 72) + 1;
      v16 = (_QWORD *)(v29 + 16LL * v30);
      v31 = *v16;
      if ( v23 == *v16 )
        goto LABEL_29;
      v32 = 1;
      v33 = nullptr;
      if ( v31 != -4096 )
      {
        while ( 1 )
        {
          if ( v31 != -8192 || v33 )
            v16 = v33;
          v30 = v28 & (v32 + v30);
          v42 = (_QWORD *)(v29 + 16LL * v30);
          v31 = *v42;
          if ( v23 == *v42 )
            break;
          if ( v31 == -4096 )
            goto LABEL_54;
          ++v32;
          v33 = v16;
          v16 = (_QWORD *)(v29 + 16LL * v30);
        }
LABEL_39:
        v16 = v42;
LABEL_29:
        *(_DWORD *)(v24 + 72) = v21;
        if ( v31 != -4096 )
          --*(_DWORD *)(v24 + 76);
        goto LABEL_31;
      }
    }
    else
    {
      v35 = v25 - *(_DWORD *)(v24 + 76) - (unsigned int)v21;
      if ( (unsigned int)v35 > v25 >> 3 )
      {
LABEL_28:
        v31 = *v16;
        goto LABEL_29;
      }
      v46 = v14;
      sub_7055A0(v26, v25, v20, v14, v21, v35);
      v36 = *(_DWORD *)(v24 + 80);
      if ( !v36 )
      {
LABEL_61:
        ++*(_DWORD *)(v24 + 72);
        BUG();
      }
      v37 = v36 - 1;
      v38 = *(_QWORD *)(v24 + 64);
      v39 = v37 & v46;
      LODWORD(v21) = *(_DWORD *)(v24 + 72) + 1;
      v16 = (_QWORD *)(v38 + 16LL * (v37 & v46));
      v31 = *v16;
      if ( v23 == *v16 )
        goto LABEL_29;
      v40 = 1;
      v41 = nullptr;
      if ( v31 != -4096 )
      {
        while ( 1 )
        {
          if ( v41 || v31 != -8192 )
            v16 = v41;
          v39 = v37 & (v40 + v39);
          v42 = (_QWORD *)(v38 + 16LL * v39);
          v31 = *v42;
          if ( v23 == *v42 )
            goto LABEL_39;
          if ( v31 == -4096 )
          {
LABEL_54:
            if ( v16 )
              goto LABEL_28;
            v16 = v42;
            break;
          }
          ++v40;
          v41 = v16;
          v16 = (_QWORD *)(v38 + 16LL * v39);
        }
      }
    }
    *(_DWORD *)(v24 + 72) = v21;
LABEL_31:
    *v16 = v23;
    v16[1] = 0;
    goto LABEL_9;
  }
  v10 = 0;
LABEL_22:
  if ( v8 )
    return -v10;
  return v10;
}
