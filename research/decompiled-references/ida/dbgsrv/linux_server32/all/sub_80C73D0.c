/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C73D0
// Address: 0x080C73D0

//----- (080C73D0) --------------------------------------------------------
int __cdecl sub_80C73D0(unsigned __int8 **a1, int a2)
{
  int v2; // esi
  unsigned __int8 *v3; // edx
  int v4; // eax
  int result; // eax
  unsigned __int8 *v6; // [esp+0h] [ebp-24h] BYREF
  unsigned int v7; // [esp+4h] [ebp-20h]

  v7 = __readgsdword(0x14u);
  v2 = a2;
  v3 = *a1;
  v6 = *a1;
  if ( a2 )
  {
    do
    {
      v4 = sub_80C7170(&v6);
      if ( !v4 )
      {
        v3 = v6;
        result = v2;
        goto LABEL_8;
      }
      if ( v4 == -1 )
        ++v6;
      --v2;
    }
    while ( v2 );
    v3 = v6;
    result = 0;
  }
  else
  {
    result = 0;
  }
LABEL_8:
  *a1 = v3;
  if ( v7 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
