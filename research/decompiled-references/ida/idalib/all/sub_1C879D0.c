__int64 __fastcall sub_1C879D0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int16 *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rsi
  unsigned __int16 *v11; // r12

  v8 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 24), a6, a7, a3, a4, a5);
  if ( v8 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v10 = *(_QWORD *)(a2 + 16);
  v11 = v8;
  if ( v10 && !sub_1C7A830((__int64)a1, v10) )
    return 1;
  else
    return sub_19BD000(
             (_QWORD *)*a1,
             *(_DWORD *)(a2 + 4),
             (*(_QWORD *)a2 & 0x80000LL) != 0,
             (*(_QWORD *)a2 & 0x100000LL) != 0,
             (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL,
             v9,
             a6,
             a7);
}
