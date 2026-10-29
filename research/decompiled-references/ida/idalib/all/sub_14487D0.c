__int64 *__fastcall sub_14487D0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *result; // rax
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 *v10; // rdx
  __int64 v11; // rax
  unsigned __int64 *v12; // r12
  unsigned __int64 *v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 *v21; // rbx
  int v22; // esi
  __int64 *v23; // r12
  bool v24; // zf
  int v25; // r10d
  int v26; // edi
  __int64 v27; // [rsp+0h] [rbp-28h] BYREF
  __int64 *v28; // [rsp+8h] [rbp-20h] BYREF

  result = nullptr;
  if ( (*(_BYTE *)(a2 + 3) & 2) == 0 )
    return result;
  v8 = a1[213];
  v27 = a2;
  v9 = *(_DWORD *)(v8 + 16);
  if ( !v9 )
  {
    v28 = nullptr;
    goto LABEL_27;
  }
  a5 = v9 - 1;
  a4 = (unsigned int)a5 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v10 = (__int64 *)(*(_QWORD *)v8 + 16 * a4);
  a6 = *v10;
  if ( a2 == *v10 )
    goto LABEL_4;
  v25 = 1;
  v23 = nullptr;
  if ( a6 == -4096 )
  {
LABEL_33:
    v23 = v10;
LABEL_34:
    v26 = *(_DWORD *)(v8 + 8);
    a4 = 3 * v9;
    v28 = v23;
    a3 = (unsigned int)(v26 + 1);
    if ( 4 * (int)a3 < (unsigned int)a4 )
    {
      a4 = v9 - *(_DWORD *)(v8 + 12) - (unsigned int)a3;
      if ( (unsigned int)a4 > v9 >> 3 )
        goto LABEL_29;
      v22 = v9;
LABEL_28:
      sub_12F12D0(v8, v22, a3, a4, a5, a6);
      sub_12EC520((__int64 *)v8, &v27, &v28);
      a2 = v27;
      v23 = v28;
      LODWORD(a3) = *(_DWORD *)(v8 + 8) + 1;
LABEL_29:
      v24 = *v23 == -4096;
      *(_DWORD *)(v8 + 8) = a3;
      if ( !v24 )
        --*(_DWORD *)(v8 + 12);
      *v23 = a2;
      v14 = 0;
      v12 = (unsigned __int64 *)(v23 + 1);
      a2 = v27;
      *v12 = 0;
      goto LABEL_12;
    }
LABEL_27:
    v22 = 2 * v9;
    goto LABEL_28;
  }
  while ( 1 )
  {
    if ( !v23 && a6 == -8192 )
      v23 = v10;
    a4 = (unsigned int)a5 & (v25 + (_DWORD)a4);
    v10 = (__int64 *)(*(_QWORD *)v8 + 16LL * (unsigned int)a4);
    a6 = *v10;
    if ( a2 == *v10 )
      break;
    if ( a6 == -4096 )
    {
      if ( v23 )
        goto LABEL_34;
      goto LABEL_33;
    }
    ++v25;
  }
LABEL_4:
  v11 = v10[1];
  v12 = (unsigned __int64 *)(v10 + 1);
  v13 = (unsigned __int64 *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
  v14 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v11 && (v11 & 4) != 0 )
  {
    v14 = 0;
    if ( !v13 )
      goto LABEL_12;
    v14 = *v13;
  }
  while ( v14 && (*(_BYTE *)(v14 + 12) & 3) == 2 )
    v14 = *(_QWORD *)v14;
LABEL_12:
  sub_12EEA40(v12, a1, a2, a4, a5, a6);
  v18 = sub_12EEA40(v12, a1, v27, v15, v16, v17);
  v19 = 0;
  if ( v18 )
  {
    v20 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v18 + 8) & 4) != 0 )
    {
      v18 = *(_QWORD *)v20;
      v19 = *(unsigned int *)(v20 + 8);
    }
    else
    {
      v18 += 8LL;
      v19 = v20 != 0;
    }
  }
  if ( !v14 || (*(_BYTE *)(v14 + 12) & 3) != 0 || (v21 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFF8LL)) == nullptr )
  {
    if ( !v19 )
      return nullptr;
    return *(__int64 **)(*(_QWORD *)(v18 + 8 * v19 - 8) + 16LL);
  }
  if ( v19 )
    return *(__int64 **)(*(_QWORD *)(v18 + 8 * v19 - 8) + 16LL);
  result = sub_13F1C60(v21);
  if ( result )
    return (__int64 *)result[2];
  return result;
}
