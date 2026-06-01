unsigned __int64 __fastcall sub_A5780(__int64 a1, __int64 *a2)
{
  char v3; // al
  __int64 v4; // rsi
  char v5; // r12
  __int64 v6; // rax
  size_t v7; // rax
  size_t v8; // r14
  size_t v9; // r12
  const char *v10; // rsi
  __int64 v12; // rax
  void *v13; // [rsp+0h] [rbp-68h]
  char s[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  sub_9D710(a2);
  sub_9D820(a2);
  v3 = getinf();
  v4 = *a2;
  v5 = v3;
  v6 = a2[1];
  if ( a2[2] < (unsigned __int64)(v6 + 1) )
  {
    v12 = qvector_reserve();
    *a2 = v12;
    v4 = v12;
    v6 = a2[1];
  }
  *(_BYTE *)(v4 + v6) = v5;
  ++a2[1];
  if ( !getinf_buf() )
    s[0] = 0;
  v7 = strlen(s);
  v8 = v7 + 1;
  v9 = v7;
  v13 = (void *)qvector_reserve();
  memmove(v13, s, v9);
  v10 = s1;
  *((_BYTE *)v13 + v9) = 0;
  if ( v8 )
    v10 = (const char *)v13;
  sub_9D930(a2, v10);
  if ( v13 )
    qfree();
  return sub_A54A0(a1, a2);
}

