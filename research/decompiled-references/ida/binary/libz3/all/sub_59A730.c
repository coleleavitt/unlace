__int64 __fastcall sub_59A730(__int64 a1, __int64 *a2, __int64 a3)
{
  char **exception; // r12
  char *v6; // rbp
  unsigned int v7; // ebx
  __int64 v8; // r15
  __int64 i; // rbx
  _QWORD *v10; // rdx
  _QWORD *v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  _QWORD *v15; // rsi
  void (__noreturn *v16)(); // rax
  __int64 v17; // rbx
  __int64 v18; // r9
  unsigned int v20; // r8d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rsi
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // r13
  unsigned int v27; // [rsp+Ch] [rbp-7Ch]
  char *v28; // [rsp+20h] [rbp-68h] BYREF
  _DWORD *v29; // [rsp+28h] [rbp-60h] BYREF
  __int64 v30[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = (char *)*a2;
  if ( *a2 )
  {
    v7 = *((_DWORD *)v6 - 1);
    v6 = nullptr;
    if ( v7 )
    {
      v24 = (_QWORD *)sub_186B270(v7 + 8LL);
      v6 = (char *)(v24 + 1);
      *v24 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v7), 224).m128i_u64[0];
      memset(v24 + 1, 0, v7);
    }
  }
  v28 = v6;
  sub_5971E0(a1, a2, a3, &v28);
  v29 = nullptr;
  if ( *a2 )
  {
    v8 = *(unsigned int *)(*a2 - 4);
    if ( (_DWORD)v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        while ( !v6[i] )
        {
          if ( ++i == v8 )
            goto LABEL_13;
        }
        v10 = v29;
        v11 = (_QWORD *)(*a2 + 8 * i);
        if ( v29 )
        {
          v12 = *(v29 - 1);
          if ( v12 == *(v29 - 2) )
          {
            v20 = (3 * v12 + 1) >> 1;
            v21 = 8 * v20 + 8;
            if ( 8 * v12 + 8 >= (unsigned int)v21 || v12 >= v20 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v30, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v30);
              sub_233E40((__int64)v30);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v27 = (3 * v12 + 1) >> 1;
            v22 = (unsigned int *)sub_186B300(v29 - 2, v21);
            v23 = v22[1];
            v10 = v22 + 2;
            v29 = v22 + 2;
            *v22 = v27;
            LODWORD(v22) = v23;
            v15 = &v10[v23];
            v14 = (_DWORD)v22 + 1;
          }
          else
          {
            v13 = v12;
            v14 = v12 + 1;
            v15 = &v29[2 * v13];
          }
        }
        else
        {
          v25 = (_QWORD *)sub_186B270(0x18u);
          v10 = v25 + 1;
          *v25 = 2;
          v14 = 1;
          v29 = v10;
          v15 = v10;
        }
        *v15 = *v11;
        *((_DWORD *)v10 - 1) = v14;
      }
    }
  }
LABEL_13:
  v16 = *(void (__noreturn **)())(*(_QWORD *)a3 + 40LL);
  if ( v16 == sub_595E60 )
  {
    sub_1872CE0("");
    sub_1873130(114, 228);
  }
  v26 = ((__int64 (__fastcall *)(__int64, _DWORD **))v16)(a3, &v29);
  v17 = sub_186B270(0x48u);
  sub_59A080(v17, a1, a2, v6, v26, v18);
  if ( v29 )
    sub_186B220(v29 - 2);
  if ( v6 )
    sub_186B220(v6 - 8);
  return v17;
}

