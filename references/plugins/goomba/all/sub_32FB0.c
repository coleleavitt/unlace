__int64 __fastcall sub_32FB0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  void (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v6; // rdx
  void (__fastcall *v7)(__int64, __int64); // rax
  __int64 v8; // rdx
  void (__fastcall *v9)(__int64, __int64); // rax
  __int64 v10; // rdx
  void (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rbp
  _QWORD *v16; // rdi
  void (__fastcall *v17)(__int64, _QWORD *); // rax
  __int64 v18; // rdx
  void (__fastcall *v19)(__int64, _QWORD *); // rax
  __int64 v20; // rdx
  __int64 (__fastcall *v21)(__int64, _QWORD *); // rax

  v4 = a1[7];
  *a1 = &off_4DB80;
  if ( v4 )
  {
    hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2, a3);
    hexdsp(276, v4 + 64);
    v7 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v4 + 64, v6);
    v7(276, v4 + 48);
    v9 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v4 + 48, v8);
    v9(276, v4 + 32);
    v11 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v4 + 32, v10);
    a2 = v4;
    v11(130, v4);
  }
  v12 = a1[10];
  if ( v12 )
  {
    v13 = a1[11];
    if ( v13 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        v16 = *(_QWORD **)(v12 + v14 + 24);
        ++v15;
        v14 += 56;
        sub_32A60(v16, a2);
        v12 = a1[10];
      }
      while ( v13 != v15 );
    }
    a1[11] = 0;
    qfree(v12);
  }
  v17 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(v12, a2, a3);
  v17(276, a1 + 5);
  v19 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(276, a1 + 5, v18);
  v19(276, a1 + 3);
  v21 = (__int64 (__fastcall *)(__int64, _QWORD *))get_hexdsp(276, a1 + 3, v20);
  return v21(276, a1 + 1);
}
