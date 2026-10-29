__int64 __fastcall sub_8A0120(__int64 a1)
{
  __int64 v1; // r12
  char v2; // r13
  __int64 v3; // rax
  _QWORD *v4; // rdx
  __int64 v5; // rbp
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 *v9; // rcx
  __int64 result; // rax
  unsigned int v11; // r13d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  char **exception; // rbx
  __int64 v17; // rdx
  __int64 v18[9]; // [rsp+0h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_BYTE *)(a1 + 576);
  v3 = sub_180C100(v1 + 8400, 24);
  v4 = *(_QWORD **)(v1 + 9456);
  v5 = v3;
  *(_QWORD *)v3 = off_1C54EE8;
  *(_QWORD *)(v3 + 8) = a1 + 576;
  *(_BYTE *)(v3 + 16) = v2;
  if ( v4 )
  {
    v6 = *((_DWORD *)v4 - 1);
    if ( v6 == *((_DWORD *)v4 - 2) )
    {
      v11 = (3 * v6 + 1) >> 1;
      v12 = 8 * v11 + 8;
      if ( 8 * v6 + 8 >= (unsigned int)v12 || v6 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v18, "Overflow encountered when expanding vector", v17);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v18);
        sub_233E40((__int64)v18);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v4 - 1, v12);
      v14 = v13[1];
      v4 = v13 + 2;
      *(_QWORD *)(v1 + 9456) = v13 + 2;
      *v13 = v11;
      LODWORD(v13) = v14;
      v9 = &v4[v14];
      v8 = (_DWORD)v13 + 1;
    }
    else
    {
      v7 = v6;
      v8 = v6 + 1;
      v9 = &v4[v7];
    }
  }
  else
  {
    v15 = (_QWORD *)sub_186B270(0x18u);
    v4 = v15 + 1;
    *v15 = 2;
    v8 = 1;
    *(_QWORD *)(v1 + 9456) = v4;
    v9 = v4;
  }
  *v9 = v5;
  *((_DWORD *)v4 - 1) = v8;
  result = *(_QWORD *)(a1 + 96);
  ++*(_DWORD *)(a1 + 184);
  *(_BYTE *)(a1 + 576) = 0;
  if ( *(_BYTE *)(result + 308) )
    *(double *)(a1 + 720) = *(double *)(a1 + 720) * *(double *)(result + 320) + 1.0 - *(double *)(result + 320);
  return result;
}

