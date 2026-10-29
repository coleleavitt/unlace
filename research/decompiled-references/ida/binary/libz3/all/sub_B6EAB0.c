__int64 __fastcall sub_B6EAB0(__int64 a1, unsigned int *a2, __int64 a3, __m128 a4, __m128 a5, __m128 a6)
{
  char **v6; // rbx
  __int64 v7; // rdx
  _QWORD *exception; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  unsigned int v14; // ebp
  __int64 v15; // r12
  __int64 *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 *v20; // rcx
  __int64 v21; // rcx
  unsigned int *v22; // r12
  __int64 v23; // rdx
  char v24; // al
  __int64 v25; // rbp
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 *v30; // rcx
  unsigned int v31; // r14d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // r12d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // [rsp+0h] [rbp-68h] BYREF
  int v42; // [rsp+8h] [rbp-60h]
  __int64 v43; // [rsp+10h] [rbp-58h]
  __int64 v44; // [rsp+18h] [rbp-50h]
  unsigned int *v45[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( (unsigned __int8)sub_186AF30(a1, a2) )
  {
    exception = __cxa_allocate_exception(0x10u);
    sub_182AE00(exception, 101);
    *exception = &off_1C72BF8;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'smt::oom_exception, sub_B6F920);
  }
  v45[0] = a2;
  sub_B6E7E0((_QWORD *)a1, v45, a4, a5, a6);
  sub_B6DE20(
    (_QWORD *)a1,
    (__int64)a2,
    1u,
    *(double *)a4.m128_u64,
    a5,
    a6,
    v10,
    v11,
    v12,
    v41,
    v42,
    v43,
    v44,
    (__int64)v45[0],
    (__int64)v45[1],
    (__int64)v45[2]);
  result = sub_B645B0(a1, a2);
  v14 = result;
  if ( dword_1C7ED68 == (_DWORD)result )
  {
    sub_B725E0(&v41, a1, a3, 1);
    v25 = sub_180C100(a1 + 8400, 24);
    v26 = *(_QWORD **)(a1 + 8600);
    *(_BYTE *)(v25 + 8) = v42 & 3 | *(_BYTE *)(v25 + 8) & 0xFC;
    *(_QWORD *)v25 = off_1C57620;
    *(_QWORD *)(v25 + 16) = v43;
    if ( v26 )
    {
      v27 = *((_DWORD *)v26 - 1);
      if ( v27 == *((_DWORD *)v26 - 2) )
      {
        v35 = (3 * v27 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * v27 + 8 >= (unsigned int)v36 || v27 >= v35 )
          goto LABEL_25;
        v37 = (unsigned int *)sub_186B300(v26 - 1, v36);
        v38 = v37[1];
        v26 = v37 + 2;
        *v37 = v35;
        *(_QWORD *)(a1 + 8600) = v37 + 2;
        LODWORD(v37) = v38;
        v30 = &v26[v38];
        v29 = (_DWORD)v37 + 1;
      }
      else
      {
        v28 = v27;
        v29 = v27 + 1;
        v30 = &v26[v28];
      }
    }
    else
    {
      v40 = (_QWORD *)sub_186B270(0x18u);
      v26 = v40 + 1;
      *v40 = 2;
      v29 = 1;
      *(_QWORD *)(a1 + 8600) = v26;
      v30 = v26;
    }
    *v30 = v25;
    *((_DWORD *)v26 - 1) = v29;
    v45[0] = (unsigned int *)(v25 | 3);
    return sub_8E8670(a1, (__int64 *)v45, -2);
  }
  if ( dword_1C7ED6C == (_DWORD)result )
    return result;
  sub_B725E0(&v41, a1, a3, 1);
  v15 = sub_180C100(a1 + 8400, 24);
  v16 = *(__int64 **)(a1 + 8600);
  *(_BYTE *)(v15 + 8) = v42 & 3 | *(_BYTE *)(v15 + 8) & 0xFC;
  *(_QWORD *)v15 = off_1C57620;
  *(_QWORD *)(v15 + 16) = v43;
  if ( !v16 )
  {
    v39 = (_QWORD *)sub_186B270(0x18u);
    v16 = v39 + 1;
    *v39 = 2;
    v19 = 1;
    *(_QWORD *)(a1 + 8600) = v16;
    v20 = v16;
    goto LABEL_7;
  }
  v17 = *((_DWORD *)v16 - 1);
  if ( v17 == *((_DWORD *)v16 - 2) )
  {
    v31 = (3 * v17 + 1) >> 1;
    v32 = 8 * v31 + 8;
    if ( 8 * v17 + 8 < (unsigned int)v32 && v17 < v31 )
    {
      v33 = (unsigned int *)sub_186B300(v16 - 1, v32);
      v34 = v33[1];
      v16 = (__int64 *)(v33 + 2);
      *v33 = v31;
      *(_QWORD *)(a1 + 8600) = v33 + 2;
      LODWORD(v33) = v34;
      v20 = &v16[v34];
      v19 = (_DWORD)v33 + 1;
      goto LABEL_7;
    }
LABEL_25:
    v6 = (char **)__cxa_allocate_exception(0x28u);
    sub_14E142((__int64 *)v45, "Overflow encountered when expanding vector", v7);
    *v6 = (char *)off_1C63128;
    sub_2333C0(v6 + 1, v45);
    sub_233E40((__int64)v45);
    __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v18 = v17;
  v19 = v17 + 1;
  v20 = &v16[v18];
LABEL_7:
  *v20 = v15;
  v21 = v15;
  *((_DWORD *)v16 - 1) = v19;
  v22 = (unsigned int *)(v15 | 3);
  sub_AEBC70((_QWORD *)(a1 + 7536), v14, 0, v21);
  v23 = *(_QWORD *)(a1 + 8848);
  v45[0] = v22;
  v24 = *(_BYTE *)(v23 + v14);
  if ( v24 == -1 )
  {
    sub_8E8670(a1, (__int64 *)v45, v14 ^ 1);
  }
  else if ( !v24 )
  {
    sub_8F28B0(a1, v14, (__int64)v22, 0);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 48LL))(
    *(_QWORD *)(a1 + 7488),
    *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (v14 >> 1)));
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 7488) + 64LL))(*(_QWORD *)(a1 + 7488));
}

