_BYTE *__fastcall sub_2040770(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( !a2 )
    return (_BYTE *)sub_995540(*a1, "<null operand!>");
  v2 = a1 + 5;
  sub_2034FF0((__int64)(a1 + 5), *(_QWORD *)(a2 + 8), *a1);
  v6 = *a1;
  v7 = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(*a1 + 24) )
  {
    sub_227BA10(v6, 32);
  }
  else
  {
    *(_QWORD *)(v6 + 32) = v7 + 1;
    *v7 = 32;
  }
  v8 = a1[4];
  v9 = a1[1];
  v12[1] = v2;
  v10 = *a1;
  v12[2] = v8;
  v12[0] = off_2BE5D20;
  v12[3] = v9;
  return sub_2038AA0(v10, a2, (__int64)v12, (__int64)off_2BE5D20, v4, v5);
}
