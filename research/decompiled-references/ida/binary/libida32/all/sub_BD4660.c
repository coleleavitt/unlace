_QWORD *__fastcall sub_BD4660(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // r12d
  void *v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  void *v6; // rax
  _BYTE *v7; // rsi
  __int64 v8; // rdx
  void *v10; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-90h]
  void *v12; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v13; // [rsp+18h] [rbp-80h]
  char v14; // [rsp+1Ch] [rbp-7Ch]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __m128i si128; // [rsp+28h] [rbp-70h]
  _BYTE v17[96]; // [rsp+38h] [rbp-60h] BYREF

  v2 = *(_DWORD *)(a2 + 32);
  v3 = *(void **)(a2 + 16);
  v4 = *(unsigned int *)(a2 + 24);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
  v5 = (unsigned __int64)(v4 + 63) >> 6;
  ptr = v17;
  if ( v5 > 1 )
  {
    sub_21E18D0(&v10, v4, v5, v3);
  }
  else
  {
    v11 = v4;
    if ( (unsigned int)v4 <= 0x40 )
    {
      v10 = v3;
      goto LABEL_4;
    }
    sub_21E1730(&v10, v3, 0);
  }
  if ( v11 > 0x40 )
  {
    v6 = *(void **)v10;
    goto LABEL_5;
  }
LABEL_4:
  v6 = v10;
LABEL_5:
  v12 = v6;
  v13 = 64;
  v14 = 1;
  sub_F3AD40(&ptr, &v12, v2);
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  v7 = ptr;
  v8 = si128.m128i_i64[0];
  *a1 = a1 + 2;
  sub_BD2CD0(a1, v7, (__int64)&v7[v8]);
  if ( ptr != v17 )
    free(ptr);
  return a1;
}

