_BYTE *__fastcall sub_2040820(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v7 = *a1;
  if ( !a2 )
    return (_BYTE *)sub_995540(v7, "<null operand!>");
  v8 = a1[1];
  v9 = a1[4];
  v11[0] = off_2BE5D20;
  v11[3] = v8;
  v11[1] = a1 + 5;
  v11[2] = v9;
  return sub_2038AA0(v7, a2, (__int64)v11, v9, (__int64)off_2BE5D20, a6);
}
