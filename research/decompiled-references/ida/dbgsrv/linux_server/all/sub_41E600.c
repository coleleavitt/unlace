/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41E600
// Address: 0x000000000041E600

//----- (000000000041E600) ----------------------------------------------------
__int64 __fastcall sub_41E600(
        __int64 a1,
        char **a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  int v15; // ebp
  char *v16; // r15
  unsigned __int64 v17; // r13
  __int64 (__fastcall *v18)(__int64, __off64_t, unsigned __int64 *, int, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  __int64 v19; // rax
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __int64 (__fastcall *v22)(__int64, __int64, char *, unsigned int, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __m128); // rax
  __int64 v23; // rax
  __m128i *v25; // rax
  __int64 v26; // r12
  _QWORD *v27; // r14
  _QWORD *v28; // rdi
  _QWORD *v29; // rbp
  unsigned __int64 v30; // rax
  _QWORD *v31; // rdx
  bool v32; // al
  _QWORD *i; // rax
  __int64 v34; // rsi
  __int64 v35; // rcx
  _QWORD *v36; // rdi
  void *v37; // rax
  __int64 v38; // [rsp+8h] [rbp-60h] BYREF
  __m128i v39; // [rsp+10h] [rbp-58h] BYREF
  __int64 v40; // [rsp+20h] [rbp-48h]
  unsigned __int64 v41; // [rsp+28h] [rbp-40h]

  v38 = a4;
  v41 = __readfsqword(0x28u);
  v15 = a5;
  if ( a3 != 4 )
  {
    v17 = v38;
    return (unsigned __int8)sub_46D300((_DWORD *)a1, a3, v17, v15);
  }
  if ( a2 && (int)sub_4573E0((_BYTE *)a1, a2, v38, a5) < 0 )
    return 4294967294LL;
  v16 = *(char **)(a1 + 488);
  if ( v15 < 0 )
    v15 = *(_DWORD *)(a1 + 496);
  if ( v15 <= 0 || *(_QWORD *)(a1 + 496) < (unsigned __int64)v15 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(30066);
LABEL_54:
    BUG();
  }
  v17 = v38;
  LOBYTE(v40) = v15;
  HIDWORD(v40) = 0;
  v39.m128i_i64[0] = v38;
  if ( (unsigned __int8)v15 > 7u )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(1796);
    goto LABEL_54;
  }
  v18 = *(__int64 (__fastcall **)(__int64, __off64_t, unsigned __int64 *, int, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(*(_QWORD *)a1 + 288LL);
  if ( v18 == sub_41D510 )
    v19 = (int)sub_41D160(a1, 0xFFFFFFFF, v38, &v39.m128i_u64[1], v15, 1, a6, a7, a8, a9, a10, a11, a12, a13);
  else
    v19 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *, _QWORD, _QWORD))v18)(
            a1,
            v38,
            &v39.m128i_u64[1],
            v15,
            0);
  if ( !v19 )
    return (unsigned __int8)sub_46D300((_DWORD *)a1, a3, v17, v15);
  v22 = *(__int64 (__fastcall **)(__int64, __int64, char *, unsigned int, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __m128))(*(_QWORD *)a1 + 296LL);
  if ( v22 == sub_41E440 )
  {
    if ( *(_BYTE *)(a1 + 1349) || *(_DWORD *)(a1 + 1340) == -1 )
      return (unsigned __int8)sub_46D300((_DWORD *)a1, a3, v17, v15);
    v23 = (int)sub_41E0D0(a1, 0xFFFFFFFF, v38, v16, (unsigned int)v15, 1, a6, a7, a8, a9, v20, v21, a12, a13);
  }
  else
  {
    v23 = ((__int64 (__fastcall *)(__int64, __int64, char *, _QWORD, _QWORD))v22)(a1, v38, v16, v15, 0);
  }
  if ( v15 != v23 )
    return (unsigned __int8)sub_46D300((_DWORD *)a1, a3, v17, v15);
  v25 = (__m128i *)sub_417000((_QWORD *)(a1 + 512), (unsigned __int64 *)&v38);
  v26 = a1 + 1360;
  v27 = (_QWORD *)(a1 + 1360);
  *v25 = _mm_load_si128(&v39);
  v25[1].m128i_i64[0] = v40;
  v28 = *(_QWORD **)(a1 + 1368);
  if ( v28 )
  {
    v29 = *(_QWORD **)(a1 + 1368);
    while ( 1 )
    {
      v30 = v29[4];
      if ( v30 < v17 )
      {
        v29 = (_QWORD *)v29[3];
      }
      else
      {
        v31 = (_QWORD *)v29[2];
        if ( v17 >= v30 )
        {
          for ( i = (_QWORD *)v29[3]; i; i = (_QWORD *)i[2] )
          {
            while ( 1 )
            {
              v34 = i[3];
              if ( v17 < i[4] )
                break;
              i = (_QWORD *)i[3];
              if ( !v34 )
                goto LABEL_38;
            }
            v27 = i;
          }
LABEL_38:
          while ( v31 )
          {
            while ( 1 )
            {
              v35 = v31[3];
              if ( v31[4] >= v17 )
                break;
              v31 = (_QWORD *)v31[3];
              if ( !v35 )
                goto LABEL_41;
            }
            v29 = v31;
            v31 = (_QWORD *)v31[2];
          }
LABEL_41:
          if ( *(_QWORD **)(a1 + 1376) == v29 && v27 == (_QWORD *)v26 )
            goto LABEL_32;
          while ( v27 != v29 )
          {
            v36 = v29;
            v29 = (_QWORD *)std::_Rb_tree_increment(v29);
            v37 = (void *)std::_Rb_tree_rebalance_for_erase(v36, a1 + 1360);
            operator delete(v37, 0x28u);
            --*(_QWORD *)(a1 + 1392);
          }
          return 1;
        }
        v27 = v29;
        v29 = (_QWORD *)v29[2];
      }
      if ( !v29 )
      {
        v32 = v27 == (_QWORD *)v26;
        goto LABEL_30;
      }
    }
  }
  v32 = 1;
LABEL_30:
  if ( *(_QWORD **)(a1 + 1376) == v27 && v32 )
  {
LABEL_32:
    sub_40FDA0(v28);
    *(_QWORD *)(a1 + 1376) = v26;
    *(_QWORD *)(a1 + 1368) = 0;
    *(_QWORD *)(a1 + 1384) = v26;
    *(_QWORD *)(a1 + 1392) = 0;
  }
  return 1;
}
// 41E6C9: variable 'a10' is possibly undefined
// 41E6C9: variable 'a11' is possibly undefined
// 41E718: variable 'v20' is possibly undefined
// 41E718: variable 'v21' is possibly undefined
// 4053F0: using guessed type __int64 __fastcall std::_Rb_tree_rebalance_for_erase(_QWORD, _QWORD);
// 405760: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 4C94E1: using guessed type char byte_4C94E1;
