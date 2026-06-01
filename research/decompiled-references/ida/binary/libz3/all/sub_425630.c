__int64 __fastcall sub_425630(__int64 a1, _QWORD *a2, char a3)
{
  __int64 **v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned int v10; // edx
  int v11; // edi
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // r14
  __int64 v19; // r13
  __int64 *v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rdi
  __int64 result; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 *v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int v29; // r9d
  int v30; // esi
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // rcx
  _QWORD *v40; // rsi
  unsigned int v41; // edx
  int v42; // eax
  unsigned int v43; // r12d
  _OWORD *v44; // rax
  unsigned __int64 *v45; // r15
  _OWORD *v46; // rcx
  _OWORD *v47; // rdx
  __int64 v48; // rdx
  char *v49; // rcx
  unsigned __int64 *v50; // r12
  __int64 v51; // r14
  unsigned __int64 *v52; // r13
  unsigned __int64 v53; // rdx
  __int64 v54; // rsi
  unsigned __int64 *v55; // rcx
  unsigned __int64 *v56; // rbx
  unsigned __int64 v57; // rdx
  int v58; // edx
  char *v59; // r12
  char *v60; // rbx
  __int64 v61; // rdx
  unsigned int v62; // [rsp+0h] [rbp-48h]
  char *v63; // [rsp+0h] [rbp-48h]
  __int64 v64; // [rsp+8h] [rbp-40h]

  v6 = (__int64 **)sub_4252D0(a1, (__int64)a2);
  v7 = *v6;
  v8 = *((unsigned int *)v6 + 2);
  v9 = *(_QWORD *)(*a2 + 24LL);
  v10 = v8 - 1;
  v8 *= 16;
  v11 = *(_DWORD *)(v9 + 12);
  v12 = (__int64 *)((char *)v7 + v8);
  v13 = 16LL * (v11 & v10);
  v14 = &v7[(unsigned __int64)v13 / 8];
  if ( v13 == v8 )
  {
LABEL_9:
    while ( v14 != v7 )
    {
      v17 = *v7;
      if ( (unsigned __int64)*v7 > 1 )
      {
        if ( *(_DWORD *)(v17 + 12) == v11 && v9 == v17 )
        {
          v15 = v7;
          goto LABEL_18;
        }
      }
      else if ( !v17 )
      {
        break;
      }
      v7 += 2;
    }
LABEL_135:
    BUG();
  }
  v15 = &v7[(unsigned __int64)v13 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = *v15;
      if ( (unsigned __int64)*v15 > 1 )
        break;
      if ( !v16 )
        goto LABEL_135;
      v15 += 2;
      if ( v12 == v15 )
        goto LABEL_9;
    }
    if ( *(_DWORD *)(v16 + 12) == v11 && v9 == v16 )
      break;
    v15 += 2;
    if ( v12 == v15 )
      goto LABEL_9;
  }
LABEL_18:
  v18 = (__int64 *)v15[1];
  if ( !v18 )
  {
    result = a2[3];
    if ( !result )
      goto LABEL_47;
    v25 = a2[4];
    if ( !v25 )
      goto LABEL_47;
    if ( (_QWORD *)result == a2 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a2 + 3) = 0;
      goto LABEL_47;
    }
    goto LABEL_45;
  }
  v19 = *((unsigned int *)v18 - 1);
  v20 = &v18[v19];
  v21 = (8 * v19) >> 3;
  if ( !((8 * v19) >> 5) )
  {
    v22 = (__int64 *)v15[1];
LABEL_38:
    if ( v21 != 2 )
    {
      if ( v21 != 3 )
      {
        if ( v21 != 1 )
          goto LABEL_42;
        goto LABEL_41;
      }
      if ( (_QWORD *)*v22 == a2 )
        goto LABEL_26;
      ++v22;
    }
    if ( (_QWORD *)*v22 == a2 )
      goto LABEL_26;
    ++v22;
LABEL_41:
    if ( (_QWORD *)*v22 == a2 )
      goto LABEL_26;
LABEL_42:
    result = a2[3];
    if ( !result )
      goto LABEL_34;
    v25 = a2[4];
    if ( !v25 )
      goto LABEL_34;
    if ( (_QWORD *)result == a2 )
    {
LABEL_78:
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a2 + 3) = 0;
      goto LABEL_34;
    }
