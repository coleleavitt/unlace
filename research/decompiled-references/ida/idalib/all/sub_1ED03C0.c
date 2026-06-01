__int64 __fastcall sub_1ED03C0(
        __int64 a1,
        size_t *a2,
        _BYTE *a3,
        signed __int64 a4,
        unsigned __int8 a5,
        char a6,
        _QWORD *a7)
{
  __int64 v7; // rax
  __int64 v9; // r11
  size_t *v10; // rsi
  __int64 v11; // rax

  v7 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(v7 + 56);
  v10 = *(size_t **)(v7 + 40);
  v11 = 0;
  if ( a6 )
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL);
  return sub_1ECF9F0(a2, v10, a3, a4, a5, v11, a7, v9, 1);
}
