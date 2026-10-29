__int64 __fastcall sub_226E210(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // r12
  unsigned __int64 v6; // rbp

  v3 = a3[1];
  v5 = *a2;
  v6 = a2[1];
  if ( (unsigned __int64)(v3 + 1) > a3[2] )
  {
    sub_2236E10((__int64)a3, a3 + 3, v3 + 1, 1);
    v3 = a3[1];
  }
  *(_BYTE *)(*a3 + v3) = 39;
  ++a3[1];
  if ( v6 > 1 )
    v6 = 2;
  return v5 + v6;
}
