/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D308
// Address: 0x0046D308

//----- (0046D308) --------------------------------------------------------
int __usercall sub_46D308@<eax>(int a1@<ebx>, int a2, int a3, __m128i *a4, unsigned int a5, int a6, _DWORD *a7, int a8)
{
  int result; // eax
  char *v9; // esi
  int v10; // [esp+4h] [ebp-98h] BYREF
  _BYTE v11[12]; // [esp+8h] [ebp-94h] BYREF
  int v12[3]; // [esp+14h] [ebp-88h] BYREF
  int v13[30]; // [esp+20h] [ebp-7Ch] BYREF

  if ( a4 && a6 )
  {
    v9 = sub_479836(a4, a5);
    sub_467FF8((int)&v10, a7);
    v12[0] = (int)a4;
    v12[1] = (int)&v9[(_DWORD)a4];
    v12[2] = (int)a4;
    sub_46E5F1(v13, v12, a2, a3, a6, (int)v11, a8);
    result = sub_47105B(v13, (int)a4);
    if ( v11[8] )
      *(_DWORD *)(v10 + 848) &= ~2u;
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, (int)a4);
    return -1;
  }
  return result;
}
