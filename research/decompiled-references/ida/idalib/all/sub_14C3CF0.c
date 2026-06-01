__int64 __fastcall sub_14C3CF0(__int64 a1, unsigned int *a2, _BYTE *a3, __int64 *a4, _DWORD *a5, __m128i a6, __m128 a7)
{
  bool v10; // zf
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  char v14; // dl
  __int16 v15; // cx
  unsigned __int16 v16; // cx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rbx
  int v22; // r13d
  __int64 v23; // rax
  unsigned int v24; // r14d
  int v25; // eax
  __int64 v26; // rax
  unsigned __int16 v27; // bp
  char v28; // al
  __int64 v29; // rsi
  __int64 v30; // rax
  size_t v31; // rax
  int v32; // r9d
  size_t v33; // rax
  int v34; // [rsp+Ch] [rbp-CBCh]
  int v35; // [rsp+Ch] [rbp-CBCh]
  __int64 v36; // [rsp+18h] [rbp-CB0h] BYREF
  _DWORD v37[6]; // [rsp+20h] [rbp-CA8h] BYREF
  void *v38; // [rsp+38h] [rbp-C90h]
  __int64 v39; // [rsp+48h] [rbp-C80h] BYREF
  _DWORD v40[6]; // [rsp+60h] [rbp-C68h] BYREF
  void *v41; // [rsp+78h] [rbp-C50h]
  __int64 v42; // [rsp+88h] [rbp-C40h] BYREF
  unsigned __int8 *v43[10]; // [rsp+A0h] [rbp-C28h] BYREF
  int v44[10]; // [rsp+F0h] [rbp-BD8h] BYREF
  void *v45; // [rsp+118h] [rbp-BB0h]
  __int64 v46; // [rsp+128h] [rbp-BA0h] BYREF
  __int64 v47; // [rsp+138h] [rbp-B90h] BYREF
  void *ptr; // [rsp+140h] [rbp-B88h]
  __int64 v49; // [rsp+150h] [rbp-B78h] BYREF
  void *v50; // [rsp+170h] [rbp-B58h]
  int v51; // [rsp+17Ch] [rbp-B4Ch]
  unsigned __int8 *v52[341]; // [rsp+220h] [rbp-AA8h] BYREF

  v10 = *(_WORD *)(a1 + 32) == 22;
  LODWORD(v11) = *((unsigned __int16 *)a2 + 8);
  v36 = 0;
  if ( v10 )
  {
    v22 = *(_DWORD *)(a1 + 16);
    v44[0] = 4;
    LODWORD(v52[0]) = 0;
    v23 = sub_14C2860(a1, v44, 1, (unsigned __int16)(v11 - 179) > 1u, 2, a4, a6, a7, (unsigned int *)v52);
    *a5 = v22;
    v36 = v23;
    a5[1] = v52[0];
    if ( v44[0] == 4 )
    {
      *a3 = 1;
      return 0;
    }
    if ( ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0
       || (unsigned __int16)(*((_WORD *)a2 + 8) - 179) > 1u)
      && v36 != 1 )
    {
      v36 = sub_14BFE70(a1, v36 & 0xFFFFFFFFFFFFFFFELL, a6);
    }
    goto LABEL_18;
  }
  v12 = (unsigned int)(v11 - 100);
  if ( (unsigned __int16)(v11 - 100) <= 0x3Bu )
  {
    v13 = 0x800000000001003LL;
    if ( !_bittest64(&v13, v12) )
    {
      *a3 = 0;
      v14 = (_WORD)v11 == 188;
LABEL_12:
      v11 = (0x800000002001003uLL >> v12) & 1;
      v14 |= v11;
LABEL_13:
      if ( v14 )
      {
        v15 = *(_WORD *)(a1 + 32);
        LOBYTE(v11) = v15 == 188;
        v16 = v15 - 100;
        if ( v16 <= 0x3Bu )
          LODWORD(v11) = (0x800000002001003uLL >> v16) & 1 | v11;
        if ( (_BYTE)v11 )
        {
          v17 = *(_QWORD *)(a1 + 96);
          v18 = *(unsigned int *)(a1 + 16);
          v52[0] = (unsigned __int8 *)&v36;
          v52[1] = (unsigned __int8 *)a1;
          sub_15F0FC0(v17, v18, sub_14BDAA0, v52);
          goto LABEL_18;
        }
      }
LABEL_9:
      v36 = sub_14BDA20(a1, 1, 0, 0, 0, nullptr, a6);
LABEL_18:
      *a3 = 0;
      return v36;
    }
  }
  else if ( (_WORD)v11 != 188 )
  {
    goto LABEL_7;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) == 0 )
  {
    if ( !sub_147F1B0(a1) )
      goto LABEL_6;
LABEL_27:
    sub_147A4A0((__int64)v44, a1 + 504);
    sub_148B330(a1, (__int64)v44, 0, 3u, 0, a6, a7);
    if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
    {
      qword_2CD8AE0[0] = 0;
      qword_2CD8AE0[1] = &qword_2CD8AE0[3];
      qword_2CD8AE0[2] = 0x200000000LL;
      __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
      __cxa_guard_release(&qword_2CD8AC8);
    }
    sub_147A650((__int64)v52, (__int64)v44, (__int64)qword_2CD8AE0, 5);
    sub_147E3E0(a1, (__int64)v52);
    v24 = sub_13DC060(
            *a2,
            0,
            *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
            a6,
            *(double *)a7.m128_u64);
    v25 = sub_13DC060(
            *(_DWORD *)(a1 + 40),
            0,
            *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
            a6,
            *(double *)a7.m128_u64);
    if ( v25 && v24 )
    {
      v34 = v25;
      sub_1564820(v43, a1, v24, 1634);
      v30 = sub_10CBF50(*((_WORD *)a2 + 8));
      sub_AE9DF0(v43, v30, 1u);
      v31 = j__strlen("(");
      sub_9EC740((__int64)v37, v24, "(", v31, 0);
      v32 = v34;
      if ( v37[0] && v37[1] )
      {
        sub_14B8100((__int64 *)v43, (unsigned __int64)v37);
        v32 = v34;
      }
      v35 = v32;
      v33 = j__strlen(")");
      sub_9EC740((__int64)v40, v35, ")", v33, 0);
      if ( v40[0] && v40[1] )
        sub_14B8100((__int64 *)v43, (unsigned __int64)v40);
      if ( v41 != &v42 )
        operator delete(v41);
      if ( v38 != &v39 )
        operator delete(v38);
      sub_AEA040((__int64)v43);
    }
    else
    {
      sub_1564820(v43, a1, *a2, 1634);
      v26 = sub_10CBF50(*((_WORD *)a2 + 8));
      sub_AE9DF0(v43, v26, 1u);
      sub_AEA040((__int64)v43);
    }
    *a3 = 1;
    v19 = 0;
    sub_147A7A0((char *)v52);
    if ( v51 )
      free(v50);
    sub_15DCED0(v47, &v47);
    if ( ptr != &v49 )
      free(ptr);
    if ( v45 != &v46 )
      free(v45);
    return v19;
  }
  if ( (unsigned __int8)sub_15612F0(a1, 1, v52) )
    goto LABEL_27;
LABEL_6:
  LODWORD(v11) = *((unsigned __int16 *)a2 + 8);
LABEL_7:
  *a3 = 0;
  if ( (unsigned __int16)(v11 - 179) > 1u )
  {
    LOBYTE(v12) = v11 - 100;
    v14 = (_WORD)v11 == 188;
    if ( (unsigned __int16)(v11 - 100) > 0x3Bu )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0 )
    goto LABEL_9;
  sub_1564840(v52, a1, a1 + 16, 15);
  v27 = *((_WORD *)a2 + 8);
  v28 = sub_141A630(v27);
  if ( v27 == 1 || v28 )
    v29 = 0;
  else
    v29 = *((_QWORD *)a2 + 1);
  v19 = 1;
  sub_AE9DF0(v52, v29, 5u);
  sub_AE9DF0(v52, 22, 4u);
  sub_AEA040((__int64)v52);
  return v19;
}
