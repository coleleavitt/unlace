/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3CCFC
// Address: 0x0003CCFC

//----- (0003CCFC) --------------------------------------------------------
int __fastcall sub_3CCFC(_DWORD *a1, const char *a2)
{
  unsigned int v4; // r1
  char v5; // r7
  int v6; // r0
  int v7; // r5
  int v8; // r1
  _BYTE *v9; // r0
  int v11; // [sp+8h] [bp-8h] BYREF

  v4 = sub_3B468(a1, a2, &v11);
  v5 = -7;
  switch ( v11 )
  {
    case 0:
      v6 = 53;
      goto LABEL_11;
    case 1:
      goto LABEL_5;
    case 2:
      v5 = -8;
      goto LABEL_5;
    case 3:
      v5 = -6;
LABEL_5:
      sub_3936C((int)a1, v4);
      v7 = a1[28];
      v8 = *(_DWORD *)(v7 + 4);
      if ( *(_DWORD *)(v7 + 8) >= (unsigned int)(v8 + 1) )
      {
        v9 = *(_BYTE **)v7;
      }
      else
      {
        v9 = qvector_reserve(a1[28], *(void **)v7, v8 + 1, 1u);
        *(_DWORD *)v7 = v9;
        v8 = *(_DWORD *)(v7 + 4);
      }
      v9[v8] = v5;
      ++*(_DWORD *)(v7 + 4);
      ++a1[29];
      return 0;
    case 6:
      v6 = 1565;
      goto LABEL_11;
    default:
      v6 = 1564;
LABEL_11:
      set_qerrno(v6);
      set_error_string(0, a2);
      return set_qerrno(53);
  }
}