LABEL_45:
    *(_QWORD *)(result + 32) = v25;
    *(_QWORD *)(v25 + 24) = result;
    if ( *(_QWORD **)(a1 + 16) != a2 )
    {
LABEL_46:
      *(_OWORD *)(a2 + 3) = 0;
      if ( !v18 )
        goto LABEL_47;
      LODWORD(v19) = *((_DWORD *)v18 - 1);
      goto LABEL_34;
    }
LABEL_103:
    result = a2[3];
    *(_QWORD *)(a1 + 16) = result;
    goto LABEL_46;
  }
  v22 = (__int64 *)v15[1];
  while ( 1 )
  {
    if ( (_QWORD *)*v22 == a2 )
      goto LABEL_26;
    if ( (_QWORD *)v22[1] == a2 )
    {
      ++v22;
      goto LABEL_26;
    }
    if ( (_QWORD *)v22[2] == a2 )
    {
      v22 += 2;
      goto LABEL_26;
    }
    if ( (_QWORD *)v22[3] == a2 )
      break;
    v22 += 4;
    if ( &v18[4 * ((8 * v19) >> 5)] == v22 )
    {
      v21 = v20 - v22;
      goto LABEL_38;
    }
  }
  v22 += 3;
LABEL_26:
  if ( v20 == v22 )
    goto LABEL_42;
  if ( v20 != v22 + 1 )
    memmove(v22, v22 + 1, (char *)(v20 - 1) - (char *)v22);
  result = a2[3];
  LODWORD(v19) = v19 - 1;
  *((_DWORD *)v18 - 1) = v19;
  if ( result )
  {
    v24 = a2[4];
    if ( v24 )
    {
      if ( (_QWORD *)result != a2 )
      {
        *(_QWORD *)(result + 32) = v24;
        *(_QWORD *)(v24 + 24) = result;
        if ( a2 != *(_QWORD **)(a1 + 16) )
        {
          *(_OWORD *)(a2 + 3) = 0;
          goto LABEL_34;
        }
        goto LABEL_103;
      }
      goto LABEL_78;
    }
  }
LABEL_34:
  if ( (_DWORD)v19 )
  {
    if ( a3 )
    {
      v36 = *v18;
      result = *(_QWORD *)(*v18 + 16);
      if ( !result || (result = *(unsigned int *)(result - 4), !(_DWORD)result) )
      {
        if ( *(_BYTE *)(v36 + 48) )
        {
          v37 = *(_QWORD *)(v36 + 8);
          for ( *(_BYTE *)(v36 + 48) = 0; v37; v37 = *(_QWORD *)(v37 + 8) )
          {
            if ( !*(_BYTE *)(v37 + 48) )
              break;
            *(_BYTE *)(v37 + 48) = 0;
          }
          result = *(_QWORD *)(a1 + 16);
          v38 = _mm_unpacklo_epi64((__m128i)v36, (__m128i)v36);
          if ( result )
          {
            if ( !*(_BYTE *)a1 )
              result = *(_QWORD *)(result + 24);
            if ( v36 == result )
            {
              *(__m128i *)(v36 + 24) = v38;
            }
            else
            {
              v39 = *(_QWORD *)(result + 24);
              *(_QWORD *)(v36 + 24) = v39;
              *(_QWORD *)(v39 + 32) = v36;
              *(_QWORD *)(result + 24) = v36;
              *(_QWORD *)(v36 + 32) = result;
            }
          }
          else
          {
            *(_QWORD *)(a1 + 16) = v36;
            *(__m128i *)(v36 + 24) = v38;
          }
        }
      }
    }
    return result;
  }
LABEL_47:
  v26 = sub_4252D0(a1, (__int64)a2);
  v27 = *((unsigned int *)v26 + 2);
  v28 = *(_QWORD *)(*a2 + 24LL);
  v29 = v27 - 1;
  v27 *= 16;
  v30 = *(_DWORD *)(v28 + 12);
  v31 = *v26 + v27;
  v32 = 16LL * (v30 & v29);
  v33 = *v26 + v32;
  result = v33;
  if ( v32 == v27 )
  {
LABEL_55:
    if ( *v26 != v33 )
    {
      result = *v26;
      while ( 1 )
      {
        v35 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v35 + 12) == v30 && v28 == v35 )
            goto LABEL_79;
        }
        else if ( !v35 )
        {
          return result;
        }
        result += 16;
        if ( v33 == result )
          return result;
      }
    }
    return result;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v34 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
        break;
      if ( !v34 )
        return result;
      result += 16;
      if ( v31 == result )
        goto LABEL_55;
    }
    if ( *(_DWORD *)(v34 + 12) == v30 && v28 == v34 )
      break;
    result += 16;
    if ( v31 == result )
      goto LABEL_55;
  }
