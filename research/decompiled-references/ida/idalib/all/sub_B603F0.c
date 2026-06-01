__int64 __fastcall sub_B603F0(__int64 a1, char a2)
{
  bool *v3; // rax
  void *v4; // rdi
  bool *v5; // rbx
  _BYTE *v7; // rax
  _BYTE *v8; // r14
  _BYTE *v9; // r15
  double v10[2]; // [rsp+0h] [rbp-50h] BYREF
  char v11[57]; // [rsp+17h] [rbp-39h] BYREF

  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  v3 = (bool *)operator new(4u);
  v4 = *(void **)a1;
  v5 = v3;
  if ( v4 )
    operator delete(v4);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 16) = v5 + 4;
  *v5 = a2 != 2;
  v5[1] = 2;
  *(_QWORD *)(a1 + 8) = v5 + 2;
  if ( v5 + 4 == v5 + 2 )
  {
    v7 = (_BYTE *)operator new(8u);
    v7[4] = 3;
    v8 = v7 + 8;
    v9 = v7 + 5;
    memmove(v7, v5, 4u);
    operator delete(v5);
    *(_QWORD *)&v10[0] = v9;
    *(_QWORD *)(a1 + 16) = v8;
    *(__m128 *)a1 = _mm_loadh_ps(v10);
  }
  else
  {
    v5[2] = 3;
    *(_QWORD *)(a1 + 8) = v5 + 3;
  }
  if ( !a2 )
  {
    v11[0] = 4;
    sub_B602E0(a1, v11);
  }
  return a1;
}
