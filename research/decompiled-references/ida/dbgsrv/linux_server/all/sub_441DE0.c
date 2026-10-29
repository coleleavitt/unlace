/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441DE0
// Address: 0x0000000000441DE0

//----- (0000000000441DE0) ----------------------------------------------------
void __fastcall sub_441DE0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  __int64 v13; // rbx
  const char *v14; // r14
  const char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rax
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 v21; // rbp
  size_t v22; // r15
  void *v23; // rax
  const char *v24; // rsi
  unsigned int v25; // [rsp+4h] [rbp-44h]

  if ( a3 != a2 )
  {
    v13 = a2;
    v14 = (const char *)(a1 + 1);
    while ( 1 )
    {
      v15 = sub_43DAF0(a1, v14, v13 + 32, a4, a5);
      v17 = v16;
      if ( v16 )
        break;
LABEL_4:
      v13 = std::_Rb_tree_increment(v13);
      if ( v13 == a3 )
        return;
    }
    LOBYTE(v25) = v14 == (const char *)v16 || v15 != nullptr;
    if ( (_BYTE)v25 )
    {
LABEL_7:
      v18 = operator new(0x58u);
      *(_QWORD *)(v18 + 32) = 0;
      v21 = v18;
      *(_OWORD *)(v18 + 40) = 0;
      v22 = *(_QWORD *)(v13 + 40);
      if ( v22 )
      {
        v23 = sub_4814F0(*(_QWORD *)(v13 + 40));
        *(_QWORD *)(v21 + 32) = v23;
        *(_QWORD *)(v21 + 48) = v22;
        memcpy(v23, *(const void **)(v13 + 32), v22);
        *(_QWORD *)(v21 + 40) = v22;
      }
      *(_BYTE *)(v21 + 56) = 2;
      *(_QWORD *)(v21 + 80) = 0;
      *(_OWORD *)(v21 + 64) = 0;
      sub_4418C0((unsigned __int8 *)(v21 + 56), (unsigned __int8 *)(v13 + 56), 0.0, a7, a8, a9, v19, v20, a12, a13);
      std::_Rb_tree_insert_and_rebalance((unsigned __int8)v25, v21, v17, v14);
      ++a1[5];
      goto LABEL_4;
    }
    v24 = s1;
    if ( *(_QWORD *)(v16 + 40) )
    {
      v24 = *(const char **)(v16 + 32);
      if ( !*(_QWORD *)(v13 + 40) )
        goto LABEL_12;
    }
    else if ( !*(_QWORD *)(v13 + 40) )
    {
LABEL_12:
      v25 = (unsigned int)strcmp(s1, v24) >> 31;
      goto LABEL_7;
    }
    v25 = (unsigned int)strcmp(*(const char **)(v13 + 32), v24) >> 31;
    goto LABEL_7;
  }
}
// 441E2C: variable 'v19' is possibly undefined
// 441E2C: variable 'v20' is possibly undefined
// 441E6C: variable 'a4' is possibly undefined
// 441E6C: variable 'a5' is possibly undefined
// 441E71: variable 'v16' is possibly undefined
// 4050E0: using guessed type __int64 __fastcall std::_Rb_tree_insert_and_rebalance(_QWORD, _QWORD, _QWORD, _QWORD);
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
