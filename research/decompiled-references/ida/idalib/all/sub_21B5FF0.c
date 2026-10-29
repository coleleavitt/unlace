_QWORD *__fastcall sub_21B5FF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  const char **v7; // rbx
  const char **v8; // r13
  size_t v9; // rax
  const char *v10; // rsi
  const char *v11; // r15
  size_t v12; // rax
  _BYTE *v13; // r13
  signed __int64 v14; // rbx
  void *v15; // rax
  const char *src; // [rsp+0h] [rbp-238h]
  void *srca; // [rsp+0h] [rbp-238h]
  void *srcb; // [rsp+0h] [rbp-238h]
  __int64 (__fastcall **v19)(); // [rsp+10h] [rbp-228h] BYREF
  int v20; // [rsp+18h] [rbp-220h]
  __int128 v21; // [rsp+20h] [rbp-218h]
  void *dest; // [rsp+30h] [rbp-208h]
  char v23; // [rsp+38h] [rbp-200h]
  int v24; // [rsp+3Ch] [rbp-1FCh]
  void **v25; // [rsp+40h] [rbp-1F8h]
  void *ptr; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-1E0h]
  _BYTE v28[128]; // [rsp+60h] [rbp-1D8h] BYREF
  void *v29; // [rsp+E0h] [rbp-158h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-150h]
  _BYTE v31[320]; // [rsp+F8h] [rbp-140h] BYREF

  v5 = *(_QWORD *)(a2 + 80);
  if ( v5 )
  {
    sub_21B5FF0(a1, v5, a3);
    return a1;
  }
  v20 = 2;
  v29 = v31;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v21 = 0;
  v19 = &off_2BEBEE0;
  v23 = 0;
  v24 = 1;
  dest = nullptr;
  v25 = &v29;
  sub_227B8B0(&v19, 0, 0, 0);
  ptr = v28;
  v27 = 0x1000000000LL;
  sub_21B5A40(a2, a3, (__int64)&ptr);
  v7 = (const char **)ptr;
  v8 = (const char **)((char *)ptr + 8 * (unsigned int)v27);
  if ( ptr != v8 )
  {
    if ( *(_QWORD *)ptr )
    {
      src = *(const char **)ptr;
      v9 = strlen(*(const char **)ptr);
      v10 = src;
      if ( v9 <= *((_QWORD *)&v21 + 1) - (_QWORD)dest )
      {
        if ( v9 )
        {
          srcb = (void *)v9;
          memcpy(dest, v10, v9);
          dest = (char *)dest + (_QWORD)srcb;
        }
      }
      else
      {
        sub_227BF10(&v19, src, v9);
      }
    }
LABEL_8:
    while ( v8 != ++v7 )
    {
      while ( 1 )
      {
        if ( *((void **)&v21 + 1) == dest )
        {
          sub_227BF10(&v19, " ", 1);
        }
        else
        {
          *(_BYTE *)dest = 32;
          dest = (char *)dest + 1;
        }
        v11 = *v7;
        if ( !*v7 )
          break;
        v12 = strlen(*v7);
        if ( v12 <= *((_QWORD *)&v21 + 1) - (_QWORD)dest )
        {
          if ( v12 )
          {
            srca = (void *)v12;
            memcpy(dest, v11, v12);
            dest = (char *)dest + (_QWORD)srca;
          }
          goto LABEL_8;
        }
        ++v7;
        sub_227BF10(&v19, v11, v12);
        if ( v8 == v7 )
          goto LABEL_14;
      }
    }
  }
LABEL_14:
  v13 = *v25;
  v14 = (signed __int64)v25[1];
  v15 = a1 + 2;
  *a1 = a1 + 2;
  if ( &v13[v14] && !v13 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v14 > 0xF )
  {
    if ( v14 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v15 = (void *)operator new(v14 + 1);
    a1[2] = v14;
    *a1 = v15;
    goto LABEL_30;
  }
  if ( v14 != 1 )
  {
    if ( !v14 )
      goto LABEL_19;
LABEL_30:
    memcpy(v15, v13, v14);
    v15 = (void *)*a1;
    goto LABEL_19;
  }
  *((_BYTE *)a1 + 16) = *v13;
LABEL_19:
  a1[1] = v14;
  *((_BYTE *)v15 + v14) = 0;
  if ( ptr != v28 )
    free(ptr);
  v19 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v19);
  if ( v29 != v31 )
    free(v29);
  return a1;
}
