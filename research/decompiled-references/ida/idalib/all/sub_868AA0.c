__int64 __fastcall sub_868AA0(unsigned int *a1, int a2, int a3, int a4, __int64 a5)
{
  _QWORD *v8; // rax
  _QWORD *v9; // r15
  char v10; // dl
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  __int64 result; // rax

  v8 = sub_867B60((__int64)a1, 3);
  if ( !v8 )
    return *a1;
  *(_BYTE *)v8 = 2;
  v9 = v8;
  v10 = -16;
  v11 = a2 ^ 1;
  *((_QWORD *)a1 + 15) += 2LL;
  if ( v11 <= 0x23 )
    v10 = byte_23C2EA0[v11] - 16;
  *((_BYTE *)v9 + 1) = v10;
  v12 = *((_QWORD *)a1 + 15);
  result = sub_868510(a1, a3, 0, a4, a5);
  if ( (_DWORD)result )
    return *a1;
  *((_BYTE *)v9 + 2) = *((_QWORD *)a1 + 15) - v12;
  return result;
}
