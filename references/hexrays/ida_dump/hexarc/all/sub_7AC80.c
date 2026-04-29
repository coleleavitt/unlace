__int64 __fastcall sub_7AC80(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // rax
  _QWORD *v5; // rbx
  __int64 result; // rax
  _BYTE v7[5]; // [rsp+3h] [rbp-35h] BYREF
  unsigned __int64 v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v8[0] = __readfsqword(0x28u);
  v4 = pack_dd(v7, v8, *(unsigned int *)(a3 + 16)) - (_QWORD)v7;
  if ( v4 )
    sub_75940((__int64 *)(a1 + 72), v7, v4);
  v5 = *(_QWORD **)a3;
  if ( a3 == *(_QWORD *)a3 )
  {
LABEL_8:
    *(_DWORD *)(a1 + 8) |= 1u;
    return 0;
  }
  else
  {
    while ( 1 )
    {
      result = sub_24E700(a1, v5 + 2, a2);
      if ( (_DWORD)result )
        break;
      v5 = (_QWORD *)*v5;
      if ( (_QWORD *)a3 == v5 )
        goto LABEL_8;
    }
  }
  return result;
}
