__int64 __fastcall sub_42DA80(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // edx

  v4 = sub_3BDE50(*(_QWORD **)(a1 + 1672), a2);
  v5 = 0;
  if ( v4 >= *a3 )
    LOBYTE(v5) = v4 < a3[1];
  return v5;
}
