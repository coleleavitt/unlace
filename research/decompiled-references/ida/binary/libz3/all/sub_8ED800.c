void __fastcall sub_8ED800(_QWORD *a1, __int64 a2)
{
  char **exception; // r12
  unsigned int *v3; // r12
  unsigned int *i; // rbp
  __int64 v6; // rbx
  _DWORD *v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 *v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // r13
  __int64 v14; // rax
  unsigned int v15; // ecx
  size_t v16; // rsi
  unsigned int *v17; // rax
  unsigned int v18; // [rsp+Ch] [rbp-5Ch]
  __int64 v19[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = (unsigned int *)a1[1115];
  if ( v3 )
  {
    for ( i = &v3[*(v3 - 1)]; i != v3; *(_DWORD *)(v14 + 4) = 1 )
    {
      while ( 1 )
      {
        v12 = *v3;
        v13 = a1[13];
        if ( dword_1C7EC64 != *v3 )
          break;
        v6 = *(_QWORD *)(v13 + 856);
        if ( v6 )
          goto LABEL_7;
        v7 = *(_DWORD **)(a2 + 8);
        if ( !v7 )
          goto LABEL_15;
LABEL_9:
        v8 = *(v7 - 1);
        if ( v8 == *(v7 - 2) )
        {
          v15 = (3 * v8 + 1) >> 1;
          v16 = 8 * v15 + 8;
          if ( 8 * v8 + 8 >= (unsigned int)v16 || v8 >= v15 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_8E4EB0(v19, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v19);
            sub_233E40((__int64)v19);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v18 = (3 * v8 + 1) >> 1;
          v17 = (unsigned int *)sub_186B300(v7 - 2, v16);
          v7 = v17 + 2;
          *(_QWORD *)(a2 + 8) = v17 + 2;
          *v17 = v18;
          LODWORD(v17) = v17[1];
          v11 = (__int64 *)&v7[2 * (unsigned int)v17];
          v10 = (_DWORD)v17 + 1;
        }
        else
        {
          v9 = v8;
          v10 = v8 + 1;
          v11 = (__int64 *)&v7[2 * v9];
        }
        ++v3;
        *v11 = v6;
        *(v7 - 1) = v10;
        if ( i == v3 )
          return;
      }
      if ( dword_1C7EC60 == v12 )
      {
        v6 = *(_QWORD *)(v13 + 864);
        if ( v6 )
          goto LABEL_7;
      }
      else
      {
        v6 = *(_QWORD *)(a1[1105] + 8LL * (v12 >> 1));
        if ( (v12 & 1) == 0 )
        {
          if ( !v6 )
            goto LABEL_8;
LABEL_7:
          ++*(_DWORD *)(v6 + 8);
          goto LABEL_8;
        }
        v6 = sub_15E1A70(a1[13]);
        if ( v6 )
          goto LABEL_7;
      }
LABEL_8:
      v7 = *(_DWORD **)(a2 + 8);
      if ( v7 )
        goto LABEL_9;
LABEL_15:
      v14 = sub_186B270(0x18u);
      *(_QWORD *)v14 = 2;
      ++v3;
      *(_QWORD *)(a2 + 8) = v14 + 8;
      *(_QWORD *)(v14 + 8) = v6;
    }
  }
}

