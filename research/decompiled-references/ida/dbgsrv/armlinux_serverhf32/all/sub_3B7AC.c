/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B7AC
// Address: 0x0003B7AC

//----- (0003B7AC) --------------------------------------------------------
int __fastcall sub_3B7AC(_DWORD *a1, char *a2)
{
  unsigned int v4; // r0
  char v5; // r7
  int v6; // r4
  int v7; // r3
  _BYTE *v8; // r0
  int result; // r0
  int v10; // [sp+0h] [bp-Ch] BYREF

  v4 = sub_3ADD8(a1, a2, &v10);
  switch ( v10 )
  {
    case 0:
      sub_70A2C(53);
      goto LABEL_9;
    case 1:
      v5 = -7;
      goto LABEL_3;
    case 2:
      v5 = -8;
      goto LABEL_3;
    case 3:
      v5 = -6;
LABEL_3:
      sub_3A6E4((int)a1, v4);
      v6 = a1[28];
      v7 = *(_DWORD *)(v6 + 4);
      if ( (unsigned int)(v7 + 1) > *(_DWORD *)(v6 + 8) )
      {
        v8 = sub_77EB0(a1[28], *(void **)v6, v7 + 1, 1u);
        v7 = *(_DWORD *)(v6 + 4);
        *(_DWORD *)v6 = v8;
      }
      else
      {
        v8 = *(_BYTE **)v6;
      }
      v8[v7] = v5;
      result = 0;
      ++*(_DWORD *)(v6 + 4);
      ++a1[29];
      return result;
    case 6:
      sub_70A2C(1565);
      goto LABEL_9;
    default:
      sub_70A2C(1564);
LABEL_9:
      sub_70A98(0, a2);
      return sub_70A2C(53);
  }
}
