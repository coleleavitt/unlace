void __fastcall sub_F049D0(__int64 a1, __int64 a2, char a3)
{
  void **v5; // rdi
  __int64 v6; // rax
  void *v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  void *v12; // r15
  size_t v13; // rax
  _BYTE *v14; // rax
  _BYTE *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r15
  _BYTE *v18; // rax
  _BYTE *v19; // rax
  void *v21; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-90h]
  void *v23; // [rsp+20h] [rbp-88h] BYREF
  __int64 v24; // [rsp+28h] [rbp-80h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __m128i si128; // [rsp+48h] [rbp-60h]
  _BYTE v27[80]; // [rsp+58h] [rbp-50h] BYREF

  LOBYTE(v5) = *(_BYTE *)(a2 + 2) >> 3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v5 = (void **)(unsigned __int8)v5;
  ptr = v27;
  v6 = sub_21F8CF0((unsigned __int8)v5);
  v7 = *(void **)(a2 + 16);
  v8 = v6;
  v9 = *(unsigned int *)(a2 + 24);
  v10 = (v9 + 63) >> 6;
  if ( v10 > 1 )
  {
    v5 = &v21;
    sub_2205610(&v21, v9, v10, v7);
  }
  else
  {
    v22 = v9;
    if ( (unsigned int)v9 > 0x40 )
    {
      v5 = &v21;
      v9 = (unsigned __int64)v7;
      sub_2205470(&v21, v7, 0);
    }
    else
    {
      v21 = v7;
    }
  }
  v11 = sub_21F90D0(v5, v9, v10);
  v12 = (void *)v11;
  if ( v8 == v11 )
    sub_21FFDA0(&v23, v11, &v21);
  else
    sub_21FF7D0(&v23, v8, &v21);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  if ( v23 == v12 )
    sub_2204E00(&v23, &ptr, 0, 3, 1);
  else
    sub_2203EA0(&v23, &ptr, 0, 3, 1);
  if ( v23 == v12 )
  {
    if ( v24 )
    {
      v16 = 24LL * *(_QWORD *)(v24 - 8);
      v17 = v24 + v16;
      if ( v24 == v24 + v16 )
      {
        operator delete[]((void *)(v24 - 8), v16 + 8);
      }
      else
      {
        while ( 1 )
        {
          sub_9955A0((_QWORD *)(v17 - 24));
          if ( v24 == v17 - 24 )
            break;
          v17 -= 24;
        }
        operator delete[]((void *)(v17 - 32), 24LL * *(_QWORD *)(v17 - 32) + 8);
      }
    }
  }
  else
  {
    sub_21F9830(&v23);
  }
  sub_227BF10(a1, ptr, si128.m128i_i64[0]);
  v13 = j__strlen("-0123456789");
  v23 = ptr;
  v24 = si128.m128i_i64[0];
  if ( sub_2246FB0(&v23, "-0123456789", v13, 0) == -1 )
  {
    v15 = *(_BYTE **)(a1 + 32);
    if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 24) )
    {
      sub_227BA10(a1, 46);
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v15 + 1;
      *v15 = 46;
    }
  }
  if ( a3 )
  {
    switch ( ((*(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 18LL) >> 3)
            + 32)
           & 0x1FF )
    {
      case 0:
      case 2:
      case 5:
      case 7:
        break;
      case 1:
        v19 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v19 >= *(_QWORD *)(a1 + 24) )
        {
          sub_227BA10(a1, 70);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v19 + 1;
          *v19 = 70;
        }
        break;
      case 3:
        v18 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v18 >= *(_QWORD *)(a1 + 24) )
        {
          sub_227BA10(a1, 76);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v18 + 1;
          *v18 = 76;
        }
        break;
      case 4:
        sub_995540(a1, "F16");
        break;
      case 6:
        v14 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v14 >= *(_QWORD *)(a1 + 24) )
        {
          sub_227BA10(a1, 81);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v14 + 1;
          *v14 = 81;
        }
        break;
    }
  }
  if ( ptr != v27 )
    free(ptr);
}
