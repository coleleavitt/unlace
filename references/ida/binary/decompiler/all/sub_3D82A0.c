unsigned __int64 __fastcall sub_3D82A0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  __int64 i; // r12
  __int64 v8; // rdx
  unsigned __int64 result; // rax

  if ( a5 >= *(_QWORD *)(a1 + 256) || (v5 = *(_QWORD *)(a1 + 248) + 32 * a5) == 0 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v6 = 0;
  for ( i = v5 + 8; v6 < a2[1]; result = sub_3D7F70(*a2 + 8 * v8, i) )
    v8 = 3 * v6++;
  return result;
}
