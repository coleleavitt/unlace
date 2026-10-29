/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6517C
// Address: 0x0006517C

//----- (0006517C) --------------------------------------------------------
int __fastcall sub_6517C(_DWORD *a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v10; // r0
  unsigned int v11; // r10
  unsigned int v12; // r11
  _DWORD *v13; // r3
  int v14; // r2
  unsigned int v15; // r10
  unsigned int v16; // r11
  _DWORD *v17; // r3
  int (*v18)(); // r2
  unsigned int v19; // [sp+0h] [bp-Ch] BYREF

  if ( a2 == 8 )
  {
    v8 = sub_64F94(a1, &v19, a3);
    if ( v8 )
      return 0;
    v15 = v19;
    v16 = 2 * v19;
    v17 = &a1[3 * v19];
    v17[116] = a2;
    v17[117] = a3;
    v14 = *a1;
    if ( *(int (**)())(*a1 + 316) != sub_150D8 )
    {
      v8 = (*(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 316))(a1, a2, a3, a4);
      v14 = *a1;
    }
    a1[v15 + 118 + v16] = v8;
  }
  else
  {
    v10 = sub_6502C(a1, &v19, a3);
    if ( v10 )
      return 0;
    v11 = v19;
    v12 = 2 * v19;
    v13 = &a1[3 * v19];
    v13[164] = a2;
    v13[165] = a3;
    v14 = *a1;
    if ( *(int (**)())(*a1 + 320) != sub_150DC )
    {
      v10 = (*(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 320))(a1, a2, a3, a4);
      v14 = *a1;
    }
    a1[v11 + 166 + v12] = v10;
  }
  v18 = *(int (**)())(v14 + 324);
  if ( v18 == sub_150E0 )
    return 0;
  return ((int (__fastcall *)(_DWORD *))v18)(a1);
}
