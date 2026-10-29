__int64 __fastcall sub_CF3630(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD **v5; // rdi
  __int64 (*v6)(void); // rax
  char v7; // al
  __int64 v9; // r13
  unsigned int v10; // ebp
  const __m128i *v11; // r12
  _BYTE v12[88]; // [rsp+0h] [rbp-58h] BYREF

  v5 = (_QWORD **)a1[3];
  v6 = (__int64 (*)(void))(*v5)[3];
  if ( (char *)v6 == (char *)sub_CCC510 )
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v5[3] + 24LL))(v5[3]);
  else
    v7 = v6();
  if ( v7 )
    return 0;
  v9 = a1[50];
  if ( !(unsigned __int8)sub_DA69E0(a1, a2, v9 + 40) )
    return 0;
  sub_DFF4E0(
    v12,
    *(_QWORD *)(v9 + 72),
    (unsigned int)(a3 + *(_DWORD *)(v9 + 40)),
    (unsigned int)(a3 + *(_DWORD *)(v9 + 40)));
  v10 = sub_DA8420(a1, a2, v12, 0);
  if ( (_BYTE)v10 )
  {
    v11 = (const __m128i *)sub_CEA4A0((__int64)v12);
    *(__m128i *)sub_DFD980(a1[22], 16) = _mm_loadu_si128(v11);
  }
  sub_DFF560(v12);
  return v10;
}

