__int64 __fastcall strings_desktop_widget_factory_t__::vfunc_3(
        double a1,
        __int64 a2,
        const char *a3,
        _QWORD *a4,
        _BYTE *a5)
{
  __int64 v5; // r14
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rbx
  size_t v11; // rbp
  const char *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  char *v18; // rax
  const char *v19; // rsi
  char *v20; // r14
  unsigned __int64 v21; // r13
  char *v22; // rbp
  __int64 v23; // rdi
  __int64 v24; // rax
  _BYTE *v25; // rbx
  _BYTE *v26; // r13
  struct _Unwind_Exception *v27; // rbx
  size_t v28; // [rsp+8h] [rbp-70h]
  unsigned int v29; // [rsp+1Ch] [rbp-5Ch] BYREF
  _BYTE v30[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v6 = (_QWORD *)a4[1];
  if ( v6 )
  {
    v7 = (_QWORD *)*a4;
    a4 = nullptr;
    while ( 1 )
    {
      if ( v7[1] )
      {
        a5 = (_BYTE *)*v7;
        if ( *(_BYTE *)*v7 == 105 && a5[1] == 100 && !a5[2] )
          break;
      }
      a4 = (_QWORD *)((char *)a4 + 1);
      v7 += 5;
      if ( v6 == a4 )
        goto LABEL_12;
    }
    v8 = v7 + 3;
    if ( !*((_QWORD *)a3 + 1) )
      goto LABEL_9;
  }
  else
  {
LABEL_12:
    v8 = nullptr;
    if ( !*((_QWORD *)a3 + 1) )
      goto LABEL_9;
  }
  v13 = *(const char **)a3;
  a3 = "Strings window";
  if ( strcmp(v13, "Strings window") )
  {
LABEL_9:
    if ( *(_DWORD *)v8 != 2 )
    {
      if ( !under_debugger )
      {
        v27 = (struct _Unwind_Exception *)interr(1623, a3, a4, a5, a1);
        if ( *(_QWORD *)v30 )
        {
          *(_QWORD *)&v30[8] = 0;
          a1 = qfree(*(_QWORD *)v30, a3);
        }
        if ( v5 )
          qfree(v5, a3, a1);
        _Unwind_Resume(v27);
      }
      BUG();
    }
LABEL_10:
    v9 = v8[1];
    v10 = 0;
    v11 = *(_QWORD *)(v9 + 8);
    if ( !v11 )
      return v10;
    v18 = (char *)qalloc_or_throw(*(_QWORD *)(v9 + 8));
    v19 = *(const char **)v9;
    v20 = v18;
    memcpy(v18, *(const void **)v9, v11);
    if ( v11 != 1 )
    {
      memset(v30, 0, sizeof(v30));
      v28 = v11 - 1;
      v21 = (v11 - 1) >> 1;
      if ( !v21
        || (v19 = nullptr,
            *(_QWORD *)v30 = qvector_reserve(v30, 0, (v11 - 1) >> 1, 1),
            memset((void *)(*(_QWORD *)v30 + *(_QWORD *)&v30[8]), 0, v21 - *(_QWORD *)&v30[8]),
            v25 = *(_BYTE **)v30,
            *(_QWORD *)&v30[8] = (v11 - 1) >> 1,
            v26 = (_BYTE *)(*(_QWORD *)v30 + v21),
            *(_BYTE **)v30 == v26) )
      {
        v22 = v20;
      }
      else
      {
        v22 = v20;
        do
        {
          v19 = "%02X";
          v29 = 0;
          if ( (unsigned int)qsscanf(v22, "%02X", &v29) != 1 )
            break;
          if ( v29 > 0xFF )
            break;
          *v25++ = v29;
          v22 += 2;
        }
        while ( v26 != v25 );
      }
      v10 = 0;
      if ( v22 != &v20[v28] )
      {
        v23 = *(_QWORD *)v30;
        if ( !*(_QWORD *)v30 )
          goto LABEL_23;
        goto LABEL_22;
      }
      v24 = sub_397520((__int64)v30);
      v23 = *(_QWORD *)v30;
      v10 = v24;
      if ( *(_QWORD *)v30 )
      {
LABEL_22:
        *(_QWORD *)&v30[8] = 0;
        qfree(v23, v19);
      }
    }
LABEL_23:
    if ( v20 )
      qfree(v20, v19);
    return v10;
  }
  if ( v8 && *(_DWORD *)v8 == 2 )
    goto LABEL_10;
  v14 = xmmword_8CC810;
  v15 = qalloc_or_throw(232);
  *(_OWORD *)v30 = -1;
  sub_3970E0(v15, (const __m128i *)v30);
  return sub_396C70(v15, v14, v16, v17);
}
