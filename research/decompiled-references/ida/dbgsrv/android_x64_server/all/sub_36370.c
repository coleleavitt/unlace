/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36370
// Address: 0x0000000000036370

//----- (0000000000036370) ----------------------------------------------------
__int64 __fastcall sub_36370(int a1, int a2, unsigned __int64 *a3)
{
  int v4; // eax
  unsigned int v5; // ebp
  int chk; // eax
  unsigned int v7; // ebx
  char *v8; // rbx
  _DWORD *v9; // rax
  _DWORD *v10; // r15
  char *endptr; // [rsp+8h] [rbp-470h] BYREF
  char haystack[1024]; // [rsp+10h] [rbp-468h] BYREF
  _BYTE v14[64]; // [rsp+410h] [rbp-68h] BYREF
  unsigned __int64 v15; // [rsp+450h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  sub_364A0((__int64)v14, 64, 64, (__int64)"/proc/%d/task/%d/status", a1, a2);
  v4 = __open_2(v14, 0);
  if ( v4 < 0 )
  {
    return (unsigned int)-1;
  }
  else
  {
    v5 = v4;
    while ( 1 )
    {
      chk = __read_chk(v5, haystack, 1023, 1024);
      if ( chk >= 0 )
        break;
      if ( *(_DWORD *)__errno(v5) != 4 )
        goto LABEL_10;
    }
    haystack[chk] = 0;
    v8 = strstr(haystack, "CapPrm:");
    v9 = (_DWORD *)__errno(haystack);
    v10 = v9;
    if ( v8 )
    {
      *v9 = 0;
      *a3 = strtoull(v8 + 8, &endptr, 16);
      v7 = -(*v10 != 0);
      goto LABEL_11;
    }
    *v9 = 22;
LABEL_10:
    v7 = -1;
LABEL_11:
    close(v5);
  }
  return v7;
}
// 33A10: using guessed type __int64 __fastcall __open_2(_QWORD, _QWORD);
// 33A20: using guessed type __int64 __fastcall __read_chk(_QWORD, _QWORD, _QWORD, _QWORD);
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
