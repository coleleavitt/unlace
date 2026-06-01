__int64 __fastcall sub_534D30(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, unsigned __int8 a4)
{
  __int64 result; // rax
  int v5; // edx

  *a2 = a4 | (a3 << 9);
  if ( a3 >= *(_QWORD *)(a1 + 152) )
  {
    if ( !under_debugger )
      interr(886);
LABEL_9:
    BUG();
  }
  result = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * a3);
  if ( !result || (v5 = *(_DWORD *)(result + 64)) == 0 )
  {
    if ( !under_debugger )
      interr(976);
    goto LABEL_9;
  }
  *(_DWORD *)(result + 64) = v5 + 1;
  return result;
}
