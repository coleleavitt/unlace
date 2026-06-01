unsigned __int64 __fastcall sub_9DFCA0(unsigned __int64 **a1, unsigned __int8 a2, __int64 a3, _QWORD *a4, char a5)
{
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 *v14; // rdi
  _QWORD *v15; // r13
  unsigned __int64 v16; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v18; // rcx

  v9 = sub_9DF520((__int64)a1, *(_QWORD *)(a3 + 16), a4, (__int64)a4);
  v11 = sub_9DF520((__int64)a1, *(_QWORD *)(a3 + 24), a4, v10);
  v14 = *a1;
  v15 = v11;
  v16 = **a1;
  (*a1)[10] += 32LL;
  result = (v16 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v18 = result + 32;
  if ( a5 )
  {
    if ( v14[1] >= v18 && v16 )
      *v14 = v18;
    else
      result = sub_986170((__int64)v14, 32, 32, 4, v12, v13);
    *(_QWORD *)(result + 16) = v15;
    *(_WORD *)result = 20;
    *(_DWORD *)(result + 4) = 0;
    *(_QWORD *)(result + 8) = 0;
    *(_QWORD *)(result + 24) = v9;
    *(_WORD *)(result + 2) = a2;
  }
  else
  {
    if ( v14[1] >= v18 && v16 )
      *v14 = v18;
    else
      result = sub_986170((__int64)v14, 32, 32, 4, v12, v13);
    *(_QWORD *)(result + 16) = v9;
    *(_WORD *)result = 20;
    *(_DWORD *)(result + 4) = 0;
    *(_QWORD *)(result + 8) = 0;
    *(_QWORD *)(result + 24) = v15;
    *(_WORD *)(result + 2) = a2;
  }
  return result;
}
