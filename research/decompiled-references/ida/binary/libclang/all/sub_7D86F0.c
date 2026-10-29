unsigned __int64 __fastcall sub_7D86F0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  unsigned __int64 result; // rax
  __int64 v9; // r13
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // r14
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  char v22; // dl
  unsigned __int64 v23; // [rsp+8h] [rbp-30h]

  v4 = *(_QWORD *)(sub_798D40(a1) + 18200);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 80LL))(v4, *(_QWORD *)(a1 + 72), 1);
  v5 = *(_QWORD *)(a1 + 80);
  if ( !v5 )
    v5 = sub_7D0C20(a1);
  *(_DWORD *)(a2 + 8) = 0;
  v6 = *(unsigned int *)(v5 + 116);
  if ( *(unsigned int *)(a2 + 12) < v6 )
    sub_25D6060(a2, a2 + 16, v6, 8);
  v7 = *(_QWORD *)(v5 + 120);
  result = *(unsigned int *)(v5 + 128);
  v9 = v7 + 8 * result;
  while ( v9 != v7 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)v7 + 80LL);
      v11 = *(_QWORD *)(v10 + 72);
      v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v11 & 1) != 0 )
        goto LABEL_9;
      if ( v12 > 3 )
        break;
LABEL_13:
      v14 = *(unsigned int *)(a2 + 8);
      result = 0;
      v15 = v14 + 1;
      if ( *(unsigned int *)(a2 + 12) >= (unsigned __int64)(v14 + 1) )
        goto LABEL_20;
LABEL_14:
      v7 += 8;
      v23 = result;
      sub_25D6060(a2, a2 + 16, v15, 8);
      result = v23;
      *(_QWORD *)(*(_QWORD *)a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 8))++) = v23;
      if ( v9 == v7 )
        return result;
    }
    result = v11 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v12 & 2) == 0 )
      goto LABEL_19;
    v18 = *(_QWORD *)(result + 18200);
    if ( !v18 )
    {
      v12 = v10 & 0xFFFFFFFFFFFFFFFALL;
      v11 = v10 & 0xFFFFFFFFFFFFFFFALL | 1;
      *(_QWORD *)(v10 + 72) = v11;
LABEL_9:
      result = v11 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v12 )
        goto LABEL_19;
      v13 = result;
      goto LABEL_11;
    }
    v19 = *(_QWORD *)(result + 2192);
    *(_QWORD *)(result + 2272) += 24LL;
    v20 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(result + 2200) >= v20 + 24 && v19 )
    {
      *(_QWORD *)(result + 2192) = v20 + 24;
      v21 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v21 = sub_7CF9B0(result + 2192, 24, 3);
    }
    *(_QWORD *)v21 = v18;
    *(_DWORD *)(v21 + 8) = 0;
    *(_QWORD *)(v21 + 16) = v10;
    *(_QWORD *)(v10 + 72) = v21 | 5;
    v22 = v21;
    result = v21 & 0xFFFFFFFFFFFFFFF8LL;
    v13 = result;
    LOBYTE(v12) = v22 & 0xFA | 4;
LABEL_11:
    if ( (v12 & 4) != 0 )
    {
      if ( !result )
        goto LABEL_13;
      v16 = *(_QWORD *)v13;
      v17 = *(_DWORD *)(*(_QWORD *)v13 + 12LL);
      if ( *(_DWORD *)(v13 + 8) != v17 )
      {
        *(_DWORD *)(v13 + 8) = v17;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 144LL))(v16, v10);
      }
      result = *(_QWORD *)(v13 + 16);
    }
LABEL_19:
    v14 = *(unsigned int *)(a2 + 8);
    v15 = v14 + 1;
    if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v14 + 1) )
      goto LABEL_14;
LABEL_20:
    v7 += 8;
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v14) = result;
    ++*(_DWORD *)(a2 + 8);
  }
  return result;
}

