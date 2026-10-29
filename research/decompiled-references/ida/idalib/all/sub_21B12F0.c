void *__fastcall sub_21B12F0(_DWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 (*v4)(void); // rax
  char v5; // al
  void *result; // rax
  __int64 v7; // rdi
  size_t v8; // rdx
  size_t v9; // rbx
  const void *v10; // r12
  size_t v11; // rdx
  size_t v12; // rdx

  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v4 == (char *)sub_21B1110 )
    v5 = a1[2] == 12;
  else
    v5 = v4();
  if ( v5 )
  {
    result = sub_201FDE0(*(_BYTE *)(a2 + 13));
    v7 = a3[1];
    v9 = v12;
    v10 = result;
    v11 = v12 + v7;
    if ( v11 <= a3[2] )
      goto LABEL_5;
  }
  else
  {
    result = sub_201FDE0(*(_BYTE *)(a2 + 9));
    v7 = a3[1];
    v9 = v8;
    v10 = result;
    v11 = v8 + v7;
    if ( v11 <= a3[2] )
      goto LABEL_5;
  }
  result = (void *)sub_2236E10(a3, a3 + 3, v11, 1);
  v7 = a3[1];
LABEL_5:
  if ( v9 )
  {
    result = memcpy((void *)(*a3 + v7), v10, v9);
    v7 = a3[1];
  }
  a3[1] = v7 + v9;
  return result;
}
