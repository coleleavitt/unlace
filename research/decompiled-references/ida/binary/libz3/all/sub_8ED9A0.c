void __fastcall sub_8ED9A0(__int64 a1, __int64 a2)
{
  char **exception; // r12
  unsigned int v3; // r12d
  __int64 i; // r14
  __int64 v6; // rbp
  _QWORD *v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 *v11; // rcx
  __int64 v12; // r13
  unsigned int v13; // eax
  _QWORD *v14; // rax
  unsigned int v15; // ecx
  size_t v16; // rsi
  unsigned int *v17; // rax
  unsigned int v18; // [rsp+Ch] [rbp-5Ch]
  __int64 v19[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(_DWORD *)(a1 + 9472);
  if ( v3 < *(_DWORD *)(a1 + 9464) )
  {
    for ( i = 20LL * v3; ; i += 20 )
    {
      v12 = *(_QWORD *)(a1 + 104);
      v13 = *(_DWORD *)(*(_QWORD *)(a1 + 8920) + 4LL * *(unsigned int *)(*(_QWORD *)(a1 + 9480) + i));
      if ( dword_1C7EC64 != v13 )
        break;
      v6 = *(_QWORD *)(v12 + 856);
      if ( v6 )
        goto LABEL_6;
      v7 = *(_QWORD **)(a2 + 8);
      if ( v7 )
      {
LABEL_8:
        v8 = *((_DWORD *)v7 - 1);
        if ( v8 == *((_DWORD *)v7 - 2) )
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
          v17 = (unsigned int *)sub_186B300(v7 - 1, v16);
          v7 = v17 + 2;
          *(_QWORD *)(a2 + 8) = v17 + 2;
          *v17 = v18;
          LODWORD(v17) = v17[1];
          v11 = &v7[(unsigned int)v17];
          v10 = (_DWORD)v17 + 1;
        }
        else
        {
          v9 = v8;
          v10 = v8 + 1;
          v11 = &v7[v9];
        }
        goto LABEL_10;
      }
LABEL_14:
      v14 = (_QWORD *)sub_186B270(0x18u);
      v7 = v14 + 1;
      *v14 = 2;
      v10 = 1;
      *(_QWORD *)(a2 + 8) = v7;
      v11 = v7;
LABEL_10:
      *v11 = v6;
      ++v3;
      *((_DWORD *)v7 - 1) = v10;
      if ( v3 >= *(_DWORD *)(a1 + 9464) )
        return;
    }
    if ( dword_1C7EC60 == v13 )
    {
      v6 = *(_QWORD *)(v12 + 864);
      if ( !v6 )
        goto LABEL_7;
    }
    else
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (v13 >> 1));
      if ( (v13 & 1) == 0 )
      {
        if ( !v6 )
          goto LABEL_7;
        goto LABEL_6;
      }
      v6 = sub_15E1A70(*(_QWORD *)(a1 + 104));
      if ( !v6 )
      {
LABEL_7:
        v7 = *(_QWORD **)(a2 + 8);
        if ( v7 )
          goto LABEL_8;
        goto LABEL_14;
      }
    }
LABEL_6:
    ++*(_DWORD *)(v6 + 8);
    goto LABEL_7;
  }
}

