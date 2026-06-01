__int64 __fastcall sub_608C40(__int64 a1, char a2)
{
  __int64 v3; // rsi
  __int64 v4; // r12
  unsigned int v5; // eax
  __int64 v6; // rcx
  char v7; // dl
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 result; // rax
  void *v12; // rdi
  __int64 v13; // rbp
  unsigned int i; // r14d
  int v15; // eax
  int v16; // eax
  __int64 v17; // rbp
  unsigned int j; // r14d
  int v19; // r13d
  int v20; // eax
  __int64 v21; // [rsp+0h] [rbp-58h]
  unsigned int v23; // [rsp+Ch] [rbp-4Ch]
  int v24; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 1480) + 2240LL;
  v5 = sub_79B3A0(v4, v3, 0xFFFFFFFFLL, 65);
  *(_DWORD *)(a1 + 16) = 0;
  v6 = 0;
  v23 = v5;
  v21 = a1 + 24;
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    v7 = sub_79BBD0(v4, *(_QWORD *)(a1 + 8), &v24, v6, 65);
    v8 = -1;
    if ( v7 )
      v8 = v24;
    v9 = *(unsigned int *)(a1 + 16);
    v10 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 20) = v8;
    sub_79B6F0(v4, v10, v21, v9, 83);
    result = (**(__int64 (__fastcall ***)(__int64))a1)(a1);
    *(_DWORD *)(a1 + 84) = result;
    if ( (_DWORD)result )
      return result;
    if ( !a2 )
    {
      *(_DWORD *)(a1 + 80) = 0;
      if ( (unsigned int)sub_605DD0(
                           *(_QWORD *)(a1 + 8),
                           *(_DWORD *)(a1 + 20),
                           (__int64 (__fastcall *)(__int64, const char *, _QWORD, __int64))sub_606630,
                           a1) != 1 )
        return *(unsigned int *)(a1 + 84);
      v12 = *(void **)(a1 + 56);
      if ( v12 )
      {
        *(_QWORD *)(a1 + 64) = 0;
        qfree(v12);
        *(_QWORD *)(a1 + 56) = 0;
        *(_QWORD *)(a1 + 72) = 0;
      }
      v13 = *(_QWORD *)(a1 + 8);
      v24 = *(_DWORD *)(a1 + 20);
      for ( i = sub_79B7E0(&v24, v13, 65); i != -1; i = sub_79B840(&v24, v13, i, 65) )
      {
        v15 = sub_79B3A0(&v24, v13, i, 65);
        v16 = sub_3B9110(*(_QWORD **)(v13 + 1480), v15);
        *(_DWORD *)(a1 + 80) = i;
        *(_DWORD *)(a1 + 48) = v16;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        *(_DWORD *)(a1 + 84) = result;
        if ( (_DWORD)result )
          return result;
      }
      v17 = *(_QWORD *)(a1 + 8);
      v24 = *(_DWORD *)(a1 + 20);
      for ( j = sub_79B7E0(&v24, v17, 79); j != -1; j = sub_79B840(&v24, v17, j, 79) )
      {
        v19 = sub_79B3A0(&v24, v17, j, 79);
        v20 = sub_3B9110(*(_QWORD **)(v17 + 1480), j);
        *(_DWORD *)(a1 + 80) = v19;
        *(_DWORD *)(a1 + 48) = v20;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
        *(_DWORD *)(a1 + 84) = result;
        if ( (_DWORD)result )
          return result;
      }
    }
    v6 = (unsigned int)(*(_DWORD *)(a1 + 16) + 1);
    *(_DWORD *)(a1 + 16) = v6;
    if ( (unsigned int)v6 >= v23 )
      return 0;
  }
}

