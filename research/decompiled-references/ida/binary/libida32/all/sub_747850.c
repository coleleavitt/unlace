__int64 __fastcall sub_747850(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v5 = (unsigned __int8)*qword_2CAA5C0;
  if ( (_BYTE)v5 == 115 )
  {
    ++qword_2CAA5C0;
    sub_74F560(&v8, "Swift", 5);
    return (HIBYTE(v8) << 24) | (unsigned __int16)v8 | 0x400000u;
  }
  else if ( (_BYTE)v5 == 83 )
  {
    ++qword_2CAA5C0;
    result = sub_7471D0(a1, (__int64)a2, v5, (char *)&qword_2CAA5C0, a5);
    if ( BYTE2(result) != 64 )
      sub_74E200(a1, a2, WORD1(result), v7);
  }
  else
  {
    v8 = sub_747580((char *)&dword_40, a2, v5, (const char *)&qword_2CAA5C0, a5);
    sub_7526B0(qword_2CAA5D0, &v8);
    return v8;
  }
  return result;
}

