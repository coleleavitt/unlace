__m128i *__fastcall sub_4D18F0(__int64 *a1, std::locale *a2, unsigned int a3, char **a4)
{
  char **exception; // r12
  __int64 v5; // rdx
  __int64 (*v9)(void); // rax
  __m128i *result; // rax
  unsigned int v11; // ebp
  __int32 *v12; // rax
  int v13; // eax
  __int32 *v14; // rdi
  __int32 v15; // r13d
  __int64 v16; // rax
  unsigned int v17; // r8d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int32 v20; // ebp
  __int64 (__fastcall *v21)(__int64); // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  _QWORD *v24; // rax
  unsigned int v25; // [rsp+Ch] [rbp-7Ch]
  __int64 v27; // [rsp+18h] [rbp-70h]
  __int32 *v28; // [rsp+28h] [rbp-60h] BYREF
  __int64 v29[11]; // [rsp+30h] [rbp-58h] BYREF

  v9 = *(__int64 (**)(void))(*a1 + 192);
  if ( (char *)v9 == (char *)sub_4D0080 )
  {
    result = (__m128i *)(a1 + 8);
    v27 = (__int64)(a1 + 8);
  }
  else
  {
    result = (__m128i *)v9();
    v27 = (__int64)result;
  }
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v20 = *((_DWORD *)sub_4D1600(a1, *a4) + 2);
    }
    else
    {
      v28 = nullptr;
      v11 = 0;
      do
      {
        v14 = v28;
        v15 = *((_DWORD *)sub_4D1600(a1, *a4) + 2);
        if ( v28 )
        {
          v16 = (unsigned int)*(v28 - 1);
          if ( (_DWORD)v16 == *(v28 - 2) )
          {
            v17 = (unsigned int)(3 * v16 + 1) >> 1;
            v18 = 4 * v17 + 8;
            if ( 4 * (int)v16 + 8 >= (unsigned int)v18 || (unsigned int)v16 >= v17 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_E08B0(v29, "Overflow encountered when expanding vector", v5);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v29);
              sub_233E40((__int64)v29);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v25 = (unsigned int)(3 * v16 + 1) >> 1;
            v19 = (unsigned int *)sub_186B300(v28 - 2, v18);
            v14 = (__int32 *)(v19 + 2);
            v28 = (__int32 *)(v19 + 2);
            *v19 = v25;
            v12 = (__int32 *)&v19[v19[1] + 2];
          }
          else
          {
            v12 = &v28[v16];
          }
        }
        else
        {
          v24 = (_QWORD *)sub_186B270(0x10u);
          v14 = (__int32 *)(v24 + 1);
          *v24 = 2;
          v28 = (__int32 *)(v24 + 1);
          v12 = (__int32 *)(v24 + 1);
        }
        *v12 = v15;
        ++v11;
        ++a4;
        v13 = *(v14 - 1) + 1;
        *(v14 - 1) = v13;
      }
      while ( v11 < a3 );
      if ( v13 == 1 )
      {
        v20 = *v14;
      }
      else
      {
        v29[0] = 0;
        sub_4C51C0(v27, (__int64)a2, v29);
        v23 = sub_579060(v27);
        v20 = sub_57B970(v23, v29, &v28);
        if ( v29[0] )
          sub_186B220((void *)(v29[0] - 8));
        v14 = v28;
        if ( !v28 )
        {
          v21 = *(__int64 (__fastcall **)(__int64))(*a1 + 192);
          if ( v21 != sub_4D0080 )
            goto LABEL_23;
          goto LABEL_15;
        }
      }
      sub_186B220(v14 - 2);
    }
    v21 = *(__int64 (__fastcall **)(__int64))(*a1 + 192);
    if ( v21 != sub_4D0080 )
    {
LABEL_23:
      v22 = v21((__int64)a1);
      return sub_4C2C80(v22, (__int64)a2, v20);
    }
LABEL_15:
    v22 = (__int64)(a1 + 8);
    return sub_4C2C80(v22, (__int64)a2, v20);
  }
  return result;
}

