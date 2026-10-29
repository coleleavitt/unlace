__int64 __fastcall sub_3BEFE0(__int64 a1, int a2)
{
  _DWORD *v2; // rax
  int segm_base; // edx
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned int v6; // esi

  v2 = (_DWORD *)sub_4EE820(a1 + 1552, (unsigned int)(a2 - 1));
  if ( !v2 || *v2 == a2 )
    return 0;
  segm_base = get_segm_base(v2);
  result = 32;
  v5 = a2 - segm_base;
  v6 = v5;
  if ( !v5 )
    return result;
  if ( (v5 & 1) != 0 )
    return 0;
  LODWORD(result) = 0;
  do
  {
    v6 >>= 1;
    result = (unsigned int)(result + 1);
  }
  while ( (v6 & 1) == 0 );
  return result;
}

