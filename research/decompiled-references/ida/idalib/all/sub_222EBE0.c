__int64 __fastcall sub_222EBE0(void *s2, size_t n, __pid_t pid)
{
  char *v5; // rbx
  int v6; // edx
  unsigned int v7; // eax
  bool v8; // cf
  __int64 v9; // rax
  __int64 v10; // rbx
  _BYTE *v11; // rdi
  _BYTE *v12; // rcx
  _DWORD *v13; // rdx
  unsigned int v14; // r15d
  int v16; // eax
  int *v17; // rax
  _BYTE *v18; // [rsp+8h] [rbp-260h]
  char name[255]; // [rsp+10h] [rbp-258h] BYREF
  char v20; // [rsp+10Fh] [rbp-159h]
  void *ptr; // [rsp+110h] [rbp-158h] BYREF
  __m128i si128; // [rsp+118h] [rbp-150h]
  _BYTE v23[320]; // [rsp+128h] [rbp-140h] BYREF

  name[0] = 0;
  v5 = name;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v23;
  v20 = 0;
  gethostname(name, 0xFFu);
  do
  {
    v6 = *(_DWORD *)v5;
    v5 += 4;
    v7 = ~v6 & (v6 - 16843009) & 0x80808080;
  }
  while ( !v7 );
  if ( (~v6 & (v6 - 16843009) & 0x8080) == 0 )
  {
    v7 >>= 16;
    v5 += 2;
  }
  v8 = __CFADD__((_BYTE)v7, (_BYTE)v7);
  v9 = si128.m128i_i64[0];
  v10 = &v5[-v8 - 3] - name;
  if ( (unsigned __int64)(si128.m128i_i64[0] + v10) > si128.m128i_i64[1] )
  {
    sub_2236E10(&ptr, v23, si128.m128i_i64[0] + v10, 1);
    v9 = si128.m128i_i64[0];
  }
  v11 = ptr;
  v12 = ptr;
  if ( v10 )
  {
    v13 = (char *)ptr + v9;
    if ( (unsigned int)v10 < 8 )
    {
      if ( (v10 & 4) != 0 )
      {
        *v13 = *(_DWORD *)name;
        *(_DWORD *)((char *)v13 + (unsigned int)v10 - 4) = *(_DWORD *)&name[(unsigned int)v10 - 4];
        v9 = si128.m128i_i64[0];
        v11 = ptr;
        goto LABEL_11;
      }
      if ( !(_DWORD)v10 )
      {
LABEL_11:
        v12 = v11;
        goto LABEL_12;
      }
      *(_BYTE *)v13 = name[0];
      if ( (v10 & 2) != 0 )
      {
        *(_WORD *)((char *)v13 + (unsigned int)v10 - 2) = *(_WORD *)&name[(unsigned int)v10 - 2];
        v9 = si128.m128i_i64[0];
        v11 = ptr;
        goto LABEL_11;
      }
    }
    else
    {
      *(_QWORD *)v13 = *(_QWORD *)name;
      *(_QWORD *)((char *)v13 + (unsigned int)v10 - 8) = *(_QWORD *)&name[(unsigned int)v10 - 8];
      qmemcpy(
        (void *)((unsigned __int64)(v13 + 2) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(name - ((char *)v13 - ((unsigned __int64)(v13 + 2) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((unsigned int)v10 + (_DWORD)v13 - (((_DWORD)v13 + 8) & 0xFFFFFFF8)) >> 3));
    }
    v9 = si128.m128i_i64[0];
    v11 = ptr;
    goto LABEL_11;
  }
LABEL_12:
  v14 = 1;
  si128.m128i_i64[0] = v9 + v10;
  if ( v9 + v10 == n )
  {
    v18 = v12;
    if ( !n || (v16 = memcmp(v11, s2, n), v12 = v18, !v16) )
    {
      if ( getsid(pid) == -1 )
      {
        v17 = __errno_location();
        v12 = ptr;
        LOBYTE(v14) = *v17 != 3;
      }
      else
      {
        v12 = ptr;
        v14 = 1;
      }
    }
  }
  if ( v12 != v23 )
    free(v12);
  return v14;
}
