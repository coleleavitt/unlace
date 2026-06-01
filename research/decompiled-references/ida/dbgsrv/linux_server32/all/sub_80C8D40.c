/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C8D40
// Address: 0x080C8D40

//----- (080C8D40) --------------------------------------------------------
int __usercall sub_80C8D40@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ebp
  int v3; // edi
  int v6; // edi
  int v7; // eax
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // eax
  __int16 v13; // ax
  _BYTE *v14; // ecx
  int v15; // edx
  __int16 v16; // ax
  int v17; // eax
  int v18; // ebp
  int v19; // edi
  unsigned __int16 v21; // [esp+0h] [ebp-50h]
  int v22; // [esp+0h] [ebp-50h]
  int v23; // [esp+4h] [ebp-4Ch]
  int v24; // [esp+8h] [ebp-48h]
  _BYTE v25[22]; // [esp+1Ah] [ebp-36h] BYREF
  unsigned int v26; // [esp+30h] [ebp-20h]

  v2 = *(unsigned __int16 *)(a1 + 2);
  v3 = *(unsigned __int16 *)(a2 + 2);
  v26 = __readgsdword(0x14u);
  v24 = v2 - sub_80C7F40(a1);
  memset(v25, 0, sizeof(v25));
  v6 = v3 - sub_80C7F40(a2);
  if ( v24 > v6 )
  {
    v18 = v6;
    v19 = 0;
  }
  else
  {
    do
    {
      v7 = 4;
      while ( 1 )
      {
        v8 = *(_WORD *)(a1 + v7);
        v9 = *(_WORD *)(a2 + v7);
        if ( v8 != v9 )
          break;
        v7 += 2;
        if ( v7 == 22 )
          goto LABEL_5;
      }
      v13 = 0;
      if ( v9 < v8 )
        goto LABEL_8;
LABEL_5:
      v10 = 9;
      v11 = 0;
      do
      {
        v12 = *(unsigned __int16 *)(a2 + 2 * v10 + 2) - *(unsigned __int16 *)(a1 + 2 * v10 + 2) - v11;
        *(_WORD *)(a2 + 2 * v10 + 2) = v12;
        v11 = HIWORD(v12) & 1;
        --v10;
      }
      while ( v10 );
      v13 = 1;
LABEL_8:
      v21 = v13;
      v14 = &v25[20];
      v15 = 0;
      v23 = v6;
      do
      {
        if ( *(__int16 *)v14 < 0 )
          v15 |= 1u;
        v16 = 2 * *(_WORD *)v14;
        if ( (v15 & 2) != 0 )
          v16 |= 1u;
        v14 -= 2;
        v15 *= 2;
        *((_WORD *)v14 + 1) = v16;
      }
      while ( v14 != &v25[2] );
      v17 = v21;
      *(_WORD *)&v25[20] |= v21;
      LOWORD(v17) = *(_WORD *)&v25[20];
      --v6;
      v22 = v17;
      sub_80C7EC0(a2);
    }
    while ( v24 <= v23 - 1 );
    v18 = v6;
    v19 = v22;
  }
  sub_80C87C0(a2, 0, 0, v18, 0);
  if ( v26 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v19;
}
