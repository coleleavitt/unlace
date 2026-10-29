__int64 __fastcall sub_983DC0(__int64 a1, unsigned int a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // esi
  int v9; // ecx
  _QWORD *v11; // rdi
  __int64 v12; // rax
  _DWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rax
  _DWORD *v16; // rax
  unsigned int v17; // r12d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  unsigned int v21; // r12d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = a2 >> 1;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(v6 + 8872) + 16 * v5;
  v8 = *(_BYTE *)(v7 + 11) & 1;
  if ( (*(_BYTE *)(v7 + 11) & 1) == 0 )
  {
    v9 = *(_DWORD *)(v7 + 8);
    if ( *(_DWORD *)(v6 + 9468) < (v9 & 0xFFFFFFu) )
    {
      if ( (*(_DWORD *)(a1 + 352) & (1 << v9)) == 0 )
        return v8;
      *(_BYTE *)(v7 + 11) |= 1u;
      v11 = *(_QWORD **)(a1 + 336);
      if ( v11 )
      {
        v12 = *((unsigned int *)v11 - 1);
        if ( (_DWORD)v12 == *((_DWORD *)v11 - 2) )
        {
          v17 = (unsigned int)(3 * v12 + 1) >> 1;
          v18 = 4 * v17 + 8;
          if ( 4 * (int)v12 + 8 >= (unsigned int)v18 || (unsigned int)v12 >= v17 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v27, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v27);
            sub_233E40((__int64)v27);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v19 = (unsigned int *)sub_186B300(v11 - 1, v18);
          v11 = v19 + 2;
          *v19 = v17;
          v20 = v19[1];
          *(_QWORD *)(a1 + 336) = v11;
          v13 = (_DWORD *)v11 + v20;
        }
        else
        {
          v13 = (_DWORD *)v11 + v12;
        }
      }
      else
      {
        v25 = (_QWORD *)sub_186B270(0x10u);
        v11 = v25 + 1;
        *v25 = 2;
        *(_QWORD *)(a1 + 336) = v25 + 1;
        v13 = v25 + 1;
      }
      *v13 = v5;
      ++*((_DWORD *)v11 - 1);
      v14 = *(_QWORD **)(a1 + 344);
      if ( v14 )
      {
        v15 = *((unsigned int *)v14 - 1);
        if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
        {
          v21 = (unsigned int)(3 * v15 + 1) >> 1;
          v22 = 4 * v21 + 8;
          if ( 4 * (int)v15 + 8 >= (unsigned int)v22 || (unsigned int)v15 >= v21 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v27, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v27);
            sub_233E40((__int64)v27);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v23 = (unsigned int *)sub_186B300(v14 - 1, v22);
          v14 = v23 + 2;
          *v23 = v21;
          v24 = v23[1];
          *(_QWORD *)(a1 + 344) = v14;
          v16 = (_DWORD *)v14 + v24;
        }
        else
        {
          v16 = (_DWORD *)v14 + v15;
        }
      }
      else
      {
        v26 = (_QWORD *)sub_186B270(0x10u);
        v14 = v26 + 1;
        *v26 = 2;
        *(_QWORD *)(a1 + 344) = v26 + 1;
        v16 = v26 + 1;
      }
      *v16 = v5;
      ++*((_DWORD *)v14 - 1);
    }
  }
  return 1;
}

