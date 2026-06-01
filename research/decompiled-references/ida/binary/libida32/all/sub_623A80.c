__int64 __fastcall sub_623A80(_QWORD *a1, __int64 a2, const char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  const char *v7; // r14
  unsigned __int64 v8; // r15
  unsigned int v12; // ebx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  _BYTE *v17; // rsi
  size_t v18; // rax
  __int64 v19; // r15
  size_t v20; // r8
  size_t v21; // r9
  _BYTE *v22; // rsi
  void *v23; // rdx
  void *src; // [rsp+18h] [rbp-70h]
  void *srcb; // [rsp+18h] [rbp-70h]
  void *srca; // [rsp+18h] [rbp-70h]
  size_t v28; // [rsp+20h] [rbp-68h]
  size_t v29; // [rsp+28h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v31; // [rsp+38h] [rbp-50h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v6 = a1[11];
  if ( !a3 || !v6 || (v7 = a3, !*a3) )
  {
    if ( !under_debugger )
      interr(1506);
    BUG();
  }
  v8 = a1[13];
  ptr = nullptr;
  v31 = 0;
  if ( v8 > 1 )
  {
    src = (void *)a1[12];
    v14 = (void *)qvector_reserve(&ptr, 0, v8, 1);
    *(_QWORD *)&v31 = v8;
    ptr = v14;
    memmove(v14, src, v8 - 1);
    v15 = 2;
    *((char *)ptr + v8 - 1) = 0;
    v16 = v31;
    if ( (_QWORD)v31 )
    {
      v15 = v31 + 1;
      v17 = ptr;
      v16 = v31 - 1;
      if ( *((_QWORD *)&v31 + 1) >= (unsigned __int64)(v31 + 1) )
        goto LABEL_10;
    }
    else
    {
      v17 = ptr;
      if ( *((_QWORD *)&v31 + 1) >= 2u )
      {
LABEL_10:
        *(_QWORD *)&v31 = v15;
        v17[v16] = 46;
        *((_BYTE *)ptr + v16 + 1) = 0;
        v18 = strlen(v7);
        v19 = v31;
        v20 = v18;
        v21 = v18;
        if ( (_QWORD)v31 )
        {
          v19 = v31 - 1;
          v21 = v18 + v31 - 1;
        }
        v22 = ptr;
        v23 = (void *)(v21 + 1);
        if ( *((_QWORD *)&v31 + 1) < v21 + 1 )
        {
          v29 = v18;
          v28 = v21;
          srca = (void *)(v21 + 1);
          ptr = (void *)qvector_reserve(&ptr, ptr, v23, 1);
          v20 = v29;
          v22 = ptr;
          v21 = v28;
          v23 = srca;
        }
        *(_QWORD *)&v31 = v23;
        v22[v21] = 0;
        memmove((char *)ptr + v19, v7, v20);
        v7 = (const char *)ptr;
        v6 = a1[11];
        goto LABEL_5;
      }
    }
    srcb = (void *)v15;
    ptr = (void *)qvector_reserve(&ptr, v17, v15, 1);
    v15 = (__int64)srcb;
    v17 = ptr;
    goto LABEL_10;
  }
LABEL_5:
  v12 = (*(__int64 (__fastcall **)(__int64, const char *, __int64, __int64, __int64))(v6 + 56))(a2, v7, a4, a5, a6);
  if ( ptr )
  {
    *(_QWORD *)&v31 = 0;
    qfree(ptr);
  }
  return v12;
}

