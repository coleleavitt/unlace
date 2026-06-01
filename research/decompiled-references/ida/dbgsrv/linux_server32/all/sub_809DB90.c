/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809DB90
// Address: 0x0809DB90

//----- (0809DB90) --------------------------------------------------------
void __usercall sub_809DB90(_DWORD *a1@<eax>)
{
  void **v2; // esi
  void **v3; // edi
  void *v4; // eax
  void *v5; // [esp-1Ch] [ebp-2Ch]

  v2 = (void **)a1[11];
  v3 = &v2[a1[12]];
  if ( v2 != v3 )
  {
    do
    {
      v5 = *v2++;
      sub_80CF780(v5);
    }
    while ( v3 != v2 );
    v3 = (void **)a1[11];
  }
  if ( v3 )
  {
    a1[12] = 0;
    sub_80CF780(v3);
    a1[11] = 0;
    a1[13] = 0;
  }
  v4 = (void *)a1[8];
  if ( v4 )
  {
    a1[9] = 0;
    sub_80CF780(v4);
    a1[8] = 0;
    a1[10] = 0;
  }
}
