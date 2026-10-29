unsigned __int64 __fastcall sub_4449A0(__int64 a1, unsigned int a2, int a3, int a4, int *a5)
{
  unsigned int v9; // eax
  int **v10; // rdx
  int *v11; // rbp
  _QWORD *v12; // r13
  int v13; // eax
  int v14; // esi
  int v15; // r12d
  int v16; // eax
  unsigned int v17; // eax
  int **v18; // rdx
  int *v19; // r12
  _QWORD *v20; // r15
  int v21; // eax
  int v22; // esi
  int v23; // r13d
  int v24; // eax
  unsigned int v25; // eax
  unsigned int ***v26; // rdx
  unsigned int **v27; // r13
  __int64 v28; // rax
  void *v29; // rdi
  unsigned int **v30; // r12
  unsigned int *v31; // r15
  int v32; // esi
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  unsigned int *v38; // r12
  __int64 i; // r13
  unsigned int v40; // eax
  unsigned int ***v41; // rdx
  unsigned int **v42; // r12
  __int64 v43; // rax
  void *v44; // rdi
  unsigned int *v45; // r15
  unsigned int *v46; // rax
  unsigned int *v47; // r13
  int v48; // esi
  int v49; // eax
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  unsigned int *v54; // rbp
  __int64 v55; // r12
  unsigned int *v56; // rsi
  int v57; // [rsp+0h] [rbp-68h]
  int *v58; // [rsp+8h] [rbp-60h]
  int *v59; // [rsp+8h] [rbp-60h]
  _QWORD *v60; // [rsp+10h] [rbp-58h]
  _QWORD *v61; // [rsp+10h] [rbp-58h]
  int v62; // [rsp+18h] [rbp-50h]
  int v63[2]; // [rsp+18h] [rbp-50h]
  int v64; // [rsp+20h] [rbp-48h] BYREF
  int v65[2]; // [rsp+28h] [rbp-40h]
  __int64 v66; // [rsp+30h] [rbp-38h]

  *(_QWORD *)v65 = __readfsqword(0x28u);
  if ( a2 != 2 )
  {
    if ( a2 <= 2 )
    {
      if ( a2 )
      {
        if ( (*(_BYTE *)(a1 + 200) & 0x40) != 0 )
        {
          v40 = *a5;
          if ( (unsigned int)*a5 > 0x2F )
          {
            v41 = *((unsigned int ****)a5 + 1);
            *((_QWORD *)a5 + 1) = v41 + 1;
          }
          else
          {
            v41 = (unsigned int ***)(*((_QWORD *)a5 + 2) + v40);
            *a5 = v40 + 8;
          }
          v42 = *v41;
          if ( (*(_BYTE *)(a1 + 201) & 1) != 0 )
          {
            v43 = switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * a3 + 16));
            v44 = *(void **)(a1 + 160);
            v61 = *(_QWORD **)(v43 + 1480);
            if ( v44 )
            {
              *(_QWORD *)(a1 + 168) = 0;
              qfree(v44);
              *(_QWORD *)(a1 + 160) = 0;
              *(_QWORD *)(a1 + 176) = 0;
            }
            *(_QWORD *)(a1 + 184) = 0;
            v45 = *v42;
            v46 = v42[1];
            v42 = (unsigned int **)(a1 + 160);
            v47 = &v45[2 * (_QWORD)v46];
            if ( v45 != v47 )
            {
              v42 = (unsigned int **)(a1 + 160);
              v59 = &v64;
              do
              {
                v48 = v45[1];
                v45 += 2;
                sub_3B90A0(v61, v48);
                v49 = sub_3B90A0(v61, *(v45 - 2));
                rangeset_t_add(a1 + 160, (int)v59, v50, v51, v52, v53, v57, v59, (__int64)v61, v62, v49, v65[0], v66);
              }
              while ( v47 != v45 );
            }
          }
          v54 = *v42;
          v55 = (__int64)&(*v42)[2 * (_QWORD)v42[1]];
          while ( (unsigned int *)v55 != v54 )
          {
            v56 = v54;
            v54 += 2;
            sub_444680(a1, v56, a3);
          }
        }
      }
      else if ( (*(_BYTE *)(a1 + 200) & 0x40) != 0 )
      {
        v25 = *a5;
        if ( (unsigned int)*a5 > 0x2F )
        {
          v26 = *((unsigned int ****)a5 + 1);
          *((_QWORD *)a5 + 1) = v26 + 1;
        }
        else
        {
          v26 = (unsigned int ***)(*((_QWORD *)a5 + 2) + v25);
          *a5 = v25 + 8;
        }
        v27 = *v26;
        if ( (*(_BYTE *)(a1 + 201) & 1) != 0 )
        {
          v28 = switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * a3 + 16));
          v29 = *(void **)(a1 + 160);
          v60 = *(_QWORD **)(v28 + 1480);
          if ( v29 )
          {
            *(_QWORD *)(a1 + 168) = 0;
            qfree(v29);
            *(_QWORD *)(a1 + 160) = 0;
            *(_QWORD *)(a1 + 176) = 0;
          }
          *(_QWORD *)(a1 + 184) = 0;
          v30 = (unsigned int **)(a1 + 160);
          *(_QWORD *)v63 = &(*v27)[2 * (_QWORD)v27[1]];
          if ( *v27 != *(unsigned int **)v63 )
          {
            v31 = *v27;
            v30 = (unsigned int **)(a1 + 160);
            v58 = &v64;
            do
            {
              v32 = v31[1];
              v31 += 2;
              sub_3B90A0(v60, v32);
              v33 = sub_3B90A0(v60, *(v31 - 2));
              rangeset_t_add(a1 + 160, (int)v58, v34, v35, v36, v37, v57, v58, (__int64)v60, v63[0], v33, v65[0], v66);
            }
            while ( *(unsigned int **)v63 != v31 );
          }
          v27 = v30;
        }
        v38 = *v27;
        for ( i = (__int64)&(*v27)[2 * (_QWORD)v27[1]]; (unsigned int *)i != v38; v38 += 2 )
          sub_4446F0(a1, v38, a3, a4);
      }
      return *(_QWORD *)v65 - __readfsqword(0x28u);
    }
    if ( a2 == 3 && *(char *)(a1 + 200) < 0 )
    {
      v9 = *a5;
      if ( (unsigned int)*a5 > 0x2F )
      {
        v10 = *((int ***)a5 + 1);
        *((_QWORD *)a5 + 1) = v10 + 1;
      }
      else
      {
        v10 = (int **)(*((_QWORD *)a5 + 2) + v9);
        *a5 = v9 + 8;
      }
      v11 = *v10;
      if ( (*(_BYTE *)(a1 + 201) & 1) != 0 )
      {
        v12 = *(_QWORD **)(switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * a3 + 16)) + 1480);
        v13 = sub_3B90A0(v12, v11[1]);
        v14 = *v11;
        v11 = (int *)(a1 + 148);
        v15 = v13;
        v16 = sub_3B90A0(v12, v14);
        *(_DWORD *)(a1 + 152) = v15;
        *(_DWORD *)(a1 + 148) = v16;
      }
      return sub_444680(a1, (unsigned int *)v11, a3);
    }
    return *(_QWORD *)v65 - __readfsqword(0x28u);
  }
  if ( *(char *)(a1 + 200) >= 0 )
    return *(_QWORD *)v65 - __readfsqword(0x28u);
  v17 = *a5;
  if ( (unsigned int)*a5 > 0x2F )
  {
    v18 = *((int ***)a5 + 1);
    *((_QWORD *)a5 + 1) = v18 + 1;
  }
  else
  {
    v18 = (int **)(*((_QWORD *)a5 + 2) + v17);
    *a5 = v17 + 8;
  }
  v19 = *v18;
  if ( (*(_BYTE *)(a1 + 201) & 1) != 0 )
  {
    v20 = *(_QWORD **)(switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * a3 + 16)) + 1480);
    v21 = sub_3B90A0(v20, v19[1]);
    v22 = *v19;
    v19 = (int *)(a1 + 148);
    v23 = v21;
    v24 = sub_3B90A0(v20, v22);
    *(_DWORD *)(a1 + 152) = v23;
    *(_DWORD *)(a1 + 148) = v24;
  }
  return sub_4446F0(a1, (unsigned int *)v19, a3, a4);
}

