__int64 __fastcall sub_6F8D0(__int64 a1, __int64 *a2)
{
  int v3; // eax
  int i; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-58h] BYREF
  _QWORD v10[2]; // [rsp+8h] [rbp-50h] BYREF
  char v11; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v9 = off_4DBB18;
  v10[0] = 0;
  v10[1] = 0;
  v11 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 80))(a2);
  sub_6F590((__int64 *)&v9, a2, v3, 0);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  for ( i = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a2 + 160))(a2, 0);
        (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 56))(a2) != i;
        i = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a2 + 160))(a2, (unsigned int)(i + 1)) )
  {
    if ( !sub_64930(v10, i) )
    {
      v5 = *(_QWORD *)(a1 + 8);
      v6 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v5 + 1) )
      {
        v8 = qvector_reserve(a1, v6, v5 + 1, 4);
        *(_QWORD *)a1 = v8;
        v6 = v8;
        v5 = *(_QWORD *)(a1 + 8);
      }
      *(_DWORD *)(v6 + 4 * v5) = i;
      ++*(_QWORD *)(a1 + 8);
    }
  }
  v9 = off_4DBB18;
  qfree(v10[0]);
  return a1;
}
