/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65CB0
// Address: 0x0000000000065CB0

//----- (0000000000065CB0) ----------------------------------------------------
__int64 __fastcall sub_65CB0(_QWORD *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rcx
  int *v6; // r15
  const char *v7; // rsi
  __int64 v8; // rcx
  int *v9; // rbx
  __int64 v10; // rcx
  __int64 result; // rax
  unsigned int v12; // ebx
  void *ptr[8]; // [rsp+8h] [rbp-40h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  sub_66090((__int64)a1, 2);
  v1 = a1[41];
  v2 = *(unsigned __int16 *)(a1[40] + 2 * v1 - 2);
  if ( v1 )
    a1[41] = v1 - 1;
  *(_DWORD *)(*(_QWORD *)(a1[43] + 8LL * a1[44] - 8) + 24LL) = v2;
  sub_662B0((__int64)ptr, a1 + 20);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  v3 = a1[23];
  while ( *(_DWORD *)(v3 + 24) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1[13] + 64LL) + 8LL * *(int *)(a1[23] + 24LL));
    v4 = sub_75750(v3, v3 + 32);
    v5 = a1[44];
    v6 = *(int **)(a1[43] + 8 * v5 - 8);
    if ( v4 != 0x7FFFFFFF )
    {
      if ( v5 )
        a1[44] = v5 - 1;
      v12 = sub_66D00((__int64)a1, (__int64)v6, 0, 0);
      if ( v6 )
      {
        sub_652B0(v6);
        operator delete(v6);
      }
      return set_qerrno(v12);
    }
    if ( v6[6] > 0 )
    {
      if ( *(_QWORD *)(v3 + 40) )
        v7 = *(const char **)(v3 + 32);
      else
        v7 = s1;
      set_error_string(0, v7);
      v12 = 56;
      return set_qerrno(v12);
    }
  }
  v8 = a1[44];
  v9 = *(int **)(a1[43] + 8 * v8 - 8);
  if ( v8 )
  {
    v10 = v8 - 1;
    a1[44] = v10;
    if ( !v9 )
      goto LABEL_14;
    goto LABEL_13;
  }
  v10 = 0;
  if ( v9 )
  {
LABEL_13:
    sub_652B0(v9);
    operator delete(v9);
    v10 = a1[44];
  }
LABEL_14:
  result = 0;
  if ( v10 )
  {
    if ( !(_BYTE)under_debugger )
      interr(270);
    BUG();
  }
  return result;
}
// 158B40: using guessed type __int64 under_debugger;
