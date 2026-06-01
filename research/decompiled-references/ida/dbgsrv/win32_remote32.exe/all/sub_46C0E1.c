/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C0E1
// Address: 0x0046C0E1

//----- (0046C0E1) --------------------------------------------------------
int __usercall sub_46C0E1@<eax>(int a1@<ebx>, _DWORD *a2)
{
  volatile signed __int32 *v2; // esi
  int v3; // edx
  _BYTE *v4; // eax
  int v5; // edi
  int v6; // eax
  _BYTE *v8; // [esp-8h] [ebp-10h]

  v2 = a2 + 3;
  v3 = a2[3];
  if ( (v3 & 3) == 2 && (v3 & 0xC0) != 0 )
  {
    v4 = (_BYTE *)a2[1];
    v5 = *a2 - (_DWORD)v4;
    *a2 = v4;
    a2[2] = 0;
    if ( v5 > 0 )
    {
      v8 = v4;
      v6 = sub_47631B(a1, v5, (int)a2);
      if ( v5 != sub_474842(a1, v5, v6, v8, v5) )
      {
        _InterlockedOr(v2, 0x10u);
        return -1;
      }
      if ( (*v2 & 4) != 0 )
        _InterlockedAnd(v2, 0xFFFFFFFD);
    }
  }
  return 0;
}
