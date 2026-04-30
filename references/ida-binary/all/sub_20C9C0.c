unsigned __int64 __fastcall sub_20C9C0(
        __int64 *a1,
        const void *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        double a7,
        __int64 a8)
{
  int v8; // r14d
  char v9; // r13
  __int64 *v10; // rbx
  __int64 v11; // r12
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  const char *v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 *v26; // r15
  unsigned __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rbp
  __int64 v31; // rbx
  __int64 v32; // r14
  size_t v33; // rax
  const char *v34; // r11
  size_t v35; // r10
  const char *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rax
  void *v40; // rdi
  void *v41; // rdx
  __int64 v42; // rsi
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  const char *src; // [rsp+0h] [rbp-78h]
  _BYTE *srcb; // [rsp+0h] [rbp-78h]
  void *srca; // [rsp+0h] [rbp-78h]
  int v55; // [rsp+18h] [rbp-60h]
  char v56; // [rsp+1Ch] [rbp-5Ch]
  const char *v57; // [rsp+20h] [rbp-58h]
  size_t v58; // [rsp+28h] [rbp-50h]
  __int64 v59; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v60; // [rsp+38h] [rbp-40h]

  v8 = a3;
  v9 = a4;
  v10 = a1;
  v60 = __readfsqword(0x28u);
  v11 = a6;
  if ( a6 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v12 = 1;
    }
    else
    {
      switch ( (_BYTE)a4 )
      {
        case 2:
          v12 = 32;
          break;
        case 7:
          v12 = 64;
          break;
        case 1:
          v12 = 16;
          break;
        default:
          if ( !under_debugger )
            interr(1795, a2, a3, a4, a7);
          BUG();
      }
    }
    v24 = a1[10];
    v25 = a1[9];
    if ( a1[11] < (unsigned __int64)(v24 + 1) )
    {
      v45 = qvector_reserve(a1 + 9, v25, v24 + 1, 24);
      v24 = a1[10];
      a1[9] = v45;
      v25 = v45;
    }
    v59 = 0;
    v26 = (__int64 *)(v25 + 24 * v24);
    *(_OWORD *)(v26 + 1) = 0;
    *v26 = 0;
    ++a1[10];
    v27 = v26[1];
    if ( v12 >= v27 )
    {
      v28 = 8 * v12;
      if ( v27 < v12 )
      {
        v42 = *v26;
        v43 = v26[2];
        if ( (unsigned __int64)&v59 < *v26 || (unsigned __int64)&v59 >= v42 + 8 * v43 )
        {
          if ( v43 >= v12 || (v48 = qvector_reserve(v26, v42, v12, 8), *v26 = v48, v42 = v48, v27 = v26[1], v27 < v12) )
          {
            v44 = 8 * v27;
            v28 = 8 * v12;
            while ( 1 )
            {
              *(_QWORD *)(v42 + v44) = 0;
              v44 += 8;
              if ( v28 == v44 )
                break;
              v42 = *v26;
            }
          }
          else
          {
            v28 = 8 * v12;
          }
        }
        else if ( v43 >= v12
               || (v49 = qvector_reserve(v26, v42, v12, 8), v28 = 8 * v12,
                                                            *v26 = v49,
                                                            v42 = v49,
                                                            v27 = v26[1],
                                                            v27 < v12) )
        {
          v47 = 8 * v27;
          v28 = 8 * v12;
          while ( 1 )
          {
            *(_QWORD *)(v42 + v47) = 0;
            v47 += 8;
            if ( v47 == v28 )
              break;
            v42 = *v26;
          }
        }
        v26[1] = v12;
      }
    }
    else
    {
      v26[1] = v12;
      v28 = 8 * v12;
    }
    v56 = v9;
    v29 = 0;
    v31 = v28;
    v55 = v8;
    while ( 1 )
    {
      if ( !*(_QWORD *)(v11 + v29) )
        goto LABEL_26;
      v37 = a1[4];
      v38 = a1[3];
      if ( a1[5] < (unsigned __int64)(v37 + 1) )
      {
        v39 = qvector_reserve(a1 + 3, v38, v37 + 1, 24);
        v37 = a1[4];
        a1[3] = v39;
        v38 = v39;
      }
      v32 = v38 + 24 * v37;
      *(_QWORD *)v32 = 0;
      *(_OWORD *)(v32 + 8) = 0;
      ++a1[4];
      if ( *(_QWORD *)(v11 + v29) && (src = *(const char **)(v11 + v29), v33 = strlen(src), v34 = src, (v35 = v33) != 0) )
      {
        v40 = *(void **)v32;
        v41 = (void *)(v33 + 1);
        if ( *(_QWORD *)(v32 + 16) < v33 + 1 )
        {
          srca = (void *)(v33 + 1);
          v57 = v34;
          v58 = v33;
          v46 = qvector_reserve(v32, *(_QWORD *)v32, v41, 1);
          v35 = v58;
          v34 = v57;
          *(_QWORD *)v32 = v46;
          v41 = srca;
          v40 = (void *)v46;
        }
        *(_QWORD *)(v32 + 8) = v41;
        srcb = (_BYTE *)v35;
        memmove(v40, v34, v35);
        srcb[*(_QWORD *)v32] = 0;
        if ( *(_QWORD *)(v32 + 8) )
        {
          v36 = *(const char **)v32;
          goto LABEL_25;
        }
      }
      else
      {
        *(_QWORD *)(v32 + 8) = 0;
      }
      v36 = &s1;
LABEL_25:
      *(_QWORD *)(*v26 + v29) = v36;
LABEL_26:
      v29 += 8;
      if ( v31 == v29 )
      {
        v10 = a1;
        v8 = v55;
        v9 = v56;
        v11 = *v26;
        break;
      }
    }
  }
  v13 = v10[4];
  v14 = v10[3];
  if ( v10[5] < (unsigned __int64)(v13 + 1) )
  {
    v23 = qvector_reserve(v10 + 3, v14, v13 + 1, 24);
    v13 = v10[4];
    v10[3] = v23;
    v14 = v23;
  }
  v15 = v14 + 24 * v13;
  *(_QWORD *)v15 = 0;
  *(_OWORD *)(v15 + 8) = 0;
  ++v10[4];
  sub_20B400((__int64 *)v15, a2);
  v16 = v10[1];
  v17 = *v10;
  v18 = v16 + 1;
  if ( v10[2] < (unsigned __int64)(v16 + 1) )
  {
    v22 = qvector_reserve(v10, v17, v18, 32);
    *v10 = v22;
    v17 = v22;
    v16 = v10[1];
    v18 = v16 + 1;
  }
  v10[1] = v18;
  v19 = 32 * v16 + v17;
  v20 = &s1;
  if ( *(_QWORD *)(v15 + 8) )
    v20 = *(const char **)v15;
  *(_QWORD *)v19 = v20;
  *(_DWORD *)(v19 + 8) = v8;
  *(_BYTE *)(v19 + 12) = a5;
  *(_BYTE *)(v19 + 13) = v9;
  *(_QWORD *)(v19 + 16) = v11;
  *(_QWORD *)(v19 + 24) = a8;
  return v60 - __readfsqword(0x28u);
}
