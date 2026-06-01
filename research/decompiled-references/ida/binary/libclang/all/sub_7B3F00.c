__int64 __fastcall sub_7B3F00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rcx
  int v11; // edx
  __int64 result; // rax
  __int64 v13; // rax
  unsigned int v14; // esi
  __int64 v15; // rbp
  __int64 *v16; // rdi
  int v17; // eax
  __int64 v18; // r8
  int v19; // r14d
  __int64 *v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // r10
  _DWORD *v24; // rax
  int v25; // ecx
  int v26; // eax
  int v27; // esi
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdi
  int v31; // r10d
  __int64 *v32; // r9
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdi
  int v36; // r9d
  __int64 *v37; // r8
  __int64 v38; // r13
  __int64 v39; // rsi

  *(_DWORD *)(*(_QWORD *)(a1 + 128) + 108LL) = (2 * HIDWORD(a8)) | *(_DWORD *)(*(_QWORD *)(a1 + 128) + 108LL) & 1;
  if ( (_DWORD)a9 )
  {
    v13 = sub_798D40(a1);
    v14 = *(_DWORD *)(v13 + 2064);
    v15 = v13;
    v16 = (__int64 *)(v13 + 2048);
    v17 = 0;
    if ( !v14 )
      goto LABEL_20;
    v18 = *(_QWORD *)(v15 + 2048);
    v19 = 1;
    v20 = nullptr;
    LODWORD(v21) = (v14 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
    v22 = (_QWORD *)(v18 + 16LL * (unsigned int)v21);
    v23 = *v22;
    if ( a1 == *v22 )
    {
LABEL_5:
      v24 = v22 + 1;
LABEL_6:
      *v24 = a9;
      goto LABEL_2;
    }
    while ( v23 != -4096 )
    {
      if ( !v20 && v23 == -8192 )
        v20 = v22;
      v21 = (v14 - 1) & ((_DWORD)v21 + v19);
      v22 = (_QWORD *)(v18 + 16 * v21);
      v23 = *v22;
      if ( a1 == *v22 )
        goto LABEL_5;
      ++v19;
    }
    if ( !v20 )
      v20 = v22;
    v25 = *(_DWORD *)(v15 + 2056) + 1;
    v17 = 2 * v14;
    if ( 4 * v25 < 3 * v14 )
    {
      if ( v14 >> 3 < v14 - *(_DWORD *)(v15 + 2060) - v25 )
      {
LABEL_17:
        *(_DWORD *)(v15 + 2056) = v25;
        if ( *v20 != -4096 )
          --*(_DWORD *)(v15 + 2060);
        *v20 = a1;
        v24 = v20 + 1;
        *((_DWORD *)v20 + 2) = 0;
        goto LABEL_6;
      }
      sub_7B3CE0(v16, v14);
      v33 = *(_DWORD *)(v15 + 2064);
      v25 = *(_DWORD *)(v15 + 2056) + 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        v35 = *(_QWORD *)(v15 + 2048);
        v36 = 1;
        v37 = nullptr;
        LODWORD(v38) = v34 & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
        v20 = (__int64 *)(v35 + 16LL * (unsigned int)v38);
        v39 = *v20;
        if ( a1 != *v20 )
        {
          while ( v39 != -4096 )
          {
            if ( v39 == -8192 && !v37 )
              v37 = v20;
            v38 = v34 & (unsigned int)(v38 + v36);
            v20 = (__int64 *)(v35 + 16 * v38);
            v39 = *v20;
            if ( a1 == *v20 )
              goto LABEL_17;
            ++v36;
          }
          if ( v37 )
            v20 = v37;
        }
        goto LABEL_17;
      }
    }
    else
    {
LABEL_20:
      sub_7B3CE0(v16, v17);
      v26 = *(_DWORD *)(v15 + 2064);
      v25 = *(_DWORD *)(v15 + 2056) + 1;
      if ( v26 )
      {
        v27 = v26 - 1;
        v28 = *(_QWORD *)(v15 + 2048);
        LODWORD(v29) = (v26 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
        v20 = (__int64 *)(v28 + 16LL * (unsigned int)v29);
        v30 = *v20;
        if ( a1 != *v20 )
        {
          v31 = 1;
          v32 = nullptr;
          while ( v30 != -4096 )
          {
            if ( !v32 && v30 == -8192 )
              v32 = v20;
            v29 = v27 & (unsigned int)(v29 + v31);
            v20 = (__int64 *)(v28 + 16 * v29);
            v30 = *v20;
            if ( a1 == *v20 )
              goto LABEL_17;
            ++v31;
          }
          if ( v32 )
            v20 = v32;
        }
        goto LABEL_17;
      }
    }
    ++*(_DWORD *)(v15 + 2056);
    BUG();
  }
LABEL_2:
  *(_DWORD *)(*(_QWORD *)(a1 + 128) + 112LL) = a8;
  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 120LL) = a7;
  v10 = *(_QWORD *)(a1 + 128);
  v11 = BYTE4(a9) & 1;
  result = v11 | *(_BYTE *)(v10 + 108) & 0xFEu;
  *(_BYTE *)(v10 + 108) = v11 | *(_BYTE *)(v10 + 108) & 0xFE;
  return result;
}

