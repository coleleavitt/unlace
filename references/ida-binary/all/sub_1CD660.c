unsigned __int64 __fastcall sub_1CD660(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v1 = a1[1];
  v11 = __readfsqword(0x28u);
  v2 = *a1;
  if ( a1[2] < (unsigned __int64)(v1 + 1) )
  {
    v9 = qvector_reserve(a1, v2, v1 + 1, 8);
    *a1 = v9;
    v2 = v9;
    v1 = a1[1];
  }
  *(_QWORD *)(v2 + 8 * v1) = 0x3FC99999A0000000LL;
  v3 = a1[1];
  v4 = a1[2];
  v5 = *a1;
  v6 = v3 + 1;
  v7 = v3 + 2;
  a1[1] = v6;
  if ( v4 < v7 )
  {
    v10 = qvector_reserve(a1, v5, v7, 8);
    *a1 = v10;
    v5 = v10;
    v6 = a1[1];
  }
  *(_QWORD *)(v5 + 8 * v6) = 0x3FE99999A0000000LL;
  ++a1[1];
  return v11 - __readfsqword(0x28u);
}
