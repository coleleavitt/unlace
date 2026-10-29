/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47498
// Address: 0x00047498

//----- (00047498) --------------------------------------------------------
int __fastcall sub_47498(int a1)
{
  pthread_mutex_t *v2; // r7
  int v3; // r3
  int v4; // r2
  int v5; // r3
  int v6; // r3
  int v7; // r2
  unsigned int v8; // r0
  unsigned int v9; // r6
  int v10; // r2
  unsigned int v11; // t1
  __int64 v12; // kr00_8
  int v13; // r3
  int v14; // r3
  int v16; // r1
  unsigned int v17; // r8
  unsigned int v18; // r6
  unsigned __int8 *v19; // r1
  unsigned int v20; // r3
  int v21; // r10
  unsigned __int8 *v22; // r0
  _BYTE *v23; // r0
  int v24; // r6
  char *v25; // r6
  unsigned int v26; // r11
  int v27; // r10
  unsigned __int8 *v28; // r0
  unsigned int v29; // r11
  int v30; // r6
  int v31; // r0
  unsigned __int8 *v32; // r0
  int v33; // [sp+0h] [bp-5Ch]
  unsigned __int8 v34[8]; // [sp+8h] [bp-54h] BYREF
  int v35; // [sp+10h] [bp-4Ch]
  signed int v36; // [sp+14h] [bp-48h]
  int v37; // [sp+18h] [bp-44h]
  int v38; // [sp+1Ch] [bp-40h]
  unsigned __int8 v39[8]; // [sp+20h] [bp-3Ch] BYREF
  int v40; // [sp+28h] [bp-34h]
  int v41; // [sp+2Ch] [bp-30h]
  int v42; // [sp+30h] [bp-2Ch]
  int v43; // [sp+34h] [bp-28h]
  unsigned __int8 v44[8]; // [sp+38h] [bp-24h] BYREF
  int v45; // [sp+40h] [bp-1Ch]
  int v46; // [sp+44h] [bp-18h]
  int v47; // [sp+48h] [bp-14h]
  int v48; // [sp+4Ch] [bp-10h]

  v2 = (pthread_mutex_t *)dword_D3A90;
  sub_7A100((pthread_mutex_t *)dword_D3A90);
  v3 = *(_DWORD *)(a1 + 56);
  if ( !v3 || (v4 = *(_DWORD *)(v3 + 68), v4 <= 0) )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(487);
  }
  *(_DWORD *)(v3 + 68) = v4 - 1;
  sub_7A128(v2);
  v5 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 48) + 1 == v5 )
    goto LABEL_6;
  v16 = *(_DWORD *)(a1 + 12);
  v34[0] = 2;
  v36 = 0;
  v35 = 0;
  v37 = 0;
  v38 = 0;
  if ( sub_461C4(v34, (unsigned __int8 *)(v16 + 24 * v5 - 24)) )
    goto LABEL_35;
  v17 = *(_DWORD *)(a1 + 48);
  if ( v34[0] == 10 && v36 >= (int)v17 )
  {
    if ( sub_45A60(v34, 2) )
    {
      v17 = *(_DWORD *)(a1 + 48);
      goto LABEL_20;
    }
LABEL_35:
    sub_455C8(v34);
    return 0;
  }
