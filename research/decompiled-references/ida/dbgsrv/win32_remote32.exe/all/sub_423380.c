/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423380
// Address: 0x00423380

//----- (00423380) --------------------------------------------------------
void __thiscall sub_423380(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // [esp-4h] [ebp-34h]
  char v6[8]; // [esp+8h] [ebp-28h] BYREF
  __int128 v7; // [esp+10h] [ebp-20h]
  int v8; // [esp+20h] [ebp-10h]
  int v9; // [esp+2Ch] [ebp-4h]

  v8 = 0;
  v2 = *(this + 4);
  v9 = 0;
  v6[0] = 2;
  v7 = 0;
  sub_423670(v6, (char *)(*(this + 3) + 24 * v2 - 24));
  v3 = *(this + 4);
  v8 = 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    *(this + 4) = v4;
    v5 = *(this + 3) + 24 * v4;
    LOBYTE(v9) = 1;
    sub_423B70(v5);
  }
  v9 = 2;
  sub_423B70((int)v6);
}
