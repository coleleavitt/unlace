void __fastcall sub_B191A0(__int64 a1, int a2, int a3, unsigned int *a4, unsigned int **a5)
{
  int v6; // eax
  bool v7; // zf
  int v8; // r15d
  int v9; // r15d
  unsigned int *v10; // rcx
  unsigned int *v11; // r13
  __int64 v12; // rdx
  __int64 *v13; // r15
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  unsigned int *v18; // rdx
  unsigned int v19; // r12d
  __int64 v20; // rax
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // ebx
  unsigned int v24; // eax
  unsigned int v25; // r13d
  __int64 v26; // rax
  unsigned int v27; // eax
  int *v28; // rbx
  unsigned int v29; // r15d
  int v30; // esi
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  int v34; // eax
  int v35; // esi
  int v36; // ebx
  int v37; // r15d
  unsigned int v38; // eax
  int v39; // ecx
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rsi
  unsigned int v43; // ecx
  __int64 i; // r15
  int v45; // ecx
  unsigned int v46; // ecx
  int v47; // eax
  unsigned int v49; // [rsp+14h] [rbp-6Ch]
  unsigned int v50; // [rsp+1Ch] [rbp-64h]
  unsigned int v51; // [rsp+20h] [rbp-60h]
  unsigned int v53; // [rsp+28h] [rbp-58h]
  int *v54; // [rsp+30h] [rbp-50h]
  unsigned int *v56[7]; // [rsp+48h] [rbp-38h] BYREF

  v56[0] = nullptr;
  if ( a2 )
  {
    v50 = 0;
    while ( 1 )
    {
      ++*(_DWORD *)(a1 + 20);
      v13 = *(__int64 **)(a1 + 8);
      v14 = v13[1];
      v15 = sub_1691BE0(v13 + 3);
      v16 = *v13;
      v17 = v15;
      if ( v15 )
      {
        ++*(_DWORD *)(v15 + 8);
        v6 = sub_B67520(v16, v15);
        v7 = (*(_DWORD *)(v17 + 8))-- == 1;
        v8 = v6;
        if ( v7 )
          sub_15D7BC0(v14, v17);
        v9 = 2 * v8;
        v10 = *a5;
        v11 = *a5;
        if ( !*a5 )
        {
LABEL_10:
          sub_692C60(a5);
          v10 = *a5;
          v12 = *(*a5 - 1);
          v11 = *a5;
          goto LABEL_7;
        }
      }
      else
      {
        v9 = 2 * sub_B67520(v16, 0);
        v10 = *a5;
        v11 = *a5;
        if ( !*a5 )
          goto LABEL_10;
      }
      v12 = *(v10 - 1);
      if ( (_DWORD)v12 == *(v10 - 2) )
        goto LABEL_10;
LABEL_7:
      ++v50;
      v10[v12] = v9;
      ++*(v10 - 1);
      if ( a2 == v50 )
      {
        v18 = v56[0];
        if ( *(_DWORD *)(a1 + 16) == 1 )
          goto LABEL_53;
        v51 = -1;
        v49 = 0;
        v19 = a3 + 1;
        if ( v56[0] )
        {
          v20 = *(v56[0] - 1);
          if ( (_DWORD)v20 != *(v56[0] - 2) )
            goto LABEL_18;
        }
        while ( 2 )
        {
          sub_692C60(v56);
          v18 = v56[0];
          v20 = *(v56[0] - 1);
LABEL_18:
          v18[v20] = *v11;
          v21 = *(v18 - 1);
          *(v18 - 1) = v21 + 1;
          if ( v51 == -2 )
          {
            sub_B17C90(a1, v21 + 1, v18);
            v18 = v56[0];
            --*(v56[0] - 1);
          }
          else
          {
            if ( v19 != 1 )
            {
              v22 = dword_1C7ED24;
              v23 = dword_1C7ED20;
              v54 = (int *)(a4 + 1);
              v24 = *a4;
              if ( *a4 != dword_1C7ED24 )
              {
                if ( v24 != dword_1C7ED20 )
                  v22 = v24 ^ 1;
                v23 = v22;
              }
              v25 = 0;
              while ( 1 )
              {
                v26 = *(v18 - 1);
                if ( (_DWORD)v26 == *(v18 - 2) )
                  goto LABEL_43;
                while ( 1 )
                {
                  v18[v26] = v23;
                  v27 = *(v18 - 1);
                  ++v25;
                  *(v18 - 1) = v27 + 1;
                  if ( v49 )
                  {
                    if ( v25 >= v19 )
                      goto LABEL_38;
                    v28 = v54;
                    v29 = v25;
                    v30 = dword_1C7ED20;
                    v31 = *v54;
                    if ( *v54 != dword_1C7ED24 )
                    {
                      if ( v31 != dword_1C7ED20 )
                        goto LABEL_30;
                      v30 = dword_1C7ED24;
                    }
                    while ( 1 )
                    {
LABEL_31:
                      v32 = *(v18 - 1);
                      if ( (_DWORD)v32 == *(v18 - 2) )
                        goto LABEL_36;
                      while ( 1 )
                      {
                        v18[v32] = v30;
                        ++v29;
                        ++*(v18 - 1);
                        sub_B188B0(a1, 1, v51, v29, v56, a3, (__int64)a4);
                        v18 = v56[0];
                        ++v28;
                        v33 = *(v56[0] - 1);
                        *(v56[0] - 1) = v33 - 1;
                        if ( v29 >= v19 )
                        {
                          v27 = v33 - 2;
                          goto LABEL_38;
                        }
                        v31 = *v28;
                        v30 = dword_1C7ED20;
                        if ( *v28 == dword_1C7ED24 )
                          break;
                        if ( v31 != dword_1C7ED20 )
                        {
LABEL_30:
                          v30 = v31 ^ 1;
                          goto LABEL_31;
                        }
                        v32 = *(v18 - 1);
                        v30 = dword_1C7ED24;
                        if ( (_DWORD)v32 == *(v18 - 2) )
                        {
LABEL_36:
                          sub_692C60(v56);
                          v18 = v56[0];
                          v32 = *(v56[0] - 1);
                        }
                      }
                    }
                  }
                  sub_B17C90(a1, v27 + 1, v18);
                  v18 = v56[0];
                  v27 = *(v56[0] - 1) - 1;
LABEL_38:
                  ++v54;
                  *(v18 - 1) = v27;
                  if ( v19 - 1 == v25 )
                  {
                    v21 = v27 - 1;
                    goto LABEL_48;
                  }
                  v34 = *(v54 - 1);
                  v23 = dword_1C7ED20;
                  if ( v34 == dword_1C7ED24 )
                    break;
                  v35 = v34 ^ 1;
                  v7 = dword_1C7ED20 == v34;
                  v23 = dword_1C7ED24;
                  v26 = *(v18 - 1);
                  if ( !v7 )
                    v23 = v35;
                  if ( (_DWORD)v26 == *(v18 - 2) )
                  {
LABEL_43:
                    sub_692C60(v56);
                    v18 = v56[0];
                    v26 = *(v56[0] - 1);
                  }
                }
              }
            }
LABEL_48:
            *(v18 - 1) = v21;
            if ( v50 < v51 + 3 )
            {
              if ( !*(_DWORD *)(a1 + 16) )
              {
LABEL_12:
                sub_186B220(v18 - 2);
                return;
              }
              v10 = *a5;
LABEL_53:
              v36 = 0;
              while ( 2 )
              {
                v37 = dword_1C7ED20;
                v38 = v10[v36];
                v39 = dword_1C7ED24;
                if ( v38 != dword_1C7ED24 )
                {
                  if ( v38 != dword_1C7ED20 )
                    v39 = v38 ^ 1;
                  v37 = v39;
                }
                if ( !v18 || (v40 = *(v18 - 1), (_DWORD)v40 == *(v18 - 2)) )
                {
                  sub_692C60(v56);
                  v18 = v56[0];
                  v40 = *(v56[0] - 1);
                }
                v18[v40] = v37;
                v41 = *(v18 - 1);
                v42 = v41 + 1;
                *(v18 - 1) = v42;
                if ( a3 == v36 )
                {
                  sub_B17C90(a1, v42, v18);
                  v18 = v56[0];
                  v46 = *(v56[0] - 1) - 1;
LABEL_68:
                  v47 = v36 + 1;
                  *(v18 - 1) = v46;
                  if ( v50 < v36 + 2 )
                    goto LABEL_12;
                }
                else
                {
                  if ( v36 != -1 )
                  {
                    v43 = *a4;
                    for ( i = 0; ; ++i )
                    {
                      if ( (_DWORD)v42 == *(v18 - 2) )
                      {
                        v53 = v43;
                        sub_692C60(v56);
                        v18 = v56[0];
                        v43 = v53;
                        v42 = *(v56[0] - 1);
                      }
                      v18[v42] = v43;
                      ++*(v18 - 1);
                      sub_B188B0(a1, 0, a3 - 1 - v36, i + 1, v56, a3, (__int64)a4);
                      v18 = v56[0];
                      v45 = *(v56[0] - 1);
                      v42 = (unsigned int)(v45 - 1);
                      *(v56[0] - 1) = v42;
                      if ( v36 == i )
                        break;
                      v43 = a4[i + 1];
                    }
                    v46 = v45 - 2;
                    goto LABEL_68;
                  }
                  *(v18 - 1) = v41;
                  v47 = 0;
                }
                v36 = v47;
                v10 = *a5;
                continue;
              }
            }
          }
          --v19;
          v20 = *(v18 - 1);
          v51 = v49++;
          v11 = &(*a5)[v49];
          if ( (_DWORD)v20 == *(v18 - 2) )
            continue;
          goto LABEL_18;
        }
      }
    }
  }
}

