_QWORD *__fastcall sub_1E04B50(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // rsi
  char v7; // al
  __int64 *v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // r13
  int v12; // edx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  _BOOL8 v28; // r8
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // r14
  char v38; // cl
  __int64 v40; // r14
  __int64 v41; // rdx
  __int64 *v42; // [rsp+8h] [rbp-70h]
  __int64 v43; // [rsp+10h] [rbp-68h] BYREF
  int v44; // [rsp+18h] [rbp-60h]
  __int64 v45[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a2 + 48);
  v7 = *(_BYTE *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  if ( (v7 & 4) != 0 || (v7 & 2) != 0 || (v7 & 1) != 0 )
  {
    v8 = *(__int64 **)(*(_QWORD *)a1 + 760LL);
    v9 = sub_1DD1D30(*(_QWORD *)a1, v6, *(_QWORD *)(a1 + 32), *(_DWORD *)(a2 + 24), 0, nullptr, a3, a4);
    v10 = sub_1B06350(v8, *(_DWORD *)(a2 + 24), (__int64)v9);
  }
  else
  {
    v10 = v6;
  }
  v11 = nullptr;
  if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v12 = *(_DWORD *)(a2 + 24);
    v13 = *(_QWORD *)(a2 + 88);
    v43 = v10;
    v14 = *(_QWORD *)(a2 + 96);
    v44 = v12;
    v15 = sub_BB2270(a2);
    v17 = *(_QWORD *)a1;
    if ( v15 && *(char *)(v15 + 28) >= 0 )
    {
      v18 = (_QWORD *)sub_1DBE240(*(_QWORD *)(v17 + 11280), v15, v17, v16);
      v17 = *(_QWORD *)a1;
      v15 = *v18 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v19 = (_QWORD *)sub_1B2A880(
                      *(__int64 **)(v17 + 760),
                      nullptr,
                      *(__m128i **)(a1 + 24),
                      *(_QWORD *)(a2 + 40),
                      (__int64)&v43,
                      1u,
                      *(double *)a3.m128_u64,
                      *(double *)a4.m128_u64,
                      (*(_BYTE *)(a2 + 29) >> 5) & 3,
                      v15);
    v11 = v19;
    sub_1DC20B0(*(_QWORD *)(*(_QWORD *)a1 + 11280LL), a2, (__int64)v19, v20);
    v24 = *(__int64 **)(*(_QWORD *)a1 + 760LL);
    if ( v13 )
    {
      sub_1AFE810(v24, 0, (__int64)v19, v21, v22, v23);
      sub_1DC20B0(
        *(_QWORD *)(*(_QWORD *)a1 + 11280LL),
        *(_QWORD *)(*(_QWORD *)(a2 + 104) + 16LL),
        *(_QWORD *)(v19[13] + 16LL),
        v25);
      sub_1DC20B0(
        *(_QWORD *)(*(_QWORD *)a1 + 11280LL),
        *(_QWORD *)(*(_QWORD *)(a2 + 112) + 16LL),
        *(_QWORD *)(v19[14] + 16LL),
        v26);
      v27 = *(_QWORD *)(a1 + 24);
      if ( v27 )
      {
        if ( (*(_BYTE *)(v27 + 8) & 0x7Fu) - 59 > 2 )
        {
          v28 = 0;
          v27 = 0;
        }
        else
        {
          v27 -= 64;
          v28 = v27 != 0;
        }
      }
      else
      {
        v28 = 0;
      }
      sub_19A2CD0((__int64)v45, *(_QWORD *)a1, v27, 0, v28, (__int64)v45);
      v13 = (unsigned __int64)sub_1DF2070(*(_QWORD *)a1, v13, *(_QWORD *)(a1 + 32), v29, v30, v31, a3, a4)
          & 0xFFFFFFFFFFFFFFFELL;
      sub_1AF57E0(*(__int64 **)(*(_QWORD *)a1 + 760LL), (__int64)v19, v13, a3);
      sub_19A2DA0(v45);
      v24 = *(__int64 **)(*(_QWORD *)a1 + 760LL);
      if ( !v14 )
      {
        if ( v13 )
        {
          v38 = *(char *)(a2 + 28) >= 0;
          goto LABEL_19;
        }
        goto LABEL_18;
      }
    }
    else if ( !v14 )
    {
      goto LABEL_18;
    }
    v42 = (__int64 *)sub_1AFE990(v24, 0, (__int64)v19, v21, v22, v23);
    sub_1DC20B0(
      *(_QWORD *)(*(_QWORD *)a1 + 11280LL),
      *(_QWORD *)(*(_QWORD *)(a2 + 128) + 16LL),
      *(_QWORD *)(v19[16] + 16LL),
      v32);
    sub_1DC20B0(
      *(_QWORD *)(*(_QWORD *)a1 + 11280LL),
      *(_QWORD *)(*(_QWORD *)(a2 + 120) + 16LL),
      *(_QWORD *)(v19[15] + 16LL),
      v33);
    if ( (*(_BYTE *)(a2 + 65) & 0x60) != 0 )
    {
      v40 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 16LL);
      if ( !sub_B735C0(v40) )
      {
        sub_1AF5860(*(__int64 **)(*(_QWORD *)a1 + 760LL), (__int64)v19, 0, (__int64)v42, a3);
        v24 = *(__int64 **)(*(_QWORD *)a1 + 760LL);
        goto LABEL_18;
      }
      v41 = v40;
      v37 = 0;
      sub_1E046E0(*(_QWORD *)a1, v42, v41, *(_QWORD *)(a1 + 32), a3, a4);
    }
    else
    {
      v37 = (unsigned __int64)sub_1DF2070(*(_QWORD *)a1, v14, *(_QWORD *)(a1 + 32), v34, v35, v36, a3, a4)
          & 0xFFFFFFFFFFFFFFFELL;
    }
    sub_1AF5860(*(__int64 **)(*(_QWORD *)a1 + 760LL), (__int64)v19, v37, (__int64)v42, a3);
    v24 = *(__int64 **)(*(_QWORD *)a1 + 760LL);
    if ( v13 )
    {
      if ( (*(_BYTE *)(a2 + 65) & 0x60) != 0 )
      {
        if ( v37 )
          goto LABEL_18;
      }
      else if ( !v37 )
      {
        goto LABEL_18;
      }
      v38 = *(char *)(a2 + 28) >= 0;
      goto LABEL_19;
    }
LABEL_18:
    v38 = 0;
LABEL_19:
    sub_1AF5920(v24, 0, (__int64)v19, v38, v22, v23);
  }
  return v11;
}
