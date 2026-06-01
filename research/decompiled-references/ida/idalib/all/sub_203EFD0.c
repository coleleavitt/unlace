_BYTE *__fastcall sub_203EFD0(__int64 *a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // rdi
  _BYTE *v12; // rax
  _QWORD v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v7 = *a1;
  if ( !a2 )
    return (_BYTE *)sub_995540(v7, "<null operand!>");
  if ( a3 )
  {
    sub_2034FF0((__int64)(a1 + 5), *(_QWORD *)(a2 + 8), v7);
    v11 = *a1;
    v12 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v12 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_227BA10(v11, 32);
    }
    else
    {
      *(_QWORD *)(v11 + 32) = v12 + 1;
      *v12 = 32;
    }
    v7 = *a1;
  }
  v8 = a1[4];
  v9 = a1[1];
  v13[1] = a1 + 5;
  v13[2] = v8;
  v13[0] = off_2BE5D20;
  v13[3] = v9;
  return sub_2038AA0(v7, a2, (__int64)v13, (__int64)off_2BE5D20, a5, a6);
}
