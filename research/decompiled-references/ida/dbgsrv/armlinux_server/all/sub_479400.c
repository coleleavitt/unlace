/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479400
// Address: 0x0000000000479400

//----- (0000000000479400) ----------------------------------------------------
__int64 __fastcall sub_479400(__int64 result, int a2)
{
  __int64 v2; // x3
  __int64 v3; // x19

  v2 = *(_QWORD *)(result + 56);
  if ( v2 != -1 )
  {
    v3 = result;
    if ( a2 < 0 )
    {
      close(v2);
    }
    else
    {
      shutdown(v2, a2);
      close(*(_DWORD *)(v3 + 56));
    }
    *(_QWORD *)(v3 + 56) = -1;
    return -1;
  }
  return result;
}
