unsigned __int64 __fastcall sub_514490(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v4 = *(_QWORD *)(a2 + 1768);
  v7 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(v4 + 64);
  if ( (unsigned __int8)sub_42D920(a2, &v6, a3, a4) )
    *(_QWORD *)(v4 + 64) = v6;
  return v7 - __readfsqword(0x28u);
}
