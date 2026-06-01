/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47624D
// Address: 0x0047624D

//----- (0047624D) --------------------------------------------------------
int __usercall sub_47624D@<eax>(int a1@<ebx>, int a2, int a3, _DWORD *a4)
{
  int v5; // ebx
  _BYTE *v6; // esi
  int i; // eax
  int v8; // eax
  int v9; // [esp+1Ch] [ebp-1Ch]

  if ( a2 )
  {
    if ( a3 < 0 )
      goto LABEL_3;
  }
  else if ( a3 )
  {
LABEL_3:
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return 0;
  }
  if ( !a4 )
    goto LABEL_3;
  if ( !a3 )
    return 0;
  v5 = 0;
  sub_469596((int)a4);
  if ( sub_46B1CA(0, a2, (int)a4) )
  {
    v6 = (_BYTE *)a2;
    for ( i = 1; ; i = v9 + 1 )
    {
      v9 = i;
      if ( i == a3 )
        break;
      v8 = sub_476107(0, a2, a4);
      if ( v8 == -1 )
      {
        if ( v6 == (_BYTE *)a2 )
          goto LABEL_14;
        break;
      }
      *v6++ = v8;
      if ( (_BYTE)v8 == 10 )
        break;
    }
    *v6 = 0;
    v5 = a2;
  }
LABEL_14:
  sub_4695AA((int)a4);
  return v5;
}
