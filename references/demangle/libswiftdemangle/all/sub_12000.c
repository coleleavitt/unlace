__int64 __fastcall sub_12000(__int64 a1)
{
  unsigned __int64 v1; // rax
  int v2; // esi
  char v3; // dl
  unsigned __int64 v5; // rcx
  int v6; // r13d
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned int v9; // edx
  _QWORD *v10; // r14
  char *v11; // rcx
  size_t v12; // r8
  unsigned __int64 v13; // rax
  unsigned int v14; // r12d
  char *v15; // rcx
  unsigned __int64 v16; // rsi
  char *v17; // rax
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+18h] [rbp-50h]
  __int64 v28[9]; // [rsp+20h] [rbp-48h] BYREF

  v28[1] = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 72);
  if ( v1 >= *(_QWORD *)(a1 + 64) )
    return 0;
  v2 = -1;
  while ( 1 )
  {
    *(_QWORD *)(a1 + 72) = v1 + 1;
    v3 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + v1);
    if ( !v3 )
      return 0;
    if ( (unsigned __int8)(v3 - 97) > 0x19u )
      break;
    v5 = v3 - 97;
    if ( v5 >= *(unsigned int *)(a1 + 112) || v2 > 2048 )
      return 0;
    v6 = v2 - 1;
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v5);
    if ( v2 > 1 )
    {
      do
      {
        while ( 1 )
        {
          v8 = *(unsigned int *)(a1 + 96);
          v9 = *(_DWORD *)(a1 + 100);
          v10 = *(_QWORD **)(a1 + 88);
          if ( (unsigned int)v8 >= v9 )
            break;
LABEL_14:
          *(_DWORD *)(a1 + 96) = v8 + 1;
          v10[v8] = v7;
          if ( !--v6 )
            goto LABEL_27;
        }
        v11 = *(char **)(a1 + 8);
        v12 = 8LL * v9;
        if ( v11 == (char *)v10 + v12 && (unsigned __int64)(v11 + 8) <= *(_QWORD *)(a1 + 16) )
        {
          *(_QWORD *)(a1 + 8) = v11 + 8;
          *(_DWORD *)(a1 + 100) = v9 + 1;
          goto LABEL_14;
        }
        v13 = 2 * v9;
        v14 = 2 * v9;
        if ( v13 < 4 )
          v13 = 4;
        v15 = (char *)((unsigned __int64)(v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        *(_QWORD *)(a1 + 8) = v15;
        v16 = 8 * (v9 + v13);
        if ( !v15 || (v17 = &v15[v16], (unsigned __int64)&v15[v16] > *(_QWORD *)(a1 + 16)) )
        {
          v27 = 8LL * v9;
          v18 = 2LL * *(_QWORD *)(a1 + 32);
          if ( v18 < v16 + 8 )
            v18 = v16 + 8;
          *(_QWORD *)(a1 + 32) = v18;
          v26 = v18 + 8;
          v19 = malloc(v18 + 8);
          v20 = *(_QWORD *)(a1 + 24);
          v12 = v27;
          *(_QWORD *)(a1 + 24) = v19;
          *v19 = v20;
          v15 = (char *)(((unsigned __int64)v19 + 15) & 0xFFFFFFFFFFFFFFF8LL);
          *(_QWORD *)(a1 + 16) = (char *)v19 + v26;
          v17 = &v15[v16];
        }
        *(_QWORD *)(a1 + 8) = v17;
        v21 = memcpy(v15, v10, v12);
        *(_QWORD *)(a1 + 88) = v21;
        v22 = v21;
        v23 = 4;
        if ( v14 >= 4 )
          v23 = v14;
        *(_DWORD *)(a1 + 100) += v23;
        v24 = *(unsigned int *)(a1 + 96);
        *(_DWORD *)(a1 + 96) = v24 + 1;
        v22[v24] = v7;
        --v6;
      }
      while ( v6 );
    }
LABEL_27:
    if ( !v7 )
      return 0;
    v28[0] = v7;
    sub_11EC0(a1 + 88, v28, (_QWORD *)a1);
    v2 = -1;
LABEL_8:
    v1 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(a1 + 64) <= v1 )
      return 0;
  }
  if ( (unsigned __int8)(v3 - 65) <= 0x19u )
    return sub_D280(a1, v2, v3 - 65);
  if ( v3 != 95 )
  {
    *(_QWORD *)(a1 + 72) = v1;
    v2 = sub_D100((_QWORD *)a1);
    if ( v2 < 0 )
      return 0;
    goto LABEL_8;
  }
  v25 = (unsigned int)(v2 + 27);
  if ( (unsigned int)v25 >= *(_DWORD *)(a1 + 112) )
    return 0;
  return *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v25);
}
