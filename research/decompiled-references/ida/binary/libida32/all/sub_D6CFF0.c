__int64 __fastcall sub_D6CFF0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r14d
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  int v21; // eax
  unsigned __int64 v22; // rbp
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // r13
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // [rsp+Ch] [rbp-17Ch]
  _BYTE v30[24]; // [rsp+C0h] [rbp-C8h] BYREF
  int v31; // [rsp+D8h] [rbp-B0h]
  __int64 v32; // [rsp+E0h] [rbp-A8h]
  int v33; // [rsp+E8h] [rbp-A0h]
  void *v34; // [rsp+F0h] [rbp-98h] BYREF
  unsigned int v35; // [rsp+F8h] [rbp-90h]
  void *v36; // [rsp+120h] [rbp-68h] BYREF
  unsigned int v37; // [rsp+128h] [rbp-60h]

  v29 = a3;
  if ( sub_9C8B50(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL)
                   & 0xFFFFFFFFFFFFFFF0LL),
         a2,
         a3,
         a4,
         a5) )
  {
    v21 = sub_CC2440(
            a1[23],
            *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL),
            v5,
            v6,
            v7);
    sub_D67460((__int64)&v34, a1[22], v21);
    if ( v29 == 487 )
    {
      v22 = *(_QWORD *)(a2 + 8);
      if ( v35 > 0x40 )
        v23 = sub_21E2CA0(&v34);
      else
        v23 = __popcountdi2();
      sub_D6C7E0(a1, v23, v22, v24, v25);
    }
    else
    {
      v26 = *(_QWORD *)(a2 + 8);
      sub_21E7160(&v36, &v34);
      sub_D6C820(a1, (__int64)&v36, v26, v27, v28);
      if ( v37 > 0x40 && v36 )
        operator delete[](v36);
    }
    if ( v35 > 0x40 && v34 )
      operator delete[](v34);
  }
  else
  {
    v8 = a1[22];
    sub_DFDA20(v8, 48);
    sub_DFF520(v30);
    sub_DFDA50(v8, 48);
    sub_DFDA20(a1[22], 48);
    v9 = sub_CDA220((__int64)v30);
    v13 = sub_CCB8E0(v9, 48, v10, v11, v12);
    v17 = sub_CC2440(a1[23], v13, v14, v15, v16);
    if ( v31
      || ((v18 = sub_CDA220((__int64)v30), v33 == -1)
        ? (v19 = *(unsigned int *)(*(_QWORD *)(v32 + 32) + 20LL))
        : (v19 = *(unsigned int *)(v18 + 16)),
          *(unsigned int *)(v18 + 20) >= v19) )
    {
      __asm { jmp     rax }
    }
    sub_DFF560(v30);
  }
  return 1;
}

