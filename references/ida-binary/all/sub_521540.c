unsigned __int64 __fastcall sub_521540(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v3 = *a2;
  v4 = a2[1];
  if ( a2[2] < (unsigned __int64)(v4 + 1) )
  {
    v6 = qvector_reserve(a2, v3, v4 + 1, 8);
    *a2 = v6;
    v3 = v6;
    v4 = a2[1];
  }
  *(_QWORD *)(v3 + 8 * v4) = a1;
  ++a2[1];
  return v7 - __readfsqword(0x28u);
}
