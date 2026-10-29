__int64 __fastcall sub_96E440(__int64 a1, __int64 a2, __int64 **a3, __m128i a4, __m128 a5)
{
  char **exception; // r13
  __int64 *v9; // r15
  __int64 v10; // rax
  __int64 *v11; // r14
  __int64 *v12; // rbp
  __int64 *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 result; // rax
  void (__fastcall ***v18)(void *); // rbp
  void (__fastcall ***v19)(void *); // rbp
  unsigned int v20; // r13d
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rbp
  unsigned int v24; // r15d
  unsigned int v25; // r14d
  __int64 v26; // rax
  unsigned int *v27; // rax
  unsigned int v28; // r8d
  size_t v29; // rsi
  unsigned int *v30; // rax
  unsigned int v31; // r14d
  _QWORD *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  unsigned int v36; // [rsp+14h] [rbp-84h]
  char v37; // [rsp+1Bh] [rbp-7Dh]
  unsigned int v38; // [rsp+30h] [rbp-68h] BYREF
  unsigned int i; // [rsp+34h] [rbp-64h]
  __int64 v40; // [rsp+38h] [rbp-60h] BYREF
  __int64 v41[11]; // [rsp+40h] [rbp-58h] BYREF

  sub_8F91D0(a1);
  v9 = *a3;
  if ( *a3 )
  {
    v10 = *((unsigned int *)v9 - 1);
    if ( (_DWORD)v10 )
    {
      v11 = &v9[2 * v10];
      do
      {
        v12 = (__int64 *)v9[1];
        if ( v12 )
        {
          v13 = &v12[*((unsigned int *)v12 - 1)];
          if ( v12 >= v13 )
            goto LABEL_12;
          do
          {
            while ( 1 )
            {
              v14 = *v12;
              if ( *v12 )
              {
                v15 = *v9;
                v16 = (*(_DWORD *)(v14 + 8))-- == 1;
                if ( v16 )
                  break;
              }
              if ( ++v12 >= v13 )
                goto LABEL_11;
            }
            sub_15D7BC0(v15, v14);
            ++v12;
          }
          while ( v12 < v13 );
LABEL_11:
          v12 = (__int64 *)v9[1];
          if ( v12 )
LABEL_12:
            sub_186B220(v12 - 1);
        }
        v9 += 2;
      }
      while ( v9 != v11 );
      v9 = *a3;
    }
    *((_DWORD *)v9 - 1) = 0;
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, 0);
  sub_8EA730(a1);
  result = 0xFFFFFFFFLL;
  if ( !*(_BYTE *)(a1 + 2416) && qword_1C7EC80 == *(_QWORD *)(a1 + 8984) )
  {
    v18 = *(void (__fastcall ****)(void *))(a1 + 9320);
    if ( v18 )
    {
      v16 = (*((_DWORD *)v18 + 4))-- == 1;
      if ( v16 )
      {
        (**v18)(v18);
        sub_186B220(v18);
      }
    }
    v19 = *(void (__fastcall ****)(void *))(a1 + 9312);
    *(_QWORD *)(a1 + 9320) = 0;
    if ( v19 )
    {
      v16 = (*((_DWORD *)v19 + 4))-- == 1;
      if ( v16 )
      {
        (**v19)(v19);
        sub_186B220(v19);
      }
    }
    *(_QWORD *)(a1 + 9312) = 0;
    v20 = 0;
    sub_8F2440(a1);
    v21 = *(_BYTE *)(a1 + 10320);
    v38 = -1;
    *(_BYTE *)(a1 + 10320) = 1;
    v37 = v21;
    i = 1;
    while ( 1 )
    {
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 104)) )
      {
        i = 0;
        goto LABEL_38;
      }
      v22 = *(_QWORD *)(a2 + 8);
      v23 = 0;
      if ( v22 )
      {
        v24 = 0;
        do
        {
          if ( v24 >= *(_DWORD *)(v22 - 4) )
            break;
          v25 = sub_B645B0(a1, *(_QWORD *)(v22 + 8LL * v24));
          if ( v23 )
          {
            v26 = *(unsigned int *)(v23 - 4);
            if ( (_DWORD)v26 == *(_DWORD *)(v23 - 8) )
            {
              v28 = (unsigned int)(3 * v26 + 1) >> 1;
              v29 = 4 * v28 + 8;
              if ( 4 * (int)v26 + 8 >= (unsigned int)v29 || (unsigned int)v26 >= v28 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v41, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v41);
                sub_233E40((__int64)v41);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v36 = (unsigned int)(3 * v26 + 1) >> 1;
              v30 = (unsigned int *)sub_186B300((void *)(v23 - 8), v29);
              v23 = (__int64)(v30 + 2);
              *v30 = v36;
              v27 = &v30[v30[1] + 2];
            }
            else
            {
              v27 = (unsigned int *)(v23 + 4 * v26);
            }
          }
          else
          {
            v32 = (_QWORD *)sub_186B270(0x10u);
            *v32 = 2;
            v27 = (unsigned int *)(v32 + 1);
            v23 = (__int64)v27;
          }
          *v27 = v25;
          v22 = *(_QWORD *)(a2 + 8);
          ++v24;
          ++*(_DWORD *)(v23 - 4);
        }
        while ( v22 );
      }
      v40 = v23;
      sub_969430(a1, &v40, a4, a5);
      if ( *(_QWORD *)(a1 + 8984) != qword_1C7EC80 || *(_BYTE *)(a1 + 2416) )
      {
        i = -1;
        goto LABEL_36;
      }
      sub_96CD80(a1, a2, a3, (int *)&v38);
      if ( (unsigned int)sub_180B130(a1) )
      {
        if ( (unsigned __int8)sub_186A530(*(double *)a4.m128i_i64) )
        {
          sub_186A4C0(*(double *)a4.m128i_i64);
          v31 = v38;
          v33 = sub_180B150(a1, a2);
          sub_969580(a1, v33, a2);
          sub_186A500(a1, v33);
        }
        else
        {
          v31 = v38;
          v34 = sub_180B150(a1, a2);
          sub_969580(a1, v34, a2);
        }
      }
      else
      {
        v31 = v38;
      }
      if ( v31 <= 0xA )
      {
        i = 0;
        goto LABEL_36;
      }
      i = sub_8FD0A0(a1);
      if ( !(unsigned __int8)sub_8F7E90(a1) )
        goto LABEL_36;
      if ( ++v20 >= v31 )
        break;
      if ( v23 )
        sub_186B220((void *)(v23 - 8));
    }
    for ( i = 0; 10 * v31 >= v20; ++v20 )
    {
      i = sub_8FD0A0(a1);
      if ( !(unsigned __int8)sub_8F7E90(a1) )
        break;
    }
LABEL_36:
    if ( v23 )
      sub_186B220((void *)(v23 - 8));
LABEL_38:
    sub_8EAE70(a1);
    result = sub_8EC600(a1, i);
    *(_BYTE *)(a1 + 10320) = v37;
  }
  return result;
}

