/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A54C
// Address: 0x0008A54C

//----- (0008A54C) --------------------------------------------------------
int __fastcall sub_8A54C(_DWORD *a1, unsigned __int8 *a2, size_t a3)
{
  _DWORD *v4; // r3
  int v6; // r0
  int result; // r0
  unsigned int v8; // r0
  unsigned int v9; // r1
  unsigned int v10; // [sp+4h] [bp-8h]
  _DWORD *v11; // [sp+8h] [bp-4h]

  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  if ( !a1[9] )
    return -2;
  v4 = (_DWORD *)a1[7];
  if ( !v4 )
    return -2;
  if ( (_DWORD *)*v4 != a1 )
    return -2;
  v6 = v4[1];
  if ( (unsigned int)(v6 - 16180) > 0x1F )
    return -2;
  v11 = (_DWORD *)a1[7];
  if ( v4[3] )
  {
    if ( v6 != 16190 )
      return -2;
LABEL_17:
    v10 = a3;
    v8 = sub_8EC00(0, nullptr, 0);
    v9 = sub_8EC00(v8, a2, v10);
    result = -3;
    a3 = v10;
    if ( v9 != v11[7] )
      return result;
    goto LABEL_18;
  }
  if ( v6 == 16190 )
    goto LABEL_17;
LABEL_18:
  if ( sub_8A3E8((int)a1, (int)&a2[a3], a3) )
  {
    v11[1] = 16210;
    return -4;
  }
  else
  {
    v11[4] = 1;
    return 0;
  }
}
