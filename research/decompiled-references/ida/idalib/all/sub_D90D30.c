__int64 __fastcall sub_D90D30(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r14d
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rbp
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // r13
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // [rsp+Ch] [rbp-17Ch]
  _BYTE v36[24]; // [rsp+C0h] [rbp-C8h] BYREF
  int v37; // [rsp+D8h] [rbp-B0h]
  __int64 v38; // [rsp+E0h] [rbp-A8h]
  int v39; // [rsp+E8h] [rbp-A0h]
  void *v40; // [rsp+F0h] [rbp-98h] BYREF
  unsigned int v41; // [rsp+F8h] [rbp-90h]
  void *v42; // [rsp+120h] [rbp-68h] BYREF
  unsigned int v43; // [rsp+128h] [rbp-60h]

  v35 = a3;
  if ( sub_9EC890(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL)
                   & 0xFFFFFFFFFFFFFFF0LL),
         a2,
         a3,
         a4,
         a5) )
  {
    v22 = sub_CE6180(
            a1[23],
            *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL),
            v6,
            v7,
            v8);
    v23 = a1[22];
    sub_D8B1A0((__int64)&v40, v23, v22);
    if ( v35 == 487 )
    {
      v28 = *(_QWORD *)(a2 + 8);
      if ( v41 > 0x40 )
        v29 = sub_22069E0(&v40);
      else
        v29 = __popcountdi2(v40, v23, v24, v25, v26, v27);
      sub_D90520(a1, v29, v28, v30, v31);
    }
    else
    {
      v32 = *(_QWORD *)(a2 + 8);
      sub_220AEA0(&v42, &v40);
      sub_D90560(a1, (__int64)&v42, v32, v33, v34);
      if ( v43 > 0x40 && v42 )
        operator delete[](v42);
    }
    if ( v41 > 0x40 && v40 )
      operator delete[](v40);
  }
  else
  {
    v9 = a1[22];
    sub_E21760(v9, 48);
    sub_E23260(v36);
    sub_E21790(v9, 48);
    sub_E21760(a1[22], 48);
    v10 = sub_CFDF60((__int64)v36);
    v14 = sub_CEF620(v10, 48, v11, v12, v13);
    v18 = sub_CE6180(a1[23], v14, v15, v16, v17);
    if ( v37
      || ((v19 = sub_CFDF60((__int64)v36), v39 == -1)
        ? (v20 = *(unsigned int *)(*(_QWORD *)(v38 + 32) + 20LL))
        : (v20 = *(unsigned int *)(v19 + 16)),
          *(unsigned int *)(v19 + 20) >= v20) )
    {
      __asm { jmp     rax }
    }
    sub_E232A0(v36);
  }
  return 1;
}
