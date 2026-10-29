__int64 __fastcall sub_195E280(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r12

  v5 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 24), a3, a4);
  if ( v5 == 1 )
    return 1;
  v6 = *(_QWORD *)(a2 + 16);
  v7 = v5;
  if ( v6 && !sub_18CBA40((__int64)a1, v6) )
    return 1;
  else
    return sub_19BD000(
             *a1,
             *(unsigned int *)(a2 + 4),
             (*(_QWORD *)a2 & 0x80000LL) != 0,
             (*(_QWORD *)a2 & 0x100000LL) != 0,
             v7 & 0xFFFFFFFFFFFFFFFELL);
}
