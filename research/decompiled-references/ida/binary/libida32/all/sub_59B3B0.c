bool __fastcall sub_59B3B0(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r13
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD **)(a2 + 1480);
  v4 = a3[1];
  v11[1] = __readfsqword(0x28u);
  v11[0] = 0;
  sub_6141A0(*v3, 26, v11, 8);
  if ( !(unsigned __int8)sub_419E50(a2, *(_DWORD *)(*(_QWORD *)(a2 + 1480) + 2352LL), (unsigned int *)v11) )
  {
    v7 = a3[1];
    v8 = *a3;
    if ( a3[2] < (unsigned __int64)(v7 + 1) )
    {
      v10 = qvector_reserve(a3, v8, v7 + 1, 24);
      v7 = a3[1];
      *a3 = v10;
      v8 = v10;
    }
    v9 = v8 + 24 * v7;
    *(_QWORD *)v9 = 0;
    *(_OWORD *)(v9 + 8) = 0;
    ++a3[1];
    sub_3573A0((char **)v9);
  }
  return a3[1] == v4;
}

