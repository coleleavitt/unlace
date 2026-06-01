_QWORD *__fastcall sub_FDE9E0(_QWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // rbx
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  char *v6; // rdi
  unsigned int *v7; // rsi
  size_t v8; // r15
  const void *v9; // rsi
  _BYTE *v10; // rsi
  void *v11; // rdx
  __int64 (__fastcall **v13)(); // [rsp+0h] [rbp-198h] BYREF
  int v14; // [rsp+8h] [rbp-190h]
  __int128 v15; // [rsp+10h] [rbp-188h]
  void *dest; // [rsp+20h] [rbp-178h]
  char v17; // [rsp+28h] [rbp-170h]
  int v18; // [rsp+2Ch] [rbp-16Ch]
  void **p_ptr; // [rsp+30h] [rbp-168h]
  void *ptr; // [rsp+40h] [rbp-158h] BYREF
  __m128i si128; // [rsp+48h] [rbp-150h]
  _BYTE v22[320]; // [rsp+58h] [rbp-140h] BYREF

  v3 = a2 + 4;
  v14 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v22;
  v17 = 0;
  v18 = 1;
  v13 = &off_2BEBEE0;
  dest = nullptr;
  v15 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v13, 0, 0, 0);
  v4 = (__int64)&a2[2 * (*a2 - 3) + 4];
  if ( (_DWORD *)v4 != a2 + 4 )
  {
    do
    {
      while ( 1 )
      {
        v5 = *((_QWORD *)&v15 + 1);
        v6 = (char *)dest;
        if ( *(_QWORD *)v3 )
        {
          v7 = *(unsigned int **)(*(_QWORD *)v3 + 16LL);
          v8 = *v7;
          v9 = v7 + 4;
          if ( v8 > *((_QWORD *)&v15 + 1) - (_QWORD)dest )
          {
            sub_227BF10(&v13, v9, v8);
            v6 = (char *)dest;
            v5 = *((_QWORD *)&v15 + 1);
          }
          else if ( v8 )
          {
            memcpy(dest, v9, v8);
            v5 = *((_QWORD *)&v15 + 1);
            v6 = (char *)dest + v8;
            dest = (char *)dest + v8;
          }
        }
        if ( (unsigned __int64)v6 >= v5 )
          break;
        v3 += 2;
        dest = v6 + 1;
        *v6 = 58;
        if ( v3 == (_DWORD *)v4 )
          goto LABEL_10;
      }
      v3 += 2;
      sub_227BA10(&v13, 58);
    }
    while ( v3 != (_DWORD *)v4 );
  }
LABEL_10:
  v10 = *p_ptr;
  v11 = p_ptr[1];
  *a1 = a1 + 2;
  sub_FDDC50(a1, v10, (__int64)v11 + (_QWORD)v10);
  v13 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v13);
  if ( ptr != v22 )
    free(ptr);
  return a1;
}
