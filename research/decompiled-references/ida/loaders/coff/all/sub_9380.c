const char *__fastcall sub_9380(__int64 a1, int a2, _WORD *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  const char *result; // rax
  int v8; // r14d
  unsigned __int64 v9; // rax
  _WORD v10[12]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 8);
  v11 = __readfsqword(0x28u);
  v6 = qlread(v4, v10, 20);
  result = nullptr;
  if ( v6 == 20 )
  {
    v8 = *(_DWORD *)(a1 + 24);
    v9 = qlsize(*(_QWORD *)(a1 + 8));
    result = sub_92E0((__int64)v10, v9, a2, v8);
    if ( result )
    {
      if ( a3 )
        *a3 = v10[3];
    }
  }
  return result;
}

