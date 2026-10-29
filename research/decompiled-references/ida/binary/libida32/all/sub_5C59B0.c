__int64 __fastcall sub_5C59B0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v4; // rdi
  __int64 v6; // rdi
  _DWORD vars0[6]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  v1 = a1[52];
  v2 = a1[51];
  vars18 = __readfsqword(0x28u);
  vars0[0] = 0;
  copy_argloc(vars0, v2 + 16 * v1 - 16);
  v4 = a1[52];
  if ( v4 )
  {
    v6 = v4 - 1;
    a1[52] = v6;
    cleanup_argloc(a1[51] + 16 * v6);
  }
  copy_argloc(a1[13] + 112LL, vars0);
  cleanup_argloc(vars0);
  return 0;
}

