/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_658A0
// Address: 0x00000000000658A0

//----- (00000000000658A0) ----------------------------------------------------
__int64 __fastcall sub_658A0(_QWORD *a1, const char *a2)
{
  char **v3; // r14
  __int64 v4; // rax
  size_t v5; // r15
  __int64 v6; // rbx
  char *v7; // rdi
  __int64 v8; // rax
  int *v9; // rbx
  unsigned int v10; // ebp
  __int64 result; // rax

  v3 = (char **)(a1 + 5);
  sub_3BBA0((__int64)(a1 + 5), "%s.%s", a2, a2);
  sub_65070((__int64)a1);
  sub_656E0((__int64)a1);
  v4 = __strlen_chk("this", 5);
  if ( v4 )
  {
    v5 = v4;
    v6 = v4 + 1;
    if ( a1[7] >= (unsigned __int64)(v4 + 1) )
    {
      v7 = *v3;
    }
    else
    {
      v7 = (char *)qvector_reserve((__int64)v3, *v3, v4 + 1, 1u);
      *v3 = v7;
    }
    a1[6] = v6;
    memmove(v7, "this", v5);
    *(_BYTE *)(a1[5] + v5) = 0;
  }
  else
  {
    a1[6] = 0;
  }
  sub_65070((__int64)a1);
  v8 = a1[44];
  v9 = *(int **)(a1[43] + 8 * v8 - 8);
  if ( v8 )
    a1[44] = v8 - 1;
  v10 = sub_66D00((__int64)a1, (__int64)v9, 0, 0);
  if ( v9 )
  {
    sub_652B0(v9);
    operator delete(v9);
  }
  result = set_qerrno(v10);
  if ( !(_DWORD)result )
    return sub_659C0((__int64)a1);
  return result;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
