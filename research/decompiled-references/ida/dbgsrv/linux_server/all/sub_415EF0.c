/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415EF0
// Address: 0x0000000000415EF0

//----- (0000000000415EF0) ----------------------------------------------------
__int64 __fastcall sub_415EF0(_DWORD *a1, _QWORD *a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  int v9; // edx
  _OWORD v10[12]; // [rsp+0h] [rbp-108h] BYREF
  __int128 v11; // [rsp+C0h] [rbp-48h]
  __int64 v12; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v13; // [rsp+D8h] [rbp-30h]

  v6 = a4;
  v13 = __readfsqword(0x28u);
  *a2 = 0;
  if ( !a4 )
    return 1;
  memset(v10, 255, sizeof(v10));
  v12 = -1;
  v11 = -1;
  if ( !ptrace(PTRACE_GETREGS, a3, 0, v10, a5, a6) )
  {
    if ( v6 == *((_QWORD *)&v11 + 1) )
    {
      v9 = a1[231];
    }
    else
    {
      if ( v6 != v12 )
        return 1;
      v9 = a1[232];
    }
    if ( !(unsigned __int8)sub_415E60(a1, a3, v9, a2) )
      return 0xFFFFFFFFLL;
    return 1;
  }
  return 0xFFFFFFFFLL;
}
