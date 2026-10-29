__int64 __fastcall sub_3A8180(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  const char *v4; // r15
  __int64 v5; // r14
  __int64 v8; // rdx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rcx
  char *v12; // rax
  unsigned int v13; // edx
  const char *v14; // r15
  unsigned int v15; // eax
  __int64 v16; // rsi
  const char *v17; // rsi
  unsigned int v18; // r14d
  unsigned int v19; // eax
  const char *v20; // rcx
  const char *v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // r12
  __int64 v25; // rbp
  __int64 *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v30; // rbp
  const char *v31; // r13
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // [rsp+0h] [rbp-A0h]
  void *src; // [rsp+8h] [rbp-98h] BYREF
  __int128 v36; // [rsp+10h] [rbp-90h]
  __int64 v37; // [rsp+28h] [rbp-78h] BYREF
  __int128 v38; // [rsp+30h] [rbp-70h]
  __int64 v39; // [rsp+40h] [rbp-60h]
  __int128 v40; // [rsp+48h] [rbp-58h]
  int v41; // [rsp+58h] [rbp-48h]
  char v42; // [rsp+5Ch] [rbp-44h]
  unsigned __int64 v43; // [rsp+60h] [rbp-40h]

  v4 = "Could not create enum";
  v5 = 21;
  v8 = 22;
  v43 = __readfsqword(0x28u);
  v41 = 0;
  v37 = 0;
  v39 = 0;
  v42 = 0x80;
  src = nullptr;
  v38 = 0;
  v40 = 0;
  v36 = 0;
  if ( a4 )
  {
    v8 = 18;
    v5 = 17;
    v4 = "Invalid enum data";
  }
  v34 = v8;
  v10 = (_QWORD *)qvector_reserve(&src, 0, v8, 1);
  src = v10;
  v11 = (unsigned __int64)(v10 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)&v36 = v34;
  *v10 = *(_QWORD *)v4;
  *(_QWORD *)((char *)v10 + v5 - 8) = *(_QWORD *)&v4[v5 - 8];
  v12 = (char *)v10 - v11;
  v13 = 0;
  v14 = (const char *)(v4 - v12);
  v15 = (v5 + (_DWORD)v12) & 0xFFFFFFF8;
  do
  {
    v16 = v13;
    v13 += 8;
    *(_QWORD *)(v11 + v16) = *(_QWORD *)&v14[v16];
  }
  while ( v13 < v15 );
  *((_BYTE *)src + v5) = 0;
  if ( (!a4 || (v17 = (_BYTE *)(&qword_28 + 5), (unsigned __int8)get_tinfo_details(*a4, 45, &v37)))
    && (v17 = (const char *)&v37, (unsigned __int8)sub_3A5E60(a2, (__int64)&v37))
    && (v17 = (_BYTE *)(&qword_28 + 5), v18 = create_tinfo(a1, 45, 45, &v37), (_BYTE)v18) )
  {
    v17 = (const char *)&word_12;
    v19 = set_tinfo_property4(a1, 18, ((int)*(unsigned __int16 *)(a2 + 26) >> 1) & 1, 0, 0, 0);
    if ( !v19 )
      goto LABEL_13;
    v20 = (const char *)tinfo_errstr(v19);
    v21 = &s1;
    if ( (_QWORD)v36 )
      v21 = (const char *)src;
    v17 = "%s: %s";
    sub_169A50(a3, (__int64)"%s: %s", v21, v20);
  }
  else
  {
    v30 = v36;
    if ( (unsigned __int64)v36 > 1 )
    {
      v31 = (const char *)src;
      v32 = (void *)*a3;
      if ( a3[2] < (unsigned __int64)v36 )
      {
        v33 = qvector_reserve(a3, *a3, v36, 1);
        *a3 = v33;
        v32 = (void *)v33;
      }
      a3[1] = v30;
      v17 = v31;
      memmove(v32, v31, v30 - 1);
      *(_BYTE *)(*a3 + v30 - 1) = 0;
    }
    else
    {
      a3[1] = 0;
    }
  }
  v18 = 0;
LABEL_13:
  if ( src )
  {
    *(_QWORD *)&v36 = 0;
    qfree(src, v17);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39, v17);
  }
  v22 = v37;
  if ( v37 )
  {
    v23 = v38;
    if ( (_QWORD)v38 )
    {
      v24 = 0;
      v25 = 0;
      do
      {
        v26 = (__int64 *)(v22 + v24);
        v27 = *(_QWORD *)(v22 + v24 + 24);
        if ( v27 )
        {
          v26[4] = 0;
          qfree(v27, v17);
        }
        v28 = *v26;
        if ( *v26 )
        {
          v26[1] = 0;
          qfree(v28, v17);
        }
        ++v25;
        v22 = v37;
        v24 += 56;
      }
      while ( v23 != v25 );
    }
    *(_QWORD *)&v38 = 0;
    qfree(v22, v17);
  }
  return v18;
}
