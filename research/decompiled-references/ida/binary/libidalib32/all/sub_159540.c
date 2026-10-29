__int64 __fastcall sub_159540(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, __int64 (***)(), __int64, _QWORD); // rax
  int v6; // eax
  __int64 (**v7)(); // [rsp+0h] [rbp-38h] BYREF
  int v8; // [rsp+8h] [rbp-30h]
  int v9; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v7 = off_22FD98;
  v9 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 128LL))(a2);
  v8 = a2[2];
  if ( sub_F42A0() )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64 (***)(), __int64, _QWORD))(a1 + 400);
    if ( v4 )
      return v4(a1, &v7, a3, *(_QWORD *)(a1 + 432));
  }
  else
  {
    idaplace_t__adjust();
    v4 = *(__int64 (__fastcall **)(__int64, __int64 (***)(), __int64, _QWORD))(a1 + 400);
    if ( v4 )
      return v4(a1, &v7, a3, *(_QWORD *)(a1 + 432));
  }
  if ( *(int *)(a1 + 900) <= 740 )
    v6 = l_compare();
  else
    v6 = l_compare2();
  return -2 - ((unsigned int)(v6 == 0) - 1);
}

