__int64 __fastcall sub_20E55E0(__int64 a1, char a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // r8d
  __int64 result; // rax
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 *v9; // r10
  __int64 v10; // r11
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  __int64 *v13; // r9
  __int64 v14; // r11
  __int64 v15; // rdx
  __int64 *v16; // r10
  __int64 v17; // r11
  __int64 v18; // rdx
  __int64 *v19; // r9
  __int64 v20; // r11
  __int64 v21; // rdx
  __int64 *v22; // r10
  __int64 v23; // r11
  __int64 v24; // rdx
  __int64 *v25; // r9
  __int64 v26; // r11
  __int64 v27; // rdx
  __int64 *v28; // r10
  __int64 v29; // r11
  __int64 v30; // rdx
  __int64 *v31; // r9
  __int64 v32; // r11
  __int64 v33; // rdx
  __int64 *v34; // r10
  __int64 v35; // r11
  __int64 v36; // rdx
  __int64 *v37; // r9
  __int64 v38; // r11
  __int64 v39; // rdx
  __int64 *v40; // r10
  __int64 v41; // rcx
  __int64 v42; // r11
  int v43; // r10d
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int **v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r11
  unsigned __int64 *v49; // rcx
  int v50; // r9d
  __int64 *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 *v54; // rsi
  __int64 *v55; // rdx
  unsigned int v57; // esi
  unsigned int v58; // edx
  __int64 v59; // rsi

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  v4 = v2 + 16LL * *(unsigned int *)(a1 + 16) - 16;
  v5 = *(_DWORD *)(v4 + 8);
  result = *(_QWORD *)v4;
  if ( v5 == 1 )
  {
    v55 = *(__int64 **)(v3 + 272);
    v57 = *(_DWORD *)(v3 + 264);
    *(_QWORD *)result = *v55;
    *v55 = result;
    result = sub_20E51B0((__int64 *)a1, v57);
    if ( a2 )
    {
      if ( *(_DWORD *)(v3 + 264) )
      {
        v58 = *(_DWORD *)(a1 + 16);
        if ( v58 )
        {
          v59 = *(_QWORD *)(a1 + 8);
          result = *(unsigned int *)(v59 + 8);
          if ( *(_DWORD *)(v59 + 12) < (unsigned int)result )
          {
            result = v59 + 12;
            while ( !*(_DWORD *)result )
            {
              result += 16;
              if ( v59 + 16LL * (v58 - 1) + 28 == result )
              {
                result = **(unsigned int **)(v59 + 16LL * v58 - 16);
                *(_DWORD *)v3 = result;
                return result;
              }
            }
          }
        }
      }
    }
    return result;
  }
  v7 = *(_DWORD *)(v4 + 12);
  v8 = v7 + 1;
  if ( v5 != (_DWORD)v8 )
  {
    v9 = (__int64 *)(result + 8 * v8);
    v10 = *v9;
    v11 = (_QWORD *)(result + 8LL * v7);
    v11[12] = v9[12];
    *v11 = v10;
    v12 = v7 + 2;
    if ( v5 != (_DWORD)v12 )
    {
      v13 = (__int64 *)(result + 8 * v12);
      v14 = *v13;
      v9[12] = v13[12];
      v15 = v7 + 3;
      *v9 = v14;
      if ( v5 != (_DWORD)v15 )
      {
        v16 = (__int64 *)(result + 8 * v15);
        v17 = *v16;
        v13[12] = v16[12];
        v18 = v7 + 4;
        *v13 = v17;
        if ( v5 != (_DWORD)v18 )
        {
          v19 = (__int64 *)(result + 8 * v18);
          v20 = *v19;
          v16[12] = v19[12];
          v21 = v7 + 5;
          *v16 = v20;
          if ( v5 != (_DWORD)v21 )
          {
            v22 = (__int64 *)(result + 8 * v21);
            v23 = *v22;
            v19[12] = v22[12];
            v24 = v7 + 6;
            *v19 = v23;
            if ( (_DWORD)v24 != v5 )
            {
              v25 = (__int64 *)(result + 8 * v24);
              v26 = *v25;
              v22[12] = v25[12];
              v27 = v7 + 7;
              *v22 = v26;
              if ( v5 != (_DWORD)v27 )
              {
                v28 = (__int64 *)(result + 8 * v27);
                v29 = *v28;
                v25[12] = v28[12];
                v30 = v7 + 8;
                *v25 = v29;
                if ( v5 != (_DWORD)v30 )
                {
                  v31 = (__int64 *)(result + 8 * v30);
                  v32 = *v31;
                  v28[12] = v31[12];
                  v33 = v7 + 9;
                  *v28 = v32;
                  if ( v5 != (_DWORD)v33 )
                  {
                    v34 = (__int64 *)(result + 8 * v33);
                    v35 = *v34;
                    v31[12] = v34[12];
                    v36 = v7 + 10;
                    *v31 = v35;
                    if ( v5 != (_DWORD)v36 )
                    {
                      v37 = (__int64 *)(result + 8 * v36);
                      v38 = *v37;
                      v34[12] = v37[12];
                      v39 = v7 + 11;
                      *v34 = v38;
                      if ( v5 != (_DWORD)v39 )
                      {
                        v40 = (__int64 *)(result + 8 * v39);
                        v41 = v7 + 12;
                        v42 = *v40;
                        v37[12] = v40[12];
                        *v37 = v42;
                        if ( v5 != (_DWORD)v41 )
                        {
                          *v40 = *(_QWORD *)(result + 8 * v41);
                          v40[12] = *(_QWORD *)(result + 8 * v41 + 96);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v2 = *(_QWORD *)(a1 + 8);
    LODWORD(v8) = *(_DWORD *)(v2 + 16LL * *(unsigned int *)(a1 + 16) - 8);
  }
  v43 = v8 - 1;
  v44 = *(unsigned int *)(v3 + 264);
  *(_DWORD *)(v2 + 16 * v44 + 8) = v8 - 1;
  if ( (_DWORD)v44 )
  {
    v48 = (unsigned int)(v8 - 2);
    v49 = (unsigned __int64 *)(*(_QWORD *)(16LL * (unsigned int)(v44 - 1) + v2)
                             + 8LL * *(unsigned int *)(16LL * (unsigned int)(v44 - 1) + v2 + 12));
    *v49 = v48 | *v49 & 0xFFFFFFFFFFFFFFC0LL;
    v2 = *(_QWORD *)(a1 + 8);
    v45 = *(unsigned int *)(a1 + 16);
    v46 = (unsigned int **)(v2 + 16 * v45 - 16);
    if ( *((_DWORD *)v46 + 3) != v43 )
      goto LABEL_18;
    LODWORD(v44) = *(_DWORD *)(v3 + 264);
    v50 = *(_DWORD *)(result + 8 * v48 + 4);
    if ( (_DWORD)v44 )
    {
      v51 = (__int64 *)(v2 + 16LL * (unsigned int)(v44 - 1));
      while ( v51 != (__int64 *)v2 )
      {
        v52 = *v51;
        v53 = *((unsigned int *)v51 + 3);
        v54 = v51;
        v51 -= 2;
        *(_DWORD *)(v52 + 4 * v53 + 128) = v50;
        if ( *((_DWORD *)v54 + 3) != *((_DWORD *)v54 + 2) - 1 )
          goto LABEL_32;
      }
      *(_DWORD *)(*v51 + 4LL * *((unsigned int *)v51 + 3) + 168) = v50;
LABEL_32:
      LODWORD(v44) = *(_DWORD *)(v3 + 264);
    }
    return sub_22281D0(a1 + 8, (unsigned int)v44);
  }
  v45 = *(unsigned int *)(a1 + 16);
  result = 16 * v45;
  v46 = (unsigned int **)(v2 + 16 * v45 - 16);
  if ( *((_DWORD *)v46 + 3) == v43 )
    return sub_22281D0(a1 + 8, (unsigned int)v44);
LABEL_18:
  if ( !a2 )
    return result;
  if ( (_DWORD)v45 )
  {
    if ( *(_DWORD *)(v2 + 12) )
      return result;
    result = v2 + 28;
    v47 = v2 + 28 + 16LL * (unsigned int)(v45 - 1);
    while ( result != v47 )
    {
      result += 16;
      if ( *(_DWORD *)(result - 16) )
        return result;
    }
  }
  result = **v46;
  *(_DWORD *)v3 = result;
  return result;
}
