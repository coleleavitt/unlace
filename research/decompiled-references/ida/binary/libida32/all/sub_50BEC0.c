unsigned __int64 __fastcall sub_50BEC0(_QWORD *a1, _QWORD *a2, char a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  _QWORD *v7; // r15
  _QWORD *v8; // r12
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  bool v21; // zf
  _QWORD *v22; // r15
  unsigned __int64 v23; // rbp
  _QWORD *v24; // rax
  _QWORD *v25; // rdi
  __int64 v26; // rcx
  __int64 *v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // r9
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rcx
  _QWORD *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 *v37; // rsi
  __int64 v38; // rdi
  __int64 *v39; // rdx
  __int64 v40; // r15
  _QWORD *v41; // r14
  __int64 *v42; // r12
  unsigned __int64 v43; // rbp
  unsigned __int64 v44; // rax
  __int64 *v45; // rdx
  __int64 v46; // r11
  __int64 v47; // rdx
  __int64 *v48; // rdi
  __int64 *v49; // rdx
  __int64 v50; // r10
  __int64 *v51; // rsi
  __int64 *v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 *v56; // rdi
  unsigned __int64 v57; // r13
  unsigned __int64 v58; // rsi
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rsi
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rax
  __int64 v64; // rsi
  unsigned __int64 v65; // rdx
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  _QWORD *v72; // [rsp+8h] [rbp-80h]
  __int64 v73; // [rsp+10h] [rbp-78h]
  unsigned __int64 v74; // [rsp+10h] [rbp-78h]
  unsigned __int64 v75; // [rsp+10h] [rbp-78h]
  _QWORD *v76; // [rsp+18h] [rbp-70h]
  _QWORD *v77; // [rsp+18h] [rbp-70h]
  __int64 v78; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v80; // [rsp+38h] [rbp-50h]
  unsigned __int64 v81; // [rsp+48h] [rbp-40h]

  v5 = a1[14];
  v81 = __readfsqword(0x28u);
  v6 = a1[12];
  if ( v5 )
  {
    ptr = nullptr;
    v80 = 0;
    if ( v6 )
    {
      ptr = (void *)qvector_reserve(&ptr, 0, v6, 8);
      v19 = v80;
      if ( (unsigned __int64)v80 < v6 )
      {
        *((_QWORD *)ptr + v80) = 0;
        v20 = v19 + 1;
        if ( v20 < v6 )
        {
          do
            *((_QWORD *)ptr + v20++) = 0;
          while ( v6 != v20 );
        }
      }
      v21 = a1[1] == 0;
      *(_QWORD *)&v80 = v6;
      if ( v21 )
        goto LABEL_47;
    }
    else if ( !a1[1] )
    {
      goto LABEL_49;
    }
    v22 = a1 + 2;
    v23 = 0;
    do
    {
      switch_dbctx(*(int *)(a2[v23] + 8LL));
      v24 = (_QWORD *)*v22;
      v25 = (_QWORD *)(*v22 + 16LL * v22[1]);
      if ( (_QWORD *)*v22 != v25 )
      {
        do
        {
          v26 = v24[1];
          v24 += 2;
          v27 = (__int64 *)((char *)ptr + 8 * v26);
          v28 = *v27;
          *v27 = *(v24 - 2);
          *(v24 - 2) = v28;
        }
        while ( v25 != v24 );
        v25 = (_QWORD *)*v22;
      }
      if ( v25 )
      {
        v22[1] = 0;
        qfree(v25);
        *v22 = 0;
        v22[2] = 0;
      }
      v29 = (_QWORD *)a2[v23];
      v30 = v6 - a1[14];
      v31 = v29[6];
      if ( v30 != v31 )
      {
        v78 = 0;
        if ( v30 >= v31 )
        {
          v32 = v29[5];
          v33 = v29[7];
          v34 = v29 + 5;
          if ( (unsigned __int64)&v78 < v32 || (unsigned __int64)&v78 >= v32 + 8 * v33 )
          {
            if ( v33 < v30 )
            {
              v76 = v29;
              v74 = v30;
              v67 = qvector_reserve(v34, v32, v30, 8);
              v29 = v76;
              v30 = v74;
              v76[5] = v67;
              v31 = v76[6];
            }
            v66 = v78;
            if ( v31 < v30 )
            {
              do
                *(_QWORD *)(v29[5] + 8 * v31++) = v66;
              while ( v30 != v31 );
            }
          }
          else
          {
            if ( v33 < v30 )
            {
              v77 = v29;
              v75 = v30;
              v68 = qvector_reserve(v34, v32, v30, 8);
              v29 = v77;
              v30 = v75;
              v77[5] = v68;
              v31 = v77[6];
            }
            if ( v31 < v30 )
            {
              do
                *(_QWORD *)(v29[5] + 8 * v31++) = 0;
              while ( v30 != v31 );
            }
          }
        }
        v29[6] = v30;
      }
      if ( v6 )
      {
        v35 = 0;
        v36 = 0;
        do
        {
          if ( *(_DWORD *)(a1[11] + 4 * v35) )
          {
            v37 = (__int64 *)(v29[5] + 8 * v36++);
            v38 = *v37;
            v39 = (__int64 *)((char *)ptr + 8 * v35);
            *v37 = *v39;
            *v39 = v38;
          }
          ++v35;
        }
        while ( v35 != v6 );
      }
      else
      {
        v36 = 0;
      }
      if ( v29[6] != v36 )
      {
        if ( !under_debugger )
          interr(1962);
        BUG();
      }
      ++v23;
      v22 += 3;
    }
    while ( v23 < a1[1] );
LABEL_47:
    if ( ptr )
    {
      *(_QWORD *)&v80 = 0;
      qfree(ptr);
    }
LABEL_49:
    if ( !a3 )
      return v81 - __readfsqword(0x28u);
    goto LABEL_50;
  }
  if ( !a1[1] )
  {
    if ( !a3 )
      return v81 - __readfsqword(0x28u);
    v40 = *a2;
    v41 = (_QWORD *)a2[1];
    v42 = nullptr;
    v73 = *a2 + 40LL;
    v72 = v41 + 5;
LABEL_52:
    v43 = *(_QWORD *)(v40 + 48);
    if ( v43 )
    {
      v44 = 0;
      v43 = 0;
      do
      {
        while ( 1 )
        {
          v54 = *(_QWORD *)(v40 + 40);
          v55 = 8 * v44;
          v56 = (__int64 *)(v54 + 8 * v44);
          if ( *v56 || *(_QWORD *)(v41[5] + 8 * v44) )
            break;
          if ( ++v44 >= *(_QWORD *)(v40 + 48) )
            goto LABEL_61;
        }
        if ( v43 < v44 )
        {
          v45 = (__int64 *)(8 * v43 + v54);
          v46 = *v45;
          *v45 = *v56;
          *v56 = v46;
          v47 = v41[5];
          v48 = (__int64 *)(v47 + 8 * v43);
          v49 = (__int64 *)(v55 + v47);
          v50 = *v48;
          *v48 = *v49;
          *v49 = v50;
          if ( v42 )
          {
            v51 = (__int64 *)(*v42 + 8 * v43);
            v52 = (__int64 *)(v55 + *v42);
            v53 = *v51;
            *v51 = *v52;
            *v52 = v53;
          }
        }
        ++v43;
        ++v44;
      }
      while ( v44 < *(_QWORD *)(v40 + 48) );
LABEL_61:
      switch_dbctx(*(int *)(*a2 + 8LL));
      v57 = *(_QWORD *)(v40 + 48);
      if ( v43 == v57 )
        goto LABEL_70;
      ptr = nullptr;
      if ( v43 >= v57 )
      {
        v58 = *(_QWORD *)(v40 + 40);
        v59 = *(_QWORD *)(v40 + 56);
        if ( (unsigned __int64)&ptr < v58 || (unsigned __int64)&ptr >= v58 + 8 * v59 )
        {
          if ( v59 < v43 )
          {
            v69 = qvector_reserve(v73, v58, v43, 8);
            v57 = *(_QWORD *)(v40 + 48);
            *(_QWORD *)(v40 + 40) = v69;
          }
          if ( v57 < v43 )
          {
            do
              *(_QWORD *)(*(_QWORD *)(v40 + 40) + 8 * v57++) = ptr;
            while ( v43 != v57 );
          }
        }
        else
        {
          if ( v59 < v43 )
          {
            v70 = qvector_reserve(v73, v58, v43, 8);
            v57 = *(_QWORD *)(v40 + 48);
            *(_QWORD *)(v40 + 40) = v70;
          }
          if ( v57 < v43 )
          {
            do
              *(_QWORD *)(*(_QWORD *)(v40 + 40) + 8 * v57++) = 0;
            while ( v43 != v57 );
          }
        }
      }
    }
    else
    {
      switch_dbctx(*(int *)(v40 + 8));
      v57 = *(_QWORD *)(v40 + 48);
      if ( !v57 )
      {
        switch_dbctx(*(int *)(a2[1] + 8LL));
        if ( !v41[6] )
          goto LABEL_79;
        goto LABEL_78;
      }
    }
    *(_QWORD *)(v40 + 48) = v43;
    v57 = v43;
LABEL_70:
    switch_dbctx(*(int *)(a2[1] + 8LL));
    v60 = v41[6];
    if ( v57 == v60 )
    {
LABEL_79:
      if ( v42 )
      {
        switch_dbctx(*(int *)(a2[2] + 8LL));
        v63 = v42[1];
        if ( v63 != v57 )
        {
          ptr = nullptr;
          if ( v57 >= v63 )
          {
            v64 = *v42;
            v65 = v42[2];
            if ( (unsigned __int64)&ptr < *v42 || (unsigned __int64)&ptr >= v64 + 8 * v65 )
            {
              if ( v65 < v57 )
              {
                *v42 = qvector_reserve(v42, v64, v57, 8);
                v63 = v42[1];
              }
              if ( v63 < v57 )
              {
                do
                  *(_QWORD *)(*v42 + 8 * v63++) = ptr;
                while ( v63 != v57 );
              }
            }
            else
            {
              if ( v65 < v57 )
              {
                *v42 = qvector_reserve(v42, v64, v57, 8);
                v63 = v42[1];
              }
              if ( v63 < v57 )
              {
                do
                  *(_QWORD *)(*v42 + 8 * v63++) = 0;
                while ( v63 != v57 );
              }
            }
          }
          v42[1] = v57;
        }
      }
      return v81 - __readfsqword(0x28u);
    }
    ptr = nullptr;
    if ( v57 >= v60 )
    {
      v61 = v41[5];
      v62 = v41[7];
      if ( (unsigned __int64)&ptr < v61 || (unsigned __int64)&ptr >= v61 + 8 * v62 )
      {
        if ( v62 < v57 )
        {
          v41[5] = qvector_reserve(v72, v61, v57, 8);
          v60 = v41[6];
        }
        if ( v60 < v57 )
        {
          do
            *(_QWORD *)(v41[5] + 8 * v60++) = ptr;
          while ( v57 != v60 );
        }
      }
      else
      {
        if ( v62 < v57 )
        {
          v41[5] = qvector_reserve(v72, v61, v57, 8);
          v60 = v41[6];
        }
        if ( v60 < v57 )
        {
          do
            *(_QWORD *)(v41[5] + 8 * v60++) = 0;
          while ( v57 != v60 );
        }
      }
    }
LABEL_78:
    v41[6] = v57;
    goto LABEL_79;
  }
  v7 = a1 + 2;
  do
  {
    switch_dbctx(*(int *)(a2[v5] + 8LL));
    v8 = (_QWORD *)a2[v5];
    v9 = v8[6];
    if ( v6 != v9 )
    {
      ptr = nullptr;
      if ( v6 >= v9 )
      {
        v10 = v8[5];
        v11 = v8[7];
        v12 = v8 + 5;
        if ( (unsigned __int64)&ptr < v10 || (unsigned __int64)&ptr >= v10 + 8 * v11 )
        {
          if ( v11 < v6 )
          {
            v8[5] = qvector_reserve(v12, v10, v6, 8);
            v9 = v8[6];
          }
          if ( v9 < v6 )
          {
            do
              *(_QWORD *)(v8[5] + 8 * v9++) = ptr;
            while ( v6 != v9 );
          }
        }
        else
        {
          if ( v11 < v6 )
          {
            v8[5] = qvector_reserve(v12, v10, v6, 8);
            v9 = v8[6];
          }
          if ( v9 < v6 )
          {
            do
              *(_QWORD *)(v8[5] + 8 * v9++) = 0;
            while ( v6 != v9 );
          }
        }
      }
      v8[6] = v6;
    }
    v13 = (_QWORD *)*v7;
    v14 = (_QWORD *)(*v7 + 16LL * v7[1]);
    if ( (_QWORD *)*v7 != v14 )
    {
      do
      {
        v15 = v13[1];
        v13 += 2;
        v16 = (__int64 *)(v8[5] + 8 * v15);
        v17 = *v16;
        *v16 = *(v13 - 2);
        *(v13 - 2) = v17;
      }
      while ( v13 != v14 );
      v14 = (_QWORD *)*v7;
    }
    if ( v14 )
    {
      v7[1] = 0;
      qfree(v14);
      *v7 = 0;
      v7[2] = 0;
    }
    ++v5;
    v7 += 3;
  }
  while ( v5 < a1[1] );
  if ( a3 )
  {
LABEL_50:
    v40 = *a2;
    v41 = (_QWORD *)a2[1];
    v42 = nullptr;
    v73 = *a2 + 40LL;
    v72 = v41 + 5;
    if ( a1[1] > 2u )
      v42 = (__int64 *)(a2[2] + 40LL);
    goto LABEL_52;
  }
  return v81 - __readfsqword(0x28u);
}

