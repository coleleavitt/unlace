/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_367E8
// Address: 0x000367E8

//----- (000367E8) --------------------------------------------------------
int __fastcall sub_367E8(_DWORD *a1, unsigned int a2)
{
  _DWORD *v2; // r4
  unsigned int v3; // r0
  unsigned int v4; // r7
  _DWORD *v5; // r1
  _DWORD *v6; // r5
  _DWORD *v7; // r2
  _DWORD *v8; // r0
  int v9; // r1
  int v10; // r5
  int v11; // r6
  int v12; // r5
  int v13; // r6
  _DWORD *v14; // r1
  int v15; // r4
  int v16; // r5
  int v17; // r4
  int v18; // r5
  unsigned int v19; // r0
  int v20; // r7
  _DWORD *v21; // r1
  int v22; // r4
  int v23; // r5
  int v24; // r4
  int v25; // r5
  _DWORD *v26; // r2
  _DWORD *v27; // r0
  int v28; // r1
  int v29; // r6
  int v30; // r7
  int v31; // r6
  int v32; // r7
  _DWORD *v33; // r1
  int v34; // r4
  int v35; // r5
  int v36; // r4
  int v37; // r5
  unsigned int v38; // r0
  int v39; // r6
  _DWORD *v40; // r1
  int v41; // r4
  int v42; // r5
  int v43; // r4
  int v44; // r5
  unsigned int v46; // [sp+Ch] [bp-4Ch]
  int v47; // [sp+10h] [bp-48h]
  int v48; // [sp+10h] [bp-48h]
  unsigned int v49; // [sp+14h] [bp-44h]
  unsigned int v50; // [sp+14h] [bp-44h]
  int v51; // [sp+18h] [bp-40h]
  int v52; // [sp+18h] [bp-40h]
  _DWORD *v53; // [sp+1Ch] [bp-3Ch]
  _DWORD *v54; // [sp+1Ch] [bp-3Ch]
  _DWORD *v55; // [sp+1Ch] [bp-3Ch]
  _DWORD *v56; // [sp+20h] [bp-38h]
  int v57; // [sp+24h] [bp-34h] BYREF
  int v58; // [sp+28h] [bp-30h]
  int v59; // [sp+2Ch] [bp-2Ch]
  int v60; // [sp+30h] [bp-28h]
  int v61; // [sp+34h] [bp-24h]
  int v62; // [sp+38h] [bp-20h]
  int v63; // [sp+3Ch] [bp-1Ch]
  int v64; // [sp+40h] [bp-18h]
  int v65; // [sp+44h] [bp-14h]
  int v66; // [sp+48h] [bp-10h]
  int v67; // [sp+4Ch] [bp-Ch]
  int v68; // [sp+50h] [bp-8h]
  int v69; // [sp+54h] [bp-4h]

  v2 = a1;
  v3 = a1[1];
  if ( v3 != a2 )
  {
    v4 = a2;
    v62 = 0;
    v61 = 0;
    v60 = 0;
    v59 = 0;
    v58 = 0;
    v57 = 0;
    if ( v3 <= a2 )
    {
      if ( v3 < a2 )
      {
        v46 = v2[2];
        v53 = (_DWORD *)*v2;
        v5 = (_DWORD *)*v2;
        v56 = v2;
        if ( *v2 > (unsigned int)&v57 || *v2 + 24 * v46 <= (unsigned int)&v57 )
        {
          if ( v46 < v4 )
          {
            v26 = qvector_reserve((int)v2, nullptr, v4, 0x18u);
            v48 = v2[2];
            v2[2] = v46;
            v27 = (_DWORD *)*v2;
            v28 = v2[1] - 1;
            v55 = v26;
            if ( v28 >= 0 )
            {
              v50 = v4;
              do
              {
                v29 = v27[1];
                v30 = v27[2];
                *v26 = *v27;
                v26[1] = v29;
                v26[2] = v30;
                v31 = v27[4];
                v32 = v27[5];
                v26[3] = v27[3];
                v26[4] = v31;
                v26[5] = v32;
                --v28;
                v26 += 6;
                v27 += 6;
              }
              while ( v28 >= 0 );
              v27 = (_DWORD *)*v2;
              v4 = v50;
            }
            qfree(v27);
            v2[2] = v48;
            v5 = v55;
            *v2 = v55;
            v3 = v2[1];
          }
          if ( v3 < v4 )
          {
            v52 = 24 * v3;
            v33 = &v5[6 * v3];
            v34 = v58;
            v35 = v59;
            *v33 = v57;
            v33[1] = v34;
            v33[2] = v35;
            v33 += 3;
            v36 = v61;
            v37 = v62;
            *v33 = v60;
            v33[1] = v36;
            v33[2] = v37;
            v2 = v56;
            if ( v3 + 1 != v4 )
            {
              v38 = v4 - 1 - v3;
              v39 = v52 + 24;
              do
              {
                v40 = (_DWORD *)(*v2 + v39);
                v41 = v58;
                v42 = v59;
                *v40 = v57;
                v40[1] = v41;
                v40[2] = v42;
                v40 += 3;
                v43 = v61;
                v44 = v62;
                *v40 = v60;
                v40[1] = v43;
                v40[2] = v44;
                v2 = v56;
                --v38;
                v39 += 24;
              }
              while ( v38 );
            }
          }
          v2[1] = v4;
        }
        else
        {
          v49 = v4;
          v63 = v57;
          v64 = v58;
          v65 = v59;
          v66 = v60;
          v67 = v61;
          v68 = v62;
          v6 = v53;
          if ( v46 < v4 )
          {
            v7 = qvector_reserve((int)v2, nullptr, v4, 0x18u);
            v47 = v2[2];
            v2[2] = v46;
            v8 = (_DWORD *)*v2;
            v9 = v2[1] - 1;
            v54 = v7;
            if ( v9 >= 0 )
            {
              do
              {
                v10 = v8[1];
                v11 = v8[2];
                *v7 = *v8;
                v7[1] = v10;
                v7[2] = v11;
                v12 = v8[4];
                v13 = v8[5];
                v7[3] = v8[3];
                v7[4] = v12;
                v7[5] = v13;
                --v9;
                v7 += 6;
                v8 += 6;
              }
              while ( v9 >= 0 );
              v8 = (_DWORD *)*v2;
            }
            qfree(v8);
            v2[2] = v47;
            v6 = v54;
            *v2 = v54;
            v3 = v2[1];
          }
          if ( v3 < v4 )
          {
            v51 = 24 * v3;
            v14 = &v6[6 * v3];
            v15 = v64;
            v16 = v65;
            *v14 = v63;
            v14[1] = v15;
            v14[2] = v16;
            v14 += 3;
            v17 = v67;
            v18 = v68;
            *v14 = v66;
            v14[1] = v17;
            v14[2] = v18;
            v2 = v56;
            if ( v3 + 1 != v4 )
            {
              v19 = v4 - 1 - v3;
              v20 = v51 + 24;
              do
              {
                v21 = (_DWORD *)(*v2 + v20);
                v22 = v64;
                v23 = v65;
                *v21 = v63;
                v21[1] = v22;
                v21[2] = v23;
                v21 += 3;
                v24 = v67;
                v25 = v68;
                *v21 = v66;
                v21[1] = v24;
                v21[2] = v25;
                v2 = v56;
                --v19;
                v20 += 24;
              }
              while ( v19 );
            }
          }
          v2[1] = v49;
        }
      }
    }
    else
    {
      v2[1] = a2;
    }
  }
  return _stack_chk_guard - v69;
}
