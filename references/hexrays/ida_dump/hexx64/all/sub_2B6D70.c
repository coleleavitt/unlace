unsigned __int64 __fastcall sub_2B6D70(__int64 *a1, __int64 a2)
{
  size_t v2; // r13
  __int64 v3; // rbp
  void *v4; // r8
  size_t v5; // r14
  __int64 v6; // rsi
  size_t v7; // r13
  __int64 v8; // rbp
  void *v9; // r8
  size_t v10; // r14
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // [rsp+0h] [rbp-80h]
  void *v16; // [rsp+0h] [rbp-80h]
  void *src; // [rsp+8h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+10h] [rbp-70h]
  void *v19; // [rsp+20h] [rbp-60h] BYREF
  size_t v20[3]; // [rsp+28h] [rbp-58h]
  unsigned __int64 v21; // [rsp+40h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  v19 = nullptr;
  *(_OWORD *)v20 = 0;
  serialize_tinfo(&src, &v19, 0, a2, 272);
  sub_332160(a1, LODWORD(n[0]));
  v2 = n[0];
  v3 = a1[1];
  v4 = src;
  v5 = n[0];
  if ( v3 )
  {
    --v3;
    v5 = n[0] + v3;
  }
  v6 = *a1;
  if ( a1[2] < v5 + 1 )
  {
    v15 = src;
    v13 = qvector_reserve(a1, v6, v5 + 1, 1);
    *a1 = v13;
    v4 = v15;
    v6 = v13;
  }
  a1[1] = v5 + 1;
  *(_BYTE *)(v6 + v5) = 0;
  memmove((void *)(v3 + *a1), v4, v2);
  sub_332160(a1, LODWORD(v20[0]));
  v7 = v20[0];
  v8 = a1[1];
  v9 = v19;
  v10 = v20[0];
  if ( v8 )
  {
    --v8;
    v10 = v20[0] + v8;
  }
  v11 = *a1;
  if ( a1[2] < v10 + 1 )
  {
    v16 = v19;
    v14 = qvector_reserve(a1, v11, v10 + 1, 1);
    *a1 = v14;
    v9 = v16;
    v11 = v14;
  }
  a1[1] = v10 + 1;
  *(_BYTE *)(v11 + v10) = 0;
  memmove((void *)(v8 + *a1), v9, v7);
  if ( v19 )
  {
    v20[0] = 0;
    qfree(v19);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v21 - __readfsqword(0x28u);
}
