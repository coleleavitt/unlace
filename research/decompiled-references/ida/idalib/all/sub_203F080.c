_BYTE *__fastcall sub_203F080(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r12
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  _BYTE *v8; // rax
  __int64 v9; // rdi
  _BYTE *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v15; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v15 = a3;
  if ( !a2 )
    return (_BYTE *)sub_995540(*a1, "<null operand!>");
  v3 = a1 + 5;
  sub_2034FF0((__int64)(a1 + 5), *(_QWORD *)(a2 + 8), *a1);
  if ( v15 )
  {
    v7 = *a1;
    v8 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v8 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_227BA10(v7, 32);
    }
    else
    {
      *(_QWORD *)(v7 + 32) = v8 + 1;
      *v8 = 32;
    }
    sub_20358A0(a1, (__int64)&v15);
  }
  v9 = *a1;
  v10 = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)v10 >= *(_QWORD *)(*a1 + 24) )
  {
    sub_227BA10(v9, 32);
  }
  else
  {
    *(_QWORD *)(v9 + 32) = v10 + 1;
    *v10 = 32;
  }
  v11 = a1[4];
  v12 = a1[1];
  v16[1] = v3;
  v13 = *a1;
  v16[2] = v11;
  v16[0] = off_2BE5D20;
  v16[3] = v12;
  return sub_2038AA0(v13, a2, (__int64)v16, (__int64)off_2BE5D20, v5, v6);
}
