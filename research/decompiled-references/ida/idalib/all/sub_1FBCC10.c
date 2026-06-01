__int64 __fastcall sub_1FBCC10(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _BOOL8 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 result; // rax
  __int64 *v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax

  v4 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL));
  v5 = 0;
  if ( v4 && *(_BYTE *)(v4 + 16) == 16 )
    v5 = *(_QWORD *)(v4 + 32) != 0;
  sub_9B9C90(*(_QWORD *)(a1 + 24), v5);
  if ( *(_BYTE *)(a2 + 81) )
    sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 84));
  sub_1FBCB60((__int64 *)a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_DWORD *)(a2 + 68) & 0xFFFFF);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_WORD *)(a2 + 70) >> 4);
  v6 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL));
  if ( v6 && *(_BYTE *)(v6 + 16) == 16 && *(_QWORD *)(v6 + 32) )
  {
    v9 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v9 )
    {
LABEL_13:
      sub_183F100(a1 + 32, v9);
      goto LABEL_14;
    }
    if ( *(_BYTE *)(v9 + 16) == 16 )
    {
      v9 = *(_QWORD *)(v9 + 32);
      if ( v9 )
        v9 = *(_QWORD *)(a2 + 16LL * *(unsigned int *)(a2 + 84) + 88);
      goto LABEL_13;
    }
    sub_183F100(a1 + 32, 0);
  }
LABEL_14:
  if ( !*(_BYTE *)(a2 + 81) )
  {
    sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned __int8 *)(a2 + 80));
    v18 = *(_QWORD *)(a2 + 72);
    v19 = *(_QWORD *)(a1 + 24);
    if ( (v18 & 0xFFFFFFFFFFFFFFF8LL) == 0 || ((v18 >> 1) & 3) == 1 )
    {
      result = sub_9B9C90(v19, 0);
      goto LABEL_26;
    }
    sub_9B9C90(v19, 1);
    if ( !(_BYTE)byte_2CCC440 && __cxa_guard_acquire(&byte_2CCC440) )
    {
      qword_2CCC460 &= 0xFFFFFFFE00000000LL;
      qword_2CCC468 = 0;
      qword_2CCC478 = 0;
      __cxa_guard_release(&byte_2CCC440);
    }
    v24 = (__int64 *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v24 )
    {
      v25 = (*(__int64 *)(a2 + 72) >> 1) & 3;
      if ( v25 == 1 )
      {
        v26 = v24[9];
        v24 = nullptr;
        if ( !v26 )
          goto LABEL_24;
        v24 = (__int64 *)(v26 & 0xFFFFFFFFFFFFFFF8LL);
        if ( ((v26 >> 1) & 3) != 2 || !v24 )
          goto LABEL_24;
      }
      else if ( v25 != 2 )
      {
        goto LABEL_24;
      }
      v24 = (__int64 *)v24[1];
    }
    else
    {
      v24 = &qword_2CCC460;
    }
LABEL_24:
    result = sub_1FA11E0((__int64 *)(a1 + 8), (__int64)v24, v20, v21, v22, v23);
LABEL_26:
    *(_DWORD *)(a1 + 224) = 116;
    return result;
  }
  result = *(unsigned int *)(a2 + 84);
  if ( (_DWORD)result )
  {
    v11 = (__int64 *)(a2 + 88);
    v12 = a2 + 16LL * (unsigned int)(result - 1) + 104;
    do
    {
      v13 = *v11;
      v11 += 2;
      sub_1F85840(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), v13, *(_QWORD **)(a1 + 24), v7, v8);
      result = sub_1F9A760((__int64 *)(a1 + 8), (__int64 *)*(v11 - 1), v14, v15, v16, v17);
    }
    while ( v11 != (__int64 *)v12 );
  }
  *(_DWORD *)(a1 + 224) = 125;
  return result;
}
