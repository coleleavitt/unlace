__int64 __fastcall sub_20C2FB0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  bool v8; // zf
  __int64 result; // rax

  v2 = sub_21F9080();
  v3 = *a1;
  if ( v2 == a2 )
    return v3 + 1816;
  if ( sub_21F9090() == a2 )
    return v3 + 1840;
  if ( sub_21F90A0() == a2 )
    return v3 + 1864;
  if ( sub_21F90B0(a1, a2) == a2 )
    return v3 + 1888;
  if ( sub_21F90E0(a1, a2, v4) == a2 )
    return v3 + 1960;
  v5 = sub_21F90C0();
  v6 = v3 + 1984;
  v7 = v3 + 2008;
  v8 = v5 == a2;
  result = v6;
  if ( !v8 )
    return v7;
  return result;
}
