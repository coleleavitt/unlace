__int64 __fastcall sub_1FBFF70(__int64 a1, __int64 a2)
{
  char v4; // si
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax

  if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
    sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 84));
  sub_1FBBC70((__int64 *)a1, a2);
  sub_1F95F90(a1 + 8, *(_QWORD *)(a2 + 56));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 80) & 1);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_DWORD *)(a2 + 64) & 0xFFFFF);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_WORD *)(a2 + 66) >> 4);
  v4 = *(_BYTE *)(a2 + 80);
  if ( (v4 & 4) == 0 )
  {
    sub_9B9C90(*(_QWORD *)(a1 + 24), (v4 & 2) != 0);
    v9 = *(_QWORD *)(a2 + 72);
    v10 = *(_QWORD *)(a1 + 24);
    if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) == 0 || ((v9 >> 1) & 3) == 1 )
    {
      result = sub_9B9C90(v10, 0);
      goto LABEL_15;
    }
    sub_9B9C90(v10, 1);
    if ( !(_BYTE)byte_2CCC408 && __cxa_guard_acquire(&byte_2CCC408) )
    {
      qword_2CCC420 &= 0xFFFFFFFE00000000LL;
      qword_2CCC428 = 0;
      qword_2CCC438 = 0;
      __cxa_guard_release(&byte_2CCC408);
    }
    v15 = (__int64 *)(*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v15 )
    {
      v16 = (*(__int64 *)(a2 + 72) >> 1) & 3;
      if ( v16 == 1 )
      {
        v17 = v15[9];
        v15 = nullptr;
        if ( !v17 )
          goto LABEL_13;
        v15 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
        if ( ((v17 >> 1) & 3) != 2 || !v15 )
          goto LABEL_13;
      }
      else if ( v16 != 2 )
      {
        goto LABEL_13;
      }
      v15 = (__int64 *)v15[1];
    }
    else
    {
      v15 = &qword_2CCC420;
    }
LABEL_13:
    result = sub_1FA11E0((__int64 *)(a1 + 8), (__int64)v15, v11, v12, v13, v14);
LABEL_15:
    *(_DWORD *)(a1 + 224) = 117;
    return result;
  }
  result = *(unsigned int *)(a2 + 84);
  if ( (_DWORD)result )
  {
    v6 = (__int64 *)(a2 + 88);
    v7 = a2 + 8LL * (unsigned int)(result - 1) + 96;
    do
    {
      v8 = *v6++;
      result = sub_1F95F90(a1 + 8, v8);
    }
    while ( (__int64 *)v7 != v6 );
  }
  *(_DWORD *)(a1 + 224) = 126;
  return result;
}
