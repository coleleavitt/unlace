/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78510
// Address: 0x00078510

//----- (00078510) --------------------------------------------------------
int __fastcall sub_78510(int result, _DWORD *a2, int a3, int a4)
{
  _DWORD *v4; // r6
  int v5; // r1
  int v6; // r5
  int v7; // r7
  _DWORD *v9; // r8
  int v10; // r3
  int v11; // r12
  int v12; // r2
  _DWORD *v13; // lr
  _BOOL4 v14; // r1
  int v15; // r0
  _BOOL4 v16; // r2
  unsigned __int64 v17; // r10
  int v18; // r1
  _BOOL4 v19; // r1
  int v20; // r12
  int v21; // r1
  int v22; // r9
  int i; // r6
  int v24; // r1
  int v25; // r2
  int v26; // r1
  int v27; // r3
  int v28; // r0
  int v29; // r1
  int v30; // r0
  _DWORD *v31; // r4
  _DWORD *v32; // r3
  bool v33; // cc
  signed int v35; // t1
  int v36; // r1
  int v37; // r2
  int v38; // r1
  int v39; // r0
  int v40; // r1
  int v41; // r1
  int v42; // [sp+Ch] [bp-8h]

  v4 = a2;
  v5 = (int)a2 - result;
  if ( v5 > 128 )
  {
    v6 = result;
    v7 = a3;
    v9 = (_DWORD *)(result + 8);
    if ( a3 )
    {
      while ( 1 )
      {
        v10 = v5 >> 4;
        v11 = *(_DWORD *)(v6 + 8);
        --v7;
        v12 = *(_DWORD *)(v6 + 8 * (v5 >> 4));
        v13 = (_DWORD *)(v6 + 8 * (v5 >> 4));
        if ( v11 == v12 )
          v14 = *(_DWORD *)(v6 + 12) < v13[1];
        else
          v14 = v11 < v12;
        v15 = *(v4 - 2);
        if ( v14 )
        {
          if ( v15 == v12 )
            v16 = v13[1] < *(v4 - 1);
          else
            v16 = v15 > v12;
          v17 = *(_QWORD *)v6;
          if ( v16 )
          {
            v38 = v13[1];
            *(_DWORD *)v6 = *v13;
            *(_DWORD *)(v6 + 4) = v38;
            *(_DWORD *)(v6 + 8 * v10) = v17;
            v13[1] = HIDWORD(v17);
            LODWORD(v17) = *(_DWORD *)(v6 + 8);
          }
          else
          {
            if ( v15 == v11 )
            {
              if ( *(_DWORD *)(v6 + 12) < *(v4 - 1) )
              {
LABEL_11:
                v18 = *(v4 - 1);
                *(_DWORD *)v6 = *(v4 - 2);
                *(_DWORD *)(v6 + 4) = v18;
                *((_QWORD *)v4 - 1) = v17;
                LODWORD(v17) = *(_DWORD *)(v6 + 8);
                goto LABEL_26;
              }
            }
            else if ( v15 > v11 )
            {
              goto LABEL_11;
            }
            v39 = *v9;
            v40 = v9[1];
            *(_QWORD *)(v6 + 8) = v17;
            *(_DWORD *)v6 = v39;
            *(_DWORD *)(v6 + 4) = v40;
          }
        }
        else
        {
          if ( v15 == v11 )
            v19 = *(_DWORD *)(v6 + 12) < *(v4 - 1);
          else
            v19 = v15 > v11;
          v20 = *(_DWORD *)(v6 + 4);
          LODWORD(v17) = *(_DWORD *)v6;
          if ( v19 )
          {
            v28 = *v9;
            v29 = v9[1];
            *(_DWORD *)(v6 + 8) = v17;
            *(_DWORD *)(v6 + 12) = v20;
            *(_DWORD *)v6 = v28;
            *(_DWORD *)(v6 + 4) = v29;
          }
          else
          {
            if ( v15 == v12 )
            {
              if ( v13[1] >= *(v4 - 1) )
              {
LABEL_17:
                v21 = v13[1];
                *(_DWORD *)v6 = *v13;
                *(_DWORD *)(v6 + 4) = v21;
                *(_DWORD *)(v6 + 8 * v10) = v17;
                v13[1] = v20;
                LODWORD(v17) = *(_DWORD *)(v6 + 8);
                goto LABEL_26;
              }
            }
            else if ( v15 <= v12 )
            {
              goto LABEL_17;
            }
            v41 = *(v4 - 1);
            *(_DWORD *)v6 = *(v4 - 2);
            *(_DWORD *)(v6 + 4) = v41;
            *(v4 - 2) = v17;
            *(v4 - 1) = v20;
            LODWORD(v17) = *(_DWORD *)(v6 + 8);
          }
        }
LABEL_26:
        v30 = *(_DWORD *)v6;
        v31 = v9;
        v32 = v4;
        HIDWORD(v17) = v9;
        v33 = (int)v17 < *(_DWORD *)v6;
        if ( (_DWORD)v17 == *(_DWORD *)v6 )
        {
LABEL_32:
          if ( v31[1] >= *(_DWORD *)(v6 + 4) )
            goto LABEL_33;
          goto LABEL_31;
        }
        while ( v33 )
        {
LABEL_31:
          v35 = v31[2];
          v31 += 2;
          v17 = __PAIR64__((unsigned int)v31, v35);
          v33 = v35 < v30;
          if ( v35 == v30 )
            goto LABEL_32;
        }
        do
        {
LABEL_33:
          while ( 1 )
          {
            v32 -= 2;
            if ( *v32 == v30 )
              break;
            if ( *v32 <= v30 )
              goto LABEL_35;
          }
        }
        while ( *(_DWORD *)(v6 + 4) < v32[1] );
LABEL_35:
        if ( v31 < v32 )
        {
          v36 = v32[1];
          v37 = v31[1];
          *v31 = *v32;
          v31[1] = v36;
          *v32 = v17;
          v32[1] = v37;
          v30 = *(_DWORD *)v6;
          goto LABEL_31;
        }
        result = sub_78510(v31, v4, v7, a4);
        v5 = (int)v31 - v6;
        if ( (int)v31 - v6 <= 128 )
          return result;
        v4 = v31;
        if ( !v7 )
          goto LABEL_19;
      }
    }
    HIDWORD(v17) = v4;
LABEL_19:
    v22 = v5 >> 3;
    for ( i = ((v5 >> 3) - 2) >> 1; ; --i )
    {
      sub_783F8(v6, i, v22, *(_DWORD *)(v6 + 8 * i), *(_DWORD *)(v6 + 8 * i + 4));
      if ( !i )
        break;
    }
    do
    {
      v24 = *(_DWORD *)(HIDWORD(v17) - 4);
      v25 = (HIDWORD(v17) + -8 - v6) >> 3;
      HIDWORD(v17) -= 8;
      v42 = v24;
      v26 = *(_DWORD *)(v6 + 4);
      v27 = *(_DWORD *)HIDWORD(v17);
      *(_DWORD *)HIDWORD(v17) = *(_DWORD *)v6;
      *(_DWORD *)(HIDWORD(v17) + 4) = v26;
      result = sub_783F8(v6, 0, v25, v27, v42);
    }
    while ( HIDWORD(v17) - v6 > 8 );
  }
  return result;
}
