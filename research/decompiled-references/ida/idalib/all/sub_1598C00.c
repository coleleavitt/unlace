_BOOL8 __fastcall sub_1598C00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // rsi

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = (unsigned int)*(unsigned __int8 *)(v4 + 16) - 25;
  if ( (unsigned int)v5 > 1 )
    v4 = sub_F63050(v4, a2, v5, a4);
  v6 = *(_QWORD *)(v4 + 24);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 43 )
    return 0;
  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 35 <= 3 && (v8 = sub_B8C330(a1), (unsigned __int8)sub_B72F20(a1)) )
  {
    v12 = sub_B987D0((_QWORD *)a1, a2);
    v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v13 + 16) - 43 <= 1
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
      && (v13 = sub_F63050(v13, v12, v10, v11)) != 0 )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v13 + 32);
        if ( (*(_BYTE *)(v13 + 18) & 0x10) == 0 )
          break;
        v14 = v12 & 0xFFFFFFFFFFFFFFF0LL;
        v13 = *(_QWORD *)v14;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v14 + 16LL) - 43 > 1 )
          v13 = sub_F63050(v13, v14, v10, v11);
      }
    }
    v9 = sub_A73030(v8, v12, 1u);
  }
  else
  {
    v9 = *(_QWORD *)(**(_QWORD **)(a1 + 120) + 48LL);
  }
  return (*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v6) & 7) == (*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v9) & 7);
}
