/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_21A20
// Address: 0x00021A20

//----- (00021A20) --------------------------------------------------------
bool __cdecl sub_21A20(_DWORD *a1)
{
  int v1; // esi
  int v2; // edi
  void *v4[2]; // [esp+18h] [ebp-24h] BYREF
  int v5; // [esp+20h] [ebp-1Ch]
  unsigned int v6; // [esp+28h] [ebp-14h]

  v6 = __readgsdword(0x14u);
  v1 = a1[19];
  v4[0] = nullptr;
  v4[1] = nullptr;
  v5 = 0;
  if ( sub_21B40((int)a1, (int *)v4, 0) == 1 )
    sub_22310((int)a1, (int *)v4);
  sub_214C0(a1);
  v2 = a1[19];
  if ( v4[0] )
  {
    sub_1BDA0((int *)v4, 0);
    qfree(v4[0]);
    v4[0] = nullptr;
    v5 = 0;
  }
  return v2 != v1;
}
