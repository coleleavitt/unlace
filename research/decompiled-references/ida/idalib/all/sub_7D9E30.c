__int64 __fastcall sub_7D9E30(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v5; // rax
  _BYTE v6[280]; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int64 v7; // [rsp+148h] [rbp-30h]

  v1 = a1[1];
  v2 = *a1;
  v7 = __readfsqword(0x28u);
  if ( a1[2] < (unsigned __int64)(v1 + 1) )
  {
    v5 = qvector_reserve(a1, v2, v1 + 1, 416);
    v1 = a1[1];
    *a1 = v5;
    v2 = v5;
  }
  memset(v6, 0, sizeof(v6));
  v3 = v2 + 416 * v1;
  *(_OWORD *)(v3 + 8) = 0;
  *(_QWORD *)v3 = 0;
  *(_QWORD *)(v3 + 24) = 0;
  *(_OWORD *)(v3 + 32) = 0;
  *(_QWORD *)(v3 + 48) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 72) = 0;
  *(_QWORD *)(v3 + 96) = 0;
  *(_QWORD *)(v3 + 120) = -1;
  *(_OWORD *)(v3 + 80) = 0;
  *(_OWORD *)(v3 + 104) = 0;
  qmemcpy((void *)(v3 + 128), v6, 0x118u);
  *(_QWORD *)(v3 + 408) = -1;
  ++a1[1];
  return v3;
}
