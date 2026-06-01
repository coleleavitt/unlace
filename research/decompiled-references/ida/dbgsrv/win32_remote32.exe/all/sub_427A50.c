/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427A50
// Address: 0x00427A50

//----- (00427A50) --------------------------------------------------------
int __thiscall sub_427A50(_DWORD *this, const char *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // esi
  int v5; // edi
  const char *v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // [esp+10h] [ebp-10h]

  if ( !a2 )
    return 0;
  v4 = dword_4B6B40;
  sub_4562D0(dword_4B6B40);
  v5 = *(this + 13);
  v9 = v5 + 40 * *(this + 14);
  if ( v5 == v9 )
  {
LABEL_10:
    v8 = 0;
  }
  else
  {
    while ( 1 )
    {
      v6 = MultiByteStr;
      if ( *(_DWORD *)(v5 + 4) )
        v6 = *(const char **)v5;
      v7 = strcmp(v6, a2);
      if ( v7 )
        v7 = v7 < 0 ? -1 : 1;
      if ( !v7 )
        break;
      v5 += 40;
      if ( v5 == v9 )
        goto LABEL_10;
    }
    v8 = v5 + 16;
  }
  sub_4562F0(v4);
  return v8;
}
