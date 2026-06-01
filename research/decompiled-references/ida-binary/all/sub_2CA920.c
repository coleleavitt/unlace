__int64 __fastcall sub_2CA920(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v6; // r13d
  __int64 v7; // rbp
  __int64 result; // rax
  unsigned int v9; // [rsp+Ch] [rbp-3Ch] BYREF
  signed int v10; // [rsp+10h] [rbp-38h] BYREF
  signed int v11; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v6 = *(__int16 *)(sub_1EA6A0(a1 + 384, a2, a3, a4, a5) + 28);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 128LL))(a3);
  sub_2CA480((_DWORD *)(*(_QWORD *)(a1 + 728) + 16LL), v7, v6, (int *)&v9, nullptr, nullptr, a5);
  if ( !(unsigned __int8)sub_2CA720(
                           (_DWORD *)(*(_QWORD *)(a1 + 728) + 16LL),
                           (unsigned int *)&v10,
                           (unsigned int *)&v11,
                           a2,
                           v7,
                           v9,
                           a5,
                           0) )
    return 0xFFFFFFFFLL;
  result = (unsigned int)v10;
  if ( v10 <= v6 && v11 > v6 )
    return (unsigned int)v6;
  return result;
}
