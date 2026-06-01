_QWORD *__fastcall sub_254D60(
        _QWORD *a1,
        _DWORD *a2,
        const char *a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  char **p_s1; // rsi
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // r13
  char v21; // al
  char *v22; // r15
  char *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rbx
  _QWORD *v28; // rcx
  void (__fastcall ***v29)(_QWORD); // rdx
  bool v30; // zf
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rbx
  _QWORD *v36; // rcx
  void (__fastcall ***v37)(_QWORD); // rdx
  char v38; // [rsp+0h] [rbp-88h]
  __int64 v39; // [rsp+8h] [rbp-80h] BYREF
  __int64 v40; // [rsp+10h] [rbp-78h] BYREF
  __int128 v41; // [rsp+18h] [rbp-70h]
  char *s1; // [rsp+30h] [rbp-58h] BYREF
  __int128 v43; // [rsp+38h] [rbp-50h]
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( !byte_8BA544 )
  {
    if ( !byte_8CC068 )
    {
      byte_8CC068 = 1;
      sub_169630(
        (int)"The source level debugger has been disabled.\nTo enable it, use Debugger, Use source-level debugging",
        (__int64)a2,
        (__int64)a3,
        (__int64)a4,
        a5,
        a6,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13,
        a14,
        v38);
    }
    goto LABEL_20;
  }
  p_s1 = (char **)a3;
  v40 = 0;
  v39 = -1;
  v41 = 0;
  if ( !(unsigned __int8)sub_254C60(
                           a2,
                           a3,
                           (__int64)&v39,
                           (__int64)&v40,
                           a5,
                           a6,
                           (__m128)0LL,
                           a8,
                           a9,
                           a10,
                           a11,
                           a12,
                           a13,
                           a14) )
  {
LABEL_12:
    v24 = v40;
    v25 = v40;
    if ( !v40 )
    {
LABEL_20:
      *a1 = 0;
      return a1;
    }
    v26 = v41;
    if ( (_QWORD)v41 )
    {
      v27 = 0;
      do
      {
        v28 = (_QWORD *)(v24 + 8 * v27);
        v29 = (void (__fastcall ***)(_QWORD))*v28;
        if ( *v28 )
        {
          v30 = (*((_DWORD *)v29 + 2))-- == 1;
          if ( v30 )
          {
            (**(void (__fastcall ***)(_QWORD))*v28)(*v28);
            v24 = v40;
          }
        }
        ++v27;
        v25 = v24;
      }
      while ( v26 != v27 );
    }
LABEL_19:
    *(_QWORD *)&v41 = 0;
    qfree(v25, (const char *)p_s1);
    goto LABEL_20;
  }
  if ( !(_QWORD)v41 )
  {
    v25 = v40;
    if ( !v40 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v18 = 0;
  v19 = 0;
  while ( 1 )
  {
    p_s1 = &s1;
    s1 = nullptr;
    v43 = 0;
    v20 = 8 * v19;
    v21 = (*(__int64 (__fastcall **)(_QWORD, char **))(**(_QWORD **)(v40 + 8 * v19) + 16LL))(
            *(_QWORD *)(v40 + 8 * v19),
            &s1);
    v22 = s1;
    if ( v21 )
    {
      v23 = (char *)&::s1;
      p_s1 = (char **)a4;
      if ( (_QWORD)v43 )
        v23 = s1;
      if ( !strcmp(v23, a4) )
        break;
    }
    if ( v22 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v22, (const char *)p_s1);
    }
    v19 = ++v18;
    if ( v18 >= (unsigned __int64)v41 )
      goto LABEL_12;
  }
  v32 = v40;
  v33 = *(_QWORD *)(v40 + v20);
  *a1 = v33;
  if ( v33 )
    ++*(_DWORD *)(v33 + 8);
  if ( v22 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v22, a4);
    v32 = v40;
  }
  if ( v32 )
  {
    v34 = v41;
    if ( (_QWORD)v41 )
    {
      v35 = 0;
      do
      {
        v36 = (_QWORD *)(v32 + 8 * v35);
        v37 = (void (__fastcall ***)(_QWORD))*v36;
        if ( *v36 )
        {
          v30 = (*((_DWORD *)v37 + 2))-- == 1;
          if ( v30 )
          {
            (**(void (__fastcall ***)(_QWORD))*v36)(*v36);
            v32 = v40;
          }
        }
        ++v35;
      }
      while ( v34 != v35 );
    }
    *(_QWORD *)&v41 = 0;
    qfree(v32, a4);
  }
  return a1;
}
