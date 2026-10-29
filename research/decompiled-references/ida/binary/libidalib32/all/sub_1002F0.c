__int64 __fastcall sub_1002F0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r13d
  __int64 result; // rax
  unsigned int v6; // [rsp+Ch] [rbp-3Ch] BYREF
  signed int v7; // [rsp+10h] [rbp-38h] BYREF
  signed int v8; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v4 = *(__int16 *)(sub_15D010(a1 + 440) + 28);
  LODWORD(a3) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 128LL))(a3);
  sub_FFE50((_DWORD *)(*(_QWORD *)(a1 + 752) + 16LL), a3, v4, (int *)&v6, nullptr, nullptr);
  if ( !(unsigned __int8)sub_1000F0(
                           (_DWORD *)(*(_QWORD *)(a1 + 752) + 16LL),
                           (unsigned int *)&v7,
                           (unsigned int *)&v8,
                           a2,
                           a3,
                           v6,
                           0) )
    return 0xFFFFFFFFLL;
  result = (unsigned int)v7;
  if ( v7 <= v4 && v8 > v4 )
    return (unsigned int)v4;
  return result;
}

