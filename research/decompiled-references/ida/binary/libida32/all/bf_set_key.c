__int64 __fastcall bf_set_key(_DWORD *a1, __int64 a2, unsigned int a3)
{
  _DWORD *v3; // r9
  unsigned __int64 v5; // rdi
  unsigned int v8; // edx
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // ecx
  unsigned int v12; // esi
  _DWORD *v13; // r10
  unsigned int v14; // esi
  _DWORD *v15; // rdi
  _DWORD *v16; // rcx
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // r11d
  int v20; // eax
  int v21; // ebx
  int v22; // r11d
  _DWORD *v23; // r10
  _DWORD *v24; // r9
  _DWORD *v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // eax
  unsigned int v28; // esi

  v3 = a1 + 18;
  v5 = (unsigned __int64)(a1 + 20);
  v8 = 0;
  v9 = 0;
  *(_QWORD *)(v5 - 8) = 0x98DFB5ACD1310BA6LL;
  *(_QWORD *)(v5 + 4080) = 0x3AC372E6578FDFE3LL;
  qmemcpy(
    (void *)(v5 & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)&qword_2398600 - ((char *)v3 - (v5 & 0xFFFFFFFFFFFFFFF8LL))),
    8 * (((unsigned int)v3 - (v5 & 0xFFFFFFF8) + 4096) >> 3));
  do
  {
    LODWORD(result) = 4;
    v11 = 0;
    do
    {
      v12 = v8 + 1;
      v11 = *(unsigned __int8 *)(a2 + v8) | (v11 << 8);
      if ( v8 + 1 >= a3 )
        v12 = 0;
      v8 = v12;
      LODWORD(result) = result - 1;
    }
    while ( (_DWORD)result );
    a1[v9] = *(_DWORD *)((char *)&unk_2399600 + v9 * 4) ^ v11;
    ++v9;
  }
  while ( v9 != 18 );
  v13 = a1;
  v14 = 0;
  v15 = a1 + 16;
  do
  {
    v16 = a1;
    v17 = v14;
    do
    {
      v18 = *v16 ^ result;
      v19 = v17;
      ++v16;
      v17 = v18;
      LODWORD(result) = v19
                      ^ (a1[(unsigned __int8)v18 + 786]
                       + (a1[BYTE1(v18) + 530] ^ (a1[BYTE2(v18) + 274] + a1[HIBYTE(v18) + 18])));
    }
    while ( v16 != v15 );
    v13 += 2;
    v14 = a1[16] ^ result;
    v20 = a1[17];
    *(v13 - 1) = v14;
    LODWORD(result) = v17 ^ v20;
    *(v13 - 2) = result;
  }
  while ( v13 != v3 );
  v21 = a1[16];
  v22 = a1[17];
  v23 = a1 + 274;
  do
  {
    v24 = v23 - 256;
    do
    {
      v25 = a1;
      v26 = v14;
      do
      {
        v27 = *v25 ^ result;
        v28 = v26;
        ++v25;
        v26 = v27;
        LODWORD(result) = v28
                        ^ (a1[(unsigned __int8)v27 + 786]
                         + (a1[BYTE1(v27) + 530] ^ (a1[BYTE2(v27) + 274] + a1[HIBYTE(v27) + 18])));
      }
      while ( v15 != v25 );
      v24 += 2;
      v14 = v21 ^ result;
      result = v22 ^ v26;
      *(v24 - 1) = v14;
      *(v24 - 2) = result;
    }
    while ( v24 != v23 );
    v23 = v24 + 256;
  }
  while ( a1 + 1298 != v24 + 256 );
  return result;
}

