__int64 __fastcall sub_26CE90(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdi
  signed __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-40h]

  v5 = a5;
  if ( a2 )
  {
    v10 = j__qalloc_or_throw(64, (__int64)a2, a3, a4);
    v11 = *a2;
    *(_QWORD *)v10 = -1;
    v12 = v10;
    *(_DWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 12) = -1;
    *(_QWORD *)(v10 + 48) = 0;
    *(_DWORD *)(v10 + 56) = 0;
    sub_25AFF0(v10, v11);
    v13 = sub_26CC70(a1, v12, a2 + 1, a2[3], a3);
    if ( !v13 )
    {
      if ( v12 )
      {
        sub_255630(v12);
        clear_tinfo_t();
        j__qfree(v12);
      }
      return v13;
    }
    v14 = a1[1];
    v15 = *(_QWORD *)(v14 + 64);
    if ( *(_DWORD *)(v13 + 8) != 61 )
      return sub_269F60(v13, *(_QWORD *)(v14 + 64), *(_QWORD *)a4, *(_DWORD *)(a4 + 8), v5);
    v20 = sub_255A30(*(__int64 **)(v13 + 24));
    v21 = a2[3];
    v5 += v20;
    v22 = v5;
    v23 = *(_QWORD *)(*a1 + 24);
    if ( !v21 || !v5 || *(_QWORD *)(v23 + 16) / (unsigned __int64)v21 >= v5 )
    {
      v24 = v21 * v5;
      if ( *(_DWORD *)(v23 + 24) != 8 )
        v24 = (int)v24;
      v22 = v24 / v21;
      v5 = v24 / v21;
    }
    v25 = v22;
    sub_255630(v13);
    clear_tinfo_t();
    j__qfree(v13);
    v19 = *a1;
    v18 = 0;
    if ( v25 < 0 )
      goto LABEL_15;
  }
  else
  {
    v17 = a1[1];
    v18 = 0;
    v19 = *a1;
    v15 = *(_QWORD *)(v17 + 64);
    if ( a5 < 0 )
LABEL_15:
      v18 = *(_DWORD *)(*(_QWORD *)(v19 + 112) + 80LL);
  }
  return sub_240F50(v19, v5, v15, *(_QWORD *)a4, *(_DWORD *)(a4 + 8), 1u, v18);
}
