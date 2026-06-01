__int64 __fastcall sub_E36850(__int64 a1, __int64 a2)
{
  int v2; // ebx
  size_t v3; // rax
  unsigned int v4; // r12d
  size_t v5; // rax
  char v6; // cl
  __int64 v7; // rbx
  size_t v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  size_t v11; // rax
  __int16 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h]

  v2 = *(unsigned __int16 *)(a2 + 20);
  v3 = j__strlen("noreturn");
  HIWORD(v4) = HIWORD(v2);
  LOWORD(v4) = (unsigned __int16)v2 >> 2;
  sub_E35E50(a1, (__int64)"noreturn", v3, BYTE1(v2) & 1);
  v5 = j__strlen("producesResult");
  v6 = (v2 & 0x200) != 0;
  v7 = a1 + 1048;
  sub_E35E50(a1, (__int64)"producesResult", v5, v6);
  if ( ((v4 >> 9) & 7) != 0 )
  {
    v13 = 3;
    v14 = ((v4 >> 9) & 7) - 1;
    v8 = j__strlen("regParm");
    sub_2206E30(v7, "regParm", v8);
    sub_2208D80(v7, &v13);
    sub_2205EB0(v7);
    sub_2207560(&v13);
  }
  v9 = sub_F38690(v4 & 0x3F);
  sub_E35AF0((__int64)&v13, v9, v10);
  v11 = j__strlen("cc");
  sub_2206E30(v7, "cc", v11);
  sub_2208D80(v7, &v13);
  sub_2205EB0(v7);
  return sub_2207560(&v13);
}

