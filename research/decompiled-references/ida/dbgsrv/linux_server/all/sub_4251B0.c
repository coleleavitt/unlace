/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4251B0
// Address: 0x00000000004251B0

//----- (00000000004251B0) ----------------------------------------------------
__int64 __fastcall sub_4251B0(__int64 a1)
{
  unsigned __int8 v1; // r12
  unsigned __int8 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned int v9; // r12d
  char v10; // al
  __int64 v11; // rax
  int v12; // edx
  int v13; // edi
  int v14; // r10d
  __m128i v15; // xmm0
  int v16; // r9d
  __int64 v17; // r8
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  unsigned __int16 v31; // ax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  bool v35; // r13
  __int64 v36; // rax
  char v37; // al
  __int16 v38; // ax
  _QWORD *v39; // rax
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rsi
  __int64 v47; // rcx
  bool v48; // cf
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r8
  unsigned int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  _BYTE v55[4]; // [rsp+0h] [rbp-78h] BYREF
  int v56; // [rsp+4h] [rbp-74h]
  unsigned int v57; // [rsp+20h] [rbp-58h]
  unsigned int v58; // [rsp+28h] [rbp-50h]
  unsigned __int64 v59; // [rsp+48h] [rbp-30h]

  v1 = *(_BYTE *)(a1 + 508);
  v59 = __readfsqword(0x28u);
  if ( (unsigned __int8)(v1 - 1) > 1u
    && !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 496))(a1, 1, v1) )
  {
    return 0;
  }
  v3 = *(_BYTE *)(a1 + 509);
  if ( (unsigned __int8)(v3 - 1) > 1u
    && !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 496))(a1, 3, v3) )
  {
    return 0;
  }
  v4 = sub_47F740(*(_QWORD *)(a1 + 472), 0, 1);
  v5 = *(_QWORD *)(a1 + 480);
  v6 = v4 - v5;
  if ( sub_47F740(*(_QWORD *)(a1 + 472), v5 + 16, 0) == -1 )
    goto LABEL_42;
  *(_BYTE *)(a1 + 616) = v3 == 2;
  *(_BYTE *)(a1 + 617) = v1 == 2;
  *(_BYTE *)(a1 + 618) = v1 == 2;
  if ( (int)sub_424D70(a1, (_BYTE *)(a1 + 520), 2, 1, v7) < 0 )
    goto LABEL_42;
  if ( (int)sub_424D70(a1, (_BYTE *)(a1 + 522), 2, 1, v8) < 0 )
    goto LABEL_42;
  v9 = sub_424F80(a1);
  if ( !(_BYTE)v9 )
    goto LABEL_42;
  v10 = *(_BYTE *)(a1 + 617);
  if ( !*(_BYTE *)(a1 + 468) )
  {
    if ( v10 )
      goto LABEL_12;
LABEL_47:
    v12 = 8;
    v13 = 12;
    v14 = 52;
    v15 = _mm_cvtsi32_si128(4u);
    v16 = 32;
    v17 = 40;
    v18 = 12;
    v19 = 8;
    v20 = 16;
    goto LABEL_13;
  }
  if ( !v10 )
  {
    v41 = *(_QWORD *)(a1 + 440);
    *(_DWORD *)(a1 + 464) = 4;
    *(_QWORD *)(a1 + 456) = v41;
    goto LABEL_47;
  }
  v11 = *(_QWORD *)(a1 + 448);
  *(_DWORD *)(a1 + 464) = 8;
  *(_QWORD *)(a1 + 456) = v11;
LABEL_12:
  v12 = 16;
  v13 = 24;
  v14 = 64;
  v15 = _mm_cvtsi32_si128(8u);
  v16 = 56;
  v17 = 64;
  v18 = 24;
  v19 = 16;
  v20 = 24;
