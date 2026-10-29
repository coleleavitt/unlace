__int64 __fastcall sub_6B7DE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  char *v5; // r15
  size_t v6; // r12
  const char *v7; // rsi
  size_t v8; // r13
  char *v9; // r12
  int v10; // eax
  void *v11; // rax
  char *v12; // rsi
  void *v14; // rax
  __int64 v15; // [rsp+18h] [rbp-F0h] BYREF
  __m128i v16; // [rsp+20h] [rbp-E8h] BYREF
  char *s1; // [rsp+30h] [rbp-D8h] BYREF
  size_t n[3]; // [rsp+38h] [rbp-D0h]
  __int16 v19; // [rsp+50h] [rbp-B8h]
  _QWORD v20[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+70h] [rbp-98h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  char **v24; // [rsp+90h] [rbp-78h]
  char *s[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v26[11]; // [rsp+B0h] [rbp-58h] BYREF

  v15 = a3;
  v26[3] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 48);
  v23 = 0x100000000LL;
  v21 = 0;
  s[0] = (char *)v26;
  v20[0] = &off_2BC1EC8;
  s[1] = nullptr;
  LOBYTE(v26[0]) = 0;
  v4 = _mm_loadu_si128((const __m128i *)(v3 + 17464));
  v20[1] = 0;
  v22 = 0;
  v16 = v4;
  v16.m128i_i32[0] = _mm_cvtsi128_si32(v4) & 0xFDBF8FFF | 0x2001000;
  v24 = s;
  sub_2257B70(v20, 0, 0, 0);
  v19 = 257;
  sub_F50AF0(&v15, v20, &v16, &s1, 0);
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
  v7 = v5;
  s1 = (char *)qvector_reserve(&s1, 0, v6 + 1, 1);
  n[0] = v6 + 1;
  memmove(s1, v5, v6);
  s1[v6] = 0;
  v8 = n[0];
  if ( n[0] )
  {
    if ( n[0] - 1 <= 8 )
    {
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
    }
    else
    {
      v9 = s1;
      v7 = "template ";
      v10 = strncmp(s1, "template ", 9u);
      *(_QWORD *)a1 = 0;
      if ( !v10 )
      {
        *(_OWORD *)(a1 + 8) = 0;
        if ( v8 != 10 )
        {
          v14 = (void *)qvector_reserve(a1, 0, v8 - 9, 1);
          *(_QWORD *)a1 = v14;
          *(_QWORD *)(a1 + 8) = v8 - 9;
          memmove(v14, v9 + 9, v8 - 10);
          *(_BYTE *)(*(_QWORD *)a1 + v8 - 10) = 0;
          v9 = s1;
        }
        goto LABEL_7;
      }
      *(_OWORD *)(a1 + 8) = 0;
    }
    v11 = (void *)qalloc_or_throw(v8, v7);
    *(_QWORD *)(a1 + 16) = v8;
    v12 = s1;
    *(_QWORD *)a1 = v11;
    memcpy(v11, v12, v8);
    *(_QWORD *)(a1 + 8) = v8;
    v9 = s1;
  }
  else
  {
    *(_QWORD *)a1 = 0;
    v9 = s1;
    *(_OWORD *)(a1 + 8) = 0;
  }
LABEL_7:
  if ( v9 )
  {
    n[0] = 0;
    qfree(v9);
  }
LABEL_9:
  v20[0] = &off_2BC1EC8;
  sub_2257A60(v20);
  if ( (_QWORD *)s[0] != v26 )
    operator delete(s[0], v26[0] + 1LL);
  return a1;
}

