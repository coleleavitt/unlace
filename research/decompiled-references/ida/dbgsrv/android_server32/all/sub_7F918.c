/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F918
// Address: 0x0007F918

//----- (0007F918) --------------------------------------------------------
int __fastcall sub_7F918(int *a1, int *a2)
{
  int *v3; // r6
  int v4; // r1
  int result; // r0
  int *v6; // r4
  int *v7; // r7
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r3
  int v11; // r5
  int *v12; // r1
  bool v13; // cc
  int v14; // r2
  int v15; // r3
  int v16; // r4
  int *v17; // r4
  int v18; // r2
  bool v19; // cc
  int v20; // r2
  int v21; // r3
  int v22; // r5
  int *v23; // r2
  bool v24; // cc
  int v25; // r1
  int v26; // r2
  int v27; // r3
  _BOOL4 v28; // r5
  bool v29; // cc
  int v30; // r3
  bool v31; // cc
  int v32; // r1
  int v33; // r3
  int v34; // r4
  int v35; // r1
  int v36; // r2
  int v37; // r3
  int v38; // r1
  bool v39; // cc
  char v40; // r1
  int v41; // r1
  int *v42; // r4
  int *v43; // r5
  int *v44; // r1
  bool v45; // cc
  int v46; // r5
  int v47; // r3
  int v48; // r5
  char *v49; // r1
  int v50; // r2
  bool v51; // cc
  int v52; // r2
  int *v53; // r4
  int *v54; // r6
  int v55; // r1
  int v56; // r2
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // r1
  int v61; // r2
  int v62; // r3
  bool v63; // cc
  int v64; // r2
  int v65; // r1
  int v66; // r3
  int v67; // r2
  int v68; // r1
  int v69; // [sp+Ch] [bp-10h]
  int *v70; // [sp+Ch] [bp-10h]
  int *v72; // [sp+14h] [bp-8h]
  int v73; // [sp+18h] [bp-4h]

LABEL_1:
  v3 = a2 - 2;
  while ( 2 )
  {
    v4 = (char *)a2 - (char *)a1;
    result = ((char *)a2 - (char *)a1) >> 3;
    v72 = a1;
    switch ( result )
    {
      case 0:
      case 1:
        return result;
      case 2:
        v41 = *(a2 - 2);
        result = (int)(a2 - 2);
        if ( v41 == *a1 )
        {
          if ( *(a2 - 1) >= a1[1] )
            return result;
        }
        else if ( v41 >= *a1 )
        {
          return result;
        }
        v57 = a1[1];
        v58 = *(_DWORD *)result;
        a1[1] = *(a2 - 1);
        v59 = *a1;
        *a1 = v58;
        *(_DWORD *)result = v59;
        *(a2 - 1) = v57;
        return result;
      case 3:
        return sub_7FD14(a1, a1 + 2, a2 - 2);
      case 4:
        v53 = a1 + 2;
        v54 = a1 + 4;
        sub_7FD14(a1, a1 + 2, a1 + 4);
        result = (int)(a2 - 2);
        v55 = *(a2 - 2);
        v56 = a1[4];
        if ( v55 == v56 )
        {
          if ( *(a2 - 1) >= a1[5] )
            return result;
        }
        else if ( v55 >= v56 )
        {
          return result;
        }
        v60 = a1[5];
        v61 = *(_DWORD *)result;
        a1[5] = *(a2 - 1);
        v62 = *v54;
        *v54 = v61;
        *(_DWORD *)result = v62;
        *(a2 - 1) = v60;
        result = *v53;
        v63 = *v54 < *v53;
        if ( *v54 == *v53 )
        {
          result = a1[3];
          v63 = a1[5] < result;
        }
        if ( !v63 )
          return result;
        v64 = a1[3];
        result = *v54;
        v65 = a1[5];
        a1[3] = v65;
        v66 = *v53;
        *v53 = result;
        *v54 = v66;
        a1[5] = v64;
        if ( *a1 == result )
        {
          if ( a1[1] <= v65 )
            return result;
        }
        else if ( *a1 <= result )
        {
          return result;
        }
        v67 = a1[1];
        a1[1] = v65;
        v68 = *a1;
        *a1 = result;
        *v53 = v68;
        a1[3] = v67;
        return result;
      case 5:
        return sub_7FDE4(a1, a1 + 2, a1 + 4, a1 + 6, a2 - 2);
      default:
        v6 = a1;
        if ( v4 <= 247 )
        {
          v42 = a1 + 4;
          sub_7FD14(a1, a1 + 2, a1 + 4);
          v43 = a1 + 6;
          result = (int)a2;
          if ( a1 + 6 != a2 )
          {
            result = 0;
            do
            {
              v44 = v42;
              v42 = v43;
              v45 = *v43 < *v44;
              if ( *v43 == *v44 )
                v45 = v43[1] < v44[1];
              if ( v45 )
              {
                v73 = v43[1];
                v46 = *v44;
                v42[1] = v44[1];
                v47 = *v42;
                *v42 = v46;
                if ( v44 != a1 )
                {
                  v48 = result;
                  while ( 1 )
                  {
                    v49 = (char *)a1 + v48;
                    v50 = *(int *)((char *)a1 + v48 + 8);
                    v51 = v50 <= v47;
                    if ( v50 == v47 )
                      v51 = *((_DWORD *)v49 + 3) <= v73;
                    if ( v51 )
                      break;
                    v52 = *(int *)((char *)a1 + v48 + 12);
                    *(int *)((char *)a1 + v48 + 16) = *(int *)((char *)a1 + v48 + 8);
                    *(int *)((char *)a1 + v48 + 20) = v52;
                    v48 -= 8;
                    if ( v48 == -16 )
                    {
                      v44 = a1;
                      goto LABEL_95;
                    }
                  }
                  v44 = (int *)(v49 + 16);
                }
LABEL_95:
                *v44 = v47;
                v44[1] = v73;
              }
              result += 8;
              v43 = v42 + 2;
            }
            while ( v42 + 2 != a2 );
          }
          return result;
        }
        v69 = 2 * (result / 2);
        v7 = &a1[v69];
        if ( v4 < 7993 )
        {
          v9 = sub_7FD14(v6, &v6[v69], v3);
        }
        else
        {
          v8 = (2 * (result + ((unsigned int)(result >> 31) >> 30))) & 0xFFFFFFF8;
          v9 = sub_7FDE4(v6, (int *)((char *)v6 + v8), &v6[v69], (int *)((char *)v7 + v8), v3);
        }
        v10 = *v7;
        v11 = *v6;
        if ( *v6 == *v7 )
        {
          v13 = v72[1] < v6[v69 + 1];
          v6 = v72;
          if ( !v13 )
            goto LABEL_10;
LABEL_18:
          v12 = a2 - 2;
LABEL_20:
          v17 = v6 + 2;
          if ( v17 < v12 )
          {
            while ( 1 )
            {
              v18 = *v7;
              while ( 1 )
              {
                v19 = *v17 < v18;
                if ( *v17 == v18 )
                  v19 = v17[1] < v7[1];
                if ( !v19 )
                  break;
                v17 += 2;
              }
              do
              {
                while ( 1 )
                {
                  v12 -= 2;
                  if ( *v12 != v18 )
                    break;
                  if ( v12[1] < v7[1] )
                    goto LABEL_32;
                }
              }
              while ( *v12 >= v18 );
LABEL_32:
              if ( v17 > v12 )
                break;
              v20 = v17[1];
              v21 = *v12;
              v17[1] = v12[1];
              v22 = *v17;
              *v17 = v21;
              *v12 = v22;
              v12[1] = v20;
              v23 = v12;
              if ( v7 != v17 )
                v23 = v7;
              v17 += 2;
              ++v9;
              v7 = v23;
            }
          }
          if ( v17 != v7 )
          {
            v24 = *v7 < *v17;
            if ( *v7 == *v17 )
              v24 = v7[1] < v17[1];
            if ( v24 )
            {
              v25 = v17[1];
              v26 = *v7;
              v17[1] = v7[1];
              v27 = *v17;
              *v17 = v26;
              *v7 = v27;
              v7[1] = v25;
              ++v9;
            }
          }
          if ( v9 )
          {
LABEL_44:
            a1 = v72;
            if ( (char *)v17 - (char *)v72 < (char *)a2 - (char *)v17 )
            {
              sub_7F918(v72, v17);
              a1 = v17 + 2;
              continue;
            }
            sub_7F918(v17 + 2, a2);
            a2 = v17;
            goto LABEL_1;
          }
          v28 = sub_7FF18(v72, v17);
          a1 = v17 + 2;
          if ( !sub_7FF18(v17 + 2, a2) )
          {
            if ( v28 )
              continue;
            goto LABEL_44;
          }
          v40 = 1;
          if ( !v28 )
          {
            v40 = 2;
            a2 = v17;
          }
LABEL_72:
          result = 1 << v40;
          a1 = v72;
          if ( ((1 << v40) & 0x15) != 0 )
            goto LABEL_1;
          return result;
        }
        if ( *v6 < *v7 )
          goto LABEL_18;
LABEL_10:
        if ( v6 != a2 - 4 )
        {
          v70 = &v6[v69 + 1];
          v12 = a2 - 4;
          while ( 1 )
          {
            v13 = *v12 < v10;
            if ( *v12 == v10 )
            {
              v13 = v12[1] < *v70;
              v6 = v72;
            }
            if ( v13 )
              break;
            v12 -= 2;
            if ( v6 == v12 )
              goto LABEL_47;
          }
          v14 = v6[1];
          v15 = *v12;
          v72[1] = v12[1];
          v16 = *v72;
          *v72 = v15;
          *v12 = v16;
          v6 = v72;
          v12[1] = v14;
          ++v9;
          goto LABEL_20;
        }
LABEL_47:
        result = (int)(v6 + 2);
        v29 = v11 < *v3;
        if ( v11 == *v3 )
          v29 = v6[1] < *(a2 - 1);
        if ( !v29 )
        {
          if ( (int *)result == v3 )
            return result;
          result = (int)(v72 + 4);
          while ( 1 )
          {
            v30 = *(_DWORD *)(result - 8);
            v31 = v11 < v30;
            if ( v11 == v30 )
              v31 = v72[1] < *(_DWORD *)(result - 4);
            if ( v31 )
              break;
            result += 8;
            if ( a2 == (int *)result )
              return result;
          }
          v32 = *(_DWORD *)(result - 8);
          v33 = *(a2 - 1);
          *(_DWORD *)(result - 8) = *v3;
          v34 = *(_DWORD *)(result - 4);
          *(_DWORD *)(result - 4) = v33;
          *v3 = v32;
          *(a2 - 1) = v34;
        }
        if ( (int *)result != v3 )
        {
          while ( 1 )
          {
            v38 = *v72;
            while ( 1 )
            {
              v39 = v38 < *(_DWORD *)result;
              if ( v38 == *(_DWORD *)result )
                v39 = v72[1] < *(_DWORD *)(result + 4);
              if ( v39 )
                break;
              result += 8;
            }
            do
            {
              while ( 1 )
              {
                v3 -= 2;
                if ( v38 != *v3 )
                  break;
                if ( v72[1] >= v3[1] )
                  goto LABEL_70;
              }
            }
            while ( v38 < *v3 );
LABEL_70:
            v40 = 4;
            if ( result >= (unsigned int)v3 )
              break;
            v35 = *(_DWORD *)(result + 4);
            v36 = *v3;
            *(_DWORD *)(result + 4) = v3[1];
            v37 = *(_DWORD *)result;
            *(_DWORD *)result = v36;
            *v3 = v37;
            v3[1] = v35;
            result += 8;
          }
          v72 = (int *)result;
          goto LABEL_72;
        }
        return result;
    }
  }
}
// 7FB62: conditional instruction was optimized away because r1.4 is in (==1|==4)
// 7FB8A: conditional instruction was optimized away because r0.4==2
