__int64 __fastcall sub_6C080(_QWORD *a1, __int64 *a2, _QWORD *a3, int a4)
{
  _QWORD *v5; // rdi
  __int64 result; // rax
  int v7; // [rsp+Ch] [rbp-1Ch] BYREF
  __int64 v8[3]; // [rsp+10h] [rbp-18h] BYREF

  v8[1] = __readfsqword(0x28u);
  v5 = (_QWORD *)a1[1];
  if ( !v5 )
  {
    if ( !byte_1671A1 )
      sub_96F80(2597);
    BUG();
  }
  v7 = 0;
  v8[0] = 0;
  if ( a4 != 3 )
    return sub_6B040(v5, a2, nullptr, 0, &v7, a3, a4);
  result = sub_6B040(v5, a2, nullptr, (unsigned __int64)v8, &v7, a3, 3);
  if ( !(_DWORD)result )
    return sub_6AF20(a1, v8[0], v7);
  return result;
}

