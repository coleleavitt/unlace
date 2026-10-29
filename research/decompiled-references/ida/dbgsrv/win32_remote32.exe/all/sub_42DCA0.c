/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42DCA0
// Address: 0x0042DCA0

//----- (0042DCA0) --------------------------------------------------------
int __thiscall sub_42DCA0(int *this, const char *a2)
{
  unsigned int v3; // eax
  char v4; // bl
  int v5; // esi
  unsigned int v6; // eax
  int v8; // eax
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v3 = sub_42D200(this, a2, &v9);
  switch ( v9 )
  {
    case 0:
      v8 = 53;
      goto LABEL_11;
    case 1:
      v4 = -7;
      goto LABEL_5;
    case 2:
      v4 = -8;
      goto LABEL_5;
    case 3:
      v4 = -6;
LABEL_5:
      sub_42E3C0((int)this, v3);
      v5 = *(this + 26);
      v6 = *(_DWORD *)(v5 + 4) + 1;
      if ( v6 > *(_DWORD *)(v5 + 8) )
        *(_DWORD *)v5 = sub_453B00(v5, *(void **)v5, v6, 1u);
      *(_BYTE *)(*(_DWORD *)(v5 + 4) + *(_DWORD *)v5) = v4;
      ++*(_DWORD *)(v5 + 4);
      ++*(this + 27);
      return 0;
    case 6:
      v8 = 1565;
      goto LABEL_11;
    default:
      v8 = 1564;
LABEL_11:
      sub_45CC20(v8);
      sub_45CB10(0, a2);
      return sub_45CC20(53);
  }
}
