__int64 __fastcall sub_442D30(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( *(int *)a3 < 0 || *(int *)(a3 + 4) < 0 || !*(_QWORD *)(a3 + 16) )
    return 0;
  v4 = sub_48B5B0(a1, a3);
  result = 1;
  if ( v4 != -1 || (result = 0, v3) )
  {
    if ( a2 )
    {
      *a2 = v4;
      a2[1] = v3;
    }
  }
  return result;
}
