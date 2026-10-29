__int64 __fastcall sub_4E1980(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rax
  unsigned __int64 v7; // rax
  __int64 *v9; // rcx
  _QWORD v10[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *a2;
  v10[3] = __readfsqword(0x28u);
  (*(void (__fastcall **)(_QWORD *))(v5 + 104))(v10);
  v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(*a2 + 400))(a2, v10);
  if ( v7 == -1 || (v9 = sub_4E07A0((_QWORD *)a2[2], v7)) == nullptr )
  {
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 2;
    *(_OWORD *)a1 = 0;
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64 *, _QWORD))(*a2 + 424))(a1, a2, a3, v9, a4);
  }
  return a1;
}
