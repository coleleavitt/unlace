/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66708
// Address: 0x00066708

//----- (00066708) --------------------------------------------------------
int __fastcall sub_66708(int a1, int a2, int a3)
{
  unsigned __int64 v6; // r6
  signed __int64 v7; // r2
  int v8; // r0
  unsigned int v9; // r4
  void *v10; // r0
  int v11; // r5
  __suseconds_t v13; // r0
  unsigned int v14; // r1
  __int64 v15; // r2
  __suseconds_t v16; // r0
  unsigned int v17; // r1
  unsigned __int64 v18; // kr08_8
  unsigned __int64 v19; // r4
  signed __int64 v20; // r2
  _BYTE *v21; // r5
  __suseconds_t v22; // r0
  unsigned int v23; // r1
  signed __int64 v24; // r2
  unsigned __int64 v25; // kr28_8
  int v26; // r0
  void *v27; // r4
  void *v28; // r0
  int v29; // r6
  unsigned int v30; // r7
  void *v31; // r3
  unsigned int v32; // [sp+1Ch] [bp-18h] BYREF
  void *ptr; // [sp+20h] [bp-14h] BYREF
  unsigned int v34; // [sp+24h] [bp-10h]
  int v35; // [sp+28h] [bp-Ch]

  if ( a3 < 0
    || (v13 = sub_78DE0(),
        LODWORD(v15) = 32 * v14,
        HIDWORD(v15) = v14 >> 27,
        (v6 = 63 * (((v15 - v14) << 9) + v14) + v14 + 1000LL * a3 + (unsigned int)v13) == 0) )
  {
    v6 = 0;
    HIDWORD(v7) = -1;
    goto LABEL_3;
  }
  v16 = sub_78DE0();
  v18 = __PAIR64__((__PAIR64__(v17 >> 27, 32 * v17) - v17) >> 23, 15872 * v17) + v17;
  v19 = __PAIR64__(v18 >> 26, 1015872 * v17) - v18 + v17 + (unsigned int)v16;
  if ( v19 >= v6 )
  {
    HIDWORD(v7) = 0;
LABEL_3:
    LODWORD(v7) = 4;
    v8 = sub_665A8(a1, (int)&v32, v7);
    if ( v8 )
      goto LABEL_4;
    return v8;
  }
  LODWORD(v20) = 4;
  HIDWORD(v20) = (v6 - v19) / 0x3E8;
  v8 = sub_665A8(a1, (int)&v32, v20);
  if ( !v8 )
    return v8;
LABEL_4:
  v9 = bswap32(v32);
  v32 = v9;
  if ( v9 )
  {
    v21 = (_BYTE *)(v9 + 1);
    ptr = nullptr;
    v34 = 0;
    v35 = 0;
    if ( v9 != -1 )
    {
      ptr = sub_77EB0((int)&ptr, nullptr, v9 + 1, 1u);
      memset((char *)ptr + v34, 0, (size_t)&v21[-v34]);
      v34 = v9 + 1;
      v21 = ptr;
    }
    v21[v9] = 0;
    if ( v6 )
    {
      v22 = sub_78DE0();
      v24 = (unsigned int)((__int64)(__PAIR64__(v23 >> 27, 32 * v23) - v23) >> 23) + __CFADD__(15872 * v23, v23);
      v25 = __PAIR64__(((_DWORD)v24 << 6) | ((15873 * v23) >> 26), 1015872 * v23)
          - __PAIR64__(v24, 15873 * v23)
          + v23
          + (unsigned int)v22;
      if ( v25 < v6 )
        HIDWORD(v24) = (v6 - v25) / 0x3E8;
    }
    else
    {
      HIDWORD(v24) = -1;
    }
    LODWORD(v24) = v32;
    v26 = sub_665A8(a1, (int)ptr, v24);
    v27 = ptr;
    if ( v26 )
    {
      v28 = *(void **)a2;
      v30 = v34;
      v29 = v35;
      ptr = nullptr;
      v34 = 0;
      v35 = 0;
      if ( !v28 )
      {
        *(_DWORD *)a2 = v27;
        v11 = 1;
        *(_DWORD *)(a2 + 4) = v30;
        *(_DWORD *)(a2 + 8) = v29;
        return v11;
      }
      *(_DWORD *)(a2 + 4) = 0;
      v11 = 1;
      sub_77E08(v28);
      v31 = ptr;
      *(_DWORD *)a2 = v27;
      *(_DWORD *)(a2 + 4) = v30;
      *(_DWORD *)(a2 + 8) = v29;
      v27 = v31;
    }
    else
    {
      v11 = 0;
    }
    if ( v27 )
    {
      v34 = 0;
      sub_77E08(v27);
    }
  }
  else
  {
    v10 = *(void **)a2;
    v11 = 1;
    if ( *(_DWORD *)a2 )
    {
      v11 = 1;
      *(_DWORD *)(a2 + 4) = 0;
      sub_77E08(v10);
      *(_DWORD *)a2 = 0;
      *(_DWORD *)(a2 + 8) = 0;
    }
  }
  return v11;
}
// 66778: variable 'v14' is possibly undefined
// 667E0: variable 'v17' is possibly undefined
// 6685A: variable 'v23' is possibly undefined
