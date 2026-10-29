__int64 __fastcall sub_AB8820(_QWORD *a1, unsigned int a2, __int64 *a3, _QWORD *a4)
{
  char **exception; // rbp
  __int64 v5; // rdx
  __int64 v8; // rax
  _QWORD *v9; // r15
  unsigned int v10; // ebp
  void *v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  unsigned int *v17; // r12
  unsigned int *v18; // r15
  __int64 v19; // rax
  _QWORD *v20; // rdx
  unsigned int v21; // r14d
  _QWORD *v22; // rax
  unsigned int *i; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ecx
  size_t v27; // rsi
  unsigned int *v28; // rax
  unsigned int v29; // [rsp+8h] [rbp-80h]
  _QWORD v30[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v31[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v32[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = a1[4];
  v30[0] = 0;
  v31[0] = 1;
  v9 = *(_QWORD **)(v8 + 8LL * a2);
  v30[1] = 0;
  v31[1] = 0;
  v10 = sub_AB6070((__int64)a1, a2, (__int64)v30);
  if ( (_BYTE)v10 )
  {
    v13 = sub_15D1F10(*v9);
    v14 = sub_16746C0(a1 + 10, v30, v13);
    v15 = v14;
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    sub_AB3AA0(*a3, a3[1]);
    v16 = a1[63];
    *a3 = v15;
    v17 = *(unsigned int **)(v16 + 8LL * a2);
    if ( v17 )
    {
      v18 = &v17[*(v17 - 1)];
      if ( v18 != v17 )
      {
        v19 = *v17;
        v20 = (_QWORD *)*a4;
        v21 = *v17;
        if ( *(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + v19) == 0xFF )
          v21 = v19 ^ 1;
        if ( v20 )
          goto LABEL_14;
        v22 = (_QWORD *)sub_186B270(0x10u);
        v20 = v22 + 1;
        *v22 = 2;
        *a4 = v22 + 1;
        for ( i = (unsigned int *)(v22 + 1); ; i = &v28[v28[1] + 2] )
        {
          ++v17;
          *i = v21;
          ++*((_DWORD *)v20 - 1);
          if ( v18 == v17 )
            break;
          while ( 1 )
          {
            v24 = *v17;
            v21 = *v17;
            if ( *(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + v24) == 0xFF )
              v21 = v24 ^ 1;
LABEL_14:
            v25 = *((unsigned int *)v20 - 1);
            if ( (_DWORD)v25 == *((_DWORD *)v20 - 2) )
              break;
            ++v17;
            *((_DWORD *)v20 + v25) = v21;
            ++*((_DWORD *)v20 - 1);
            if ( v18 == v17 )
              goto LABEL_2;
          }
          v26 = (unsigned int)(3 * v25 + 1) >> 1;
          v27 = 4 * v26 + 8;
          if ( 4 * (int)v25 + 8 >= (unsigned int)v27 || (unsigned int)v25 >= v26 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_139F3A(v32, "Overflow encountered when expanding vector", v5);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v32);
            sub_233E40((__int64)v32);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v29 = (unsigned int)(3 * v25 + 1) >> 1;
          v28 = (unsigned int *)sub_186B300(v20 - 1, v27);
          v20 = v28 + 2;
          *a4 = v28 + 2;
          *v28 = v29;
        }
      }
    }
  }
LABEL_2:
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v30);
  sub_182CBA0(v11, v31);
  return v10;
}

