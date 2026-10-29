unsigned __int64 __fastcall sub_573360(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  size_t v4; // rax
  __int64 v5; // rbp
  size_t v6; // r12
  size_t v7; // r14
  __int64 v8; // rsi
  __int64 v10; // rax
  char v11[136]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v12; // [rsp+88h] [rbp-40h]

  v3 = a1[77];
  v12 = __readfsqword(0x28u);
  btoa64(v11, 136, a2 & *(_QWORD *)(*(_QWORD *)(v3 + 32) + 16LL), (unsigned int)a3);
  v4 = strlen(v11);
  v5 = a1[4];
  v6 = v4;
  v7 = v4;
  if ( v5 )
  {
    --v5;
    v7 = v4 + v5;
  }
  v8 = a1[3];
  if ( a1[5] < v7 + 1 )
  {
    v10 = qvector_reserve(a1 + 3, v8, v7 + 1, 1);
    a1[3] = v10;
    v8 = v10;
  }
  a1[4] = v7 + 1;
  *(_BYTE *)(v8 + v7) = 0;
  memmove((void *)(v5 + a1[3]), v11, v6);
  return v12 - __readfsqword(0x28u);
}
