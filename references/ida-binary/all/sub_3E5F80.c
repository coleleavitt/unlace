__int64 __fastcall sub_3E5F80(
        const char *src,
        _DWORD *a2,
        __int64 *a3,
        _DWORD *a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  double v14; // xmm0_8
  __int64 v15; // rbx
  size_t v16; // r15
  bool v17; // zf
  char *v18; // r15
  size_t v19; // rax
  size_t v20; // rbp
  void *v21; // rdi
  size_t v22; // rdx
  const char *v23; // rsi
  __int64 v24; // rax
  const char *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  unsigned __int64 v32; // rbp
  unsigned int v33; // ebx
  size_t v35; // r8
  __int64 v36; // r15
  size_t v37; // r9
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  size_t v42; // [rsp+0h] [rbp-98h]
  size_t v43; // [rsp+8h] [rbp-90h]
  size_t v44; // [rsp+8h] [rbp-90h]
  char *s; // [rsp+10h] [rbp-88h] BYREF
  __int128 v46; // [rsp+18h] [rbp-80h]
  _QWORD v47[4]; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v48; // [rsp+50h] [rbp-48h]
  unsigned __int64 v49; // [rsp+58h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  sub_3DEF80((__int64)v47, 0);
  s = nullptr;
  v14 = 0.0;
  v15 = operator new(0x180u);
  v46 = 0;
  if ( src )
  {
    v16 = strlen(src);
    s = (char *)qvector_reserve(&s, 0, v16 + 1, 1);
    *(_QWORD *)&v46 = v16 + 1;
    memmove(s, src, v16);
    s[v16] = 0;
  }
  sub_3DE430(v15, (__int64)v47, 2);
  v17 = (_QWORD)v46 == 0;
  *(_BYTE *)(v15 + 372) = 0;
  *(_QWORD *)v15 = &expr_node_t___vtable;
  *(_DWORD *)(v15 + 376) = -1;
  if ( !v17 && (v18 = s) != nullptr && (v19 = strlen(s), (v20 = v19) != 0) )
  {
    v21 = *(void **)(v15 + 80);
    v22 = v19 + 1;
    if ( *(_QWORD *)(v15 + 96) < v19 + 1 )
    {
      v43 = v19 + 1;
      v39 = qvector_reserve(v15 + 80, *(_QWORD *)(v15 + 80), v22, 1);
      *(_QWORD *)(v15 + 80) = v39;
      v22 = v43;
      v21 = (void *)v39;
    }
    *(_QWORD *)(v15 + 88) = v22;
    memmove(v21, v18, v20);
    *(_BYTE *)(*(_QWORD *)(v15 + 80) + v20) = 0;
  }
  else
  {
    *(_QWORD *)(v15 + 88) = 0;
  }
  *(_DWORD *)(v15 + 376) = -1;
  clear_tinfo_t(v15 + 72);
  v23 = &s1;
  if ( *(_QWORD *)(v15 + 88) )
    v23 = *(const char **)(v15 + 80);
  v24 = sub_3DEE10(v15, (__int64)v23);
  if ( v24 )
  {
    v25 = &s1;
    if ( *(_QWORD *)(v15 + 88) )
      v25 = *(const char **)(v15 + 80);
    *(_DWORD *)(v15 + 376) = v24 - (_DWORD)v25;
  }
  if ( s )
  {
    *(_QWORD *)&v46 = 0;
    v14 = qfree(s, v23);
  }
  sub_3E2C20(v48, v15, *((_DWORD *)v48 + 6));
  sub_3E5E80(v15, a2, v14, a6, a7, a8, v30, v31, a11, a12, v26, v27, v28, v29);
  if ( !a3 || *(_DWORD *)(v15 + 56) == 4 )
    goto LABEL_32;
  v32 = *(_QWORD *)(v15 + 128);
  if ( v32 )
  {
    v35 = v32 - 1;
    if ( v32 != 1 )
    {
      v36 = a3[1];
      v37 = v32 - 1;
      if ( v36 )
      {
        --v36;
        v37 = v35 + v36;
        v32 += v36;
      }
      v38 = *a3;
      if ( a3[2] < v32 )
      {
        v44 = v35;
        v42 = v37;
        v40 = qvector_reserve(a3, v38, v32, 1);
        v35 = v44;
        v37 = v42;
        *a3 = v40;
        v38 = v40;
      }
      a3[1] = v32;
      *(_BYTE *)(v38 + v37) = 0;
      memcpy((void *)(v36 + *a3), *(const void **)(v15 + 120), v35);
    }
  }
  v33 = *(unsigned __int8 *)(v15 + 168);
  if ( (_BYTE)v33 )
    ++*a4;
  else
LABEL_32:
    v33 = 0;
  v47[0] = &items_tree_model_t___vtable;
  if ( v48 )
    (*(void (__fastcall **)(__int64 *))(*v48 + 8))(v48);
  QT::QAbstractItemModel::~QAbstractItemModel((QT::QAbstractItemModel *)v47);
  return v33;
}
