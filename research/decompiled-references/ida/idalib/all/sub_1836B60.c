void __fastcall sub_1836B60(__int64 *a1, __int64 a2, __m128i *a3, __int64 a4, _BYTE *a5, __m128 a6, __m128i a7)
{
  __int64 v7; // r9
  _BYTE *v8; // r14
  __int64 v11; // r15
  unsigned __int64 *v12; // r13
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  v7 = *(unsigned int *)(a4 + 16);
  if ( (_DWORD)v7 )
  {
    v8 = a5 + 1;
    v11 = *(_QWORD *)(a4 + 8) + 8 * v7;
    v12 = *(unsigned __int64 **)(a4 + 8);
    do
    {
      v13 = *v12++;
      sub_1833C10((__int64)a1, a2, a3, v13, a5, v8, a6, a7);
    }
    while ( (unsigned __int64 *)v11 != v12 );
    sub_18142E0(a1, (__int64)a3, a4, v14, v15, v16);
  }
}
