__int64 __fastcall sub_34340(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  void (__fastcall *v3)(__int64, __int64, __int64); // rax
  void (__fastcall *v4)(__int64, __int64, _QWORD, _QWORD, __int64, _QWORD); // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // r15
  void (__fastcall *v11)(__int64, _QWORD *, __int64); // rax
  __int64 v12; // rbp
  void (__fastcall *v13)(__int64, _QWORD *, __int64, _QWORD, __int64, _QWORD); // rax
  _BYTE *v14; // rsi
  __int64 v15; // rdi
  __int64 j; // r15
  void (__fastcall *v17)(__int64, _BYTE *, __int64); // rax
  __int64 v18; // rdi
  _BYTE *v19; // rsi
  int v20; // ebp
  __int64 (__fastcall *v21)(__int64, __int64); // rax
  __int64 v22; // rbx
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // rdx
  void (__fastcall *v26)(__int64, __int64, __int64); // rax
  void (__fastcall *v27)(__int64, __int64, _QWORD *); // rax
  void (__fastcall *v28)(__int64, __int64, _BYTE *); // rax
  void (__fastcall *v29)(__int64, _QWORD *, __int64); // rax
  void (__fastcall *v30)(__int64, __int64); // rax
  void (__fastcall *v31)(__int64, __int64); // rax
  void (__fastcall *v32)(__int64, __int64); // rax
  void (__fastcall *v33)(__int64, __int64); // rax
  void (__fastcall *v34)(__int64, _BYTE *); // rax
  void (__fastcall *v35)(__int64, _QWORD *, _QWORD *); // rax
  void (__fastcall *v36)(__int64, _QWORD *); // rax
  __int64 v38; // [rsp+10h] [rbp-B8h]
  __int64 v39; // [rsp+20h] [rbp-A8h]
  __int64 i; // [rsp+30h] [rbp-98h]
  __int64 v41; // [rsp+38h] [rbp-90h]
  unsigned int v42; // [rsp+44h] [rbp-84h]
  _QWORD *v43; // [rsp+48h] [rbp-80h]
  __int64 v45; // [rsp+58h] [rbp-70h]
  _QWORD v46[2]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v47[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v48; // [rsp+88h] [rbp-40h]

  v39 = a1;
  v48 = __readfsqword(0x28u);
  v42 = *(_DWORD *)(a1 + 12);
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  v41 = hexdsp(129, 80);
  *(_QWORD *)(v41 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v41 + 40) = 0;
  *(_QWORD *)(v41 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v41 + 56) = 0;
  *(_QWORD *)(v41 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v41 + 72) = 0;
  v3 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80);
  v3(333, v41, a2);
  *(_DWORD *)v41 = 4;
  v4 = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64, _QWORD))get_hexdsp(333, v41);
  v4(284, v41 + 32, 0, v42, a2, 0);
  *(_DWORD *)(v41 + 68) = v42;
  v5 = *(_QWORD *)(a1 + 80);
  v6 = v5 + 56LL * *(_QWORD *)(a1 + 88);
  v45 = v6;
  if ( v6 != v5 )
  {
    for ( i = v5 + 16; ; i += 56 )
    {
      v7 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, v6);
      v8 = v41;
      v9 = (_QWORD *)v7(129, 80);
      v9[4] = 0xFFFFFFFF00000000LL;
      v10 = v9;
      v9[5] = 0;
      v9[6] = 0xFFFFFFFF00000000LL;
      v9[7] = 0;
      v9[8] = 0xFFFFFFFF00000000LL;
      v9[9] = 0;
      v41 = (__int64)v9;
      v43 = v9 + 6;
      v11 = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(129, v9 + 6);
      v11(333, v10, a2);
      *(_DWORD *)v41 = 12;
      *(_QWORD *)(v41 + 40) = v8;
      *(_BYTE *)(v41 + 32) = 4;
      *(_DWORD *)(v41 + 36) = v42;
      v46[0] = 0xFFFFFFFF00000000LL;
      v46[1] = 0;
      LODWORD(v8) = *(_DWORD *)(v39 + 12);
      v12 = *(int *)(i - 16);
      v13 = (void (__fastcall *)(__int64, _QWORD *, __int64, _QWORD, __int64, _QWORD))get_hexdsp(333, v42);
      v14 = v46;
      v15 = 284;
      v13(284, v46, v12, (unsigned int)v8, -1, 0);
      for ( j = *(_QWORD *)(i + 16); j != i; j = std::_Rb_tree_increment(j) )
      {
        v17 = (void (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(v15, v14);
        v18 = 273;
        v19 = v47;
        v17(273, v47, j + 88);
        if ( *(int *)(j + 104) > 0 )
        {
          v20 = 0;
          do
          {
            v21 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v18, v19);
            v22 = v21(129, 80);
            v23 = v22 + 32;
            v24 = v22 + 48;
            v25 = *(_QWORD *)(v39 + 64);
            *(_QWORD *)(v22 + 32) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v22 + 40) = 0;
            *(_QWORD *)(v22 + 48) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v22 + 56) = 0;
            *(_QWORD *)(v22 + 64) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v22 + 72) = 0;
            v38 = v25;
            v26 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80);
            v26(333, v22, v38);
            *(_DWORD *)v22 = 14;
            v27 = (void (__fastcall *)(__int64, __int64, _QWORD *))get_hexdsp(333, v22);
            v27(274, v22 + 32, v46);
            v28 = (void (__fastcall *)(__int64, __int64, _BYTE *))get_hexdsp(274, v22 + 32);
            v28(274, v22 + 48, v47);
            *(_DWORD *)(v22 + 68) = HIDWORD(v46[0]);
            v29 = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(274, v22 + 48);
            v19 = v46;
            v18 = 283;
            v29(283, v46, v22);
            if ( v22 )
            {
              v30 = (void (__fastcall *)(__int64, __int64))get_hexdsp(283, v46);
              v30(276, v22 + 64);
              v31 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v22 + 64);
              v31(276, v24);
              v32 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v24);
              v32(276, v23);
              v33 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v23);
              v19 = (_BYTE *)v22;
              v18 = 130;
              v33(130, v22);
            }
            ++v20;
          }
          while ( v20 < *(_DWORD *)(j + 104) );
        }
        v34 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(v18, v19);
        v14 = v47;
        v34(276, v47);
        v15 = j;
      }
      v35 = (void (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(v15, v14);
      v35(274, v43, v46);
      v36 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(274, v43);
      a1 = 276;
      v36(276, v46);
      v6 = v42;
      *(_DWORD *)(v41 + 68) = v42;
      if ( v45 == i + 40 )
        break;
    }
  }
  return v41;
}
