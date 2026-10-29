/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4278F0
// Address: 0x004278F0

//----- (004278F0) --------------------------------------------------------
int __thiscall sub_4278F0(unsigned int *this, const char *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // esi
  unsigned int v5; // ebx
  int *v6; // edi
  const char *v7; // eax
  int v8; // eax
  unsigned int v9; // [esp+14h] [ebp-14h]
  int v10; // [esp+18h] [ebp-10h]

  if ( !a2 )
    return 0;
  v4 = dword_4B6B40;
  sub_4562D0(dword_4B6B40);
  v5 = 0;
  v10 = 0;
  v9 = *(this + 11);
  if ( v9 )
  {
    v6 = (int *)*(this + 10);
    while ( 1 )
    {
      v7 = *(_DWORD *)(*v6 + 20) ? *(const char **)(*v6 + 16) : MultiByteStr;
      v8 = strcmp(v7, a2);
      if ( v8 )
        v8 = v8 < 0 ? -1 : 1;
      if ( !v8 )
        break;
      ++v5;
      ++v6;
      if ( v5 >= v9 )
        goto LABEL_14;
    }
    v10 = *v6;
  }
LABEL_14:
  sub_4562F0(v4);
  return v10;
}
