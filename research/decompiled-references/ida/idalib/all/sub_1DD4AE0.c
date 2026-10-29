void *__fastcall sub_1DD4AE0(__int64 a1, void **a2, __int64 a3, int a4, __int64 a5, char a6, __m128 a7, __m128 a8)
{
  unsigned __int64 v8; // r10
  void *v9; // rbx
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+8h] [rbp-40h]
  __int64 v13; // [rsp+10h] [rbp-38h]
  unsigned int v14; // [rsp+18h] [rbp-30h]
  __int64 v15; // [rsp+20h] [rbp-28h]
  int v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]
  __int16 v18; // [rsp+38h] [rbp-10h]
  char v19; // [rsp+3Ah] [rbp-Eh]

  v8 = (unsigned __int64)*a2;
  if ( (*(_BYTE *)(*(_QWORD *)((unsigned __int64)*a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) != 0
    || (v9 = a2, (*(_BYTE *)(*(_QWORD *)((unsigned __int64)*a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0) )
  {
    v11 = a1;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = a3;
    v16 = a4;
    v17 = a5;
    v18 = 1;
    v19 = 0;
    if ( a6 && *(_BYTE *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
      v9 = sub_1DD4760((__int64)&v11, a2, a7, a8);
    else
      v9 = sub_1DD1930((__int64)&v11, (__int64)a2, a7, a8);
    operator delete(v12, 16LL * v14, 8);
  }
  return v9;
}
