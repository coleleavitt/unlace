__int64 __fastcall sub_691DA0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // r14
  _DWORD **v4; // r13
  __int64 v6; // rdi
  bool v7; // zf
  _DWORD **v8; // rbx
  __int64 v9; // rax
  _DWORD **v10; // r15
  _DWORD *v11; // rbp
  _QWORD *v12; // rdi
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 *v15; // rbx
  _DWORD *v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rdi
  _DWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 *v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rdx
  char i; // al
  int v35; // eax
  int v36; // eax
  __int64 *v37; // rsi
  __int64 v38; // rdi
  unsigned int v39; // eax
  unsigned int v40; // r15d
  __int64 v41; // rbp
  __int64 v42; // rdx
  __int64 v43; // r15
  __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  char **exception; // rbx
  __int64 v47[11]; // [rsp+0h] [rbp-58h] BYREF

  v3 = a1 + 96;
  v4 = (_DWORD **)a2;
  sub_11C7890(a1 + 96);
  if ( *(_BYTE *)(a1 + 3280) )
    return 0xFFFFFFFFLL;
  v6 = *(_QWORD *)(a1 + 4704);
  if ( v6 )
  {
    v7 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v7 )
      sub_68ECD0((void (***)(void))v6);
  }
  v8 = *(_DWORD ***)(a1 + 4560);
  v9 = *(unsigned int *)(a1 + 4568);
  *(_QWORD *)(a1 + 4704) = 0;
  v10 = &v8[v9];
  while ( v8 < v10 )
  {
    while ( 1 )
    {
      v11 = *v8;
      if ( *v8 )
      {
        v7 = v11[8]-- == 1;
        if ( v7 )
          break;
      }
      if ( ++v8 >= v10 )
        goto LABEL_11;
    }
    ++v8;
    sub_ED44E0(v11);
    sub_186B220(v11);
  }
