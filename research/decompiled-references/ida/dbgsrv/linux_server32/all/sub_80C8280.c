/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C8280
// Address: 0x080C8280

//----- (080C8280) --------------------------------------------------------
int __usercall sub_80C8280@<eax>(int a1@<eax>, int a2@<edx>)
{
  bool v2; // zf
  int v3; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // eax
  __int16 v13; // ax
  _DWORD *v14; // ecx
  int v15; // edx
  __int16 v16; // ax
  int v17; // ebp
  int v18; // eax
  int result; // eax
  int v20; // ebx
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // ax
  _DWORD *v23; // ecx
  int v24; // edx
  __int16 v25; // ax
  __int16 v27; // [esp+0h] [ebp-4Ch]
  __int16 v28; // [esp+0h] [ebp-4Ch]
  int v29; // [esp+8h] [ebp-44h]
  int v30; // [esp+8h] [ebp-44h]
  _DWORD v31[6]; // [esp+14h] [ebp-38h] BYREF
  unsigned int v32; // [esp+2Ch] [ebp-20h]

  v2 = *(_WORD *)(a1 + 8) == 0;
  v3 = *(_DWORD *)a2;
  v32 = __readgsdword(0x14u);
  v31[0] = v3;
  memset(&v31[1], 0, 18);
  if ( v2 )
  {
    v5 = a1 + 10;
    while ( 1 )
    {
      v5 += 2;
      if ( !*(_WORD *)(v5 - 2) )
        break;
      if ( a1 + 22 == v5 )
      {
        if ( (*(_BYTE *)(a1 + 6) & 1) != 0 )
          break;
        sub_80C7E40(a2);
        sub_80C7E40(a1);
        v30 = 114;
        v20 = a1;
        do
        {
          v21 = *(_WORD *)(v20 + 6);
          v22 = *(_WORD *)(a2 + 6);
          v28 = 0;
          if ( v22 >= v21 )
          {
            *(_WORD *)(a2 + 6) = v22 - v21;
            v28 = 1;
          }
          v23 = &v31[5];
          v24 = 0;
          do
          {
            if ( *(__int16 *)v23 < 0 )
              v24 |= 1u;
            v25 = 2 * *(_WORD *)v23;
            if ( (v24 & 2) != 0 )
              v25 |= 1u;
            v23 = (_DWORD *)((char *)v23 - 2);
            v24 *= 2;
            *((_WORD *)v23 + 1) = v25;
          }
          while ( v23 != (_DWORD *)((char *)v31 + 2) );
          HIWORD(v31[4]) |= v28;
          sub_80C7EC0(a2);
          --v30;
        }
        while ( v30 );
        v17 = a2 + 4;
        goto LABEL_21;
      }
    }
  }
  v29 = 114;
  v6 = a1;
  do
  {
    v7 = 4;
    while ( 1 )
    {
      v8 = *(_WORD *)(v6 + v7);
      v9 = *(_WORD *)(a2 + v7);
      if ( v8 != v9 )
        break;
      v7 += 2;
      if ( v7 == 22 )
        goto LABEL_10;
    }
    v13 = 0;
    if ( v9 < v8 )
      goto LABEL_13;
LABEL_10:
    v10 = 9;
    v11 = 0;
    do
    {
      v12 = *(unsigned __int16 *)(a2 + 2 * v10 + 2) - *(unsigned __int16 *)(v6 + 2 * v10 + 2) - v11;
      *(_WORD *)(a2 + 2 * v10 + 2) = v12;
      v11 = HIWORD(v12) & 1;
      --v10;
    }
    while ( v10 );
    v13 = 1;
LABEL_13:
    v27 = v13;
    v14 = &v31[5];
    v15 = 0;
    do
    {
      if ( *(__int16 *)v14 < 0 )
        v15 |= 1u;
      v16 = 2 * *(_WORD *)v14;
      if ( (v15 & 2) != 0 )
        v16 |= 1u;
      v14 = (_DWORD *)((char *)v14 - 2);
      v15 *= 2;
      *((_WORD *)v14 + 1) = v16;
    }
    while ( v14 != (_DWORD *)((char *)v31 + 2) );
    HIWORD(v31[4]) |= v27;
    sub_80C7EC0(a2);
    --v29;
  }
  while ( v29 );
  v17 = a2 + 4;
LABEL_21:
  sub_80C7E40((int)v31);
  sub_80C7E40((int)v31);
  v18 = v17 + 18;
  while ( 1 )
  {
    v17 += 2;
    if ( *(_WORD *)(v17 - 2) )
      break;
    if ( v18 == v17 )
    {
      result = 0;
      goto LABEL_25;
    }
  }
  result = 1;
LABEL_25:
  *(__m128i *)a2 = _mm_loadu_si128((const __m128i *)v31);
  *(_QWORD *)(a2 + 14) = *(_QWORD *)((char *)&v31[3] + 2);
  if ( v32 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
