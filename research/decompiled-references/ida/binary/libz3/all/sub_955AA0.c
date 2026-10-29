__int64 __fastcall sub_955AA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
  _OWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 (__fastcall *v12)(); // rax
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rax
  void (__fastcall ***v16)(_QWORD); // r14
  __int64 v17; // rbx
  __int64 v18; // rax
  void (__fastcall ***v19)(_QWORD); // r14
  __int64 v20; // rbx
  __int64 v21; // rbx
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  void (__fastcall ***v26)(_QWORD); // r14
  __int64 v27; // rbx
  void *v28; // r13
  __int64 result; // rax

  v6 = sub_186B270(0x4B8u);
  v7 = sub_186B270(0x50u);
  *(_QWORD *)v6 = a1;
  v8 = v7;
  *(_QWORD *)v7 = &off_1C55E60;
  *(_QWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = 0;
  *(_BYTE *)(v7 + 72) = 0;
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)(v6 + 16) = a3;
  *(_OWORD *)(v7 + 24) = 0;
  *(_OWORD *)(v7 + 40) = 0;
  sub_ADB950(v6 + 24, a1, a2, a3 + 104);
  v9 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v6 + 1104) = v9;
  v10 = *(_QWORD *)(a2 + 104);
  *v9 = 0;
  *(_QWORD *)(v6 + 1112) = 8;
  *(_DWORD *)(v6 + 1120) = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  sub_15CD880(v6 + 1128, v10, a2 + 8400);
  *(_QWORD *)(v6 + 1184) = 0;
  *(_QWORD *)(v6 + 1192) = v8;
  *(_DWORD *)(v6 + 1200) = 0;
  sub_ADACC0(v6 + 24);
  v11 = *(_QWORD *)(v6 + 1192);
  *(_QWORD *)a1 = v6;
  v12 = *(__int64 (__fastcall **)())(*(_QWORD *)v11 + 16LL);
  if ( v12 == sub_956300 )
  {
    v13 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v11 + 24) = v13;
    *(__m128 *)(v11 + 8) = _mm_loadh_ps((const double *)(v13 + 112));
    v14 = *(_QWORD *)(v13 + 104);
    v15 = sub_B9C860(v13);
    v16 = *(void (__fastcall ****)(_QWORD))(v11 + 32);
    v17 = v15;
    if ( (void (__fastcall ***)(_QWORD))v15 != v16 )
    {
      if ( v16 )
      {
        (**v16)(*(_QWORD *)(v11 + 32));
        sub_186B220(v16);
      }
      *(_QWORD *)(v11 + 32) = v17;
    }
    v18 = sub_B9C860(*(_QWORD *)(v11 + 24));
    v19 = *(void (__fastcall ****)(_QWORD))(v11 + 40);
    v20 = v18;
    if ( (void (__fastcall ***)(_QWORD))v18 != v19 )
    {
      if ( v19 )
      {
        (**v19)(*(_QWORD *)(v11 + 40));
        sub_186B220(v19);
      }
      *(_QWORD *)(v11 + 40) = v20;
    }
    v21 = sub_186B270(0x80u);
    sub_AC7EF0(v21, v14, v22, v23, v24, v25);
    v26 = *(void (__fastcall ****)(_QWORD))(v11 + 48);
    if ( (void (__fastcall ***)(_QWORD))v21 != v26 )
    {
      if ( v26 )
      {
        (**v26)(*(_QWORD *)(v11 + 48));
        sub_186B220(v26);
      }
      *(_QWORD *)(v11 + 48) = v21;
    }
    v27 = sub_186B270(0xB8u);
    sub_ADEB60(v27, v14, *(_QWORD *)(v11 + 16) + 104LL, *(_QWORD *)(v11 + 48));
    v28 = *(void **)(v11 + 56);
    if ( (void *)v27 != v28 )
    {
      if ( v28 )
      {
        sub_ADEC40(*(_QWORD *)(v11 + 56));
        sub_186B220(v28);
      }
      *(_QWORD *)(v11 + 56) = v27;
    }
    sub_AC7950(*(_QWORD *)(v11 + 48), *(_QWORD *)(v11 + 24));
    result = sub_ADEE50(*(_QWORD *)(v11 + 56), a1);
  }
  else
  {
    result = ((__int64 (__fastcall *)(__int64, __int64))v12)(v11, a1);
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 12) = 1;
  return result;
}

