void __fastcall sub_5CB660(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  unsigned __int64 *v6; // rdi
  int v7; // ebp
  unsigned __int64 *v8; // rax
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  int v15; // [rsp+8h] [rbp-50h]
  __int128 v16; // [rsp+10h] [rbp-48h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( !a2 )
    return;
  v3 = *(_QWORD *)(a2 + 16);
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
    *(_QWORD *)(a2 + 16) = v13;
    LOBYTE(v7) = update_func(a2);
    goto LABEL_13;
  }
  v14 = 0;
  v16 = 0;
  func_tail_iterator_set(&v14, a2, -1);
  v6 = (unsigned __int64 *)v14;
  v15 = -1;
  if ( !v14 )
    return;
  v7 = 0;
  while ( 1 )
  {
    v8 = sub_505D70(a1 + 1704, *v6);
    v9 = v8;
    if ( !v8 )
      goto LABEL_10;
    v10 = v8[2];
    if ( (v10 & 0x40) == 0 )
    {
      if ( a3 )
        goto LABEL_10;
      v11 = v10 | 0x40;
LABEL_9:
      v9[2] = v11;
      v7 |= update_func(v9);
      goto LABEL_10;
    }
    v11 = v10 & 0xFFFFFFFFFFFFFFBFLL;
    if ( a3 )
      goto LABEL_9;
LABEL_10:
    v6 = (unsigned __int64 *)v14;
    if ( !v14 )
      goto LABEL_13;
    v12 = v15 + 1;
    if ( *(_DWORD *)(v14 + 128) <= v15 + 1 )
      break;
    ++v15;
    if ( v12 >= 0 )
      v6 = (unsigned __int64 *)(*(_QWORD *)(v14 + 136) + 16LL * v12);
  }
  lock_func_range(v14, 0);
LABEL_13:
  if ( (_BYTE)v7 )
    sub_3C7CE0(a1);
}
