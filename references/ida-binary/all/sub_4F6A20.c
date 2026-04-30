__int64 __fastcall sub_4F6A20(__int64 a1, const __m128i *a2, double a3)
{
  __m128i *v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r12d
  __int64 v12; // r8
  __int64 v13; // r9
  int *v14; // rax
  const char *v15; // rsi
  const char *v16; // rsi
  const char *v17; // rdi
  __int64 v18; // rdi
  int *v20; // rax
  void **v21; // r12
  void **v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  int *v25; // rax
  __int64 v26; // rdx
  volatile signed __int32 *v27; // rax
  const char *v28; // [rsp+0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  const char *v31; // [rsp+28h] [rbp-40h]
  unsigned __int64 v32; // [rsp+38h] [rbp-30h]

  v3 = (__m128i *)(a1 + 24);
  v4 = a2[1].m128i_i64[0];
  v5 = a2->m128i_i64[1];
  v32 = __readfsqword(0x28u);
  v7 = QT::QtPrivate::QStringList_indexOf(a1 + 24, v4, v5, 0, 1, a3);
  if ( v7 )
  {
    v11 = v7;
    if ( v7 != -1 )
    {
      v20 = *(int **)(a1 + 24);
      if ( !v20 || *v20 > 1 )
        sub_1B21C0(v3, 0, 0, 0, v9, v10);
      v8 = *(_QWORD *)(a1 + 32);
      v21 = (void **)(v8 + 24LL * v11);
      v22 = v21 + 3;
      if ( *v21 )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)*v21, 1u) )
          free(*v21);
        v8 = *(_QWORD *)(a1 + 32);
      }
      v23 = *(_QWORD *)(a1 + 40);
      v24 = v8 + 24 * v23;
      if ( v21 == (void **)v8 )
      {
        if ( v22 != (void **)v24 )
          *(_QWORD *)(a1 + 32) = v22;
      }
      else if ( v22 != (void **)v24 )
      {
        memmove(v21, v21 + 3, v24 - (_QWORD)v22);
        v23 = *(_QWORD *)(a1 + 40);
      }
      *(_QWORD *)(a1 + 40) = v23 - 1;
    }
    sub_1D5510(v3, 0, a2, v8, v9, v10);
    v14 = *(int **)(a1 + 24);
    if ( !v14 || *v14 > 1 )
      sub_1B21C0(v3, 0, 0, 0, v12, v13);
    if ( *(__int64 *)(a1 + 40) > 128 )
    {
      v25 = *(int **)(a1 + 24);
      if ( !v25 || *v25 > 1 )
        sub_1B21C0(v3, 0, 0, 0, v12, v13);
      v26 = *(_QWORD *)(a1 + 32) + 24LL * *(_QWORD *)(a1 + 40);
      v27 = *(volatile signed __int32 **)(v26 - 24);
      if ( v27 && !_InterlockedSub(v27, 1u) )
        free(*(void **)(v26 - 24));
      --*(_QWORD *)(a1 + 40);
      v15 = &s1;
      if ( !*(_QWORD *)(a1 + 8) )
      {
LABEL_8:
        sub_4F6450((__int64 *)&v28, v15);
        QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)a2);
        v16 = v31;
        if ( v31 )
        {
          v17 = &s1;
          if ( !v29 )
          {
LABEL_10:
            reg_update_strlist(v17, v16, 128, 0, 0);
            if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
            {
              free(ptr);
              v18 = (__int64)v28;
              if ( !v28 )
                return 1;
            }
            else
            {
              v18 = (__int64)v28;
              if ( !v28 )
                return 1;
            }
            v29 = 0;
            qfree(v18, v16);
            return 1;
          }
        }
        else
        {
          v16 = (const char *)&QT::QByteArray::_empty;
          v17 = &s1;
          if ( !v29 )
            goto LABEL_10;
        }
        v17 = v28;
        goto LABEL_10;
      }
    }
    else
    {
      v15 = &s1;
      if ( !*(_QWORD *)(a1 + 8) )
        goto LABEL_8;
    }
    v15 = *(const char **)a1;
    goto LABEL_8;
  }
  return 0;
}
