__int64 __fastcall sub_9C6270(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 (__fastcall ***v3)(_QWORD, int *, __int64, __int64); // rbp
  __int64 v4; // r15
  __int64 v5; // r14
  unsigned __int8 (__fastcall *v6)(_QWORD, int *, __int64, __int64); // r13
  int v7; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+8h] [rbp-60h]

  result = 1;
  if ( a2 )
  {
    v3 = *(unsigned __int8 (__fastcall ****)(_QWORD, int *, __int64, __int64))(a1 + 16);
    v4 = *(_QWORD *)(a1 + 40);
    v5 = *(_QWORD *)(a1 + 32);
    v6 = **v3;
    v8 = a2;
    v7 = sub_AD6A60(a2);
    if ( !v6(v3, &v7, v5, v4) )
      return sub_BA5AA0(a1, a2);
    result = *(unsigned __int8 *)(a1 + 24);
    *(_BYTE *)(a1 + 25) = 1;
    if ( (_BYTE)result )
      return sub_BA5AA0(a1, a2);
  }
  return result;
}

