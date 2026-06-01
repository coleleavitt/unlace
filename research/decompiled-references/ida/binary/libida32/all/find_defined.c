__int64 __fastcall find_defined(unsigned int a1, __int16 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  _QWORD *v6; // r13
  unsigned int v7; // edx
  int v9; // [rsp+0h] [rbp-38h] BYREF
  int v10; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( (a2 & 0x800) != 0 )
    callui(9, 0, (int)&v9, (int)&v10, (int)&callui, a6);
  v7 = -(a2 & 1);
  if ( (a2 & 1) != 0 )
    return sub_3BC980(v6, a1, v7, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_3B3450, nullptr);
  else
    return sub_3BCA60(v6, a1, v7, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_3B3450, nullptr);
}

