_BOOL8 __fastcall sub_51B6E0(QT::QSplitter *this, __int64 a2)
{
  int v4; // edx
  _DWORD *v5; // rax
  int v6; // ebx
  __int64 v7; // r13
  int v8; // eax
  double *v10; // rax
  __int64 v11; // rsi
  int v12; // edx
  int v13; // ecx
  int v14; // r13d
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  double *v18; // rbx
  __int64 v19; // r13
  int *v20; // r12
  __int64 v21; // r15
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r14d
  int *v25; // rax
  _BOOL4 v26; // r12d
  char *v27; // rcx
  __int64 v28; // rdx
  int *v29; // rsi
  _DWORD *v30; // rcx
  char *v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdi
  char *v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  double v40; // [rsp+8h] [rbp-70h]
  bool v41; // [rsp+17h] [rbp-61h]
  void *src[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v43; // [rsp+30h] [rbp-48h]
  unsigned __int64 v44; // [rsp+38h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v4 = QT::QSplitter::orientation(this);
  v5 = *((_DWORD **)this + 4);
  if ( v4 == 2 )
    v6 = v5[8] + 1 - v5[6];
  else
    v6 = v5[7] + 1 - v5[5];
  v7 = *(_QWORD *)(a2 + 8);
  v8 = QT::QSplitter::count(this);
  v41 = v8 == v7;
  if ( v8 != v7 )
    return v41;
  v10 = *(double **)a2;
  v11 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
  if ( v11 == *(_QWORD *)a2 )
  {
    v14 = 1;
  }
  else
  {
    v12 = 0;
    do
    {
      v13 = *v10++ > 0.0;
      v12 += v13;
    }
    while ( v10 != (double *)v11 );
    v14 = 1 - v12;
  }
  v15 = QT::QSplitter::handleWidth(this);
  v16 = *(_QWORD *)(a2 + 8);
  v43 = 0;
  *(_OWORD *)src = 0;
  v17 = v6 + v14 * v15;
  v18 = *(double **)a2;
  v19 = *(_QWORD *)a2 + 8 * v16;
  if ( v19 != *(_QWORD *)a2 )
  {
    v20 = nullptr;
    v21 = 0;
    v40 = (double)v17;
    while ( 1 )
    {
      v24 = (int)round(v40 * *v18);
      if ( !v20 )
        goto LABEL_17;
      if ( *v20 <= 1 )
      {
        if ( v43 == v21 )
        {
          v25 = (int *)src[0];
          if ( !src[0] )
          {
            if ( v21 )
LABEL_17:
              v26 = 0;
            else
LABEL_65:
              v26 = v43 != 0;
LABEL_18:
            sub_187120((__int64)src, v26, 1, 0, v22, v23);
            v27 = (char *)src[1];
            v28 = v43;
            goto LABEL_19;
          }
          v30 = src[1];
          v37 = ((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL;
          if ( *((_QWORD *)src[0] + 1) - ((__int64)((__int64)src[1] - v37) >> 2) != v21 )
          {
            *((_DWORD *)src[1] + v21) = v24;
            ++v43;
            goto LABEL_23;
          }
          if ( !v21 && src[1] != (void *)v37 )
          {
LABEL_32:
            *(v30 - 1) = v24;
            src[1] = (char *)src[1] - 4;
            ++v43;
            goto LABEL_23;
          }
          goto LABEL_16;
        }
        if ( v21 )
          goto LABEL_15;
        v25 = (int *)src[0];
        if ( !src[0] )
          goto LABEL_65;
        v30 = src[1];
        if ( src[1] != (void *)(((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL) )
          goto LABEL_32;
        if ( !v43 )
          goto LABEL_16;
      }
      else
      {
        if ( v21 || !v43 )
        {
LABEL_15:
          v25 = (int *)src[0];
          if ( !src[0] )
            goto LABEL_17;
LABEL_16:
          if ( *v25 > 1 )
            goto LABEL_17;
          v31 = (char *)src[1];
          v32 = *((_QWORD *)src[0] + 1);
          v28 = v43;
          v22 = (__int64)src[1] - (((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL);
          v33 = v22 >> 2;
          if ( v32 - v43 - (v22 >> 2) > 0 )
          {
            v29 = (int *)((char *)src[1] + 4 * v21);
LABEL_20:
            if ( v28 > v21 )
            {
              memmove(v29 + 1, v29, 4 * (v28 - v21));
              v28 = v43;
            }
            goto LABEL_22;
          }
          if ( v22 <= 0 )
            goto LABEL_17;
          v26 = 0;
          if ( 3 * v43 >= 2 * v32 )
            goto LABEL_18;
          v34 = 0;
          goto LABEL_39;
        }
        v25 = (int *)src[0];
        if ( !src[0] )
          goto LABEL_56;
      }
      if ( *v25 > 1 )
        goto LABEL_56;
      v27 = (char *)src[1];
      v28 = v43;
      if ( (__int64)((__int64)src[1] - (((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL)) > 0 )
      {
        v29 = (int *)src[1];
        goto LABEL_34;
      }
      v33 = (__int64)((__int64)src[1] - (((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 2;
      v38 = *((_QWORD *)src[0] + 1) - v43;
      v22 = v38 - v33;
      if ( v38 - v33 <= 0 || (v22 = 3 * v43, 3 * v43 >= *((_QWORD *)src[0] + 1)) )
      {
LABEL_56:
        v26 = 1;
        goto LABEL_18;
      }
      v26 = 1;
      v39 = (v38 - 1) / 2;
      if ( v39 < 0 )
        v39 = 0;
      v31 = (char *)src[1];
      v34 = v39 + 1;
LABEL_39:
      v35 = v34 - v33;
      v27 = &v31[4 * v35];
      if ( v28 && v27 != v31 && v31 && v27 )
      {
        v36 = (char *)memmove(&v31[4 * v35], v31, 4 * v28);
        v28 = v43;
        v27 = v36;
      }
      src[1] = v27;
LABEL_19:
      v29 = (int *)&v27[4 * v21];
      if ( !v26 )
        goto LABEL_20;
LABEL_34:
      --v29;
      src[1] = v27 - 4;
LABEL_22:
      v43 = v28 + 1;
      *v29 = v24;
LABEL_23:
      if ( !src[0] || *(int *)src[0] > 1 )
        sub_187120((__int64)src, 0, 0, 0, v22, v23);
      if ( (double *)v19 == ++v18 )
        break;
      v21 = v43;
      v20 = (int *)src[0];
    }
  }
  QT::QSplitter::setSizes(this, src);
  if ( src[0] && !_InterlockedSub((volatile signed __int32 *)src[0], 1u) )
    free(src[0]);
  return v41;
}
