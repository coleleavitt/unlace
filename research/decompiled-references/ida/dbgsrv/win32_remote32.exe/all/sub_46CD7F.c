/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46CD7F
// Address: 0x0046CD7F

//----- (0046CD7F) --------------------------------------------------------
int __cdecl sub_46CD7F(unsigned int *a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  int v3; // esi
  signed __int64 v4; // kr00_8
  int v5; // esi
  unsigned int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  v2 = *a1;
  v7 = a1[1];
  v3 = sub_462A90(*(_QWORD *)a1, 31536000);
  v8 = v3 + 70;
  v4 = __PAIR64__(v7, v2) - 31536000LL * v3 - 86400LL * sub_46CBFB(v3 + 70);
  *(_QWORD *)a1 = v4;
  if ( v4 >= 0 )
  {
    v5 = v3 + 70;
    if ( sub_46C933(v8) )
      *a2 = 1;
  }
  else
  {
    *(_QWORD *)a1 = v4 + 31536000;
    if ( sub_46C933(v3 + 69) )
    {
      *a1 = v4 + 31622400;
      a1[1] = __CFADD__(v4 + 31536000, 86400) + ((unsigned __int64)(v4 + 31536000) >> 32);
      *a2 = 1;
    }
    return v3 + 69;
  }
  return v5;
}