LABEL_13:
  *(_DWORD *)(a1 + 400) = v12;
  *(_DWORD *)(a1 + 404) = v12;
  *(_DWORD *)(a1 + 408) = v13;
  *(_DWORD *)(a1 + 416) = v19;
  *(_DWORD *)(a1 + 420) = v18;
  *(_DWORD *)(a1 + 384) = v14;
  *(_DWORD *)(a1 + 388) = v16;
  *(_DWORD *)(a1 + 392) = v17;
  *(_DWORD *)(a1 + 396) = v20;
  *(_DWORD *)(a1 + 412) = v20;
  *(__m128i *)(a1 + 424) = _mm_shuffle_epi32(v15, 0);
  if ( (int)sub_424D70(a1, (_BYTE *)(a1 + 524), 4, 1, v17) < 0
    || (int)sub_424D70(a1, (_BYTE *)(a1 + 528), *(int *)(a1 + 424), 1, v21) < 0
    || (int)sub_424D70(a1, (_BYTE *)(a1 + 536), *(int *)(a1 + 428), 1, v22) < 0
    || (int)sub_424D70(a1, (_BYTE *)(a1 + 544), *(int *)(a1 + 428), 1, v23) < 0
    || (int)sub_424D70(a1, (_BYTE *)(a1 + 552), 4, 1, v24) < 0
    || (int)sub_424D70(a1, (_BYTE *)(a1 + 556), 2, 1, v25) < 0
    || (int)sub_424D70(a1, (_BYTE *)(a1 + 558), 2, 1, v26) < 0
    || (int)sub_424D70(a1, (_BYTE *)(a1 + 560), 2, 1, v27) < 0
    || (int)sub_424D70(a1, (_BYTE *)(a1 + 562), 2, 1, v28) < 0
    || (int)sub_424D70(a1, (_BYTE *)(a1 + 564), 2, 1, v29) < 0
    || (int)sub_424D70(a1, (_BYTE *)(a1 + 566), 2, 1, v30) < 0
    || *(unsigned __int16 *)(a1 + 556) != *(_DWORD *)(a1 + 384)
    && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 2) )
  {
    goto LABEL_42;
  }
  v31 = *(_WORD *)(a1 + 560);
  v32 = *(_QWORD *)(a1 + 536);
  if ( (v31 == 0) == (v32 == 0) )
  {
    if ( v32 && *(unsigned __int16 *)(a1 + 558) != *(_DWORD *)(a1 + 388) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 4) )
        goto LABEL_42;
      v42 = *(_DWORD *)(a1 + 388);
      if ( *(unsigned __int16 *)(a1 + 558) < v42 )
        goto LABEL_42;
      *(_WORD *)(a1 + 558) = v42;
    }
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 496))(a1, 5, v31) )
      goto LABEL_42;
    *(_QWORD *)(a1 + 536) = 0;
    *(_WORD *)(a1 + 560) = 0;
  }
  v33 = *(unsigned __int16 *)(a1 + 564);
  v34 = *(_QWORD *)(a1 + 544);
  if ( (_WORD)v33 || !v34 )
    goto LABEL_31;
  if ( sub_47F740(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v34, 0) == -1
    || !(v35 = sub_425070((int *)a1, v55, v52, v53, v54))
    || v56 )
  {
    v33 = *(unsigned __int16 *)(a1 + 564);
    v34 = *(_QWORD *)(a1 + 544);
LABEL_31:
    v35 = 0;
    goto LABEL_32;
  }
  v33 = v57;
  v34 = *(_QWORD *)(a1 + 544);
LABEL_32:
  *(_DWORD *)(a1 + 568) = v33;
  v36 = v34;
  if ( ((_DWORD)v33 == 0) != (v34 == 0) )
  {
    v37 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(a1 + 496))(
            a1,
            7,
            v33,
            v34,
            *(_QWORD *)(a1 + 488) - *(_QWORD *)(a1 + 480));
    goto LABEL_34;
  }
  v45 = *(unsigned __int16 *)(a1 + 562);
  if ( !v34 )
  {
    v50 = *(_QWORD *)(a1 + 488) - *(_QWORD *)(a1 + 480);
    if ( v50 >= v45 * (unsigned __int64)(unsigned int)v33 )
      goto LABEL_36;
LABEL_63:
    v37 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned __int64))(a1 + 496))(
            a1,
            7,
            v33,
            v36,
            v50);
