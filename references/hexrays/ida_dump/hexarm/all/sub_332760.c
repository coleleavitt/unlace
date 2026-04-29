unsigned __int64 __fastcall sub_332760(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v3; // r12
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v8; // rax
  _BYTE src[10]; // [rsp+Eh] [rbp-4Ah] BYREF
  unsigned __int64 v10[8]; // [rsp+18h] [rbp-40h] BYREF

  v10[0] = __readfsqword(0x28u);
  v2 = pack_dq(src, v10, a2 + 1) - (_QWORD)src;
  v3 = v2;
  v4 = v2;
  v5 = a1[1];
  if ( v5 )
  {
    --v5;
    v4 = v2 + v5;
  }
  v6 = *a1;
  if ( a1[2] < (unsigned __int64)(v4 + 1) )
  {
    v8 = qvector_reserve(a1, v6, v4 + 1, 1);
    *a1 = v8;
    v6 = v8;
  }
  a1[1] = v4 + 1;
  *(_BYTE *)(v6 + v4) = 0;
  memmove((void *)(v5 + *a1), src, v3);
  return v10[0] - __readfsqword(0x28u);
}
