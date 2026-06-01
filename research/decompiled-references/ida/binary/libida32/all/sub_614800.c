__int64 __fastcall sub_614800(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbp
  int v9; // edx
  const char *v11; // rsi
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-20h]

  v6 = (_QWORD *)a1;
  v16 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a2 + 56);
  if ( (v9 & 0x10) == 0 )
  {
    if ( (v9 & 0xF) != 0 || (v9 & 0x20) == 0 )
      return 0;
    return sub_613A80(a1, a3, a2);
  }
  if ( (v9 & 0xF) == 0 )
    return sub_613A80(a1, a3, a2);
  v11 = *(const char **)(a2 + 48);
  if ( v11 )
  {
    a1 = *(_QWORD *)a1;
    v12 = sub_60DEE0(a1, v11, 0);
    v9 = *(_DWORD *)(a2 + 56);
    v15 = v12;
    if ( (v9 & 4) == 0 )
      goto LABEL_7;
    return sub_79BE10(&v15, *v6, a3);
  }
  v15 = *(_DWORD *)(a1 + 8);
  if ( (v9 & 4) != 0 )
    return sub_79BE10(&v15, *v6, a3);
LABEL_7:
  v13 = *(unsigned __int8 *)(a2 + 32);
  if ( (v9 & 0x800) != 0 )
    return sub_79C010(&v15, *v6, a3, *(_QWORD *)(a2 + 8), v13);
  if ( (v9 & 2) != 0 )
    return sub_79B6F0(&v15, *v6, a3, *(unsigned int *)(a2 + 8), v13);
  v14 = v9 & 0xF;
  if ( !(_DWORD)v14 )
    sub_60D4F0(a1, v11, v14, a4, v13, a6);
  return sub_79BAE0(&v15, *v6, a3, 1, *(unsigned int *)(a2 + 8), (unsigned __int8)v13 | 0x400u);
}

