__int64 __fastcall sub_7A5550(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int qerrno; // eax

  v6 = *(_QWORD *)(a1 + 560);
  result = sub_7A4180(a1, v6, 0, nullptr, a5, a6);
  if ( *(_QWORD *)(a1 + 64) )
  {
    if ( (_DWORD)result )
      goto LABEL_3;
    result = sub_7A50E0(a1, v6, v8, v9, v10, v11);
  }
  if ( (_DWORD)result )
  {
LABEL_3:
    qerrno = get_qerrno(a1);
    __longjmp_chk(a1 + 360, qerrno);
  }
  return result;
}
