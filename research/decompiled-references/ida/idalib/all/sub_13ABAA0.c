void __fastcall sub_13ABAA0(_QWORD *a1, char *a2, size_t a3, _BYTE *a4, char a5)
{
  _BYTE *v10; // rax
  void *v11; // rdi
  size_t v12; // rcx
  __int64 v13; // rbx
  size_t v14; // rax
  __int64 v15; // rax
  size_t v16; // [rsp+8h] [rbp-40h]

  while ( a3 )
  {
    v10 = memchr(a2, 127, a3);
    if ( v10 )
    {
      v11 = (void *)a1[4];
      v12 = v10 - a2;
      v13 = v10 - a2;
      if ( a3 <= v10 - a2 )
        v12 = a3;
      if ( v12 <= a1[3] - (_QWORD)v11 )
      {
        if ( v12 )
        {
LABEL_10:
          v16 = v12;
          memcpy(v11, a2, v12);
          a1[4] += v16;
        }
        if ( v13 == -1 )
          return;
        goto LABEL_12;
      }
    }
    else
    {
      v11 = (void *)a1[4];
      v12 = a3;
      v13 = -1;
      if ( a3 <= a1[3] - (_QWORD)v11 )
        goto LABEL_10;
    }
    sub_227BF10(a1, a2, v12);
    if ( v13 == -1 )
      return;
LABEL_12:
    v14 = v13 + 1;
    if ( v13 + 1 > a3 )
    {
      v14 = a3;
      a3 = 0;
    }
    else
    {
      a3 -= v14;
    }
    a2 += v14;
    v15 = *a1;
    if ( *a4 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(v15 + 24))(a1, 6, 1, 0);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(v15 + 32))(a1);
      if ( a5 )
        (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*a1 + 24LL))(a1, 16, 1, 0);
    }
    *a4 ^= 1u;
  }
}