LABEL_79:
  v40 = (_QWORD *)(result + 16);
  if ( v31 == result + 16 )
    v40 = (_QWORD *)*v26;
  v41 = *((_DWORD *)v26 + 3) - 1;
  if ( !*v40 )
  {
    *(_QWORD *)result = 0;
    *((_DWORD *)v26 + 3) = v41;
    return result;
  }
  *(_QWORD *)result = 1;
  v42 = *((_DWORD *)v26 + 4);
  *((_DWORD *)v26 + 3) = v41;
  result = (unsigned int)(v42 + 1);
  if ( v41 < 0x40 )
    v41 = 64;
  *((_DWORD *)v26 + 4) = result;
  if ( v41 < (unsigned int)result )
  {
    result = sub_186AF10(v33);
    if ( !(_BYTE)result )
    {
      v43 = *((_DWORD *)v26 + 2);
      v44 = (_OWORD *)sub_186B270(16LL * v43);
      v45 = (unsigned __int64 *)v44;
      v46 = v44;
      v47 = &v44[v43];
      if ( v43 )
      {
        if ( ((16 * (_BYTE)v43) & 0x10) == 0 || (v46 = v44 + 1, *v44 = 0, v44 + 1 != v47) )
        {
          do
          {
            *v46 = 0;
            v46 += 2;
            *(v46 - 1) = 0;
          }
          while ( v46 != v47 );
        }
      }
      v48 = *((unsigned int *)v26 + 2);
      v49 = (char *)*v26;
      v50 = (unsigned __int64 *)(*v26 + 8);
      v62 = v48 - 1;
      result = 16 * v48;
      v51 = *v26 + 16 * v48;
      v64 = 16 * v48;
      v52 = &v45[2 * v48];
      if ( *v26 == v51 )
      {
LABEL_124:
        if ( v49 )
        {
          v58 = *((_DWORD *)v26 + 2);
          if ( v58 )
          {
            v59 = v49;
            v60 = &v49[16 * v58];
            do
            {
              while ( 1 )
              {
                v61 = *((_QWORD *)v59 + 1);
                if ( !v61 )
                  break;
                v59 += 16;
                v63 = v49;
                sub_186B220((void *)(v61 - 8));
                v49 = v63;
                if ( v60 == v59 )
                  goto LABEL_129;
              }
              v59 += 16;
            }
            while ( v60 != v59 );
          }
LABEL_129:
          result = sub_186B220(v49);
        }
        *v26 = (__int64)v45;
        *((_DWORD *)v26 + 4) = 0;
        return result;
      }
      while ( 1 )
      {
        v53 = *(v50 - 1);
        if ( v53 <= 1 )
          goto LABEL_92;
        v54 = 16LL * (*(_DWORD *)(v53 + 12) & v62);
        v55 = &v45[(unsigned __int64)v54 / 8];
        if ( v64 == v54 )
        {
LABEL_116:
          if ( v45 == v55 )
          {
LABEL_134:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v56 = v45;
          while ( *v56 )
          {
            v56 += 2;
            if ( v55 == v56 )
              goto LABEL_134;
          }
          *v56 = v53;
          if ( v50 != v56 + 1 )
          {
            v57 = v56[1];
            if ( v57 )
LABEL_101:
              result = sub_186B220((void *)(v57 - 8));
LABEL_102:
            v56[1] = 0;
            v56[1] = *v50;
            *v50 = 0;
          }
        }
        else
        {
          v56 = &v45[(unsigned __int64)v54 / 8];
          while ( *v56 )
          {
            v56 += 2;
            if ( v52 == v56 )
              goto LABEL_116;
          }
          *v56 = v53;
          if ( v50 != v56 + 1 )
          {
            v57 = v56[1];
            if ( v57 )
              goto LABEL_101;
            goto LABEL_102;
          }
        }
LABEL_92:
        if ( (unsigned __int64 *)v51 == v50 + 1 )
        {
          v49 = (char *)*v26;
          goto LABEL_124;
        }
        v50 += 2;
      }
    }
  }
  return result;
}

