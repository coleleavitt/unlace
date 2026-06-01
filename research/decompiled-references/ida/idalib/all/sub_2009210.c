__int64 __fastcall sub_2009210(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 result; // rax

  v7 = *a2;
  v8 = *a3;
  *a3 = 0;
  *(_QWORD *)a1 = v7;
  v9 = a2[1];
  *(_OWORD *)a2 = 0;
  *(_QWORD *)(a1 + 8) = v9;
  v10 = a2[2];
  a2[2] = 0;
  *(_QWORD *)(a1 + 16) = v10;
  v11 = (_QWORD *)operator new(0x10u);
  *(_QWORD *)(a1 + 40) = a4;
  *v11 = &off_2BE4EB8;
  v11[1] = v8;
  *(_QWORD *)(a1 + 24) = v11;
  v12 = *a5;
  *(_BYTE *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 48) = v12;
  result = a5[1];
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 56) = result;
  *(_OWORD *)a5 = 0;
  *(_QWORD *)(a1 + 72) = 0;
  return result;
}
