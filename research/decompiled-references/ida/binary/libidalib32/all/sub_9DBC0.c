unsigned __int64 __fastcall sub_9DBC0(__int64 *a1, const void *a2, int a3, char a4, char a5, __int64 a6, int a7)
{
  int v7; // r14d
  char v8; // r13
  __int64 *v9; // rbx
  __int64 v10; // r12
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  const char *v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 *v25; // r15
  unsigned __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rbp
  __int64 v30; // rbx
  __int64 v31; // r14
  size_t v32; // rax
  const char *v33; // r11
  size_t v34; // r10
  const char *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rax
  char *v39; // rdi
  void *v40; // rdx
  __int64 v41; // rsi
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  const char *src; // [rsp+0h] [rbp-78h]
  _BYTE *srcb; // [rsp+0h] [rbp-78h]
  void *srca; // [rsp+0h] [rbp-78h]
  int v54; // [rsp+18h] [rbp-60h]
  char v55; // [rsp+1Ch] [rbp-5Ch]
  const char *v56; // [rsp+20h] [rbp-58h]
  size_t v57; // [rsp+28h] [rbp-50h]
  __int64 v58; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v59; // [rsp+38h] [rbp-40h]

  v7 = a3;
  v8 = a4;
  v9 = a1;
  v59 = __readfsqword(0x28u);
  v10 = a6;
  if ( a6 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v11 = 1;
    }
    else
    {
      switch ( a4 )
      {
        case 2:
          v11 = 32;
          break;
        case 7:
          v11 = 64;
          break;
        case 1:
          v11 = 16;
          break;
        default:
          if ( !under_debugger )
            interr();
          BUG();
      }
    }
    v23 = a1[10];
    v24 = a1[9];
    if ( a1[11] < (unsigned __int64)(v23 + 1) )
    {
      v44 = qvector_reserve();
      v23 = a1[10];
      a1[9] = v44;
      v24 = v44;
    }
    v58 = 0;
    v25 = (__int64 *)(v24 + 24 * v23);
    *(_OWORD *)(v25 + 1) = 0;
    *v25 = 0;
    ++a1[10];
    v26 = v25[1];
    if ( v11 >= v26 )
    {
      v27 = 8 * v11;
      if ( v26 < v11 )
      {
        v41 = *v25;
        v42 = v25[2];
        if ( (unsigned __int64)&v58 < *v25 || (unsigned __int64)&v58 >= v41 + 8 * v42 )
        {
          if ( v42 >= v11 || (v47 = qvector_reserve(), *v25 = v47, v41 = v47, v26 = v25[1], v26 < v11) )
          {
            v43 = 8 * v26;
            v27 = 8 * v11;
            while ( 1 )
            {
              *(_QWORD *)(v41 + v43) = 0;
              v43 += 8;
              if ( v27 == v43 )
                break;
              v41 = *v25;
            }
          }
          else
          {
            v27 = 8 * v11;
          }
        }
        else if ( v42 >= v11 || (v48 = qvector_reserve(), v27 = 8 * v11, *v25 = v48, v41 = v48, v26 = v25[1], v26 < v11) )
        {
          v46 = 8 * v26;
          v27 = 8 * v11;
          while ( 1 )
          {
            *(_QWORD *)(v41 + v46) = 0;
            v46 += 8;
            if ( v46 == v27 )
              break;
            v41 = *v25;
          }
        }
        v25[1] = v11;
      }
    }
    else
    {
      v25[1] = v11;
      v27 = 8 * v11;
    }
    v55 = v8;
    v28 = 0;
    v30 = v27;
    v54 = v7;
    while ( 1 )
    {
      if ( !*(_QWORD *)(v10 + v28) )
        goto LABEL_26;
      v36 = a1[4];
      v37 = a1[3];
      if ( a1[5] < (unsigned __int64)(v36 + 1) )
      {
        v38 = qvector_reserve();
        v36 = a1[4];
        a1[3] = v38;
        v37 = v38;
      }
      v31 = v37 + 24 * v36;
      *(_QWORD *)v31 = 0;
      *(_OWORD *)(v31 + 8) = 0;
      ++a1[4];
      if ( *(_QWORD *)(v10 + v28) && (src = *(const char **)(v10 + v28), v32 = strlen(src), v33 = src, (v34 = v32) != 0) )
      {
        v39 = *(char **)v31;
        v40 = (void *)(v32 + 1);
        if ( *(_QWORD *)(v31 + 16) < v32 + 1 )
        {
          srca = (void *)(v32 + 1);
          v56 = v33;
          v57 = v32;
          v45 = qvector_reserve();
          v34 = v57;
          v33 = v56;
          *(_QWORD *)v31 = v45;
          v40 = srca;
          v39 = (char *)v45;
        }
        *(_QWORD *)(v31 + 8) = v40;
        srcb = (_BYTE *)v34;
        memmove(v39, v33, v34);
        srcb[*(_QWORD *)v31] = 0;
        if ( *(_QWORD *)(v31 + 8) )
        {
          v35 = *(const char **)v31;
          goto LABEL_25;
        }
      }
      else
      {
        *(_QWORD *)(v31 + 8) = 0;
      }
      v35 = s1;
LABEL_25:
      *(_QWORD *)(*v25 + v28) = v35;
LABEL_26:
      v28 += 8;
      if ( v30 == v28 )
      {
        v9 = a1;
        v7 = v54;
        v8 = v55;
        v10 = *v25;
        break;
      }
    }
  }
  v12 = v9[4];
  v13 = v9[3];
  if ( v9[5] < (unsigned __int64)(v12 + 1) )
  {
    v22 = qvector_reserve();
    v12 = v9[4];
    v9[3] = v22;
    v13 = v22;
  }
  v14 = v13 + 24 * v12;
  *(_QWORD *)v14 = 0;
  *(_OWORD *)(v14 + 8) = 0;
  ++v9[4];
  sub_9C320(v14, a2);
  v15 = v9[1];
  v16 = *v9;
  v17 = v15 + 1;
  if ( v9[2] < (unsigned __int64)(v15 + 1) )
  {
    v21 = qvector_reserve();
    *v9 = v21;
    v16 = v21;
    v15 = v9[1];
    v17 = v15 + 1;
  }
  v9[1] = v17;
  v18 = 32 * v15 + v16;
  v19 = s1;
  if ( *(_QWORD *)(v14 + 8) )
    v19 = *(const char **)v14;
  *(_QWORD *)v18 = v19;
  *(_DWORD *)(v18 + 8) = v7;
  *(_BYTE *)(v18 + 12) = a5;
  *(_BYTE *)(v18 + 13) = v8;
  *(_QWORD *)(v18 + 16) = v10;
  *(_DWORD *)(v18 + 24) = a7;
  return v59 - __readfsqword(0x28u);
}

