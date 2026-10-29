__int64 __fastcall sub_14A3180(__int64 a1, __int64 a2, __m128i a3, __m128 a4)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 *v9; // rdi
  int v10; // r14d
  char v11; // al
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r15d
  __int64 v19; // rax
  unsigned int v20; // [rsp+4h] [rbp-D4h] BYREF
  __int64 v21; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE *v22; // [rsp+10h] [rbp-C8h] BYREF
  char v23; // [rsp+18h] [rbp-C0h]
  __int64 v24; // [rsp+20h] [rbp-B8h]
  int v25; // [rsp+28h] [rbp-B0h]
  __int16 v26; // [rsp+2Ch] [rbp-ACh]
  __int64 (__fastcall *v27)(__int64); // [rsp+30h] [rbp-A8h]
  __int64 v28; // [rsp+38h] [rbp-A0h]
  __int64 v29; // [rsp+40h] [rbp-98h]
  unsigned __int8 *v30[17]; // [rsp+50h] [rbp-88h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 2944);
  if ( *(unsigned int *)(v5 + 2912) <= v6 )
    v7 = sub_14180A0(v5, 1u);
  else
    v7 = *(_QWORD *)(v5 + 2904) + 24 * v6;
  if ( *(_WORD *)(v7 + 16) == 22 )
  {
    v9 = *(__int64 **)(a1 + 8);
    v10 = dword_2617180[(unsigned __int16)(*(_WORD *)(a1 + 32) - 258)];
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v9, (int *)(a1 + 16));
    LOWORD(v9) = *(_WORD *)(a1 + 32);
    v24 = a1;
    v22 = (_BYTE *)(a1 + 1952);
    v11 = *(_BYTE *)(a1 + 1952);
    *(_BYTE *)(a1 + 1952) = 1;
    v12 = *(_DWORD *)(a1 + 40);
    v23 = v11;
    v26 = 63;
    v25 = 1507350;
    v27 = sub_146A990;
    v28 = 0;
    v29 = 0;
    v13 = sub_10CBF50((unsigned __int16)v9);
    if ( !(unsigned __int8)sub_156A040(&v22, 1625, v13, 23) )
    {
      v18 = sub_1496480(a1, nullptr, 5, 3u, nullptr, 0, a3, a4);
      if ( (_BYTE)v14 )
      {
        LOWORD(v30[0]) = 23;
        sub_15680D0(a1, v30, 1, 1);
      }
      else
      {
        sub_14808E0((__int64)&v22, nullptr, v14, v15, v16, v17);
        if ( HIDWORD(v29) )
        {
          v19 = *(_QWORD *)(a1 + 96);
          v21 = 0;
          if ( (unsigned __int8)sub_15AD370(
                                  a2,
                                  v10,
                                  v12,
                                  (unsigned int)&v21,
                                  (unsigned int)&v20,
                                  v18,
                                  *(_QWORD *)(v19 + 248) + 17464LL) )
          {
            sub_1564820(v30, a1, v12, v20);
            sub_149E970(v30, v21);
            sub_AEA040((__int64)v30);
          }
          *(_QWORD *)(a2 + 212) = v29;
        }
      }
    }
    *v22 = v23;
    return 1;
  }
  else
  {
    *(_WORD *)(a1 + 32) = 5;
    return 0;
  }
}
