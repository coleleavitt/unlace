/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E860
// Address: 0x000000010000E860

//----- (000000010000E860) ----------------------------------------------------
__int64 __fastcall sub_10000E860(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbx
  _OWORD *v8; // r12
  __int64 v9; // r13
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  void *v12; // rdi
  __int64 v13; // r13
  __int128 v14; // xmm1
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  __int64 v18; // rax
  void *v19; // rdi
  void *v20; // rdi
  __int64 v24; // [rsp+18h] [rbp-B8h]
  __int64 v25; // [rsp+30h] [rbp-A0h]
  __int64 v26; // [rsp+38h] [rbp-98h]
  __int64 v27; // [rsp+40h] [rbp-90h]
  __int64 v28; // [rsp+48h] [rbp-88h]
  __int128 v29; // [rsp+50h] [rbp-80h]
  __int64 v30; // [rsp+90h] [rbp-40h]
  __int16 v31; // [rsp+98h] [rbp-38h]

  if ( a4 >= 2 )
  {
    v29 = *(_OWORD *)a1;
    v25 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = 0;
    v26 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = 0;
    v4 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0;
    v5 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = 0;
    v27 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = 0;
    v28 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0;
    v31 = *(_WORD *)(a1 + 72);
    v30 = *(_QWORD *)(a1 + 64);
    v6 = sub_10000EBB0(a1, a3, a4);
    v7 = v6;
    v8 = (_OWORD *)(a2 - 80);
    if ( v6 == a2 - 80 )
    {
      *(_OWORD *)v6 = v29;
      v19 = *(void **)(v6 + 16);
      if ( v19 )
      {
        *(_QWORD *)(v6 + 24) = 0;
        qfree(v19);
      }
      *(_QWORD *)(v7 + 16) = v25;
      *(_QWORD *)(v7 + 24) = v26;
      *(_QWORD *)(v7 + 32) = v4;
      v20 = *(void **)(v7 + 40);
      if ( v20 )
      {
        *(_QWORD *)(v7 + 48) = 0;
        qfree(v20);
      }
      *(_QWORD *)(v7 + 40) = v5;
      *(_QWORD *)(v7 + 48) = v27;
      *(_QWORD *)(v7 + 56) = v28;
      *(_QWORD *)(v7 + 64) = v30;
      *(_WORD *)(v7 + 72) = v31;
    }
    else
    {
      v24 = v5;
      *(_OWORD *)v6 = *v8;
      v9 = *(_QWORD *)(a2 - 64);
      *(_QWORD *)(a2 - 64) = 0;
      v10 = *(_OWORD *)(a2 - 56);
      v11 = 0;
      *(_OWORD *)(a2 - 56) = 0;
      v12 = *(void **)(v6 + 16);
      if ( v12 )
      {
        *(_QWORD *)(v6 + 24) = 0;
        qfree(v12);
        v11 = 0;
      }
      *(_QWORD *)(v7 + 16) = v9;
      *(_OWORD *)(v7 + 24) = v10;
      v13 = *(_QWORD *)(a2 - 40);
      *(_QWORD *)(a2 - 40) = 0;
      v14 = *(_OWORD *)(a2 - 32);
      *(_OWORD *)(a2 - 32) = v11;
      v15 = *(void **)(v7 + 40);
      if ( v15 )
      {
        *(_QWORD *)(v7 + 48) = 0;
        qfree(v15);
      }
      *(_QWORD *)(v7 + 40) = v13;
      *(_OWORD *)(v7 + 48) = v14;
      *(_WORD *)(v7 + 72) = *(_WORD *)(a2 - 8);
      *(_QWORD *)(v7 + 64) = *(_QWORD *)(a2 - 16);
      *v8 = v29;
      v16 = *(void **)(a2 - 64);
      if ( v16 )
      {
        *(_QWORD *)(a2 - 56) = 0;
        qfree(v16);
      }
      *(_QWORD *)(a2 - 64) = v25;
      *(_QWORD *)(a2 - 56) = v26;
      *(_QWORD *)(a2 - 48) = v4;
      v17 = *(void **)(a2 - 40);
      if ( v17 )
      {
        *(_QWORD *)(a2 - 32) = 0;
        qfree(v17);
      }
      v18 = a2 - 16;
      *(_QWORD *)(a2 - 40) = v24;
      *(_QWORD *)(a2 - 32) = v27;
      *(_QWORD *)(a2 - 24) = v28;
      *(_WORD *)(v18 + 8) = v31;
      *(_QWORD *)v18 = v30;
      sub_10000ED10(a1, v7 + 80, a3, 0xCCCCCCCCCCCCCCCDLL * ((v7 + 80 - a1) >> 4));
    }
  }
  return __stack_chk_guard;
}
