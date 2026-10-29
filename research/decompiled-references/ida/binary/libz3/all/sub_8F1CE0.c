__int64 __fastcall sub_8F1CE0(__int64 a1, unsigned int a2, char a3)
{
  char **exception; // rbx
  __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r13
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 *v13; // rcx
  unsigned int v14; // r12d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = 16LL * a2;
  result = v5 + *(_QWORD *)(a1 + 8872);
  if ( (*(_DWORD *)(result + 12) & 0x7FFFFFu) < *(_DWORD *)(a1 + 9464) )
  {
    v7 = sub_180C100(a1 + 8400, 24);
    v8 = *(_QWORD **)(a1 + 9456);
    v9 = v7;
    *(_QWORD *)v7 = off_1C55B40;
    *(_QWORD *)(v7 + 8) = a1;
    *(_DWORD *)(v7 + 16) = a2;
    if ( v8 )
    {
      v10 = *((_DWORD *)v8 - 1);
      if ( v10 == *((_DWORD *)v8 - 2) )
      {
        v14 = (3 * v10 + 1) >> 1;
        v15 = 8 * v14 + 8;
        if ( 8 * v10 + 8 >= (unsigned int)v15 || v10 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_8E4EB0(v19, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v19);
          sub_233E40((__int64)v19);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(v8 - 1, v15);
        v17 = v16[1];
        v8 = v16 + 2;
        *v16 = v14;
        *(_QWORD *)(a1 + 9456) = v16 + 2;
        LODWORD(v16) = v17;
        v13 = &v8[v17];
        v12 = (_DWORD)v16 + 1;
      }
      else
      {
        v11 = v10;
        v12 = v10 + 1;
        v13 = &v8[v11];
      }
    }
    else
    {
      v18 = (_QWORD *)sub_186B270(0x18u);
      v8 = v18 + 1;
      *v18 = 2;
      v12 = 1;
      *(_QWORD *)(a1 + 9456) = v8;
      v13 = v8;
    }
    *v13 = v9;
    *((_DWORD *)v8 - 1) = v12;
    result = v5 + *(_QWORD *)(a1 + 8872);
  }
  *(_BYTE *)(result + 14) |= 0x80u;
  *(_BYTE *)(result + 15) = a3;
  return result;
}

