__int64 __fastcall sub_567270(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r12
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rbp
  unsigned __int64 v8; // r15
  unsigned int v9; // eax
  unsigned __int64 v10; // r14
  int v11; // r9d
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // esi
  _QWORD *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned int v20; // esi
  int v21; // eax
  __int64 v22; // rdx
  const void *v23; // r9
  unsigned int v24; // r8d
  unsigned int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int v28; // r13d
  char *v29; // rdi
  char *v30; // rax
  __int64 v31; // r13
  unsigned __int64 *v32; // rcx
  __int64 v33; // rbp
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // [rsp+0h] [rbp-58h]
  unsigned __int16 v38; // [rsp+Ch] [rbp-4Ch]
  unsigned int v39; // [rsp+14h] [rbp-44h] BYREF
  unsigned int v40; // [rsp+18h] [rbp-40h] BYREF
  char v41[60]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v4 = a2;
  v5 = a1;
  v6 = *a2;
  v7 = (*a2 - *(_QWORD *)(a1 + 40)) >> 4;
  v8 = *(_QWORD *)(*a2 + 8);
  v9 = *(_DWORD *)*a2;
  v10 = v9 | 0xFFFF00000000LL;
  if ( *(_DWORD *)(*a2 + 4) != 0xFFFF )
  {
    v11 = *(_DWORD *)(a1 + 108);
    v12 = *(_DWORD *)(a1 + 80);
    if ( v11 && (_WORD)v12 )
    {
      v14 = *(_QWORD *)(a1 + 72);
      LOWORD(v18) = 0;
      v35 = v14;
      while ( *(_DWORD *)(v35 + 8) != -1 )
      {
        LOWORD(v18) = v18 + 1;
        v35 += 16;
        if ( (_WORD)v12 == (_WORD)v18 )
          goto LABEL_3;
      }
      v15 = (unsigned __int16)v18;
      *(_DWORD *)(v35 + 8) = 0;
      *(_DWORD *)(v5 + 108) = v11 - 1;
      v18 = (unsigned __int16)v18;
      v10 = v9 | ((unsigned __int64)(unsigned __int16)v18 << 32);
    }
    else
    {
LABEL_3:
      if ( v12 >= *(_DWORD *)(a1 + 104)
        || (v38 = *(_DWORD *)(a1 + 80),
            v37 = v9,
            sub_55ECB0(a1 + 72, 16),
            v13 = *(unsigned int *)(a1 + 80),
            v14 = *(_QWORD *)(a1 + 72),
            v15 = v38,
            v16 = v13 + 1,
            v17 = (_QWORD *)(v14 + 16 * v13),
            *(_DWORD *)(v5 + 80) = v16,
            *v17 = 0,
            v18 = v38,
            v17[1] = 0,
            v10 = v37 | ((unsigned __int64)v38 << 32),
            v38 == 0xFFFF) )
      {
        v15 = v5;
        *(_BYTE *)(v5 + 207) = 1;
        if ( !(unsigned __int8)sub_566DA0(v5, &v39, &v40, (__int64)v41, nullptr) || (_DWORD)v7 == v39 )
          return 0;
        v36 = *(_QWORD *)(v5 + 40) + 16LL * v39;
        v18 = *(unsigned int *)(v36 + 4);
        *(_BYTE *)(v36 + 15) |= 0x40u;
        v19 = *(unsigned int *)(v5 + 80);
        *(_DWORD *)(v36 + 4) = 0xFFFF;
        v14 = v18 << 32;
        v10 = (v18 << 32) | (unsigned int)v10;
        if ( (unsigned __int16)v18 < (unsigned int)v19 )
        {
          v14 = *(_QWORD *)(v5 + 72);
          a1 = v14 + 16LL * (unsigned __int16)v18;
          v20 = 0;
          *(_DWORD *)(a1 + 8) = 0;
          goto LABEL_9;
        }
        goto LABEL_33;
      }
      v12 = *(_DWORD *)(v5 + 80);
    }
    v19 = v12;
    if ( (unsigned int)v18 < v12 )
    {
      a1 = v14 + 16 * v15;
      if ( a1 )
      {
        v20 = *(_DWORD *)(a1 + 8);
LABEL_9:
        v21 = *(_DWORD *)(v6 + 4);
        if ( (unsigned __int16)v21 >= (unsigned int)v19 )
          v22 = v5 + 88;
        else
          v22 = 16LL * (unsigned __int16)v21 + v14;
        v23 = *(const void **)v22;
        v24 = *(_DWORD *)(v22 + 8);
        v25 = v20;
        a2 = &qword_28;
        sub_55F130((char **)a1, 40, v25, 0, v24, v23);
        goto LABEL_12;
      }
      return 0;
    }
LABEL_33:
    sub_55D1F0(v15, v18, v14, v19);
  }
LABEL_12:
  v26 = *(unsigned int *)(v5 + 48);
  v27 = (unsigned int)(v7 + 1);
  v28 = v26 + 1;
  if ( (unsigned int)v26 < (unsigned int)v27 )
    sub_55D2B0(a1, a2, v26, a4, v27);
  v29 = *(char **)(v5 + 40);
  if ( *(_DWORD *)(v5 + 52) < v28 )
  {
    if ( v29 )
      v30 = (char *)off_8C52A8(v29, 16LL * v28);
    else
      v30 = (char *)off_8C52B8(16LL * v28);
    LODWORD(v27) = v7 + 1;
    v29 = v30;
    *(_QWORD *)(v5 + 40) = v30;
    LODWORD(v26) = *(_DWORD *)(v5 + 48);
    *(_DWORD *)(v5 + 52) = v28;
  }
  v31 = 16LL * (unsigned int)v27;
  v32 = (unsigned __int64 *)&v29[v31];
  if ( (unsigned int)v27 < (unsigned int)v26 )
  {
    memmove(&v29[16 * (unsigned int)(v7 + 2)], &v29[v31], 16LL * (unsigned int)(v26 - v27));
    v32 = (unsigned __int64 *)&v29[v31];
  }
  *v32 = v10;
  v32[1] = v8;
  v33 = *(_QWORD *)(v5 + 40) + 16LL * (unsigned int)v7;
  ++*(_DWORD *)(v5 + 48);
  *v4 = v33;
  return v31 + *(_QWORD *)(v5 + 40);
}
