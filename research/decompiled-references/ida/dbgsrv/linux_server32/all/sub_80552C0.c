/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80552C0
// Address: 0x080552C0

//----- (080552C0) --------------------------------------------------------
void __usercall sub_80552C0(_DWORD *a1@<eax>, _DWORD *a2@<edx>)
{
  int v3; // edx
  unsigned int v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // ebp
  int v7; // esi
  _DWORD *v8; // edi
  _DWORD *v9; // esi
  _DWORD *v10; // esi
  _DWORD *v11; // edi
  _DWORD *v12; // esi
  _DWORD *v13; // [esp-18h] [ebp-3Ch]
  _DWORD *v14; // [esp-18h] [ebp-3Ch]
  _DWORD *v15; // [esp-18h] [ebp-3Ch]
  _DWORD *v16; // [esp-18h] [ebp-3Ch]

  v3 = a1[3];
  v4 = a2[3];
  v5 = (_DWORD *)(v3 + 4);
  if ( v3 + 4 < v4 )
  {
    do
    {
      v6 = (_DWORD *)*v5;
      v7 = *v5 + 484;
      do
      {
        v13 = v6;
        v6 += 11;
        sub_80C6090(v13);
      }
      while ( (_DWORD *)v7 != v6 );
      ++v5;
      v4 = a2[3];
    }
    while ( (unsigned int)v5 < v4 );
    v3 = a1[3];
  }
  v8 = (_DWORD *)*a1;
  if ( v3 == v4 )
  {
    v12 = (_DWORD *)*a2;
    while ( v12 != v8 )
    {
      v16 = v8;
      v8 += 11;
      sub_80C6090(v16);
    }
  }
  else
  {
    v9 = (_DWORD *)a1[2];
    while ( v9 != v8 )
    {
      v14 = v8;
      v8 += 11;
      sub_80C6090(v14);
    }
    v10 = (_DWORD *)*a2;
    v11 = (_DWORD *)a2[1];
    if ( (_DWORD *)*a2 != v11 )
    {
      do
      {
        v15 = v11;
        v11 += 11;
        sub_80C6090(v15);
      }
      while ( v10 != v11 );
    }
  }
}
