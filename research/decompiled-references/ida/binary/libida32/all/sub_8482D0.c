__int64 __fastcall sub_8482D0(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  int v6; // r15d
  __int64 v10; // rax
  unsigned int *v11; // rdi
  _DWORD *v12; // r12
  int v13; // ebx
  int v14; // edx
  int v15; // r11d
  __int64 result; // rax
  int v17; // [rsp+14h] [rbp-44h]
  __int64 v18; // [rsp+18h] [rbp-40h]

  v6 = a2;
  v10 = *(int *)(a1 + 56);
  v11 = *(unsigned int **)a1;
  v12 = (_DWORD *)(a1 + 4 * v10);
  v13 = v10;
  v14 = v12[2];
  v15 = v12[8];
  if ( v14 != -1 )
  {
    LOBYTE(v14) = v14 | 0x80;
    v18 = a3;
    v17 = v12[8];
    sub_847F60(v11, 32, v14, (int)v12[5], v15, 0);
    a3 = v18;
    v15 = v17;
  }
  LOBYTE(v6) = a2 | 0x80;
  sub_847F60(v11, 32, v15, 0, v6, a3);
  v12[2] = a4;
  v12[5] = a5;
  result = (unsigned int)((v13 + 1) % 3);
  *(_DWORD *)(a1 + 56) = result;
  return result;
}

