_QWORD *__fastcall sub_1DD1D30(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, _BYTE *a6, __m128 a7, __m128 a8)
{
  _QWORD *v8; // rbx
  _QWORD *v10; // rax
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+8h] [rbp-40h]
  __int64 v14; // [rsp+10h] [rbp-38h]
  unsigned int v15; // [rsp+18h] [rbp-30h]
  __int64 v16; // [rsp+20h] [rbp-28h]
  int v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]
  __int16 v19; // [rsp+38h] [rbp-10h]
  bool v20; // [rsp+3Ah] [rbp-Eh]

  v8 = (_QWORD *)a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0xA) != 0 )
  {
    v12 = a1;
    v20 = a6 != nullptr;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = a3;
    v17 = a4;
    v18 = a5;
    v19 = 1;
    v10 = sub_1DD1AB0((__int64)&v12, a2, a7, a8);
    if ( a6 && HIBYTE(v19) )
      *a6 = 1;
    v8 = v10;
    operator delete(v13, 16LL * v15, 8);
  }
  return v8;
}
