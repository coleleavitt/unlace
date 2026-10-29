/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427FA8
// Address: 0x0000000000427FA8

//----- (0000000000427FA8) ----------------------------------------------------
__int64 __fastcall sub_427FA8(__int64 a1, int a2)
{
  unsigned __int64 v2; // x3
  __int64 v3; // x21
  unsigned __int64 v4; // x4
  unsigned __int64 v5; // x1
  char *v6; // x0
  __int64 v7; // x23
  __int64 v9; // x4
  char *v10; // x1
  unsigned __int64 v11; // x5
  __int64 v12; // x22
  char *v13; // x0
  void **v14; // x20
  unsigned __int64 v15; // x22
  __int64 v16; // x24
  void *v17; // x26
  void *v18; // x0
  void *v19; // x22
  unsigned __int64 v20; // x24
  void *v21; // x1
  __int64 v22; // x26
  void *v23; // x0
  void *ptr; // [xsp+B8h] [xbp-68h] BYREF
  unsigned __int64 v25; // [xsp+C0h] [xbp-60h]
  __int64 v26; // [xsp+C8h] [xbp-58h]
  void *v27; // [xsp+D0h] [xbp-50h]
  unsigned __int64 v28; // [xsp+D8h] [xbp-48h]
  __int64 v29; // [xsp+E0h] [xbp-40h]
  void *v30; // [xsp+E8h] [xbp-38h]
  void *v31; // [xsp+F0h] [xbp-30h]
  void *v32; // [xsp+F8h] [xbp-28h]
  void *v33; // [xsp+100h] [xbp-20h]
  void *v34; // [xsp+108h] [xbp-18h]
  int v35; // [xsp+110h] [xbp-10h]
  __int16 v36; // [xsp+114h] [xbp-Ch]
  char v37; // [xsp+116h] [xbp-Ah]

  if ( (unsigned int)(a2 - 1) <= 2 )
    goto LABEL_4;
  a1 = (unsigned __int8)under_debugger;
  if ( !under_debugger )
    sub_492270(20098);
  while ( 1 )
  {
    __break(0x3E8u);
LABEL_4:
    v2 = *(_QWORD *)(a1 + 8);
    v3 = a1;
    v4 = v2;
    if ( a2 != 1 )
      break;
    v4 = *(_QWORD *)(a1 + 24);
    a2 = v4 + 1;
    *(_QWORD *)(a1 + 24) = v4 + 1;
    if ( v4 == v2 )
      break;
    if ( v4 <= v2 )
    {
      v9 = 3 * v4;
      v10 = *(char **)a1;
      v11 = *(_QWORD *)(a1 + 16);
      v12 = 32 * v9;
      v7 = *(_QWORD *)a1 + 32 * v9;
      ptr = nullptr;
      v25 = 0;
      v26 = 0;
      v27 = nullptr;
      v28 = 0;
      v29 = 0;
      v30 = nullptr;
      v31 = nullptr;
      v32 = nullptr;
      v33 = nullptr;
      v34 = nullptr;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      if ( v2 + 1 <= v11 )
      {
        v14 = (void **)&v10[32 * v9];
      }
      else
      {
        v13 = (char *)sub_491288(a1, v10, v2 + 1, 0x60u);
        v2 = *(_QWORD *)(v3 + 8);
        v14 = (void **)&v13[v12];
        *(_QWORD *)v3 = v13;
      }
      memmove(v14 + 12, v14, 96 * v2 - v12);
      *v14 = nullptr;
      v14[1] = nullptr;
      v14[2] = nullptr;
      v14[3] = nullptr;
      v14[4] = nullptr;
      v14[5] = nullptr;
      v14[6] = nullptr;
      v14[7] = nullptr;
      v14[8] = nullptr;
      if ( v14 == &ptr )
      {
        v19 = v27;
      }
      else
      {
        v15 = v25;
        if ( v25 )
        {
          v16 = v25 - 1;
          if ( v25 != 1 )
          {
            v17 = ptr;
            v18 = sub_491288((__int64)v14, nullptr, v25, 1u);
            *v14 = v18;
            v14[1] = (void *)v15;
            memmove(v18, v17, v15 - 1);
            *((_BYTE *)*v14 + v16) = 0;
          }
        }
        v19 = v27;
        v20 = v28;
        if ( v28 && (v22 = v28 - 1, v28 != 1) )
        {
          v23 = v14[3];
          if ( v28 > (unsigned __int64)v14[5] )
          {
            v23 = sub_491288((__int64)(v14 + 3), v14[3], v28, 1u);
            v14[3] = v23;
          }
          v14[4] = (void *)v20;
          memmove(v23, v19, v20 - 1);
          *((_BYTE *)v14[3] + v22) = 0;
          v19 = v27;
        }
        else
        {
          v14[4] = nullptr;
        }
      }
      v21 = v31;
      v14[6] = v30;
      v14[7] = v21;
      v14[8] = v32;
      v14[9] = v33;
      v14[10] = v34;
      *((_DWORD *)v14 + 22) = v35;
      *((_WORD *)v14 + 46) = v36;
      *((_BYTE *)v14 + 94) = v37;
      ++*(_QWORD *)(v3 + 8);
      if ( v19 )
      {
        v28 = 0;
        j__free(v19);
      }
      if ( ptr )
      {
        v25 = 0;
        j__free(ptr);
      }
      return v7;
    }
    a1 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(20133);
  }
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(char **)a1;
  if ( v2 + 1 > v5 )
  {
    v6 = (char *)sub_491288(v3, *(void **)v3, v2 + 1, 0x60u);
    v4 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)v3 = v6;
  }
  v7 = (__int64)&v6[96 * v4];
  *(_QWORD *)v7 = 0;
  *(_QWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = 0;
  *(_QWORD *)(v7 + 72) = 0;
  *(_QWORD *)(v7 + 80) = 0;
  *(_DWORD *)(v7 + 88) = 0;
  *(_WORD *)(v7 + 92) = 0;
  *(_BYTE *)(v7 + 94) = 0;
  ++*(_QWORD *)(v3 + 8);
  return v7;
}
// 427FA8: could not find valid save-restore pair for x22
// 427FA8: could not find valid save-restore pair for x24
// 427FA8: could not find valid save-restore pair for x25
// 427FA8: could not find valid save-restore pair for x26
// 428264: conditional instruction was optimized away because %var_B0.8==0
// 428274: conditional instruction was optimized away because %var_C8.8==0
// 52451C: using guessed type char under_debugger;
