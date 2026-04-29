__int64 __fastcall sub_139080(_QWORD *a1, int a2)
{
  unsigned __int64 v2; // rax

  if ( (unsigned __int64)a2 >= a1[58] || (v2 = *(int *)(a1[57] + 4LL * a2), v2 >= a1[55]) )
  {
    if ( !under_debugger )
      sub_37E160(50442);
    BUG();
  }
  return a1[54] + 104 * v2;
}
