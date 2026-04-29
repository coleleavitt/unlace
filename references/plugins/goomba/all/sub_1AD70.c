__int64 __fastcall sub_1AD70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v5; // r15
  __int64 v6; // rdx
  void (__fastcall *v7)(__int64, __int64, __int64); // rax
  unsigned int v8; // r12d
  __int64 v9; // rbp
  __int64 v10; // rdx
  void (__fastcall *v11)(__int64, __int64, __int64, _QWORD, __int64, _QWORD); // rax
  _QWORD *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 i; // rbx
  void (__fastcall *v16)(__int64, _DWORD *, __int64); // rax
  __int64 v17; // rdx
  unsigned int v18; // ebp
  void (__fastcall *v19)(__int64, _QWORD *, __int64, _QWORD, __int64, _QWORD); // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(__int64, __int64); // rax
  __int64 v23; // rbp
  __int64 v24; // rdx
  void (__fastcall *v25)(__int64, __int64, __int64); // rax
  _BOOL8 v26; // rdx
  int v27; // eax
  void (__fastcall *v28)(__int64, __int64, __int64); // rax
  __int64 v29; // rdx
  void (__fastcall *v30)(__int64, _QWORD *, __int64); // rax
  _QWORD *v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rdx
  void (__fastcall *v34)(__int64, __int64); // rax
  __int64 v35; // rdx
  void (__fastcall *v36)(__int64, __int64); // rax
  __int64 v37; // rdx
  void (__fastcall *v38)(__int64, __int64); // rax
  __int64 v39; // rdx
  void (__fastcall *v40)(__int64, __int64); // rax
  __int64 (__fastcall *v41)(__int64, __int64); // rax
  __int64 v42; // rbp
  __int64 v43; // rdx
  void (__fastcall *v44)(__int64, __int64, __int64); // rax
  __int64 v45; // rdx
  void (__fastcall *v46)(__int64, __int64, __int64); // rax
  __int64 v47; // rdx
  void (__fastcall *v48)(__int64, __int64, _DWORD *); // rax
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rdx
  void (__fastcall *v52)(__int64, __int64); // rax
  __int64 v53; // rdx
  void (__fastcall *v54)(__int64, __int64); // rax
  __int64 v55; // rdx
  void (__fastcall *v56)(__int64, __int64); // rax
  __int64 v57; // rdx
  void (__fastcall *v58)(__int64, __int64); // rax
  void (__fastcall *v59)(__int64, _QWORD *); // rax
  __int64 v60; // rdx
  void (__fastcall *v61)(__int64, _QWORD *); // rax
  __int64 v62; // rdx
  void (__fastcall *v63)(__int64, _QWORD *); // rax
  __int64 v66; // [rsp+10h] [rbp-D8h]
  int v67; // [rsp+10h] [rbp-D8h]
  __int64 v68; // [rsp+18h] [rbp-D0h]
  __int64 v69; // [rsp+38h] [rbp-B0h]
  __int64 v70; // [rsp+40h] [rbp-A8h]
  _DWORD v71[8]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v72[2]; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v73[2]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v74[11]; // [rsp+90h] [rbp-58h] BYREF

  v74[3] = __readfsqword(0x28u);
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2, a3);
  v5 = hexdsp(129, 80);
  *(_QWORD *)(v5 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 72) = 0;
  v7 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80, v6);
  v7(333, v5, a2);
  *(_DWORD *)v5 = 4;
  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 8);
  v11 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, _QWORD))get_hexdsp(333, v5, v10);
  v12 = (_QWORD *)(v5 + 32);
  v13 = 284;
  v11(284, v5 + 32, v9, v8, -1, 0);
  *(_QWORD *)(v5 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 56) = 0;
  *(_DWORD *)(v5 + 68) = *(_DWORD *)(a1 + 16);
  for ( i = *(_QWORD *)(a1 + 48); a1 + 32 != i; i = std::_Rb_tree_increment(i) )
  {
    if ( *(_QWORD *)(i + 48) )
    {
      v72[0] = 0xFFFFFFFF00000000LL;
      v72[1] = 0;
      v73[0] = 0xFFFFFFFF00000000LL;
      v73[1] = 0;
      v74[0] = 0xFFFFFFFF00000000LL;
      v74[1] = 0;
      v16 = (void (__fastcall *)(__int64, _DWORD *, __int64))get_hexdsp(v13, v12, v14);
      v16(333, v71, a2);
      v17 = *(_QWORD *)(i + 48);
      v18 = *(_DWORD *)(i + 56);
      v71[0] = 14;
      v66 = v17;
      v19 = (void (__fastcall *)(__int64, _QWORD *, __int64, _QWORD, __int64, _QWORD))get_hexdsp(333, v71, v17);
      v19(284, v72, v66, v18, -1, 0);
      v70 = sub_19B50(a1 + 72, i + 32, v20);
      v67 = *(_DWORD *)(a1 + 16);
      v22 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1 + 72, i + 32, v21);
      v23 = v22(129, 80);
      *(_QWORD *)(v23 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v23 + 40) = 0;
      *(_QWORD *)(v23 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v23 + 56) = 0;
      *(_QWORD *)(v23 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v23 + 72) = 0;
      v68 = v23 + 32;
      v69 = v23 + 48;
      v25 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80, v24);
      v25(333, v23, a2);
      v27 = 4;
      if ( v67 != *(_DWORD *)(i + 36) )
      {
        v27 = 10;
        if ( v67 >= *(_DWORD *)(i + 36) )
        {
          v26 = v70 != a1 + 80;
          v27 = 9 - v26;
        }
      }
      *(_DWORD *)v23 = v27;
      v28 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(333, v23, v26);
      v28(274, v68, i + 32);
      *(_DWORD *)(v23 + 68) = v67;
      v30 = (void (__fastcall *)(__int64, _QWORD *, __int64))get_hexdsp(274, v68, v29);
      v31 = v73;
      v32 = 283;
      v30(283, v73, v23);
      if ( v23 )
      {
        v34 = (void (__fastcall *)(__int64, __int64))get_hexdsp(283, v73, v33);
        v34(276, v23 + 64);
        v36 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v23 + 64, v35);
        v36(276, v69);
        v38 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v69, v37);
        v38(276, v68);
        v40 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v68, v39);
        v31 = (_QWORD *)v23;
        v32 = 130;
        v40(130, v23);
      }
      HIDWORD(v74[0]) = *(_DWORD *)(a1 + 16);
      v41 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v32, v31, v33);
      v42 = v41(129, 80);
      *(_QWORD *)(v42 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v42 + 40) = 0;
      *(_QWORD *)(v42 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v42 + 56) = 0;
      *(_QWORD *)(v42 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v42 + 72) = 0;
      v44 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80, v43);
      v44(333, v42, a2);
      *(_DWORD *)v42 = 12;
      v46 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(333, v42, v45);
      v46(283, v42 + 32, v5);
      v48 = (void (__fastcall *)(__int64, __int64, _DWORD *))get_hexdsp(283, v42 + 32, v47);
      v49 = v42 + 48;
      v50 = 283;
      v48(283, v42 + 48, v71);
      *(_DWORD *)(v42 + 68) = *(_DWORD *)(a1 + 16);
      if ( v5 )
      {
        v52 = (void (__fastcall *)(__int64, __int64))get_hexdsp(283, v49, v51);
        v52(276, v5 + 64);
        v54 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v5 + 64, v53);
        v54(276, v5 + 48);
        v56 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v5 + 48, v55);
        v56(276, v5 + 32);
        v58 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v5 + 32, v57);
        v49 = v5;
        v50 = 130;
        v58(130, v5);
      }
      v59 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(v50, v49, v51);
      v5 = v42;
      v59(276, v74);
      v61 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(276, v74, v60);
      v61(276, v73);
      v63 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(276, v73, v62);
      v12 = v72;
      v63(276, v72);
    }
    v13 = i;
  }
  return v5;
}
