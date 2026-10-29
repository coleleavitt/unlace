__int64 __fastcall sub_4CD650(__int64 a1, _QWORD **a2)
{
  _QWORD *v3; // r12
  _QWORD *v4; // r13
  void *i; // rbp
  __int64 v6; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // r15
  unsigned int v18; // eax
  unsigned int v19; // ecx
  size_t v20; // rsi
  unsigned int *v21; // rax
  _QWORD *v22; // rax
  char **exception; // r12
  __int64 v24; // rdx
  unsigned int v25; // [rsp+Ch] [rbp-6Ch]
  __int64 v26; // [rsp+18h] [rbp-60h] BYREF
  __int64 v27[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
  {
    v3 = *(_QWORD **)(a1 + 24);
    if ( !v3 )
      return ((__int64 (__fastcall *)(_QWORD **))(*a2)[9])(a2);
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v4 == v3 )
      return ((__int64 (__fastcall *)(_QWORD **))(*a2)[9])(a2);
    i = nullptr;
    do
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD **))(*(_QWORD *)*v3 + 16LL))(*v3, a2);
      a2 = (_QWORD **)v6;
      if ( i && (void *)v6 != i )
        sub_4D63B0(i);
      ++v3;
      i = a2;
    }
    while ( v4 != v3 );
  }
  else
  {
    v26 = 0;
    for ( i = nullptr; ; i = a2 )
    {
      v12 = sub_647B40(a1 + 8, &v26);
      v13 = v26;
      if ( !v12 )
        break;
      if ( v26 )
        v14 = *(unsigned int *)(v26 - 4);
      else
        v14 = 0;
      v15 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD **, __int64, __int64))(*a2[1] + 104LL))(a2[1], a2, v14, v26);
      v16 = *(_QWORD **)(a1 + 24);
      v17 = v15;
      if ( v16 )
      {
        v18 = *((_DWORD *)v16 - 1);
        if ( v18 == *((_DWORD *)v16 - 2) )
        {
          v19 = (3 * v18 + 1) >> 1;
          v20 = 8 * v19 + 8;
          if ( 8 * v18 + 8 >= (unsigned int)v20 || v18 >= v19 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_DFB18(v27, "Overflow encountered when expanding vector", v24);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v27);
            sub_233E40((__int64)v27);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v25 = (3 * v18 + 1) >> 1;
          v21 = (unsigned int *)sub_186B300(v16 - 1, v20);
          v16 = v21 + 2;
          *(_QWORD *)(a1 + 24) = v21 + 2;
          *v21 = v25;
          LODWORD(v21) = v21[1];
          v10 = &v16[(unsigned int)v21];
          v9 = (_DWORD)v21 + 1;
        }
        else
        {
          v8 = v18;
          v9 = v18 + 1;
          v10 = &v16[v8];
        }
      }
      else
      {
        v22 = (_QWORD *)sub_186B270(0x18u);
        v16 = v22 + 1;
        *v22 = 2;
        v9 = 1;
        *(_QWORD *)(a1 + 24) = v16;
        v10 = v16;
      }
      *v10 = v17;
      *((_DWORD *)v16 - 1) = v9;
      if ( v26 )
        *(_DWORD *)(v26 - 4) = 0;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v17 + 16LL))(v17, a2);
      a2 = (_QWORD **)v11;
      if ( i && i != (void *)v11 )
        sub_4D63B0(i);
    }
    *(_BYTE *)(a1 + 16) = 1;
    if ( v13 )
    {
      sub_186B220((void *)(v13 - 8));
      if ( i )
        return (__int64)i;
      return ((__int64 (__fastcall *)(_QWORD **))(*a2)[9])(a2);
    }
  }
  if ( !i )
    return ((__int64 (__fastcall *)(_QWORD **))(*a2)[9])(a2);
  return (__int64)i;
}

