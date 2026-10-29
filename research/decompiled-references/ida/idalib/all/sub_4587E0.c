__int64 __fastcall sub_4587E0(__int64 a1, unsigned int a2, int a3, int a4, int *a5)
{
  unsigned int v9; // eax
  __int64 **v10; // rdx
  __int64 *v11; // rbp
  _QWORD *v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  __int64 **v18; // rdx
  __int64 *v19; // r12
  _QWORD *v20; // r15
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  _QWORD **v26; // rdx
  _QWORD *v27; // r13
  __int64 v28; // rax
  void *v29; // rdi
  _QWORD *v30; // r12
  _QWORD *v31; // r15
  __int64 v32; // rsi
  int v33; // r13d
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  _QWORD *v39; // r12
  __int64 i; // r13
  unsigned int v41; // eax
  _QWORD **v42; // rdx
  _QWORD *v43; // r12
  __int64 v44; // rax
  void *v45; // rdi
  __int64 v46; // rax
  _QWORD *v47; // r15
  _QWORD *v48; // r13
  __int64 v49; // rsi
  int v50; // ebp
  int v51; // eax
  int v52; // edx
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  _QWORD *v56; // rbp
  __int64 v57; // r12
  _QWORD *v58; // rsi
  int v59; // [rsp+0h] [rbp-78h]
  int *v60; // [rsp+8h] [rbp-70h]
  int *v61; // [rsp+8h] [rbp-70h]
  _QWORD *v62; // [rsp+10h] [rbp-68h]
  _QWORD *v63; // [rsp+10h] [rbp-68h]
  int v64; // [rsp+18h] [rbp-60h]
  int v65[2]; // [rsp+18h] [rbp-60h]
  int v66[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v67; // [rsp+30h] [rbp-48h]
  unsigned __int64 v68; // [rsp+38h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  if ( a2 != 2 )
  {
    if ( a2 <= 2 )
    {
      if ( a2 )
      {
        if ( (*(_BYTE *)(a1 + 208) & 0x40) != 0 )
        {
          v41 = *a5;
          if ( (unsigned int)*a5 > 0x2F )
          {
            v42 = *((_QWORD ***)a5 + 1);
            *((_QWORD *)a5 + 1) = v42 + 1;
          }
          else
          {
            v42 = (_QWORD **)(*((_QWORD *)a5 + 2) + v41);
            *a5 = v41 + 8;
          }
          v43 = *v42;
          if ( (*(_BYTE *)(a1 + 209) & 1) != 0 )
          {
            v44 = switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * a3 + 16));
            v45 = *(void **)(a1 + 168);
            v63 = *(_QWORD **)(v44 + 1672);
            if ( v45 )
            {
              *(_QWORD *)(a1 + 176) = 0;
              qfree(v45);
              *(_QWORD *)(a1 + 168) = 0;
              *(_QWORD *)(a1 + 184) = 0;
            }
            *(_QWORD *)(a1 + 192) = 0;
            v46 = v43[1];
            v47 = (_QWORD *)*v43;
            v43 = (_QWORD *)(a1 + 168);
            v46 *= 16;
            v48 = (_QWORD *)((char *)v47 + v46);
            if ( v47 != (_QWORD *)((char *)v47 + v46) )
            {
              v43 = (_QWORD *)(a1 + 168);
              v61 = v66;
              do
              {
                v49 = v47[1];
                v47 += 2;
                v50 = sub_3BDD60(v63, v49);
                v51 = sub_3BDD60(v63, *(v47 - 2));
                rangeset_t_add(a1 + 168, (int)v61, v52, v53, v54, v55, v59, v61, (__int64)v63, v64, v51, v50, v67);
              }
              while ( v48 != v47 );
            }
          }
          v56 = (_QWORD *)*v43;
          v57 = *v43 + 16LL * v43[1];
          while ( (_QWORD *)v57 != v56 )
          {
            v58 = v56;
            v56 += 2;
            sub_4584C0(a1, v58, a3);
          }
        }
      }
      else if ( (*(_BYTE *)(a1 + 208) & 0x40) != 0 )
      {
        v25 = *a5;
        if ( (unsigned int)*a5 > 0x2F )
        {
          v26 = *((_QWORD ***)a5 + 1);
          *((_QWORD *)a5 + 1) = v26 + 1;
        }
        else
        {
          v26 = (_QWORD **)(*((_QWORD *)a5 + 2) + v25);
          *a5 = v25 + 8;
        }
        v27 = *v26;
        if ( (*(_BYTE *)(a1 + 209) & 1) != 0 )
        {
          v28 = switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * a3 + 16));
          v29 = *(void **)(a1 + 168);
          v62 = *(_QWORD **)(v28 + 1672);
          if ( v29 )
          {
            *(_QWORD *)(a1 + 176) = 0;
            qfree(v29);
            *(_QWORD *)(a1 + 168) = 0;
            *(_QWORD *)(a1 + 184) = 0;
          }
          *(_QWORD *)(a1 + 192) = 0;
          v30 = (_QWORD *)(a1 + 168);
          *(_QWORD *)v65 = *v27 + 16LL * v27[1];
          if ( *v27 != *(_QWORD *)v65 )
          {
            v31 = (_QWORD *)*v27;
            v30 = (_QWORD *)(a1 + 168);
            v60 = v66;
            do
            {
              v32 = v31[1];
              v31 += 2;
              v33 = sub_3BDD60(v62, v32);
              v34 = sub_3BDD60(v62, *(v31 - 2));
              rangeset_t_add(a1 + 168, (int)v60, v35, v36, v37, v38, v59, v60, (__int64)v62, v65[0], v34, v33, v67);
            }
            while ( *(_QWORD **)v65 != v31 );
          }
          v27 = v30;
        }
        v39 = (_QWORD *)*v27;
        for ( i = *v27 + 16LL * v27[1]; (_QWORD *)i != v39; v39 += 2 )
          sub_458530(a1, v39, a3, a4);
      }
      return v68 - __readfsqword(0x28u);
    }
    if ( a2 == 3 && *(char *)(a1 + 208) < 0 )
    {
      v9 = *a5;
      if ( (unsigned int)*a5 > 0x2F )
      {
        v10 = *((__int64 ***)a5 + 1);
        *((_QWORD *)a5 + 1) = v10 + 1;
      }
      else
      {
        v10 = (__int64 **)(*((_QWORD *)a5 + 2) + v9);
        *a5 = v9 + 8;
      }
      v11 = *v10;
      if ( (*(_BYTE *)(a1 + 209) & 1) != 0 )
      {
        v12 = *(_QWORD **)(switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * a3 + 16)) + 1672);
        v13 = sub_3BDD60(v12, v11[1]);
        v14 = *v11;
        v11 = (__int64 *)(a1 + 152);
        v15 = v13;
        v16 = sub_3BDD60(v12, v14);
        *(_QWORD *)(a1 + 160) = v15;
        *(_QWORD *)(a1 + 152) = v16;
      }
      return sub_4584C0(a1, v11, a3);
    }
    return v68 - __readfsqword(0x28u);
  }
  if ( *(char *)(a1 + 208) >= 0 )
    return v68 - __readfsqword(0x28u);
  v17 = *a5;
  if ( (unsigned int)*a5 > 0x2F )
  {
    v18 = *((__int64 ***)a5 + 1);
    *((_QWORD *)a5 + 1) = v18 + 1;
  }
  else
  {
    v18 = (__int64 **)(*((_QWORD *)a5 + 2) + v17);
    *a5 = v17 + 8;
  }
  v19 = *v18;
  if ( (*(_BYTE *)(a1 + 209) & 1) != 0 )
  {
    v20 = *(_QWORD **)(switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * a3 + 16)) + 1672);
    v21 = sub_3BDD60(v20, v19[1]);
    v22 = *v19;
    v19 = (__int64 *)(a1 + 152);
    v23 = v21;
    v24 = sub_3BDD60(v20, v22);
    *(_QWORD *)(a1 + 160) = v23;
    *(_QWORD *)(a1 + 152) = v24;
  }
  return sub_458530(a1, v19, a3, a4);
}
