/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D3BC0
// Address: 0x080D3BC0

//----- (080D3BC0) --------------------------------------------------------
const char *__cdecl sub_80D3BC0(const char *a1, const char *a2)
{
  int v3; // esi
  int v4; // eax
  const char *v5; // edi
  size_t n; // [esp+1Ch] [ebp-20h]

  v3 = toupper(*(unsigned __int8 *)a2);
  n = strlen(a2 + 1);
  while ( 1 )
  {
    v4 = *(unsigned __int8 *)a1;
    if ( !(_BYTE)v4 )
      break;
    v5 = a1++;
    if ( v3 == toupper(v4) && !strncasecmp(a1, a2 + 1, n) )
      return v5;
  }
  return nullptr;
}
