__int64 __fastcall sub_B40730(__int64 a1)
{
  char **exception; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int *v7; // rdi
  size_t v8; // rdx
  _DWORD *v9; // rax
  int v10; // edx
  __int64 v11; // rax
  __int64 result; // rax
  double v13; // xmm0_8
  _QWORD *v14; // rax
  __int64 v15[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v4 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 40) = 0;
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v6 = *(_QWORD *)(a1 + 80);
  if ( !v6 || *(_DWORD *)(v6 - 4) != 1 )
  {
    v7 = *(unsigned int **)(a1 + 88);
    if ( v7 )
      v8 = 4LL * *(v7 - 1);
    else
      v8 = 0;
    memset(v7, 0, v8);
    v9 = *(_DWORD **)(a1 + 80);
    if ( v9 )
    {
      v10 = *(v9 - 2);
      *(v9 - 1) = 0;
      if ( !v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v15, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v15);
        sub_233E40((__int64)v15);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
    else
    {
      v14 = (_QWORD *)sub_186B270(0x10u);
      *v14 = 2;
      v9 = v14 + 1;
      *(_QWORD *)(a1 + 80) = v9;
    }
    ++*(v9 - 1);
    *v9 = -1;
  }
  v11 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(v11 + 9496) = 0;
  result = *(_QWORD *)(a1 + 16);
  v13 = *(double *)(result + 168);
  if ( v13 < 0.0 )
    *(double *)(result + 168) = v13 + 0.0;
  return result;
}

