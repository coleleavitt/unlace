__int64 __fastcall sub_4CD390(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  _QWORD *v4; // r13
  void *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r12
  char i; // al
  __int64 v9; // rsi
  int v10; // eax
  __int64 *v11; // rsi
  __int64 v12; // rax
  unsigned int *v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // r14
  unsigned int v18; // eax
  unsigned int v19; // r8d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rsi
  _QWORD *v24; // rax
  char **exception; // r12
  __int64 v26; // rdx
  unsigned int v27; // [rsp+Ch] [rbp-6Ch]
  unsigned int *v28; // [rsp+18h] [rbp-60h] BYREF
  __int64 v29[11]; // [rsp+20h] [rbp-58h] BYREF

  v2 = a2;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v3 = *(_QWORD **)(a1 + 24);
    if ( !v3 )
      return (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 72LL))(v2);
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v4 == v3 )
      return (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 72LL))(v2);
    v5 = nullptr;
    do
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v3 + 16LL))(*v3, v2);
      v2 = (_QWORD *)v6;
      if ( v5 && (void *)v6 != v5 )
        sub_4D63E0(v5);
      ++v3;
      v5 = v2;
    }
    while ( v4 != v3 );
    if ( !v2 )
      return (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 72LL))(v2);
  }
  else
  {
    v7 = (__int64)a2;
    v5 = nullptr;
    v28 = nullptr;
    for ( i = sub_647B40(a1 + 8, &v28); ; i = sub_647B40(a1 + 8, &v28) )
    {
      v13 = v28;
      if ( !i )
        break;
      if ( v28 )
        v14 = *(v28 - 1);
      else
        v14 = 0;
      v15 = sub_4C5590(*(_QWORD *)(v2[1] + 24LL), v7, v14, v28);
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
            sub_DFB18(v29, "Overflow encountered when expanding vector", v26);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v29);
            sub_233E40((__int64)v29);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v27 = (3 * v18 + 1) >> 1;
          v21 = (unsigned int *)sub_186B300(v16 - 1, v20);
          v22 = v21[1];
          v16 = v21 + 2;
          *(_QWORD *)(a1 + 24) = v21 + 2;
          *v21 = v27;
          LODWORD(v21) = v22;
          v11 = &v16[v22];
          v10 = (_DWORD)v21 + 1;
        }
        else
        {
          v9 = v18;
          v10 = v18 + 1;
          v11 = &v16[v9];
        }
      }
      else
      {
        v24 = (_QWORD *)sub_186B270(0x18u);
        v16 = v24 + 1;
        *v24 = 2;
        v10 = 1;
        *(_QWORD *)(a1 + 24) = v16;
        v11 = v16;
      }
      *v11 = v17;
      *((_DWORD *)v16 - 1) = v10;
      if ( v28 )
        *(v28 - 1) = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 16LL))(v17, v7);
      v7 = v12;
      if ( v5 && v5 != (void *)v12 )
        sub_4D63E0(v5);
      v5 = (void *)v7;
    }
    *(_BYTE *)(a1 + 16) = 1;
    if ( v13 )
      sub_186B220(v13 - 2);
    v2 = (_QWORD *)v7;
    if ( !v5 )
      return (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 72LL))(v2);
  }
  return (__int64)v5;
}

