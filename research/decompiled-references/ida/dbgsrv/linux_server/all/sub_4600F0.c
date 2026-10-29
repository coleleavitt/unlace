/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4600F0
// Address: 0x00000000004600F0

//----- (00000000004600F0) ----------------------------------------------------
__int64 __fastcall sub_4600F0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // r15d
  __int64 v11; // rbp
  _QWORD *v12; // rdi
  _QWORD *v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // r13
  __int64 v16; // r12
  unsigned int v17; // r14d
  __int64 (__fastcall *v18)(_QWORD *); // rax
  char *v19; // rdi
  __int64 i; // r15
  char *v21; // rbp
  void *v22; // rdi
  void *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __int64 v30; // rdi
  bool v31; // zf
  __int64 v32; // rbp
  void *v33; // rax
  void (__fastcall *v34)(_QWORD *); // rax
  __int64 v36; // [rsp+0h] [rbp-48h]
  __int64 v37; // [rsp+8h] [rbp-40h]

  v10 = a2;
  v36 = a1;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL) + 16LL))(*(_QWORD *)(*(_QWORD *)(a1 + 448)
                                                                                                  + 88LL));
  v11 = *(_QWORD *)(a1 + 448);
  v12 = *(_QWORD **)(v11 + 88);
  v13 = (_QWORD *)v12[4];
  if ( v13 == v12 + 2 )
  {
LABEL_25:
    v17 = 0;
    goto LABEL_26;
  }
  while ( 1 )
  {
    v15 = (_QWORD *)v13[4];
    if ( (_QWORD *)v36 == v15 )
      goto LABEL_3;
    v16 = v15[55];
    v17 = *(unsigned __int8 *)(v16 + 860);
    if ( !(_BYTE)v17 || *(_DWORD *)(v16 + 656) != v10 )
      goto LABEL_3;
    v18 = *(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)v16 + 512LL);
    if ( v18 == sub_40C400 )
      break;
    a2 = v10;
    if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))v18)(v15[55], v10) )
      goto LABEL_17;
    v11 = *(_QWORD *)(v36 + 448);
LABEL_3:
    v14 = std::_Rb_tree_increment(v13);
    v12 = *(_QWORD **)(v11 + 88);
    v13 = (_QWORD *)v14;
    if ( (_QWORD *)v14 == v12 + 2 )
      goto LABEL_25;
  }
  v19 = *(char **)(v16 + 456);
  if ( v19 )
  {
    v37 = *(_QWORD *)(v16 + 464);
    if ( v37 )
    {
      for ( i = 0; i != v37; ++i )
      {
        v21 = &v19[80 * i];
        v22 = *((void **)v21 + 5);
        if ( v22 )
        {
          *((_QWORD *)v21 + 6) = 0;
          j__free(v22);
        }
        v23 = *((void **)v21 + 2);
        if ( v23 )
        {
          *((_QWORD *)v21 + 3) = 0;
          j__free(v23);
        }
        v19 = *(char **)(v16 + 456);
      }
    }
    *(_QWORD *)(v16 + 464) = 0;
    j__free(v19);
    *(_QWORD *)(v16 + 456) = 0;
    *(_QWORD *)(v16 + 472) = 0;
  }
LABEL_17:
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v36 + 440) + 112LL))(*(_QWORD *)(v36 + 440));
  v30 = *(_QWORD *)(v36 + 440);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 40LL))(v30);
  v31 = *(_BYTE *)(v36 + 184) == 0;
  *(_QWORD *)(v36 + 440) = v16;
  if ( !v31 )
    sub_410EA0(
      (int)"reusing previously broken debugging session\n",
      a2,
      v24,
      v25,
      v26,
      v27,
      a3,
      a4,
      a5,
      a6,
      v28,
      v29,
      a9,
      a10,
      v36);
  sub_46D7D0((__int64)v15);
  v32 = *(_QWORD *)(*(_QWORD *)(v36 + 448) + 88LL);
  v33 = (void *)std::_Rb_tree_rebalance_for_erase(v13, v32 + 16);
  operator delete(v33, 0x30u);
  --*(_QWORD *)(v32 + 48);
  if ( v15 )
  {
    v34 = *(void (__fastcall **)(_QWORD *))(*v15 + 8LL);
    if ( v34 == sub_45B930 )
    {
      sub_45B860(v15);
      operator delete(v15, 0x1C8u);
    }
    else
    {
      v34(v15);
    }
  }
  *(_BYTE *)(v16 + 860) = 0;
  v12 = *(_QWORD **)(*(_QWORD *)(v36 + 448) + 88LL);
LABEL_26:
  (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
  return v17;
}
// 460349: variable 'v24' is possibly undefined
// 460349: variable 'v25' is possibly undefined
// 460349: variable 'v26' is possibly undefined
// 460349: variable 'v27' is possibly undefined
// 460349: variable 'v28' is possibly undefined
// 460349: variable 'v29' is possibly undefined
// 46028E: variable 'v36' is possibly undefined
// 4053F0: using guessed type __int64 __fastcall std::_Rb_tree_rebalance_for_erase(_QWORD, _QWORD);
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
