void __fastcall sub_211A290(_QWORD *a1, _QWORD **a2)
{
  __int64 v4; // rbx
  unsigned int v5; // ebx
  char *v6; // rdi
  __int64 v7; // r14
  _BYTE *v8; // rsi
  _BYTE *v9; // rdi
  void (*v10)(); // rax
  unsigned int v11; // ebx
  void (__fastcall *v12)(_QWORD *, __int64, _QWORD); // r13
  int v13; // eax
  __int64 v14; // rsi
  void *v15; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v16; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i si128; // [rsp+18h] [rbp-50h]
  _BYTE v19[64]; // [rsp+28h] [rbp-40h] BYREF

  v4 = *((unsigned int *)a2 + 2);
  if ( (unsigned __int64)(v4 + 63) >> 6 != 1 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1[1] + 152LL) + 16LL) )
    {
      v16 = *((_DWORD *)a2 + 2);
      if ( (unsigned int)v4 <= 0x40 )
      {
        v5 = (unsigned int)v4 >> 3;
        v6 = v19;
        v7 = v5;
        v15 = *a2;
        v8 = v19;
        ptr = v19;
        si128 = _mm_load_si128(xmmword_23A8F10);
        if ( v5 )
        {
LABEL_5:
          if ( v6 != &v8[v7] )
          {
            memset(v6, 0, &v8[v7] - v6);
            v8 = ptr;
          }
          si128.m128i_i64[0] = v7;
          goto LABEL_8;
        }
        goto LABEL_8;
      }
      sub_2205510(&v15);
      v11 = *((_DWORD *)a2 + 2);
    }
    else
    {
      sub_220AC30(&v15, a2);
      v11 = *((_DWORD *)a2 + 2);
    }
    v5 = v11 >> 3;
    v8 = v19;
    v7 = v5;
    ptr = v19;
    si128 = _mm_load_si128(xmmword_23A8F10);
    if ( v5 )
    {
      v6 = v19;
      if ( v5 > 0xAuLL )
      {
        sub_2236E10(&ptr, v19, v5, 1);
        v8 = ptr;
        v6 = (char *)ptr + si128.m128i_i64[0];
      }
      goto LABEL_5;
    }
LABEL_8:
    sub_220BA60(&v15, v8, v5);
    v9 = ptr;
    v10 = *(void (**)())(*a1 + 512LL);
    if ( v10 != nullsub_1447 )
    {
      ((void (__fastcall *)(_QWORD *, void *, __int64))v10)(a1, ptr, si128.m128i_i64[0]);
      v9 = ptr;
    }
    if ( v9 != v19 )
      free(v9);
    if ( v16 > 0x40 )
    {
      if ( v15 )
        operator delete[](v15);
    }
    return;
  }
  v12 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 536LL);
  if ( (unsigned int)v4 <= 0x40 )
  {
    v14 = (__int64)*a2;
  }
  else
  {
    v13 = sub_2206780(a2);
    v14 = -1;
    if ( (unsigned int)(v4 - v13) <= 0x40 )
      v14 = **a2;
  }
  v12(a1, v14, (unsigned int)v4 >> 3);
}
