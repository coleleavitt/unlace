__int64 __fastcall sub_D55030(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v4; // rax
  void *v5; // r14
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  _QWORD v11[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v12[9]; // [rsp+10h] [rbp-48h] BYREF

  v11[0] = 0;
  v11[1] = 0;
  v12[0] = 1;
  v12[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v12);
  BYTE4(v12[0]) &= ~1u;
  LODWORD(v12[0]) = 1;
  v4 = sub_1674520(a1 + 232, v11, a2);
  v5 = qword_1C7F2C0;
  v6 = v4;
  sub_182CBA0(qword_1C7F2C0, v11);
  result = sub_182CBA0(v5, v12);
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v8 = *a3;
  if ( *a3 )
  {
    v9 = a3[1];
    if ( (*(_DWORD *)(v8 + 8))-- == 1 )
      result = sub_15D7BC0(v9, v8);
  }
  *a3 = v6;
  return result;
}

