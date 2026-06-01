__int64 __fastcall sub_AF69A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  bool v10; // cl
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned int *v13; // rsi
  _DWORD *v14; // rdi
  size_t v15; // rdx
  unsigned int v16; // r13d
  __int64 v17; // rax
  int v18; // r14d
  __int64 v19; // rax
  __int64 v21; // r12
  __int64 v22; // rax

  v5 = *(_QWORD *)(a2 + 40);
  if ( (v5 & 7) != 0 )
  {
    v9 = 0;
    v12 = *(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 40) & 7) != 0 )
      goto LABEL_9;
  }
  else
  {
    v7 = *(_QWORD *)(a3 + 40);
    v8 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    v9 = v8;
    v10 = v8 == 0;
    if ( (v7 & 7) != 0 )
      goto LABEL_8;
    v11 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    v12 = v11;
    if ( v11 && v8 )
    {
      v13 = *(unsigned int **)(v11 + 16);
      v14 = *(_DWORD **)(v8 + 16);
      v15 = *v13;
      if ( v15 != *v14 )
        return 0;
      if ( !*v13 )
        goto LABEL_9;
      v10 = memcmp(v14 + 4, v13 + 4, v15) == 0;
      goto LABEL_8;
    }
  }
  v10 = v9 == v12;
LABEL_8:
  if ( !v10 )
    return 0;
LABEL_9:
  v16 = sub_AF1C90(a1, *(_QWORD *)(a2 + 48), *(_QWORD *)(a3 + 48));
  if ( !(_BYTE)v16 )
    return 0;
  v17 = sub_B8C330(a2);
  v18 = sub_B74100(a2, v17);
  v19 = sub_B8C330(a3);
  if ( v18 != (unsigned int)sub_B74100(a3, v19) )
    return v16;
  if ( (*(_BYTE *)(a2 + 96) & 7) != (*(_BYTE *)(a3 + 96) & 7) )
    return 0;
  v21 = sub_B73640(a3);
  v22 = sub_B73640(a2);
  if ( !v22 || !v21 )
  {
    LOBYTE(v16) = v21 == v22;
    return v16;
  }
  return sub_AF1120(a1, v22, v21);
}
