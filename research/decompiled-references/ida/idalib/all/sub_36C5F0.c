__int64 __fastcall sub_36C5F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int16 v6; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 8);
  v7 = __readfsqword(0x28u);
  if ( v2 >= (unsigned __int64)xmmword_2CCB488
    || (v3 = *(_QWORD *)(qword_2CCB480 + 8 * v2)) == 0
    || (unsigned int)freadbytes(v3, &v6, 2, *(_QWORD *)(a1 + 40) != 0) )
  {
    v4 = -1;
  }
  else
  {
    v4 = v6;
  }
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}
