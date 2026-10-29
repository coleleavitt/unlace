void __fastcall sub_1A88650(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r14
  __int64 v13; // r15
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __m128i *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  void (*v24)(); // rcx

  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 58 <= 3 )
  {
    v7 = (_QWORD *)a2;
    if ( sub_B7E870(a2, a2, (__int64)a3, a4, a5, a6) )
    {
      v7 = sub_B7E870(a2, a2, v8, v9, v10, v11);
      if ( !v7 )
        return;
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    v13 = sub_168B6C0((__int64)a1);
    v14 = (_QWORD *)sub_168B6C0((__int64)a1);
    v17 = v14[294];
    v14[304] += 40LL;
    v18 = (__m128i *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v14[295] >= (unsigned __int64)&v18[2].m128i_u64[1] && v17 )
      v14[294] = (char *)v18 + 40;
    else
      v18 = (__m128i *)sub_986170((__int64)(v14 + 294), 40, 40, 3, v15, v16);
    sub_B15B30(v18, v13, a3);
    sub_B8CC60((__int64)v7, (__int64)v18, v19, v20, v21, v22);
    if ( v12 )
    {
      v23 = sub_15F1120(*a1);
      if ( v23 )
      {
        v24 = *(void (**)())(*(_QWORD *)v23 + 184LL);
        if ( v24 != nullsub_450 )
          ((void (__fastcall *)(__int64, __m128i *, _QWORD *))v24)(v23, v18, v7);
      }
    }
  }
}
