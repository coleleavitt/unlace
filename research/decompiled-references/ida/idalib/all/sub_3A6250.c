unsigned __int64 __fastcall sub_3A6250(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r12
  _QWORD *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v5 = a4;
  v6 = a1 + 11;
  v14 = __readfsqword(0x28u);
  auto_mark_range(a2, a2 + 1, 50);
  v7 = ea2node(a2);
  v8 = sub_7BE710(a1 + 11, *a1, v7, 65);
  if ( !v8 || v8 == -1 && a3 != -1 )
  {
    v9 = ea2node(a3);
    v10 = *a1;
    v13 = v9;
    sub_7BE7C0(v6, v10, v7, &v13, 8, 65);
  }
  if ( (_DWORD)v5 )
  {
    v12 = *a1;
    v13 = v5;
    sub_7BE7C0(v6, v12, v7, &v13, 8, 80);
  }
  return v14 - __readfsqword(0x28u);
}
