__int64 __fastcall sub_100510(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r13d
  __int64 v5; // rbp
  __int64 result; // rax
  unsigned int v7; // [rsp+Ch] [rbp-3Ch] BYREF
  signed int v8; // [rsp+10h] [rbp-38h] BYREF
  signed int v9; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v4 = *(__int16 *)(sub_15D8F0(a1 + 440) + 28);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 128LL))(a3);
  sub_100070((_DWORD *)(*(_QWORD *)(a1 + 760) + 16LL), v5, v4, (int *)&v7, nullptr, nullptr);
  if ( !(unsigned __int8)sub_100310(
                           (_DWORD *)(*(_QWORD *)(a1 + 760) + 16LL),
                           (unsigned int *)&v8,
                           (unsigned int *)&v9,
                           a2,
                           v5,
                           v7,
                           0) )
    return 0xFFFFFFFFLL;
  result = (unsigned int)v8;
  if ( v8 <= v4 && v9 > v4 )
    return (unsigned int)v4;
  return result;
}

