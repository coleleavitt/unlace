/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100062FE0
// Address: 0x0000000100062FE0

//----- (0000000100062FE0) ----------------------------------------------------
__int64 __fastcall sub_100062FE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r15d
  unsigned int v4; // r12d
  int v5; // edx

  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 216LL))(
             a1,
             *(unsigned int *)(a2 + 4),
             1);
  if ( (int)result > 0 )
  {
    v3 = *(_DWORD *)(a2 + 4);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, a2);
    if ( (int)result > 0 )
    {
      v4 = result;
      while ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, a2, 0xFFFFFFFFLL) )
        ;
      v5 = *(_DWORD *)(a2 + 4);
      result = v4;
      if ( v3 != v5 )
      {
        result = 0xFFFFFFFFLL;
        if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 3 )
        {
          sub_100005090(a1, "unexpected event from thread %d arrived (expected thread %d)\n", v5, v3);
          return 0xFFFFFFFFLL;
        }
      }
    }
  }
  return result;
}
