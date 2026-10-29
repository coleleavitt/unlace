void __fastcall sub_1D3A850(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned int v11; // r12d
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16[8]; // [rsp+0h] [rbp-40h] BYREF

  v9 = *(_DWORD *)a2 & 0x7FFFFFFF;
  v16[5] = v8;
  v16[4] = v7;
  v11 = a4;
  v16[3] = v6;
  v16[2] = v5;
  switch ( v9 )
  {
    case 1LL:
      sub_1D39F20(a1, *(_QWORD *)(a2 + 8), a3, a4, a5);
      break;
    case 6LL:
    case 7LL:
      sub_F22A90(v16, *(_QWORD *)(a2 + 8));
      sub_1D3A610(a1, v16[0], a3, v11, a5);
      break;
    case 8LL:
      sub_1D3A500(a1, *(_QWORD *)(a2 + 8), a3, a4, (__int64)a5);
      break;
    case 9LL:
      v13 = *(_QWORD *)(a2 + 8);
      v14 = v13 + 24LL * *(unsigned int *)(a2 + 4);
      while ( v14 != v13 )
      {
        v15 = v13;
        v13 += 24;
        sub_1D3A850(a1, v15, a3, v11, a5);
      }
      break;
    default:
      return;
  }
}
