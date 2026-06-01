/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_17770
// Address: 0x00017770

//----- (00017770) --------------------------------------------------------
int __fastcall sub_17770(int a1, int *a2)
{
  int v4; // r0
  _DWORD *v6; // r3
  int v7; // r12
  int v8; // r2
  int v9; // r5
  int v10; // r3
  char *v11; // r0
  const char *v12; // r0
  _DWORD v13[84]; // [sp+4h] [bp-2A8h] BYREF
  _BYTE dest[336]; // [sp+154h] [bp-158h] BYREF

  v4 = off_D497C(a1, v13);
  if ( v4 )
  {
    v12 = sub_15CF8(v4);
    sub_17188("%s: %s\n", "td_thr_get_info", v12);
  }
  if ( (v13[9] & 0xFFFFFFFB) != 1 )
  {
    v6 = *(_DWORD **)(*a2 + 1008);
    if ( !v6 )
      goto LABEL_14;
    v7 = *a2 + 1004;
    do
    {
      v8 = v6[4];
      if ( v8 < v13[16] )
        v6 = (_DWORD *)v6[3];
      else
        v7 = (int)v6;
      if ( v8 >= v13[16] )
        v6 = (_DWORD *)v6[2];
    }
    while ( v6 );
    if ( *a2 + 1004 == v7 || v13[16] < *(_DWORD *)(v7 + 16) )
    {
LABEL_14:
      sub_176D8(*a2, (int)v13, a1);
      v9 = a2[1];
      memcpy(dest, v13, sizeof(dest));
      v10 = *(_DWORD *)(v9 + 4);
      if ( (unsigned int)(v10 + 1) > *(_DWORD *)(v9 + 8) )
      {
        v11 = (char *)sub_78018(v9, *(void **)v9, v10 + 1, 0x150u);
        v10 = *(_DWORD *)(v9 + 4);
        *(_DWORD *)v9 = v11;
      }
      else
      {
        v11 = *(char **)v9;
      }
      memcpy(&v11[336 * v10], dest, 0x150u);
      ++*(_DWORD *)(v9 + 4);
    }
  }
  return 0;
}
// D497C: using guessed type int (__fastcall *off_D497C)(_DWORD, _DWORD);
