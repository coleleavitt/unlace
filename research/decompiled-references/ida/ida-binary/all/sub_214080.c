unsigned __int64 __fastcall sub_214080(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rax
  __int64 v4; // r12
  char v5; // al
  __int64 v6; // rsi
  char v7; // r12
  __int64 v8; // rax
  size_t v9; // rax
  size_t v10; // r14
  size_t v11; // r12
  const char *v12; // rsi
  __int64 v14; // rax
  void *v15; // [rsp+0h] [rbp-68h] BYREF
  __int128 v16; // [rsp+8h] [rbp-60h]
  char s[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v2 = *(_QWORD **)(a1 + 8);
  v18 = __readfsqword(0x28u);
  v4 = v2[29];
  sub_20C550(
    a2,
    ((__int64)(v2[10] - v2[8]) >> 5)
  + ((__int64)(v2[12] - v2[13]) >> 5)
  + 16 * ((v2[15] == 0) + (unsigned int)((__int64)(v2[15] - v2[11]) >> 3) - 1));
  sub_20C660(a2, v4 & *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL));
  v5 = getinf(3);
  v6 = *a2;
  v7 = v5;
  v8 = a2[1];
  if ( a2[2] < (unsigned __int64)(v8 + 1) )
  {
    v14 = qvector_reserve(a2, v6, v8 + 1, 1);
    *a2 = v14;
    v6 = v14;
    v8 = a2[1];
  }
  *(_BYTE *)(v6 + v8) = v7;
  ++a2[1];
  if ( !getinf_buf(1, s, 16) )
    s[0] = 0;
  v15 = nullptr;
  v16 = 0;
  v9 = strlen(s);
  v10 = v9 + 1;
  v11 = v9;
  v15 = (void *)qvector_reserve(&v15, 0, v9 + 1, 1);
  *(_QWORD *)&v16 = v10;
  memmove(v15, s, v11);
  v12 = &s1;
  *((_BYTE *)v15 + v11) = 0;
  if ( (_QWORD)v16 )
    v12 = (const char *)v15;
  sub_20C770(a2, v12, 0.0);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, v12);
  }
  return sub_213DA0(a1, a2);
}
