void __fastcall sub_787030(__int64 *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // r13
  const void *v5; // rdi
  char *v6; // rax
  char *v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // rbx
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  _QWORD *v15; // rsi
  unsigned int v16; // r14d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *a1;
  if ( *a1 )
  {
    v5 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 192) + 88LL))(*(_QWORD *)(v3 + 192));
    if ( v5
      && (v6 = (char *)__dynamic_cast(
                         v5,
                         (const struct __class_type_info *)&`typeinfo for'sat::extension,
                         (const struct __class_type_info *)&`typeinfo for'euf::solver,
                         0)) != nullptr )
    {
      v7 = v6 + 2208;
    }
    else
    {
      v7 = (char *)(v3 + 256);
    }
    v8 = *((_QWORD *)v7 + 1);
    if ( v8 )
    {
      v9 = 0;
      do
      {
        if ( v9 >= *(_DWORD *)(v8 - 4) )
          break;
        v10 = *(_QWORD *)(v8 + 8LL * v9);
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        v11 = *(_QWORD **)(a2 + 8);
        if ( v11 )
        {
          v12 = *((_DWORD *)v11 - 1);
          if ( v12 == *((_DWORD *)v11 - 2) )
          {
            v16 = (3 * v12 + 1) >> 1;
            v17 = 8 * v16 + 8;
            if ( 8 * v12 + 8 >= (unsigned int)v17 || v12 >= v16 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v21, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v21);
              sub_233E40((__int64)v21);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v18 = (unsigned int *)sub_186B300(v11 - 1, v17);
            v19 = v18[1];
            v11 = v18 + 2;
            *v18 = v16;
            *(_QWORD *)(a2 + 8) = v18 + 2;
            LODWORD(v18) = v19;
            v15 = &v11[v19];
            v8 = *((_QWORD *)v7 + 1);
            v14 = (_DWORD)v18 + 1;
          }
          else
          {
            v13 = v12;
            v14 = v12 + 1;
            v15 = &v11[v13];
          }
        }
        else
        {
          v20 = (_QWORD *)sub_186B270(0x18u);
          v11 = v20 + 1;
          *v20 = 2;
          v14 = 1;
          *(_QWORD *)(a2 + 8) = v11;
          v15 = v11;
          v8 = *((_QWORD *)v7 + 1);
        }
        *v15 = v10;
        ++v9;
        *((_DWORD *)v11 - 1) = v14;
      }
      while ( v8 );
    }
  }
}

