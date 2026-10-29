void __fastcall sub_5B08F0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  unsigned int *v6; // rdi
  int v7; // ebp
  unsigned int *v8; // rax
  unsigned int *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned int *v14; // [rsp+0h] [rbp-48h] BYREF
  int v15; // [rsp+8h] [rbp-40h]
  __int64 v16; // [rsp+Ch] [rbp-3Ch]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( !a2 )
    return;
  v3 = *(_QWORD *)(a2 + 8);
  if ( (v3 & 0x8000) != 0 )
  {
    if ( (v3 & 0x40) != 0 )
    {
      if ( !a3 )
        return;
      v13 = v3 & 0xFFFFFFFFFFFFFFBFLL;
    }
    else
    {
      v13 = v3 | 0x40;
      if ( a3 )
        return;
    }
    *(_QWORD *)(a2 + 8) = v13;
    LOBYTE(v7) = update_func(a2);
    goto LABEL_13;
  }
  v14 = nullptr;
  v16 = 0;
  func_tail_iterator_set(&v14, a2, 0xFFFFFFFFLL);
  v6 = v14;
  v15 = -1;
  if ( !v14 )
    return;
  v7 = 0;
  while ( 1 )
  {
    v8 = sub_4EE820(a1 + 1624, *v6);
    v9 = v8;
    if ( !v8 )
      goto LABEL_10;
    v10 = *((_QWORD *)v8 + 1);
    if ( (v10 & 0x40) == 0 )
    {
      if ( a3 )
        goto LABEL_10;
      v11 = v10 | 0x40;
LABEL_9:
      *((_QWORD *)v9 + 1) = v11;
      v7 |= update_func(v9);
      goto LABEL_10;
    }
    v11 = v10 & 0xFFFFFFFFFFFFFFBFLL;
    if ( a3 )
      goto LABEL_9;
LABEL_10:
    v6 = v14;
    if ( !v14 )
      goto LABEL_13;
    v12 = v15 + 1;
    if ( (int)v14[26] <= v15 + 1 )
      break;
    ++v15;
    if ( v12 >= 0 )
      v6 = (unsigned int *)(*((_QWORD *)v14 + 14) + 8LL * v12);
  }
  lock_func_range(v14, 0);
LABEL_13:
  if ( (_BYTE)v7 )
    sub_3C2B80(a1);
}

