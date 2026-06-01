void __fastcall sub_BD2D60(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdx
  __int64 v4; // r12
  unsigned int v5; // r13d
  size_t v6; // rsi
  unsigned int *v7; // rax
  unsigned int v8; // ecx
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  _OWORD *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rax
  char **exception; // rbx
  __int64 v16; // rdx
  __int64 v17[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a2;
  v3 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (unsigned int)v4 >= a2 )
    {
      *((_DWORD *)v3 - 1) = a2;
      return;
    }
  }
  else
  {
    if ( !a2 )
      return;
    v4 = 0;
    v14 = (_QWORD *)sub_186B270(0x38u);
    v3 = v14 + 1;
    *v14 = 2;
    *a1 = v14 + 1;
  }
  while ( 1 )
  {
    v8 = *((_DWORD *)v3 - 2);
    if ( v8 >= (unsigned int)v2 )
      break;
    v5 = (3 * v8 + 1) >> 1;
    v6 = 8 * (v5 + ((3 * v8 + 1) & 0xFFFFFFFE)) + 8;
    if ( 24 * v8 + 8 >= (unsigned int)v6 || v8 >= v5 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_154526(v17, "Overflow encountered when expanding vector", v16);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v17);
      sub_233E40((__int64)v17);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v7 = (unsigned int *)sub_186B300(v3 - 1, v6);
    v3 = v7 + 2;
    *v7 = v5;
    *a1 = v7 + 2;
  }
  *((_DWORD *)v3 - 1) = v2;
  v9 = &v3[3 * v4];
  v10 = &v3[3 * v2];
  if ( 24 * v4 != 24 * v2 )
  {
    v11 = v9;
    v12 = (0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)(v10 - 3) - (char *)v9) >> 3)) & 0x1FFFFFFFFFFFFFFFLL;
    v13 = v12 + 1;
    if ( !v12 )
    {
LABEL_13:
      v9[2] = 0;
      *(_OWORD *)v9 = 0;
      return;
    }
    do
    {
      *v11 = 0;
      v11 += 3;
      *(v11 - 2) = 0;
      *(v11 - 1) = 0;
    }
    while ( &v9[6 * (v13 >> 1)] != (_QWORD *)v11 );
    if ( (v13 & 1) != 0 )
    {
      v9 += 3 * (v13 & 0xFFFFFFFFFFFFFFFELL);
      goto LABEL_13;
    }
  }
}

