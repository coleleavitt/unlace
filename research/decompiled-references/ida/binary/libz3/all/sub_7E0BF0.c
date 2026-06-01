__int64 __fastcall sub_7E0BF0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  unsigned __int8 (*v3)(void); // rax
  __int64 v4; // rax
  char *v5; // rdx
  int *v6; // rax
  int v7; // eax
  _QWORD *v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rax
  unsigned int v12; // r12d
  unsigned int v13; // ecx
  unsigned int *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 544LL);
  if ( (char *)v3 == (char *)sub_7DFB60 )
  {
    v4 = sub_7E4F00(a1);
    if ( v4 )
    {
      v5 = (char *)(v4 + 88);
      if ( *(int *)(v4 + 88) >> 8 != -1 )
      {
        while ( *(_DWORD *)(a1 + 12) != *v5 )
        {
          v5 = *((char **)v5 + 1);
          if ( !v5 )
            goto LABEL_8;
        }
        if ( *(int *)v5 >> 8 != -1 )
          return 1;
      }
    }
LABEL_8:
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_12;
  }
  else
  {
    if ( v3() )
      return 1;
    if ( *(_WORD *)(a2 + 4) )
    {
LABEL_12:
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 480LL))(*(_QWORD *)(a1 + 80), a2);
      return 1;
    }
  }
  v6 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v6 )
    v7 = *v6;
  else
    v7 = -1;
  if ( *(_DWORD *)(a1 + 12) != v7 )
    goto LABEL_12;
  v9 = *(_QWORD **)(a1 + 64);
  if ( v9 )
  {
    v10 = *((unsigned int *)v9 - 1);
    if ( (_DWORD)v10 == *((_DWORD *)v9 - 2) )
    {
      v12 = (unsigned int)(3 * v10 + 1) >> 1;
      v13 = 16 * v12 + 8;
      if ( 16 * (int)v10 + 8 >= v13 || (unsigned int)v10 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v17, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v17);
        sub_233E40((__int64)v17);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v9 - 1, v13);
      v9 = v14 + 2;
      *v14 = v12;
      v15 = v14[1];
      *(_QWORD *)(a1 + 64) = v9;
      v11 = &v9[2 * v15];
    }
    else
    {
      v11 = &v9[2 * v10];
    }
  }
  else
  {
    v16 = (_QWORD *)sub_186B270(0x28u);
    *v16 = 2;
    v9 = v16 + 1;
    *(_QWORD *)(a1 + 64) = v16 + 1;
    v11 = v16 + 1;
  }
  *v11 = a2;
  *((_DWORD *)v11 + 2) = 0;
  ++*((_DWORD *)v9 - 1);
  return 0;
}

