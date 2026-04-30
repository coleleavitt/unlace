__int64 __fastcall sub_55D080(unsigned int *a1)
{
  unsigned int v2; // edi
  unsigned int v3; // edx
  __int64 result; // rax
  unsigned int v5; // ebp
  unsigned int v6; // eax
  __int64 (__fastcall *v7)(unsigned __int8 *, int, int *); // r12
  unsigned __int8 *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // esi
  unsigned __int8 *v14; // rdi
  unsigned int v15; // eax

  v2 = a1[14];
  v3 = a1[42];
  result = v3 + a1[43] - v2;
  if ( !(_DWORD)result )
  {
    a1[44] = 1;
    *a1 = 0;
    return result;
  }
  v5 = v3 + a1[43] - v2;
  v6 = a1[32];
  v7 = sub_55C610;
  v8 = (unsigned __int8 *)(*((_QWORD *)a1 + 13) + v2 - v3);
  if ( v6 )
  {
    v7 = (__int64 (__fastcall *)(unsigned __int8 *, int, int *))sub_55C740;
    if ( v6 != 1 )
    {
      v7 = (__int64 (__fastcall *)(unsigned __int8 *, int, int *))sub_55CFC0;
      if ( v6 != 2 )
        v7 = *((__int64 (__fastcall **)(unsigned __int8 *, int, int *))a1 + 17);
    }
  }
  a1[44] = v7(v8, v5, (int *)a1);
  result = *a1;
  if ( v5 <= 3 )
  {
    if ( (_DWORD)result != -1 )
      return result;
    v9 = a1[14];
    v10 = *((_QWORD *)a1 + 14);
    v11 = *(_QWORD *)(a1 + 15);
    a1[42] = v9;
    v12 = (*((__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *))a1 + 15))(v10, v9, v11, a1 + 43);
    v13 = a1[43];
    *((_QWORD *)a1 + 13) = v12;
    v14 = (unsigned __int8 *)v12;
    if ( !v13 )
    {
      v15 = a1[40];
      *((_QWORD *)a1 + 13) = 0;
      v14 = nullptr;
      a1[41] = v15;
    }
    a1[44] = v7(v14, v13, (int *)a1);
    result = *a1;
  }
  if ( (_DWORD)result == -1 )
    a1[44] = 1;
  return result;
}
