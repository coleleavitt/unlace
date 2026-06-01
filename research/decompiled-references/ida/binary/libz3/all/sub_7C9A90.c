__int64 __fastcall sub_7C9A90(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // rbp
  char **exception; // rbp
  __int64 *v5; // r8
  __int64 *v6; // rbp
  __int64 *v10; // r14
  _DWORD *v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // r15
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // rdi
  int v19; // eax
  _DWORD *v20; // rax
  unsigned int v21; // ecx
  size_t v22; // rsi
  unsigned int *v23; // rax
  unsigned int v24; // ecx
  _QWORD *v26; // rax
  unsigned int v27; // [rsp+Ch] [rbp-7Ch]
  __m128i v28; // [rsp+20h] [rbp-68h] BYREF
  __int64 v29[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = *(__int64 **)(a1 + 744);
  if ( !v5 )
    return 1;
  v6 = &v5[*((unsigned int *)v5 - 1)];
  if ( v6 != v5 )
  {
    v10 = *(__int64 **)(a1 + 744);
    while ( 1 )
    {
      v18 = *v10;
      v19 = *(_DWORD *)(*v10 + 8);
      if ( !v19 )
        break;
      if ( v19 == 1 )
      {
        v11 = (_DWORD *)sub_81AF20(v18);
        sub_7C9370(&v28, a1, a2, v11);
        v12 = *(_QWORD **)(a3 + 8);
        v13 = v28.m128i_i64[0];
        if ( v12 )
        {
          v14 = *((_DWORD *)v12 - 1);
          if ( v14 != *((_DWORD *)v12 - 2) )
            goto LABEL_7;
          v24 = (3 * v14 + 1) >> 1;
          v22 = 8 * v24 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v22 || v14 >= v24 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v29, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v29);
            sub_233E40((__int64)v29);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_15:
          v27 = (3 * v14 + 1) >> 1;
          v23 = (unsigned int *)sub_186B300(v12 - 1, v22);
          v12 = v23 + 2;
          *(_QWORD *)(a3 + 8) = v23 + 2;
          *v23 = v27;
          LODWORD(v23) = v23[1];
          v17 = &v12[(unsigned int)v23];
          v16 = (_DWORD)v23 + 1;
          goto LABEL_8;
        }
LABEL_20:
        v26 = (_QWORD *)sub_186B270(0x18u);
        v12 = v26 + 1;
        *v26 = 2;
        v16 = 1;
        *(_QWORD *)(a3 + 8) = v12;
        v17 = v12;
        goto LABEL_8;
      }
LABEL_9:
      if ( v6 == ++v10 )
        return 1;
    }
    v20 = (_DWORD *)sub_828140(v18);
    sub_7C6EE0(&v28, a1, a2, v20);
    v12 = *(_QWORD **)(a3 + 8);
    v13 = v28.m128i_i64[0];
    if ( v12 )
    {
      v14 = *((_DWORD *)v12 - 1);
      if ( v14 == *((_DWORD *)v12 - 2) )
      {
        v21 = (3 * v14 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v14 + 8 >= (unsigned int)v22 || v14 >= v21 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v29, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v29);
          sub_233E40((__int64)v29);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        goto LABEL_15;
      }
LABEL_7:
      v15 = v14;
      v16 = v14 + 1;
      v17 = &v12[v15];
LABEL_8:
      *v17 = v13;
      *((_DWORD *)v12 - 1) = v16;
      goto LABEL_9;
    }
    goto LABEL_20;
  }
  return 1;
}

