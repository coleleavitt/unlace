/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C80C0
// Address: 0x080C80C0

//----- (080C80C0) --------------------------------------------------------
int __usercall sub_80C80C0@<eax>(int a1@<eax>, int *a2@<edx>)
{
  int v3; // eax
  int v4; // eax
  __m128i v5; // xmm0
  __int16 v6; // cx
  __int16 v7; // si
  char v8; // dl
  int v9; // ebp
  int v10; // esi
  unsigned int v11; // ebx
  unsigned __int16 *v12; // edx
  unsigned __int16 *v13; // ecx
  int v14; // eax
  int v15; // ebp
  unsigned int v16; // eax
  unsigned __int16 *v17; // ecx
  unsigned __int16 v18; // dx
  __int16 v19; // di
  int v21; // [esp+Ch] [ebp-50h]
  int v22; // [esp+14h] [ebp-48h]
  int v24; // [esp+1Ch] [ebp-40h]
  _DWORD v25[6]; // [esp+24h] [ebp-38h] BYREF
  unsigned int v26; // [esp+3Ch] [ebp-20h]

  v26 = __readgsdword(0x14u);
  v3 = *a2;
  memset(&v25[1], 0, 18);
  v25[0] = v3;
  v4 = 112;
  while ( !*(_WORD *)(a1 + 18) )
  {
    v5 = _mm_loadu_si128((const __m128i *)(a1 + 4));
    *(_WORD *)(a1 + 4) = 0;
    *(__m128i *)(a1 + 6) = v5;
    v4 -= 16;
    if ( !v4 )
    {
      if ( a2 )
      {
        *(_OWORD *)a2 = 0;
        *(_OWORD *)((char *)a2 + 6) = 0;
      }
      v21 = 0;
      goto LABEL_20;
    }
  }
  v6 = *(_WORD *)(a1 + 18);
  v7 = (unsigned __int8)v6;
  if ( (_BYTE)v6 )
  {
    v8 = 0;
  }
  else
  {
    v17 = (unsigned __int16 *)(a1 + 4);
    do
    {
      v18 = *v17;
      v19 = v7;
      ++v17;
      v7 = v18 << 8;
      *(v17 - 1) = v19 | HIBYTE(v18);
    }
    while ( (unsigned __int16 *)(a1 + 22) != v17 );
    v6 = *(_WORD *)(a1 + 18);
    v8 = v25[5];
    v4 -= 8;
  }
  v21 = 0;
  v9 = 0;
  v10 = a1;
  v22 = v4;
  while ( 1 )
  {
    if ( (v6 & 1) != 0 )
    {
      v24 = v9;
      v11 = 0;
      v12 = (unsigned __int16 *)&v25[5];
      v13 = (unsigned __int16 *)(a2 + 5);
      do
      {
        v14 = *v13;
        v15 = *v12--;
        --v13;
        v16 = v11 + v15 + v14;
        v12[1] = v16;
        v11 = HIWORD(v16);
      }
      while ( v12 != (unsigned __int16 *)((char *)v25 + 2) );
      v9 = v24;
      v8 = v25[5];
    }
    v21 |= v8 & 1;
    ++v9;
    sub_80C7E40(v10);
    sub_80C7E40((int)v25);
    if ( v22 == v9 )
      break;
    v6 = *(_WORD *)(v10 + 18);
    v8 = v25[5];
  }
  *(__m128i *)a2 = _mm_loadu_si128((const __m128i *)v25);
  *(_QWORD *)((char *)a2 + 14) = *(_QWORD *)((char *)&v25[3] + 2);
LABEL_20:
  if ( v26 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v21;
}
