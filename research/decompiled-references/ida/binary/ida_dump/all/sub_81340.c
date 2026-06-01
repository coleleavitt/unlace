__int64 __fastcall sub_81340(__int64 a1, __int64 a2, _QWORD **a3)
{
  size_t v4; // rax
  _QWORD *v5; // rbx
  __int64 result; // rax
  _BYTE v7[5]; // [rsp+3h] [rbp-35h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v4 = pack_dd() - (_QWORD)v7;
  if ( v4 )
    sub_7BEC0((__int64 *)(a1 + 72), v7, v4);
  v5 = *a3;
  if ( a3 == *a3 )
  {
LABEL_8:
    *(_DWORD *)(a1 + 8) |= 1u;
    return 0;
  }
  else
  {
    while ( 1 )
    {
      result = sub_255A80(a1, v5 + 2, a2);
      if ( (_DWORD)result )
        break;
      v5 = (_QWORD *)*v5;
      if ( a3 == v5 )
        goto LABEL_8;
    }
  }
  return result;
}
