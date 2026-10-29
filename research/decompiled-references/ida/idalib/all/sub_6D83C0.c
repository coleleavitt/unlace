__int64 __fastcall sub_6D83C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  char *v5; // r15
  size_t v6; // r12
  size_t v7; // r13
  char *v8; // r12
  int v9; // eax
  void *v10; // rax
  char *v11; // rsi
  void *v13; // rax
  __int64 v14; // [rsp+18h] [rbp-F0h] BYREF
  __m128i v15; // [rsp+20h] [rbp-E8h] BYREF
  char *s1; // [rsp+30h] [rbp-D8h] BYREF
  size_t n[3]; // [rsp+38h] [rbp-D0h]
  __int16 v18; // [rsp+50h] [rbp-B8h]
  _QWORD v19[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+70h] [rbp-98h]
  __int64 v21; // [rsp+80h] [rbp-88h]
  __int64 v22; // [rsp+88h] [rbp-80h]
  char **v23; // [rsp+90h] [rbp-78h]
  char *s[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v25[11]; // [rsp+B0h] [rbp-58h] BYREF

  v14 = a3;
  v25[3] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 48);
  v22 = 0x100000000LL;
  v20 = 0;
  s[0] = (char *)v25;
  v19[0] = &off_2BEBE68;
  s[1] = nullptr;
  LOBYTE(v25[0]) = 0;
  v4 = _mm_loadu_si128((const __m128i *)(v3 + 17464));
  v19[1] = 0;
  v21 = 0;
  v15 = v4;
  v15.m128i_i32[0] = _mm_cvtsi128_si32(v4) & 0xFDBF8FFF | 0x2001000;
  v23 = s;
  sub_227B8B0(v19, 0, 0, 0);
  v18 = 257;
  sub_F74830(&v14, v19, &v15, &s1, 0);
  v5 = s[0];
  s1 = nullptr;
  *(_OWORD *)n = 0;
  if ( !s[0] )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    goto LABEL_9;
  }
  v6 = strlen(s[0]);
  s1 = (char *)qvector_reserve(&s1, 0, v6 + 1, 1);
  n[0] = v6 + 1;
  memmove(s1, v5, v6);
  s1[v6] = 0;
  v7 = n[0];
  if ( n[0] )
  {
    if ( n[0] - 1 <= 8 )
    {
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
    }
    else
    {
      v8 = s1;
      v9 = strncmp(s1, "template ", 9u);
      *(_QWORD *)a1 = 0;
      if ( !v9 )
      {
        *(_OWORD *)(a1 + 8) = 0;
        if ( v7 != 10 )
        {
          v13 = (void *)qvector_reserve(a1, 0, v7 - 9, 1);
          *(_QWORD *)a1 = v13;
          *(_QWORD *)(a1 + 8) = v7 - 9;
          memmove(v13, v8 + 9, v7 - 10);
          *(_BYTE *)(*(_QWORD *)a1 + v7 - 10) = 0;
          v8 = s1;
        }
        goto LABEL_7;
      }
      *(_OWORD *)(a1 + 8) = 0;
    }
    v10 = (void *)qalloc_or_throw(v7);
    *(_QWORD *)(a1 + 16) = v7;
    v11 = s1;
    *(_QWORD *)a1 = v10;
    memcpy(v10, v11, v7);
    *(_QWORD *)(a1 + 8) = v7;
    v8 = s1;
  }
  else
  {
    *(_QWORD *)a1 = 0;
    v8 = s1;
    *(_OWORD *)(a1 + 8) = 0;
  }
LABEL_7:
  if ( v8 )
  {
    n[0] = 0;
    qfree(v8);
  }
LABEL_9:
  v19[0] = &off_2BEBE68;
  sub_227B7A0(v19);
  if ( (_QWORD *)s[0] != v25 )
    operator delete(s[0], v25[0] + 1LL);
  return a1;
}
