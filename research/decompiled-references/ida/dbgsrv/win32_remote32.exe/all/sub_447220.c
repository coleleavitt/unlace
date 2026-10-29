/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_447220
// Address: 0x00447220

//----- (00447220) --------------------------------------------------------
unsigned int __thiscall sub_447220(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // ebx
  unsigned int result; // eax
  unsigned int v5; // ecx
  _DWORD *v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  unsigned int v10; // edi
  LPVOID v11; // eax
  unsigned int v12; // edi
  LPVOID v13; // eax
  unsigned int v15; // [esp+18h] [ebp-14h]
  unsigned int v16; // [esp+1Ch] [ebp-10h]

  v3 = this;
  result = sub_446C70(this, a2);
  v5 = v3[1];
  if ( v5 >= a2 )
  {
    v3[1] = a2;
  }
  else
  {
    v6 = (_DWORD *)a3;
    v7 = v5 << 8;
    v8 = a2 - v5;
    v15 = v5 << 8;
    v16 = a2 - v5;
    do
    {
      v9 = v7 + *v3;
      *(_DWORD *)v9 = *v6;
      *(_DWORD *)(v9 + 4) = 0;
      *(_DWORD *)(v9 + 8) = 0;
      *(_DWORD *)(v9 + 12) = 0;
      v10 = v6[2];
      if ( v10 )
      {
        v11 = sub_4539E0(v6[2]);
        *(_DWORD *)(v9 + 4) = v11;
        *(_DWORD *)(v9 + 12) = v10;
        sub_464310((unsigned int)v11, v6[1], v10);
        v8 = v16;
        *(_DWORD *)(v9 + 8) = v10;
      }
      *(_DWORD *)(v9 + 16) = v6[4];
      *(_DWORD *)(v9 + 20) = 0;
      *(_DWORD *)(v9 + 24) = 0;
      *(_DWORD *)(v9 + 28) = 0;
      v12 = v6[6];
      if ( v12 )
      {
        v13 = sub_4539E0(v12);
        *(_DWORD *)(v9 + 20) = v13;
        *(_DWORD *)(v9 + 28) = v12;
        sub_464310((unsigned int)v13, v6[5], v12);
        v8 = v16;
        *(_DWORD *)(v9 + 24) = v12;
      }
      qmemcpy((void *)(v9 + 32), v6 + 8, 0xD8u);
      v6 = (_DWORD *)a3;
      *(_BYTE *)(v9 + 248) = *(_BYTE *)(a3 + 248);
      *(_DWORD *)(v9 + 252) = *(_DWORD *)(a3 + 252);
      v3 = this;
      v7 = v15 + 256;
      --v8;
      v15 += 256;
      v16 = v8;
    }
    while ( v8 );
    *(this + 1) = a2;
    return (unsigned int)this;
  }
  return result;
}