LABEL_20:
  v18 = *(_DWORD *)(a1 + 16);
  v33 = a1 + 12;
  if ( v17 != v18 )
  {
    v40 = 0;
    v41 = 0;
    v39[0] = 2;
    v42 = 0;
    v43 = 0;
    if ( v17 >= v18 )
    {
      if ( v17 <= v18 )
      {
LABEL_31:
        sub_455C8(v39);
        v18 = *(_DWORD *)(a1 + 16);
        goto LABEL_32;
      }
      v19 = *(unsigned __int8 **)(a1 + 12);
      v20 = *(_DWORD *)(a1 + 20);
      if ( v19 <= v39 && v39 < &v19[24 * v20] )
      {
        v45 = 0;
        v44[0] = 2;
        v46 = 0;
        v47 = 0;
        v48 = 0;
        sub_459A0(v44, v39);
        if ( v17 > *(_DWORD *)(a1 + 20) )
          *(_DWORD *)(a1 + 12) = sub_77EB0(v33, *(void **)(a1 + 12), v17, 0x18u);
        v29 = *(_DWORD *)(a1 + 16);
        if ( v17 > v29 )
        {
          v30 = 24 * v29;
          do
          {
            v31 = *(_DWORD *)(a1 + 12) + v30;
            *(_BYTE *)v31 = 2;
            *(_DWORD *)(v31 + 8) = 0;
            *(_DWORD *)(v31 + 12) = 0;
            *(_DWORD *)(v31 + 16) = 0;
            *(_DWORD *)(v31 + 20) = 0;
            sub_459A0((unsigned __int8 *)v31, v44);
            ++v29;
            v30 += 24;
          }
          while ( v17 != v29 );
        }
        *(_DWORD *)(a1 + 16) = v17;
        sub_455C8(v44);
        goto LABEL_31;
      }
      if ( v17 <= v20
        || (v32 = (unsigned __int8 *)sub_77EB0(v33, v19, v17, 0x18u),
            v18 = *(_DWORD *)(a1 + 16),
            v19 = v32,
            *(_DWORD *)(a1 + 12) = v32,
            v17 > v18) )
      {
        v21 = 24 * v18;
        while ( 1 )
        {
          v22 = &v19[v21];
          v19[v21] = 2;
          *((_DWORD *)v22 + 2) = 0;
          *((_DWORD *)v22 + 3) = 0;
          *((_DWORD *)v22 + 4) = 0;
          *((_DWORD *)v22 + 5) = 0;
          sub_459A0(&v19[v21], v39);
          ++v18;
          v21 += 24;
          if ( v17 <= v18 )
            break;
          v19 = *(unsigned __int8 **)(a1 + 12);
        }
      }
    }
    else
    {
      v26 = v17;
      v27 = 24 * v17;
      do
      {
        ++v26;
        v28 = (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + v27);
        v27 += 24;
        sub_455C8(v28);
      }
      while ( v18 != v26 );
    }
    *(_DWORD *)(a1 + 16) = v17;
    goto LABEL_31;
  }
LABEL_32:
  v23 = *(_BYTE **)(a1 + 12);
  if ( v18 + 1 > *(_DWORD *)(a1 + 20) )
  {
    v23 = sub_77EB0(v33, *(void **)(a1 + 12), v18 + 1, 0x18u);
    v18 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 12) = v23;
  }
  v24 = 24 * v18;
  v23[v24] = 2;
  v25 = &v23[v24];
  *((_DWORD *)v25 + 3) = 0;
  *((_DWORD *)v25 + 4) = 0;
  *((_DWORD *)v25 + 5) = 0;
  *((_DWORD *)v25 + 2) = 0;
  ++*(_DWORD *)(a1 + 16);
  sub_461C4((unsigned __int8 *)v25, v34);
  sub_455C8(v34);
LABEL_6:
  v6 = *(_DWORD *)(a1 + 40);
  if ( v6 )
  {
    v7 = *(_DWORD *)(a1 + 36);
    v8 = *(_DWORD *)(a1 + 16);
    v9 = *(_DWORD *)(v7 + 4 * (v6 + 0x3FFFFFFF));
    v10 = v7 + 4 * (v6 + 0x3FFFFFFF);
    if ( v9 >= v8 )
    {
      do
      {
        *(_DWORD *)(a1 + 40) = --v6;
        if ( !v6 )
          break;
        v11 = *(_DWORD *)(v10 - 4);
        v10 -= 4;
      }
      while ( v11 >= v8 );
    }
  }
  v12 = *(_QWORD *)(a1 + 24);
  v13 = 16 * (HIDWORD(v12) + 0xFFFFFFF);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(v12 + v13 + 12);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(v12 + v13 + 8);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(v12 + v13 + 4);
  v14 = *(_DWORD *)(v12 + v13);
  *(_DWORD *)(a1 + 56) = v14;
  if ( HIDWORD(v12) )
    *(_DWORD *)(a1 + 28) = HIDWORD(v12) - 1;
  if ( v14 )
    v14 += 16;
  *(_DWORD *)(a1 + 68) = v14;
  return 1;
}
// D3A90: using guessed type int dword_D3A90;
// D5C00: using guessed type char under_debugger;
