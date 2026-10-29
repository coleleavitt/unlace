/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001DF50
// Address: 0x000000014001DF50

//----- (000000014001DF50) ----------------------------------------------------
__int64 __fastcall sub_14001DF50(__int64 a1, DWORD a2)
{
  int v3; // eax
  int v4; // ecx
  __int64 result; // rax

  if ( a2 == -1 || a2 == GetCurrentProcessId() )
    return 8;
  v3 = sub_14001D3A0(a2);
  v4 = v3;
  if ( v3 == -1 )
    return 0;
  if ( !v3 )
    return 8;
  result = 8;
  if ( v4 == 1 )
    return 4;
  return result;
}