LABEL_11:
  *(_DWORD *)(a1 + 4568) = 0;
  v12 = (_QWORD *)a1;
  sub_68ED00(a1);
  v13 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(*(_QWORD *)a2 + 123LL) & 8) != 0 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_68CF80(v47, "generation of proof objects is not supported in this mode");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v47);
    sub_233E40((__int64)v47);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( *(_BYTE *)(a1 + 4544) )
  {
    ++*(_DWORD *)(v13 + 32);
    v39 = *(_DWORD *)(a1 + 4568);
    v40 = *(_DWORD *)(a1 + 4572);
    if ( v39 >= v40 )
    {
      v43 = 2 * v40;
      v41 = sub_186B270(8 * v43);
      v39 = *(_DWORD *)(a1 + 4568);
      v12 = *(_QWORD **)(a1 + 4560);
      if ( v39 )
      {
        if ( v39 - 1 <= 2 || (_QWORD *)v41 == v12 + 1 )
        {
          v45 = 0;
          a2 = 8LL * v39;
          do
          {
            *(_QWORD *)(v41 + v45) = v12[v45 / 8];
            v45 += 8LL;
          }
          while ( v45 != a2 );
        }
        else
        {
          v44 = 0;
          do
          {
            a3 = (__m128)_mm_loadu_si128((const __m128i *)&v12[v44]);
            *(__m128 *)(v41 + v44 * 8) = a3;
            v44 += 2;
          }
          while ( 2LL * (v39 >> 1) != v44 );
          if ( (v39 & 1) != 0 )
            *(_QWORD *)(v41 + 8LL * (v39 & 0xFFFFFFFE)) = v12[v39 & 0xFFFFFFFE];
        }
      }
      if ( v12 != (_QWORD *)(a1 + 4576) && v12 )
      {
        sub_186B220(v12);
        v39 = *(_DWORD *)(a1 + 4568);
      }
      *(_QWORD *)(a1 + 4560) = v41;
      *(_DWORD *)(a1 + 4572) = v43;
    }
    else
    {
      v41 = *(_QWORD *)(a1 + 4560);
    }
    v42 = v39;
    v14 = v39 + 1;
    *(_QWORD *)(v41 + 8 * v42) = v13;
    *(_DWORD *)(a1 + 4568) = v14;
  }
  else
  {
    v12 = *(_QWORD **)(a1 + 4536);
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v12 + 128LL))(v12, a2, a1 + 4560);
    *(_BYTE *)(a1 + 4544) = 1;
    v14 = *(_DWORD *)(a1 + 4568);
  }
  if ( v14 != 1 )
  {
    sub_180B130(v12);
    if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
    {
      sub_186A4C0(*(double *)a3.m128_u64);
      sub_180B150(v12, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v38 = std::ostream::_M_insert<unsigned long>();
      std::operator<<<std::char_traits<char>>();
      sub_186A500(v38, "\n");
    }
    else
    {
      sub_180B150(v12, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::operator<<<std::char_traits<char>>();
    }
    return 0;
  }
  v15 = **(__int64 ***)(a1 + 4560);
  if ( v15 )
    ++*((_DWORD *)v15 + 8);
  v16 = *v4;
  if ( *v4 )
  {
    v7 = v16[8]-- == 1;
    if ( v7 )
    {
      sub_ED44E0(v16);
      sub_186B220(v16);
      *v4 = v15;
      if ( (*((_BYTE *)v15 + 123) & 0x20) == 0 )
        goto LABEL_20;
LABEL_38:
      v31 = v15[11];
      v32 = *v15;
      if ( v31 )
      {
        v33 = v15[11];
        for ( i = *(_BYTE *)(v31 + 3) >> 6; !i; i = *(_BYTE *)(v33 + 3) >> 6 )
          v33 = *(_QWORD *)(v33 + 16);
        if ( i == 1 )
        {
          v35 = *(_DWORD *)(v33 + 4) + 1;
        }
        else if ( i == 2 )
        {
          v35 = *(_DWORD *)(v33 + 4) - 1;
        }
        else
        {
          v35 = *(_DWORD *)(v33 + 4);
        }
        if ( v35 )
        {
          v36 = 18;
          while ( --v36 )
          {
            if ( *(char *)(v31 + 3) >= 0 )
            {
              if ( !*(_DWORD *)(v31 + 4) )
              {
                v37 = (__int64 *)(v31 + 8);
                goto LABEL_49;
              }
            }
            else if ( *(_BYTE *)(v31 + 3) >> 6 != 2 )
            {
              v37 = *(__int64 **)(v31 + 16);
              goto LABEL_49;
            }
            v31 = *(_QWORD *)(v31 + 16);
          }
          sub_233F80((__int64 *)(v32 + 616), (_DWORD *)v15 + 22);
          v32 = *v15;
          v37 = *(__int64 **)(v15[11] + 16);
LABEL_49:
          v31 = *v37;
        }
        else
        {
          v31 = 0;
        }
      }
      v17 = sub_132F960(v32, v31);
      goto LABEL_21;
    }
  }
  *v4 = v15;
  if ( (*((_BYTE *)v15 + 123) & 0x20) != 0 )
    goto LABEL_38;
LABEL_20:
  v17 = v15[2];
LABEL_21:
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v18 = *(_QWORD *)(a1 + 4704);
  if ( v18 )
  {
    v7 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v7 )
      sub_68ECD0((void (***)(void))v18);
  }
  v19 = *v4;
  v20 = *(_QWORD *)(a1 + 4712);
  *(_QWORD *)(a1 + 4704) = v17;
  v21 = *((_QWORD *)v19 + 1);
  v22 = 0x7FFFFFFF8LL;
  if ( v20 )
    v22 = 8LL * (unsigned int)(*(_DWORD *)(v20 - 4) - 1);
  v23 = 0x7FFFFFFF8LL;
  v24 = sub_1336AB0(*(_QWORD *)(v20 + v22), v21);
  v25 = *(_QWORD *)(a1 + 4712);
  v26 = v24;
  if ( v25 )
    v23 = 8LL * (unsigned int)(*(_DWORD *)(v25 - 4) - 1);
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  v27 = (__int64 *)(v23 + v25);
  v28 = *v27;
  if ( *v27 )
  {
    v7 = (*(_DWORD *)(v28 + 8))-- == 1;
    if ( v7 )
    {
      sub_68ECD0((void (***)(void))v28);
      v27 = (__int64 *)(v23 + *(_QWORD *)(a1 + 4712));
    }
  }
  *v27 = v26;
  sub_787FA0(a1 + 4376, (unsigned int)*v4, a1 + 4392, v3, a1 + 4480, a1 + 4840, *(unsigned __int8 *)(a1 + 385));
  v29 = *(_QWORD *)(a1 + 4752);
  if ( !v29 )
  {
    v29 = sub_186B270(0x68u);
    sub_781140(v29, *(_QWORD *)(a1 + 8));
    ++*(_DWORD *)(v29 + 8);
    sub_68D080(*(void (****)(void))(a1 + 4752));
    *(_QWORD *)(a1 + 4752) = v29;
  }
  sub_7826B0(v29, v3, a1 + 4480);
  return sub_690EA0((__m128 *)a1);
}

