/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8069580
// Address: 0x08069580

//----- (08069580) --------------------------------------------------------
void __usercall sub_8069580(_DWORD *a1@<eax>)
{
  _DWORD *v1; // edi
  void *v2; // ebp
  int v3; // esi
  void *v4; // eax

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_8069580();
      v3 = v1[7];
      v1 = (_DWORD *)v1[2];
      while ( v3 )
      {
        sub_80693C0(*(_DWORD **)(v3 + 12));
        v4 = (void *)v3;
        v3 = *(_DWORD *)(v3 + 8);
        operator delete(v4, 0x1Cu);
      }
      operator delete(v2, 0x2Cu);
    }
    while ( v1 );
  }
}
