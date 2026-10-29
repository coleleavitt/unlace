void __fastcall sub_DEB840(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  bool v4; // zf
  _QWORD *v5; // rdx
  int v6; // eax
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 *v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *v17; // rcx
  unsigned int v18; // r13d
  unsigned int v19; // ecx
  unsigned int *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  char **exception; // rbx
  __int64 v24[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 16))-- == 1;
    v5 = (_QWORD *)a2[10];
    if ( v4 )
    {
      if ( v5 )
      {
        v14 = *((_DWORD *)v5 - 1);
        if ( v14 == *((_DWORD *)v5 - 2) )
        {
          v18 = (3 * v14 + 1) >> 1;
          v19 = 8 * v18 + 8;
          if ( 8 * v14 + 8 >= v19 || v14 >= v18 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v24, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v24);
            sub_233E40((__int64)v24);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v20 = (unsigned int *)sub_186B300(v5 - 1, v19);
          v21 = v20[1];
          v5 = v20 + 2;
          *v20 = v18;
          a2[10] = (__int64)(v20 + 2);
          LODWORD(v20) = v21;
          v17 = &v5[v21];
          v16 = (_DWORD)v20 + 1;
        }
        else
        {
          v15 = v14;
          v16 = v14 + 1;
          v17 = &v5[v15];
        }
      }
      else
      {
        v22 = (_QWORD *)sub_186B270(0x18u);
        *v22 = 2;
        v16 = 1;
        v5 = v22 + 1;
        a2[10] = (__int64)v5;
        v17 = v5;
      }
      *v17 = v3;
      *((_DWORD *)v5 - 1) = v16;
      goto LABEL_4;
    }
    while ( v5 )
    {
LABEL_4:
      v6 = *((_DWORD *)v5 - 1);
      if ( !v6 )
        break;
      v12 = (unsigned int)(v6 - 1);
      v13 = v5[v12];
      *((_DWORD *)v5 - 1) = v12;
      sub_DE31B0((__int64)a2, v13);
      v5 = (_QWORD *)a2[10];
    }
  }
  v7 = *(__int64 **)(a1 + 16);
  if ( v7 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = *a2;
      v10 = &v7[v8];
      do
      {
        while ( 1 )
        {
          v11 = *v7;
          if ( *v7 )
          {
            v4 = (*(_DWORD *)(v11 + 8))-- == 1;
            if ( v4 )
              break;
          }
          if ( v10 == ++v7 )
            return;
        }
        ++v7;
        sub_15D7BC0(v9, v11);
      }
      while ( v10 != v7 );
    }
  }
}

