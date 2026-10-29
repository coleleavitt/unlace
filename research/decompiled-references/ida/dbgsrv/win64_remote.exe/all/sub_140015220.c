/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140015220
// Address: 0x0000000140015220

//----- (0000000140015220) ----------------------------------------------------
__int64 __fastcall sub_140015220(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 *i; // rax
  __int64 *v5; // rdx
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 1088);
  v3 = v2;
  for ( i = (__int64 *)v2[1]; !*((_BYTE *)i + 25); i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 8) >= a2 )
      v3 = i;
    else
      i += 2;
  }
  if ( *((_BYTE *)v3 + 25) || a2 < *((_DWORD *)v3 + 8) )
    v3 = v2;
  v5 = nullptr;
  if ( v3 != v2 )
    v5 = v3 + 5;
  result = -1;
  if ( v5 )
    return *v5;
  return result;
}
