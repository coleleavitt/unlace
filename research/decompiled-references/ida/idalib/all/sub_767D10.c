__int64 __fastcall sub_767D10(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v5 = (unsigned __int8)*qword_2CD44C0;
  if ( (_BYTE)v5 == 115 )
  {
    ++qword_2CD44C0;
    sub_76FA20(&v8, "Swift", 5);
    return (HIBYTE(v8) << 24) | (unsigned __int16)v8 | 0x400000u;
  }
  else if ( (_BYTE)v5 == 83 )
  {
    ++qword_2CD44C0;
    result = sub_767690(a1, (__int64)a2, v5, (char *)&qword_2CD44C0, a5);
    if ( BYTE2(result) != 64 )
      sub_76E6C0(a1, a2, WORD1(result), v7);
  }
  else
  {
    v8 = sub_767A40((char *)&dword_40, a2, v5, (const char *)&qword_2CD44C0, a5);
    sub_772B70(qword_2CD44D0, &v8);
    return v8;
  }
  return result;
}
