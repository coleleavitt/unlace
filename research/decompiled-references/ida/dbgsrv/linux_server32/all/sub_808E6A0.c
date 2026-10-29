/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808E6A0
// Address: 0x0808E6A0

//----- (0808E6A0) --------------------------------------------------------
void *__usercall sub_808E6A0@<eax>(int a1@<eax>, int a2@<edx>)
{
  size_t v4; // eax
  int v5; // eax
  unsigned __int8 *v6; // edi
  unsigned __int8 *v7; // esi
  size_t v8; // eax
  int v9; // eax
  void *v11; // eax
  void *v12; // eax
  unsigned __int8 *v13; // [esp+0h] [ebp-28h]
  void *v14; // [esp+4h] [ebp-24h]
  size_t n; // [esp+8h] [ebp-20h]
  size_t na; // [esp+8h] [ebp-20h]

  v14 = (void *)operator new(0x30u);
  *((_DWORD *)v14 + 4) = 0;
  *((_DWORD *)v14 + 5) = 0;
  *((_DWORD *)v14 + 6) = 0;
  v4 = *(_DWORD *)(a1 + 20);
  n = v4;
  if ( v4 )
  {
    v12 = sub_80CF8B0(v4);
    *((_DWORD *)v14 + 6) = n;
    *((_DWORD *)v14 + 4) = v12;
    memcpy(v12, *(const void **)(a1 + 16), n);
    *((_DWORD *)v14 + 5) = n;
  }
  *((_BYTE *)v14 + 28) = 2;
  *((_OWORD *)v14 + 2) = 0;
  sub_8089810((unsigned __int8 *)v14 + 28, (unsigned __int8 *)(a1 + 28));
  *(_DWORD *)v14 = *(_DWORD *)a1;
  v5 = *(_DWORD *)(a1 + 12);
  *((_DWORD *)v14 + 2) = 0;
  *((_DWORD *)v14 + 3) = 0;
  *((_DWORD *)v14 + 1) = a2;
  if ( v5 )
    *((_DWORD *)v14 + 3) = sub_808E6A0();
  v6 = *(unsigned __int8 **)(a1 + 8);
  if ( v6 )
  {
    v7 = (unsigned __int8 *)v14;
    do
    {
      v13 = v7;
      v7 = (unsigned __int8 *)operator new(0x30u);
      *((_DWORD *)v7 + 4) = 0;
      *((_DWORD *)v7 + 5) = 0;
      *((_DWORD *)v7 + 6) = 0;
      v8 = *((_DWORD *)v6 + 5);
      na = v8;
      if ( v8 )
      {
        v11 = sub_80CF8B0(v8);
        *((_DWORD *)v7 + 4) = v11;
        *((_DWORD *)v7 + 6) = na;
        memcpy(v11, *((const void **)v6 + 4), na);
        *((_DWORD *)v7 + 5) = na;
      }
      v7[28] = 2;
      *((_OWORD *)v7 + 2) = 0;
      sub_8089810(v7 + 28, v6 + 28);
      v9 = *(_DWORD *)v6;
      *((_DWORD *)v7 + 2) = 0;
      *((_DWORD *)v7 + 3) = 0;
      *(_DWORD *)v7 = v9;
      *((_DWORD *)v13 + 2) = v7;
      *((_DWORD *)v7 + 1) = v13;
      if ( *((_DWORD *)v6 + 3) )
        *((_DWORD *)v7 + 3) = sub_808E6A0();
      v6 = *((unsigned __int8 **)v6 + 2);
    }
    while ( v6 );
  }
  return v14;
}
