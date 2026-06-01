/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100056114
// Address: 0x0000000100056114

//----- (0000000100056114) ----------------------------------------------------
__int64 __fastcall sub_100056114(__int64 a1, __int64 a2, off_t a3, int a4, __int64 a5)
{
  off_t v7; // x23
  unsigned int v10; // w8
  _BOOL4 v12; // w24
  __int64 v13; // x0
  unsigned __int64 v14; // x22
  int v15; // w25
  char *v16; // x1
  unsigned __int64 v17; // x8
  unsigned __int64 v18; // x2
  char *v19; // x23
  __int64 result; // x0
  int v21; // w8
  void *v22; // x8
  __int64 v23; // x26
  unsigned int v24; // w25
  int v25; // w27
  __int64 v26; // x28
  _DWORD *v27; // x23
  int v28; // w22
  _QWORD *v29; // x1
  __int64 v30; // x8
  unsigned __int64 v31; // x2
  _QWORD *v32; // x8
  __int64 v33; // x9
  int v34; // w10
  unsigned int v35; // w11
  unsigned int v36; // w10
  unsigned int v37; // w9
  int v38; // w10
  int v39; // w10
  __int64 v40; // x2
  __int64 v41; // x20
  unsigned int v42; // w22
  int v43; // w8
  int v44; // w9
  __int64 v45; // x8
  _QWORD *v46; // x21
  __int64 v47; // x19
  int v48; // [xsp+28h] [xbp-78h]
  void *v49; // [xsp+30h] [xbp-70h] BYREF
  unsigned __int64 v50; // [xsp+38h] [xbp-68h]
  unsigned __int64 v51; // [xsp+40h] [xbp-60h]

  v7 = a3;
  *(_QWORD *)(a1 + 16) = 0;
  v49 = nullptr;
  v50 = 0;
  v51 = 0;
  v10 = *(_DWORD *)(a1 + 128);
  v12 = v10 < 0x1000 && v10 == *(_DWORD *)(a1 + 132);
  qlseek(a2, a3, 0);
  if ( v7 == -1 )
    v7 = qlseek(a2, 0, 1);
  v13 = qlsize(a2);
  LODWORD(v14) = 0;
  if ( (v7 & 0x8000000000000000LL) == 0 && ((v13 - v7) & 0x8000000000000000LL) == 0 )
  {
    if ( (a4 & 0x80000000) == 0 && v13 - v7 >= (unsigned __int64)(40LL * a4) )
      goto LABEL_15;
    v14 = (v13 - v7) / 0x28uLL;
  }
  a4 = v14;
  if ( (unsigned int)sub_10001BF64() != 1 )
    sub_10001BFD4(0);
LABEL_15:
  if ( a4 < 1 )
  {
LABEL_25:
    if ( !v12 && *(_DWORD *)(a1 + 72) != 23126 )
      goto LABEL_32;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
    if ( (_DWORD)result )
      goto LABEL_74;
    if ( v12 )
      v21 = *(_DWORD *)(a1 + 132);
    else
LABEL_32:
      v21 = 512;
    if ( (unsigned int)*(unsigned __int16 *)(a1 + 164) - 10 < 4 || *(_DWORD *)(a1 + 72) == 23126 )
      v21 = 1;
    v48 = a4;
    if ( a4 < 1 )
    {
      v24 = 0;
LABEL_62:
      if ( *(_DWORD *)(a1 + 72) == 23126 )
        *(_DWORD *)(a1 + 152) = v24;
      if ( v48 != 0 && !v12 )
      {
        result = 0;
        v22 = v49;
        if ( !v49 )
          return result;
LABEL_75:
        v50 = 0;
        v47 = result;
        qfree(v22);
        return v47;
      }
      v41 = qlsize(a2);
      v42 = *(_DWORD *)(a1 + 152);
      if ( (unsigned int)*(unsigned __int16 *)(a1 + 164) - 10 >= 4 )
      {
        v43 = 511;
        if ( *(_DWORD *)(a1 + 128) != 4096 )
        {
          v44 = *(_DWORD *)(a1 + 132);
          if ( v44 )
            v43 = v44 - 1;
          else
            v43 = 511;
        }
        v42 = (v43 + v42) & ~v43;
      }
      v46 = *(_QWORD **)(a1 + 8);
      v45 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v45 + 1) )
      {
        v46 = qvector_reserve((_QWORD *)(a1 + 8), *(_QWORD **)(a1 + 8), v45 + 1, 0x20u);
        *(_QWORD *)(a1 + 8) = v46;
        v45 = *(_QWORD *)(a1 + 16);
      }
      memmove(v46 + 4, v46, 32 * v45);
      result = 0;
      *v46 = 0;
      v46[1] = v42;
      v46[2] = 0;
      v46[3] = v41;
      ++*(_QWORD *)(a1 + 16);
    }
    else
    {
      v23 = 0;
      v24 = 0;
      v25 = -v21;
      v26 = 40LL * (unsigned int)a4;
      while ( 1 )
      {
        v27 = (char *)v49 + v23;
        v28 = *(_DWORD *)((char *)v49 + v23 + 20);
        v29 = *(_QWORD **)(a1 + 8);
        v30 = *(_QWORD *)(a1 + 16);
        v31 = v30 + 1;
        if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v30 + 1) )
        {
          v29 = qvector_reserve((_QWORD *)(a1 + 8), v29, v31, 0x20u);
          *(_QWORD *)(a1 + 8) = v29;
          v30 = *(_QWORD *)(a1 + 16);
          v31 = v30 + 1;
        }
        v32 = &v29[4 * v30];
        *(_QWORD *)(a1 + 16) = v31;
        *v32 = (unsigned int)v27[3];
        LODWORD(v33) = v27[4];
        v34 = v27[2];
        if ( !v34 )
          v34 = v27[4];
        v35 = *(_DWORD *)(a1 + 128);
        if ( v35 <= 1 )
          v35 = 1;
        v36 = (v35 + v34 - 1) & -v35;
        if ( v36 >= (unsigned int)v33 )
          v33 = (unsigned int)v33;
        else
          v33 = v36;
        v32[3] = v33;
        v37 = v33 + v27[3];
        if ( (unsigned int)*(unsigned __int16 *)(a1 + 164) - 10 >= 4 )
        {
          if ( *(_DWORD *)(a1 + 128) == 4096 )
          {
            v38 = 511;
          }
          else
          {
            v39 = *(_DWORD *)(a1 + 132);
            if ( v39 )
              v38 = v39 - 1;
            else
              v38 = 511;
          }
          v37 = (v38 + v37) & ~v38;
        }
        v40 = v28 & (unsigned int)v25;
        v32[1] = v37;
        v32[2] = v40;
        if ( *(_DWORD *)(a1 + 72) == 23126 )
          v32[2] = v40 - *(unsigned __int16 *)(a1 + 38) + 40;
        result = (**(__int64 (__fastcall ***)(__int64, _DWORD *))a5)(a5, v27);
        if ( (_DWORD)result )
          break;
        if ( v24 <= v27[2] + v27[3] )
          v24 = v27[2] + v27[3];
        v23 += 40;
        if ( v26 == v23 )
          goto LABEL_62;
      }
    }
LABEL_74:
    v22 = v49;
    if ( !v49 )
      return result;
    goto LABEL_75;
  }
  v15 = a4;
  while ( 1 )
  {
    v16 = (char *)v49;
    v17 = v50;
    v18 = v50 + 1;
    if ( v51 < v50 + 1 )
    {
      v16 = (char *)qvector_reserve(&v49, v49, v18, 0x28u);
      v49 = v16;
      v17 = v50;
      v18 = v50 + 1;
    }
    v19 = &v16[40 * v17];
    v50 = v18;
    if ( qlread(a2, v19, 0x28u) != 40 )
      break;
    if ( *((_DWORD *)v19 + 3) != *((_DWORD *)v19 + 5) || *((_DWORD *)v19 + 2) > *((_DWORD *)v19 + 4) )
      v12 = 0;
    if ( !--v15 )
      goto LABEL_25;
  }
  result = 0xFFFFFFFFLL;
  v22 = v49;
  if ( v49 )
    goto LABEL_75;
  return result;
}
