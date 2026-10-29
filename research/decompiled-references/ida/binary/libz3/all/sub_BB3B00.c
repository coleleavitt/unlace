__int64 __fastcall sub_BB3B00(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  unsigned int *v5; // r15
  unsigned int *v6; // r12
  unsigned int *v7; // rbp
  unsigned int *v9; // rax
  unsigned int *v10; // r13
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 result; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  unsigned int v18; // r8d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // [rsp+Ch] [rbp-5Ch]
  __int64 v23[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = a2;
  v6 = nullptr;
  v7 = a2;
LABEL_13:
  v11 = (_QWORD *)*a3;
  v10 = v6;
  if ( !*a3 )
  {
LABEL_14:
    v17 = (_QWORD *)sub_186B270(0x38u);
    v11 = v17 + 1;
    *v17 = 2;
    result = 1;
    *a3 = v11;
    v15 = v11;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v12 = *((_DWORD *)v11 - 1);
    if ( v12 == *((_DWORD *)v11 - 2) )
    {
      v18 = (3 * v12 + 1) >> 1;
      v19 = 8 * (v18 + ((3 * v12 + 1) & 0xFFFFFFFE)) + 8;
      if ( 24 * v12 + 8 >= (unsigned int)v19 || v12 >= v18 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v23, "Overflow encountered when expanding vector", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v23);
        sub_233E40((__int64)v23);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v22 = (3 * v12 + 1) >> 1;
      v20 = (unsigned int *)sub_186B300(v11 - 1, v19);
      v21 = v20[1];
      v11 = v20 + 2;
      *v20 = v22;
      LODWORD(v20) = v21;
      *a3 = v11;
      v15 = &v11[3 * v21];
      result = (unsigned int)((_DWORD)v20 + 1);
    }
    else
    {
      v13 = v12;
      result = v12 + 1;
      v15 = &v11[3 * v13];
    }
LABEL_8:
    *v15 = v7;
    v15[1] = v5;
    v15[2] = v6;
    *((_DWORD *)v11 - 1) = result;
    v16 = *(_QWORD *)(a1 + 16);
    if ( !v16 )
      return result;
    result = *v5;
    if ( (unsigned int)result >= *(_DWORD *)(v16 - 4) )
      return result;
    result = v16 + 24 * result;
    v5 = *(unsigned int **)(result + 8);
    if ( !v5 )
      return result;
    v7 = *(unsigned int **)result;
    v6 = *(unsigned int **)(result + 16);
    if ( !v10 )
      goto LABEL_13;
    if ( v6 && v6 != v10 )
    {
      v9 = (unsigned int *)sub_180C100(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), 24);
      *v10 = (*v10 + 1) & 0x3FFFFFFF | *v10 & 0xC0000000;
      *v6 = (*v6 + 1) & 0x3FFFFFFF | *v6 & 0xC0000000;
      *(_QWORD *)v9 = 0;
      *((_QWORD *)v9 + 2) = v6;
      *((_QWORD *)v9 + 1) = v10;
      v10 = v9;
    }
    v11 = (_QWORD *)*a3;
    if ( !*a3 )
      goto LABEL_14;
  }
}

