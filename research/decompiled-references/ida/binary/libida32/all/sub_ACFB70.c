__int64 __fastcall sub_ACFB70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  bool v10; // cl
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned int *v13; // rsi
  _DWORD *v14; // rdi
  size_t v15; // rdx
  int v17; // r13d
  __int64 v18; // rax

  v6 = *(_QWORD *)(a3 + 40);
  if ( (v6 & 7) != 0 )
  {
    v18 = *(_QWORD *)(a2 + 40);
    v9 = 0;
    v12 = v18 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v18 & 7) != 0 )
      goto LABEL_9;
LABEL_15:
    v10 = v9 == v12;
LABEL_8:
    if ( v10 )
      goto LABEL_9;
    return 0;
  }
  v7 = *(_QWORD *)(a2 + 40);
  v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  v9 = v8;
  v10 = v8 == 0;
  if ( (v7 & 7) != 0 )
    goto LABEL_8;
  v11 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  v12 = v11;
  if ( !v11 || !v8 )
    goto LABEL_15;
  v13 = *(unsigned int **)(v8 + 16);
  v14 = *(_DWORD **)(v11 + 16);
  v15 = *v13;
  if ( v15 != *v14 )
    return 0;
  if ( *v13 )
  {
    v10 = memcmp(v14 + 4, v13 + 4, v15) == 0;
    goto LABEL_8;
  }
LABEL_9:
  if ( (unsigned int)sub_B53B50(a2) )
  {
    if ( !(unsigned int)sub_B53B50(a3) )
      return 0;
    v17 = sub_B53B50(a2);
    if ( v17 != (unsigned int)sub_B53B50(a3) )
      return 0;
  }
  return sub_ACDF50(a1, *(_QWORD *)(a2 + 48), *(_QWORD *)(a3 + 48));
}