LABEL_34:
    if ( !v37 )
      goto LABEL_42;
    goto LABEL_35;
  }
  if ( (_DWORD)v45 == *(_DWORD *)(a1 + 392) )
  {
    v46 = (unsigned int)v33;
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 496))(
            a1,
            6,
            *(unsigned __int16 *)(a1 + 562))
      || *(unsigned __int16 *)(a1 + 562) < *(int *)(a1 + 392) )
    {
LABEL_35:
      *(_QWORD *)(a1 + 544) = 0;
      *(_WORD *)(a1 + 564) = 0;
      *(_DWORD *)(a1 + 568) = 0;
      goto LABEL_36;
    }
    v46 = *(unsigned int *)(a1 + 568);
    v36 = *(_QWORD *)(a1 + 544);
    v33 = v46;
  }
  v47 = v46 * *(unsigned __int16 *)(a1 + 562);
  v48 = __CFADD__(v36, v47);
  v49 = v36 + v47;
  v50 = *(_QWORD *)(a1 + 488) - *(_QWORD *)(a1 + 480);
  if ( v48 || v50 < v49 )
    goto LABEL_63;
  if ( v36 )
  {
    v51 = *(unsigned __int16 *)(a1 + 566);
    if ( (_WORD)v51 == 0xFFFF && v35 )
    {
      v51 = v58;
      if ( v58 )
      {
        *(_DWORD *)(a1 + 572) = v58;
      }
      else
      {
        *(_DWORD *)(a1 + 572) = 0xFFFF;
        v51 = 0xFFFF;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 572) = v51;
      if ( !v51 )
        goto LABEL_36;
    }
    if ( v51 >= (unsigned int)v33 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(a1 + 496))(
              a1,
              17,
              v51,
              (unsigned int)v33) )
        goto LABEL_42;
      *(_DWORD *)(a1 + 572) = 0;
    }
  }
LABEL_36:
  if ( !*(_QWORD *)(a1 + 536)
    || *(_WORD *)(a1 + 520) != 1
    || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 18) )
  {
    v38 = *(_WORD *)(a1 + 522);
    if ( v38 == 40 || v38 == 183 )
    {
      v43 = *(_QWORD *)(a1 + 600);
      if ( v43 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
      v44 = operator new(0x80u);
      *(_DWORD *)(v44 + 16) = 0;
      *(_QWORD *)(v44 + 32) = v44 + 16;
      *(_QWORD *)(v44 + 40) = v44 + 16;
      *(_QWORD *)(v44 + 80) = v44 + 64;
      *(_QWORD *)(v44 + 88) = v44 + 64;
      *(_QWORD *)v44 = &off_4C2350;
      *(_QWORD *)(v44 + 24) = 0;
      *(_QWORD *)(v44 + 48) = 0;
      *(_DWORD *)(v44 + 64) = 0;
      *(_QWORD *)(v44 + 72) = 0;
      *(_QWORD *)(v44 + 96) = 0;
      *(_QWORD *)(v44 + 104) = 0;
      *(_QWORD *)(v44 + 112) = 0;
      *(_WORD *)(v44 + 120) = 0;
      *(_BYTE *)(v44 + 122) = 0;
      *(_QWORD *)(a1 + 600) = v44;
    }
    else
    {
      v39 = (_QWORD *)operator new(8u);
      *(_QWORD *)(a1 + 600) = v39;
      *v39 = off_4C22D0;
    }
    goto LABEL_43;
  }
LABEL_42:
  v9 = 0;
LABEL_43:
  sub_47F740(*(_QWORD *)(a1 + 472), v6 + *(_QWORD *)(a1 + 480), 0);
  return v9;
}
// 425292: variable 'v7' is possibly undefined
// 4252B3: variable 'v8' is possibly undefined
// 4253BD: variable 'v21' is possibly undefined
// 4253E0: variable 'v22' is possibly undefined
// 425403: variable 'v23' is possibly undefined
// 425424: variable 'v24' is possibly undefined
// 425445: variable 'v25' is possibly undefined
// 425466: variable 'v26' is possibly undefined
// 425487: variable 'v27' is possibly undefined
// 4254A8: variable 'v28' is possibly undefined
// 4254C9: variable 'v29' is possibly undefined
// 4254EA: variable 'v30' is possibly undefined
// 425914: variable 'v52' is possibly undefined
// 425914: variable 'v53' is possibly undefined
// 425914: variable 'v54' is possibly undefined
// 4C22D0: using guessed type __int64 (__fastcall *off_4C22D0[4])();
// 4C2350: using guessed type __int64 (__fastcall *off_4C2350)();
