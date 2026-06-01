/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423420
// Address: 0x00423420

//----- (00423420) --------------------------------------------------------
char __thiscall sub_423420(_DWORD *this, char *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [esp-4h] [ebp-34h]
  char v8[8]; // [esp+8h] [ebp-28h] BYREF
  __int128 v9; // [esp+10h] [ebp-20h]
  int v10; // [esp+20h] [ebp-10h]
  int v11; // [esp+2Ch] [ebp-4h]

  v10 = 0;
  if ( sub_424B40(a2, *this + 24 * *(this + 1) - 24) )
    return 0;
  v4 = *(this + 1);
  v11 = 0;
  v8[0] = 2;
  v9 = 0;
  sub_423670(v8, (char *)(*this + 24 * v4 - 24));
  v5 = *(this + 1);
  v10 = 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    *(this + 1) = v6;
    v7 = *this + 24 * v6;
    LOBYTE(v11) = 1;
    sub_423B70(v7);
  }
  v11 = 2;
  sub_423B70((int)v8);
  return 1;
}
