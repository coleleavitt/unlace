/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_425740
// Address: 0x0000000000425740

//----- (0000000000425740) ----------------------------------------------------
__int64 __fastcall sub_425740(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // w1
  __int64 result; // x0
  __int64 v6; // x1
  __int64 v7; // x0
  unsigned __int64 v8; // x21
  void **v9; // x24
  unsigned __int64 v10; // x0
  unsigned int v11; // w0
  char *v12; // x23
  unsigned __int64 v13; // x26
  __int64 v14; // x1
  char *v15; // x23
  __int64 v16; // x4
  __int64 v17; // x3
  char *v18; // x0
  __int64 v19; // x4
  __int64 v20; // x27
  __int64 v21; // x4
  char *v22; // x0
  __int64 v23; // x1
  char *v24; // x6
  char *v25; // x5
  __int64 v26; // x3
  __int64 v27; // x1
  char *v28; // x23
  __int64 v29; // x5
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x25
  __int64 v33; // x4
  char *v34; // x0
  __int64 v35; // x1
  char *v36; // x6
  char *v37; // x5
  __int64 v38; // x3
  __int64 v39; // [xsp+58h] [xbp-38h] BYREF
  __int64 v40; // [xsp+60h] [xbp-30h]
  __int64 v41; // [xsp+68h] [xbp-28h]
  __int64 v42; // [xsp+70h] [xbp-20h]
  __int64 v43; // [xsp+78h] [xbp-18h]
  __int64 v44; // [xsp+80h] [xbp-10h]

  v4 = *(_DWORD *)(a1 + 72);
  if ( v4 >= *(_DWORD *)(a1 + 76) )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(_QWORD *)(a1 + 64);
    v8 = v6 - v7;
    if ( v6 == v7 )
      return 0;
    v9 = (void **)(a1 + 40);
    v10 = *(_QWORD *)(a1 + 48);
    if ( v8 != v10 )
    {
      v39 = 0;
      v40 = 0;
      v41 = 0;
      if ( v8 >= v10 )
      {
        if ( v8 > v10 )
        {
          v12 = *(char **)(a1 + 40);
          v13 = *(_QWORD *)(a1 + 56);
          if ( v12 <= (char *)&v39 && &v39 < (__int64 *)&v12[24 * v13] )
          {
            v42 = v39;
            v43 = v40;
            v44 = v41;
            if ( v8 <= v13 )
              goto LABEL_26;
            v12 = (char *)sub_491288(a1 + 40, nullptr, v8, 0x18u);
            v31 = *(_QWORD *)(a1 + 48);
            v32 = *(_QWORD *)(a1 + 56);
            *(_QWORD *)(a1 + 56) = v13;
            v33 = v31 - 1;
            v34 = *(char **)(a1 + 40);
            if ( v33 >= 0 )
            {
              v35 = 0;
              do
              {
                v36 = &v34[v35];
                v37 = &v12[v35];
                --v33;
                v35 += 24;
                v38 = *((_QWORD *)v36 + 1);
                *(_QWORD *)v37 = *(_QWORD *)v36;
                *((_QWORD *)v37 + 1) = v38;
                *((_QWORD *)v37 + 2) = *((_QWORD *)v36 + 2);
              }
              while ( v33 != -1 );
              v34 = *(char **)(a1 + 40);
            }
            j__free(v34);
            *(_QWORD *)(a1 + 40) = v12;
            *(_QWORD *)(a1 + 56) = v32;
            v10 = *(_QWORD *)(a1 + 48);
            if ( v8 > v10 )
            {
LABEL_26:
              v27 = 24 * v10;
              while ( 1 )
              {
                v28 = &v12[v27];
                v29 = v44;
                v30 = v43;
                ++v10;
                *(_QWORD *)v28 = v42;
                *((_QWORD *)v28 + 1) = v30;
                *((_QWORD *)v28 + 2) = v29;
                v27 += 24;
                if ( v8 <= v10 )
                  break;
                v12 = (char *)*v9;
              }
            }
          }
          else
          {
            if ( v8 <= v13 )
              goto LABEL_15;
            v18 = (char *)sub_491288(a1 + 40, nullptr, v8, 0x18u);
            v19 = *(_QWORD *)(a1 + 48);
            v20 = *(_QWORD *)(a1 + 56);
            *(_QWORD *)(a1 + 56) = v13;
            v12 = v18;
            v21 = v19 - 1;
            v22 = *(char **)(a1 + 40);
            if ( v21 >= 0 )
            {
              v23 = 0;
              do
              {
                v24 = &v22[v23];
                v25 = &v12[v23];
                --v21;
                v23 += 24;
                v26 = *((_QWORD *)v24 + 1);
                *(_QWORD *)v25 = *(_QWORD *)v24;
                *((_QWORD *)v25 + 1) = v26;
                *((_QWORD *)v25 + 2) = *((_QWORD *)v24 + 2);
              }
              while ( v21 != -1 );
              v22 = *(char **)(a1 + 40);
            }
            j__free(v22);
            *(_QWORD *)(a1 + 40) = v12;
            *(_QWORD *)(a1 + 56) = v20;
            v10 = *(_QWORD *)(a1 + 48);
            if ( v8 > v10 )
            {
LABEL_15:
              v14 = 24 * v10;
              while ( 1 )
              {
                v15 = &v12[v14];
                v16 = v41;
                v17 = v40;
                ++v10;
                *(_QWORD *)v15 = v39;
                *((_QWORD *)v15 + 1) = v17;
                *((_QWORD *)v15 + 2) = v16;
                v14 += 24;
                if ( v8 <= v10 )
                  break;
                v12 = (char *)*v9;
              }
            }
          }
          *(_QWORD *)(a1 + 48) = v8;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 48) = v8;
      }
    }
    *(_DWORD *)(a1 + 72) = 0;
    v11 = sub_425548(a1, v8);
    *(_DWORD *)(a1 + 76) = v11;
    if ( !v11 )
      return 0;
    v4 = *(_DWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 64) += v11;
    if ( v11 <= v4 )
      return 0;
  }
  result = 1;
  *a2 = *(_QWORD *)(a1 + 40) + 24LL * v4;
  ++*(_DWORD *)(a1 + 72);
  return result;
}
// 425740: could not find valid save-restore pair for x25
// 425740: could not find valid save-restore pair for x27
