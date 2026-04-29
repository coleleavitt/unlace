unsigned __int64 __fastcall sub_3324A0(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  size_t v4; // rax
  size_t v5; // r12
  size_t v6; // r14
  __int64 v7; // rsi
  __int64 v9; // rax
  _BYTE src[5]; // [rsp+3h] [rbp-45h] BYREF
  unsigned __int64 v11[8]; // [rsp+8h] [rbp-40h] BYREF

  v11[0] = __readfsqword(0x28u);
  v2 = pack_dd(src, v11, a2);
  v3 = a1[1];
  v4 = v2 - (_QWORD)src;
  v5 = v4;
  v6 = v4;
  if ( v3 )
  {
    --v3;
    v6 = v4 + v3;
  }
  v7 = *a1;
  if ( a1[2] < v6 + 1 )
  {
    v9 = qvector_reserve(a1, v7, v6 + 1, 1);
    *a1 = v9;
    v7 = v9;
  }
  a1[1] = v6 + 1;
  *(_BYTE *)(v7 + v6) = 0;
  memmove((void *)(v3 + *a1), src, v5);
  return v11[0] - __readfsqword(0x28u);
}
