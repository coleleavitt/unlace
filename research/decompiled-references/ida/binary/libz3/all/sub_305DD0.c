__int64 __fastcall sub_305DD0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rdi
  int v7; // r13d
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r11
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // r12d
  int v15; // r13d
  __int64 v16; // rdx
  unsigned int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rax
  int v23; // ebp
  __int64 v24; // rbp
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r10
  __int64 i; // rax
  int v31; // ecx
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rbx
  unsigned int v35; // r13d
  int v36; // ecx
  __int64 v37; // rax
  int v38; // ebp
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // r10
  _DWORD *v42; // r9
  __int64 v43; // rax
  int v44; // r12d
  unsigned int v45; // r11d
  __int64 v46; // rbp
  __int64 v47; // rcx
  __int64 v48; // r14
  __int64 v49; // rbx
  __int64 v50; // rax
  int v51; // ebp
  __int64 v52; // rbp
  __int64 v53; // r14
  __int64 v54; // r15
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // r11
  int v58; // ecx
  __int64 v59; // rbp
  __int64 v60; // rbx
  unsigned int v61; // r15d
  _DWORD *v62; // r9
  int v63; // ecx
  __int64 v64; // rax
  int v65; // ebp
  __int64 v66; // [rsp+8h] [rbp-90h]
  __int64 v67; // [rsp+10h] [rbp-88h]
  __int64 v68; // [rsp+10h] [rbp-88h]
  __int64 v69; // [rsp+10h] [rbp-88h]
  _DWORD *v70; // [rsp+18h] [rbp-80h]
  unsigned int v71; // [rsp+20h] [rbp-78h]
  __int64 v72; // [rsp+20h] [rbp-78h]
  _DWORD *v73; // [rsp+20h] [rbp-78h]
  __int64 v74; // [rsp+28h] [rbp-70h]
  __int64 v75; // [rsp+28h] [rbp-70h]
  unsigned int v76; // [rsp+28h] [rbp-70h]
  __int64 v77; // [rsp+30h] [rbp-68h]
  __int64 v78; // [rsp+30h] [rbp-68h]
  __int64 v79; // [rsp+30h] [rbp-68h]
  __int64 v80; // [rsp+30h] [rbp-68h]
  __int64 v81; // [rsp+38h] [rbp-60h]
  __int64 v82; // [rsp+38h] [rbp-60h]
  __int64 v83; // [rsp+38h] [rbp-60h]
  __int64 v84; // [rsp+40h] [rbp-58h]
  __int64 v85; // [rsp+40h] [rbp-58h]
  __int64 v86; // [rsp+48h] [rbp-50h]
  __int64 v87; // [rsp+48h] [rbp-50h]
  __int64 v88; // [rsp+50h] [rbp-48h]

  result = a1;
  v6 = a2;
  v7 = a4;
  v9 = (a3 - 1) / 2;
  v66 = a2;
  if ( a2 >= v9 )
  {
    if ( (a3 & 1) != 0 )
    {
      v62 = (_DWORD *)(result + 4 * a2);
      goto LABEL_85;
    }
    if ( a2 == (a3 - 2) / 2 )
    {
      v16 = a2;
      goto LABEL_96;
    }
LABEL_101:
    v62 = (_DWORD *)(result + 4 * v66);
    goto LABEL_85;
  }
  v88 = a3;
  v10 = *(_QWORD *)a5;
  v11 = v9;
  v12 = result;
  while ( 2 )
  {
    v13 = *(unsigned int *)(a5 + 8);
    v14 = *(_DWORD *)(v12 + 8 * (v6 + 1));
    v15 = *(_DWORD *)(v12 + 8 * (v6 + 1) - 4);
    v16 = 2 * (v6 + 1);
    v17 = v13 - 1;
    v18 = 24 * v13;
    v19 = v10 + v18;
    v20 = 24LL * (v17 & v14);
    v21 = v10 + v20;
    if ( v20 != v18 )
    {
      v22 = v10 + v20;
      do
      {
        v23 = *(_DWORD *)(v22 + 4);
        if ( v23 == 2 )
        {
          if ( v14 == *(_DWORD *)v22 && v14 == *(_DWORD *)(v22 + 8) )
          {
            v24 = *(_QWORD *)(v22 + 16);
            if ( !v24 )
              goto LABEL_46;
            goto LABEL_11;
          }
        }
        else if ( !v23 )
        {
          goto LABEL_106;
        }
        v22 += 24;
      }
      while ( v19 != v22 );
    }
    if ( v10 == v21 )
      goto LABEL_106;
    v37 = v10;
    while ( 1 )
    {
      v38 = *(_DWORD *)(v37 + 4);
      if ( v38 != 2 )
      {
        if ( !v38 )
          goto LABEL_106;
        goto LABEL_41;
      }
      if ( v14 == *(_DWORD *)v37 && v14 == *(_DWORD *)(v37 + 8) )
        break;
LABEL_41:
      v37 += 24;
      if ( v21 == v37 )
        goto LABEL_106;
    }
    v24 = *(_QWORD *)(v37 + 16);
    if ( !v24 )
    {
LABEL_46:
      LODWORD(v25) = 0;
      goto LABEL_15;
    }
LABEL_11:
    v25 = *(unsigned int *)(v24 - 4);
    if ( (_DWORD)v25 )
    {
      v26 = v24 + 4 * v25;
      LODWORD(v25) = 0;
      v71 = v17;
      v77 = v12;
      v81 = a5;
      v84 = v11;
      v86 = v18;
      v74 = v10 + v18;
      v27 = v24;
      do
      {
        v27 += 4;
        LODWORD(v25) = __popcountdi2() + v25;
      }
      while ( v26 != v27 );
      v16 = 2 * (v6 + 1);
      v17 = v71;
      v19 = v74;
      v12 = v77;
      a5 = v81;
      v11 = v84;
      v18 = v86;
    }
LABEL_15:
    v28 = 24LL * (v15 & v17);
    v29 = v10 + v28;
    if ( v18 == v28 )
    {
LABEL_30:
      if ( v10 != v29 )
      {
        for ( i = v10; v29 != i; i += 24 )
        {
          v36 = *(_DWORD *)(i + 4);
          if ( v36 == 2 )
          {
            if ( v15 == *(_DWORD *)i && v15 == *(_DWORD *)(i + 8) )
              goto LABEL_22;
          }
          else if ( !v36 )
          {
            break;
          }
        }
      }
LABEL_106:
      BUG();
    }
    i = v10 + v28;
    while ( 2 )
    {
      v31 = *(_DWORD *)(i + 4);
      if ( v31 != 2 )
      {
        if ( !v31 )
          goto LABEL_106;
LABEL_18:
        i += 24;
        if ( v19 == i )
          goto LABEL_30;
        continue;
      }
      break;
    }
    if ( v15 != *(_DWORD *)i || v15 != *(_DWORD *)(i + 8) )
      goto LABEL_18;
LABEL_22:
    v32 = *(_QWORD *)(i + 16);
    if ( v32 )
    {
      v33 = *(unsigned int *)(v32 - 4);
      if ( (_DWORD)v33 )
      {
        v67 = v16;
        v34 = v32 + 4 * v33;
        v35 = 0;
        v72 = v12;
        v75 = a5;
        v78 = v11;
        do
        {
          v32 += 4;
          v35 += __popcountdi2();
        }
        while ( v32 != v34 );
        v16 = v67;
        v12 = v72;
        a5 = v75;
        v11 = v78;
        if ( (unsigned int)v25 < v35 )
        {
          v16 = v67 - 1;
          v14 = *(_DWORD *)(v72 + 4 * (v67 - 1));
        }
      }
    }
    *(_DWORD *)(v12 + 4 * v6) = v14;
    if ( v16 < v11 )
    {
      v6 = v16;
      continue;
    }
    break;
  }
  v7 = a4;
  result = v12;
  if ( (v88 & 1) == 0 && (v88 - 2) / 2 == v16 )
  {
LABEL_96:
    *(_DWORD *)(result + 4 * v16) = *(_DWORD *)(result + 4 * (2 * v16 + 2) - 4);
    v16 = 2 * v16 + 1;
  }
  v39 = (v16 - 1) / 2;
  if ( v16 <= v66 )
  {
    v66 = v16;
    goto LABEL_101;
  }
  v40 = *(_QWORD *)a5;
  v41 = result;
  while ( 2 )
  {
    v42 = (_DWORD *)(v41 + 4 * v39);
    v43 = *(unsigned int *)(a5 + 8);
    v44 = *v42;
    v45 = v43 - 1;
    v46 = 24LL * ((unsigned int)(v43 - 1) & *v42);
    v47 = 24 * v43;
    v48 = v40 + v46;
    v49 = v40 + 24 * v43;
    if ( v46 != 24 * v43 )
    {
      v50 = v40 + v46;
      do
      {
        v51 = *(_DWORD *)(v50 + 4);
        if ( v51 == 2 )
        {
          if ( v44 == *(_DWORD *)v50 && v44 == *(_DWORD *)(v50 + 8) )
          {
            v52 = *(_QWORD *)(v50 + 16);
            if ( !v52 )
              goto LABEL_94;
            goto LABEL_58;
          }
        }
        else if ( !v51 )
        {
          goto LABEL_107;
        }
        v50 += 24;
      }
      while ( v49 != v50 );
    }
    if ( v40 == v48 )
LABEL_107:
      BUG();
    v64 = v40;
    while ( 2 )
    {
      v65 = *(_DWORD *)(v64 + 4);
      if ( v65 != 2 )
      {
        if ( !v65 )
          goto LABEL_107;
LABEL_89:
        v64 += 24;
        if ( v48 == v64 )
          goto LABEL_107;
        continue;
      }
      break;
    }
    if ( v44 != *(_DWORD *)v64 || v44 != *(_DWORD *)(v64 + 8) )
      goto LABEL_89;
    v52 = *(_QWORD *)(v64 + 16);
    if ( !v52 )
    {
LABEL_94:
      LODWORD(v53) = 0;
      goto LABEL_62;
    }
LABEL_58:
    v53 = *(unsigned int *)(v52 - 4);
    if ( (_DWORD)v53 )
    {
      v68 = v16;
      v54 = v52 + 4 * v53;
      LODWORD(v53) = 0;
      v70 = (_DWORD *)(v41 + 4 * v39);
      v76 = v45;
      v82 = v41;
      v85 = a5;
      v87 = v47;
      v79 = v49;
      v55 = v52;
      do
      {
        v55 += 4;
        LODWORD(v53) = __popcountdi2() + v53;
      }
      while ( v55 != v54 );
      v16 = v68;
      v42 = v70;
      v45 = v76;
      v49 = v79;
      v41 = v82;
      a5 = v85;
      v47 = v87;
    }
LABEL_62:
    v56 = 24LL * (v7 & v45);
    v57 = v40 + v56;
    if ( v47 != v56 )
    {
      result = v40 + v56;
      do
      {
        v58 = *(_DWORD *)(result + 4);
        if ( v58 == 2 )
        {
          if ( v7 == *(_DWORD *)result && v7 == *(_DWORD *)(result + 8) )
          {
            v59 = *(_QWORD *)(result + 16);
            if ( !v59 )
              goto LABEL_84;
            goto LABEL_70;
          }
        }
        else if ( !v58 )
        {
          goto LABEL_107;
        }
        result += 24;
      }
      while ( v49 != result );
    }
    if ( v40 == v57 )
      goto LABEL_107;
    result = v40;
    while ( 2 )
    {
      v63 = *(_DWORD *)(result + 4);
      if ( v63 != 2 )
      {
        if ( !v63 )
          goto LABEL_107;
LABEL_79:
        result += 24;
        if ( v57 == result )
          goto LABEL_107;
        continue;
      }
      break;
    }
    if ( v7 != *(_DWORD *)result || v7 != *(_DWORD *)(result + 8) )
      goto LABEL_79;
    v59 = *(_QWORD *)(result + 16);
    if ( !v59 )
    {
LABEL_84:
      v62 = (_DWORD *)(v41 + 4 * v16);
      break;
    }
LABEL_70:
    result = *(unsigned int *)(v59 - 4);
    if ( !(_DWORD)result )
      goto LABEL_84;
    v69 = v16;
    v60 = v59 + 4 * result;
    v61 = 0;
    v73 = v42;
    v80 = v41;
    v83 = a5;
    do
    {
      v59 += 4;
      result = __popcountdi2();
      v61 += result;
    }
    while ( v59 != v60 );
    v41 = v80;
    v62 = v73;
    a5 = v83;
    if ( (unsigned int)v53 >= v61 )
    {
      v62 = (_DWORD *)(v80 + 4 * v69);
      break;
    }
    *(_DWORD *)(v80 + 4 * v69) = v44;
    v16 = v39;
    result = (v39 - 1) / 2;
    if ( v66 < v39 )
    {
      v39 = (v39 - 1) / 2;
      continue;
    }
    break;
  }
LABEL_85:
  *v62 = v7;
  return result;
}

