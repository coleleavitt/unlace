__int64 __fastcall sub_3BF620(__int64 *a1, unsigned int **a2)
{
  _OWORD *v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned int i; // r12d
  __int64 result; // rax
  __int64 *v8; // r12
  unsigned int *v9; // rdx
  __int64 *v10; // r14
  _QWORD *v11; // rax
  unsigned int *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // r13d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rcx
  char **exception; // r12
  __int64 v21[4]; // [rsp+0h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-58h] BYREF
  int v23; // [rsp+30h] [rbp-48h]
  __int128 v24; // [rsp+38h] [rbp-40h]

  v3 = (_OWORD *)sub_186B270(0x40u);
  v4 = *a1;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  ptr[0] = v3;
  ptr[1] = &byte_8;
  v23 = 0;
  v24 = 0;
  sub_157E9E0((int)ptr, v4);
  v5 = a1[3];
  for ( i = 0; v5; ++i )
  {
    if ( i >= *(_DWORD *)(v5 - 4) )
      break;
    sub_157E920(ptr, *(_QWORD *)(v5 + 8LL * i));
    v5 = a1[3];
  }
  result = sub_157E920(ptr, a1[4]);
  v8 = (__int64 *)v24;
  if ( (_QWORD)v24 )
  {
    result = *(unsigned int *)(v24 - 4);
    if ( (_DWORD)result )
    {
      v9 = *a2;
      v10 = (__int64 *)(v24 + 8 * result);
      if ( *a2 )
        goto LABEL_10;
      v11 = (_QWORD *)sub_186B270(0x18u);
      v9 = (unsigned int *)(v11 + 1);
      *v11 = 2;
      result = 1;
      *a2 = v9;
      v12 = v9;
      while ( 1 )
      {
        v14 = *v8++;
        *(_QWORD *)v12 = v14;
        *(v9 - 1) = result;
        if ( v10 == v8 )
          break;
LABEL_10:
        v15 = *(v9 - 1);
        if ( v15 == *(v9 - 2) )
        {
          v16 = (3 * v15 + 1) >> 1;
          v17 = 8 * v16 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_3BCB70(v21, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v21);
            sub_233E40((__int64)v21);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v18 = (unsigned int *)sub_186B300(v9 - 2, v17);
          v19 = v18[1];
          v9 = v18 + 2;
          *v18 = v16;
          *a2 = v18 + 2;
          v12 = &v18[2 * v19 + 2];
          result = (unsigned int)(v19 + 1);
        }
        else
        {
          v13 = v15;
          result = v15 + 1;
          v12 = &v9[2 * v13];
        }
      }
    }
  }
  if ( *((_QWORD *)&v24 + 1) )
    result = sub_186B220((void *)(*((_QWORD *)&v24 + 1) - 8LL));
  if ( (_QWORD)v24 )
    result = sub_186B220((void *)(v24 - 8));
  if ( ptr[0] )
    return sub_186B220(ptr[0]);
  return result;
}

