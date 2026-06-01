unsigned __int64 __fastcall sub_557E80(_QWORD *a1, unsigned int a2, char a3)
{
  size_t v3; // rax
  size_t v4; // r12
  size_t v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v9; // rax
  char v10[136]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v11; // [rsp+88h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  btoa32(v10, 136, a2, (unsigned int)a3);
  v3 = strlen(v10);
  v4 = v3;
  v5 = v3;
  v6 = a1[4];
  if ( v6 )
  {
    --v6;
    v5 = v3 + v6;
  }
  v7 = a1[3];
  if ( a1[5] < v5 + 1 )
  {
    v9 = qvector_reserve(a1 + 3, v7, v5 + 1, 1);
    a1[3] = v9;
    v7 = v9;
  }
  a1[4] = v5 + 1;
  *(_BYTE *)(v7 + v5) = 0;
  memmove((void *)(v6 + a1[3]), v10, v4);
  return v11 - __readfsqword(0x28u);
}

