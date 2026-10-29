__int64 __fastcall sub_679960(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 result; // rax
  _QWORD *v11; // rdx
  unsigned int v12; // r12d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  char **exception; // r12
  __int64 v18; // rdx
  __int64 v19[9]; // [rsp+0h] [rbp-48h] BYREF

  *(_QWORD *)a1 = qword_1C691B0;
  v3 = a2[1];
  v4 = *a2;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = v4;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = v4;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = v4;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = a1;
  *(_QWORD *)(a1 + 104) = a1;
  *(_QWORD *)(a1 + 112) = 0;
  v5 = sub_186B270(0xC0u);
  v6 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(v5 + 20) = 0;
  *(_OWORD *)v5 = 0;
  *(_OWORD *)(v5 + 24) = 0;
  *(_OWORD *)(v5 + 48) = 0;
  *(_OWORD *)(v5 + 72) = 0;
  *(_OWORD *)(v5 + 96) = 0;
  *(_OWORD *)(v5 + 120) = 0;
  *(_OWORD *)(v5 + 144) = 0;
  *(_OWORD *)(v5 + 168) = 0;
  v7 = *(_QWORD **)(v6 + 56);
  *(_DWORD *)(v5 + 44) = 0;
  *(_DWORD *)(v5 + 68) = 0;
  *(_DWORD *)(v5 + 92) = 0;
  *(_DWORD *)(v5 + 116) = 0;
  *(_DWORD *)(v5 + 140) = 0;
  *(_DWORD *)(v5 + 164) = 0;
  *(_DWORD *)(v5 + 188) = 0;
  *(_QWORD *)(a1 + 120) = v5;
  *(_QWORD *)(a1 + 128) = 8;
  *(_DWORD *)(a1 + 136) = 0;
  if ( v7 )
  {
    v8 = *((_DWORD *)v7 - 1);
    if ( v8 == *((_DWORD *)v7 - 2) )
    {
      v12 = (3 * v8 + 1) >> 1;
      v13 = 8 * v12 + 8;
      if ( 8 * v8 + 8 >= (unsigned int)v13 || v8 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_107EF6(v19, "Overflow encountered when expanding vector", v18);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v19);
        sub_233E40((__int64)v19);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v7 - 1, v13);
      v15 = v14[1];
      v7 = v14 + 2;
      *(_QWORD *)(v6 + 56) = v14 + 2;
      *v14 = v12;
      LODWORD(v14) = v15;
      v11 = &v7[v15];
      result = (unsigned int)((_DWORD)v14 + 1);
    }
    else
    {
      v9 = v8;
      result = v8 + 1;
      v11 = &v7[v9];
    }
  }
  else
  {
    v16 = (_QWORD *)sub_186B270(0x18u);
    v7 = v16 + 1;
    *v16 = 2;
    result = 1;
    *(_QWORD *)(v6 + 56) = v7;
    v11 = v7;
  }
  *v11 = a1;
  *((_DWORD *)v7 - 1) = result;
  return result;
}

