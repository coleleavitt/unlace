__int64 __fastcall sub_693510(_BYTE *a1, __int64 *a2, int a3, unsigned int a4, __int64 a5)
{
  __int64 v8; // rdi
  int v9; // r12d
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v15[2]; // [rsp+16h] [rbp-42h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v8 = *a2;
  v16 = __readfsqword(0x28u);
  v9 = a5;
  v14 = 0;
  sub_6141A0(v8, 26, &v14, 8u, a5);
  v10 = sub_3B90A0(a2, a3);
  v11 = *a2;
  LODWORD(v14) = v10;
  v12 = sub_79B5C0(&v14, v11, a4, v15, 2, v9 | 0x100u);
  result = 0;
  if ( v12 == 1 )
  {
    *a1 = v15[0];
    return 1;
  }
  return result;
}

