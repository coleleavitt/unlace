unsigned __int64 __fastcall sub_69F790(__int64 a1, __int64 *a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 i; // r14
  unsigned int v9; // esi
  __int64 v10; // rsi
  int v13; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v6 = 32LL * *(_QWORD *)(a1 + 40);
  v14 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 32);
  for ( i = v7 + v6; i != v7; v7 += 32 )
  {
    v9 = *(_DWORD *)(v7 + 24);
    if ( v9 != -1 )
    {
      sub_69E890(*(__int64 **)(*a2 + 1480), v9, a3);
      if ( a3 )
        *(_DWORD *)(v7 + 24) = -1;
    }
  }
  v10 = *(unsigned int *)(a1 + 24);
  sub_69F680(a2, v10);
  if ( (get_merge_state(a2, v10) & 2) != 0 )
    sub_3DDD20((__int64)a2, *(_DWORD *)(a1 + 24), 1);
  sub_69E750(a2, *(_DWORD *)(a1 + 24), 1);
  if ( a3 )
  {
    v13 = sub_3B90A0(a2, *(_DWORD *)(a1 + 24));
    sub_79BCF0((int)&v13);
  }
  return v14 - __readfsqword(0x28u);
}

