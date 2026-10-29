__int64 __fastcall sub_62C680(const __m128i *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 *a6, char a7)
{
  __int64 v9; // rbp
  char v11; // r13
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // r11
  int v21; // edi
  __int64 *v22; // rax
  unsigned int v23; // r13d
  __int64 v24; // r11
  __int64 *v25; // rsi
  __int64 v26; // r13
  __int64 *v27; // r8
  __int64 *i; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rdx
  __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 v37; // rcx
  __int64 v38; // r11
  unsigned int v39; // r13d
  __int64 *v40; // rcx
  __int64 v41; // r11
  __int64 v42; // rcx
  __int64 *j; // rdx
  __int64 v44; // rcx
  __int64 v45; // [rsp+0h] [rbp-68h]
  __int64 v46; // [rsp+0h] [rbp-68h]
  __int64 v47; // [rsp+0h] [rbp-68h]
  __int64 *v49; // [rsp+10h] [rbp-58h]
  __int64 *v50; // [rsp+18h] [rbp-50h]
  __int64 v51; // [rsp+20h] [rbp-48h]
  char v52; // [rsp+2Bh] [rbp-3Dh]

  LODWORD(v9) = a3;
  v11 = a7;
  v12 = sub_17E9C90(a1->m128i_i64[0] + 40, (unsigned int)(8 * a3 + 80));
  *(_OWORD *)v12 = 0;
  v45 = v12;
  sub_6299B0((_QWORD *)(v12 + 16));
  sub_6299B0((_QWORD *)(v45 + 24));
  v13 = v45;
  *(_BYTE *)(v45 + 32) = 0;
  *(_QWORD *)(v45 + 48) = 0;
  *(_QWORD *)(v45 + 72) = 0;
  v14 = *a6;
  *(_QWORD *)(v45 + 60) = 0;
  *(_DWORD *)(v45 + 68) = 0;
  *(_QWORD *)(v45 + 40) = a2;
  *(_QWORD *)(v45 + 72) = v14;
  *(_DWORD *)(v45 + 56) = v9;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v46 = (unsigned int)v9;
  v15 = v13 + 80 + 8LL * (unsigned int)v9;
  if ( (_DWORD)v9 )
  {
    v49 = (__int64 *)(v13 + 80);
    v16 = 0;
    v52 = 0;
    v50 = (__int64 *)(v13 + 80);
    v51 = v13;
    do
    {
      v17 = *(_QWORD *)(a4 + 8 * v16);
      if ( a5 && *(_BYTE *)(a5 + v16) )
      {
        if ( !*(_WORD *)(v17 + 4) )
        {
          v18 = a1->m128i_i64[1];
          v19 = *(_QWORD *)(v17 + 16);
          v20 = *(unsigned int *)(v18 + 2296);
          v21 = *(_DWORD *)(v19 + 12);
          v22 = *(__int64 **)(v18 + 2288);
          v23 = v20 - 1;
          v24 = 8 * v20;
          v25 = &v22[(unsigned __int64)v24 / 8];
          v26 = 8LL * (v21 & v23);
          v27 = &v22[(unsigned __int64)v26 / 8];
          if ( v26 != v24 )
          {
            for ( i = &v22[(unsigned __int64)v26 / 8]; v25 != i; ++i )
            {
              v29 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v29 + 12) == v21 && v19 == v29 )
                {
LABEL_47:
                  v52 = *(_BYTE *)(a5 + v16);
                  v30 = v17 | 1;
                  goto LABEL_31;
                }
              }
              else if ( !v29 )
              {
                goto LABEL_15;
              }
            }
          }
          if ( v22 != v27 )
          {
            for ( j = v22; v27 != j; ++j )
            {
              v44 = *j;
              if ( (unsigned __int64)*j > 1 )
              {
                if ( *(_DWORD *)(v44 + 12) == v21 && v19 == v44 )
                  goto LABEL_47;
              }
              else if ( !v44 )
              {
                break;
              }
            }
          }
        }
LABEL_15:
        v17 = sub_15E1A70(a1->m128i_i64[0]);
      }
      v30 = v17;
      if ( !*(_WORD *)(v17 + 4) )
      {
        v37 = a1->m128i_i64[1];
        v19 = *(_QWORD *)(v17 + 16);
        v38 = *(unsigned int *)(v37 + 2296);
        v21 = *(_DWORD *)(v19 + 12);
        v22 = *(__int64 **)(v37 + 2288);
        v39 = v38 - 1;
        v24 = 8 * v38;
        v25 = &v22[(unsigned __int64)v24 / 8];
        v26 = 8LL * (v21 & v39);
        v27 = &v22[(unsigned __int64)v26 / 8];
LABEL_31:
        if ( v26 == v24 )
          goto LABEL_42;
        v40 = v27;
        do
        {
          v41 = *v40;
          if ( (unsigned __int64)*v40 > 1 )
          {
            if ( *(_DWORD *)(v41 + 12) == v21 && v41 == v19 )
            {
LABEL_46:
              *v49++ = v30;
              goto LABEL_18;
            }
          }
          else if ( !v41 )
          {
            goto LABEL_17;
          }
          ++v40;
        }
        while ( v40 != v25 );
LABEL_42:
        while ( v22 != v27 )
        {
          v42 = *v22;
          if ( (unsigned __int64)*v22 > 1 )
          {
            if ( *(_DWORD *)(v42 + 12) == v21 && v42 == v19 )
              goto LABEL_46;
          }
          else if ( !v42 )
          {
            break;
          }
          ++v22;
        }
      }
LABEL_17:
      *(_QWORD *)(v15 - 8) = v30;
      v15 -= 8;
LABEL_18:
      ++*(_DWORD *)(v17 + 8);
      ++v16;
    }
    while ( v46 != v16 );
    v13 = v51;
    v11 = a7;
    v31 = v49 - v50;
    *(_DWORD *)(v51 + 68) = v31;
    LODWORD(v9) = v31;
    if ( v52 )
    {
      v32 = (unsigned int)v31;
      v33 = &v50[v32];
      if ( v32 * 8 )
      {
        v34 = v50;
        while ( 1 )
        {
          v35 = *v34;
          if ( (*v34 & 7) != 0 )
            break;
LABEL_25:
          if ( ++v34 == v33 )
            goto LABEL_26;
        }
        while ( 1 )
        {
          *v34 = *(v33 - 1);
          *(v33 - 1) = v35;
          if ( v33 - 1 == v34 )
            break;
          v35 = *v34;
          --v33;
          if ( (*v34 & 7) == 0 )
            goto LABEL_25;
        }
LABEL_26:
        v9 = v34 - v50;
      }
      else
      {
        LODWORD(v9) = 0;
      }
    }
  }
  else
  {
    *(_DWORD *)(v13 + 68) = 0;
  }
  *(_DWORD *)(v13 + 64) = v9;
  if ( v11 )
  {
    v47 = v13;
    sub_62BE20(v13, a1);
    return v47;
  }
  return v13;
}

