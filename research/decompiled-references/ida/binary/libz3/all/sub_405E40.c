__int64 __fastcall sub_405E40(__int64 a1, _DWORD **a2)
{
  char **exception; // r14
  _DWORD *v3; // rbx
  _DWORD **v4; // r12
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // rbx
  char v8; // al
  __int64 v9; // rdx
  _DWORD *v10; // rdi
  _DWORD *v11; // r13
  unsigned int v12; // eax
  void *v14; // rdi
  _DWORD **v15; // rbx
  unsigned __int64 v16; // r13
  _DWORD *v17; // rbp
  unsigned int v19; // r14d
  size_t v20; // rsi
  unsigned int *v21; // rax
  _DWORD **v22; // [rsp+8h] [rbp-50h] BYREF
  __int64 v23[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *a2;
  if ( *a2 )
    ++*v3;
  v22 = nullptr;
  sub_41E7C0(&v22);
  v4 = v22;
  v5 = *((_DWORD *)v22 - 1);
  v22[v5] = v3;
  v6 = v5 + 1;
  *((_DWORD *)v4 - 1) = v6;
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = v4[v6 - 1];
      if ( v7 )
        ++*v7;
      v7[34] = 0;
      v8 = *((_BYTE *)v7 + 78);
      if ( (v8 & 0x48) == 0 )
        break;
      if ( (v8 & 1) != 0 )
        sub_400AD0((__int64)v7);
      v9 = (unsigned int)(*((_DWORD *)v4 - 1) - 1);
      v10 = v4[v9];
      *((_DWORD *)v4 - 1) = v9;
      if ( v10 )
        sub_41CD50(v10);
      v11 = *((_DWORD **)v7 + 1);
      if ( v11 )
        ++*v11;
      v12 = *((_DWORD *)v4 - 1);
      if ( v12 == *((_DWORD *)v4 - 2) )
      {
        v19 = (3 * v12 + 1) >> 1;
        v20 = 8 * v19 + 8;
        if ( 8 * v12 + 8 >= (unsigned int)v20 || v12 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_3FCFD0(v23, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v23);
          sub_233E40((__int64)v23);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = (unsigned int *)sub_186B300(v4 - 1, v20);
        *v21 = v19;
        v4 = (_DWORD **)(v21 + 2);
        v12 = v21[1];
      }
      v4[v12] = v11;
      *((_DWORD *)v4 - 1) = v12 + 1;
      sub_41CD50(v7);
      v6 = *((_DWORD *)v4 - 1);
      if ( !v6 )
        return sub_186B220(v4 - 1);
    }
    v14 = v7;
    v15 = v4;
    sub_41CD50(v14);
    v16 = (unsigned __int64)&v4[*((unsigned int *)v4 - 1)];
    if ( (unsigned __int64)v4 < v16 )
    {
      do
      {
        v17 = *v15;
        if ( *v15 )
        {
          if ( (*v17)-- == 1 )
          {
            sub_41CB00(v17);
            sub_186B220(v17);
          }
        }
        ++v15;
      }
      while ( (unsigned __int64)v15 < v16 );
    }
  }
  return sub_186B220(v4 - 1);
}

