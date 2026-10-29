/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B74E
// Address: 0x0047B74E

//----- (0047B74E) --------------------------------------------------------
int __usercall sub_47B74E@<eax>(int a1@<ebx>, int a2@<edi>, CHAR *a3, const CHAR *a4, unsigned int a5, _DWORD *a6)
{
  int v6; // esi
  int v7; // ebx
  int v8; // eax
  int v10; // [esp+Ch] [ebp-10h] BYREF
  int v11[2]; // [esp+10h] [ebp-Ch] BYREF
  char v12; // [esp+18h] [ebp-4h]

  sub_467FF8((int)&v10, a6);
  if ( a5 )
  {
    if ( a3 && a4 )
    {
      v6 = 0x7FFFFFFF;
      if ( a5 <= 0x7FFFFFFF )
      {
        v7 = *(_DWORD *)(v11[0] + 164);
        if ( v7 )
        {
          v8 = sub_4810B4(v11, v7, 0x1001u, a3, a5, a4, a5, *(_DWORD *)(v11[0] + 16));
          if ( v8 )
            v6 = v8 - 2;
          else
            *sub_46B984() = 22;
        }
        else
        {
          v6 = sub_46BD18(0, (int)a3, (int)a4, a5, v11);
        }
      }
      else
      {
        *sub_46B984() = 22;
        sub_467EF4(a1, a2);
      }
    }
    else
    {
      *sub_46B984() = 22;
      sub_467EF4(a1, a2);
      v6 = 0x7FFFFFFF;
    }
  }
  else
  {
    v6 = 0;
  }
  if ( v12 )
    *(_DWORD *)(v10 + 848) &= ~2u;
  return v6;
}
