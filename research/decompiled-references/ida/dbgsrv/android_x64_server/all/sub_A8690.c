/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A8690
// Address: 0x00000000000A8690

//----- (00000000000A8690) ----------------------------------------------------
__int64 __fastcall sub_A8690(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  void **v5; // rbp
  void **v6; // r14
  bool v7; // cf
  void **v8; // rax
  _QWORD *v9; // r12
  __int64 v10; // rax
  __int64 *v11; // rsi
  __int64 v13; // [rsp+0h] [rbp-38h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v4 = *(_QWORD *)(a1 + 88);
  v5 = *(void ***)(v4 + 16);
  v13 = a3;
  if ( v5 )
  {
    v6 = (void **)(v4 + 16);
    v7 = (unsigned __int64)v5[4] < a2;
    if ( (unsigned __int64)v5[4] <= a2 )
      goto LABEL_7;
    while ( 1 )
    {
      v8 = (void **)*v5;
      v6 = v5;
      if ( !*v5 )
        break;
      while ( 1 )
      {
        v5 = v8;
        v7 = (unsigned __int64)v8[4] < a2;
        if ( (unsigned __int64)v8[4] > a2 )
          break;
LABEL_7:
        if ( v7 )
        {
          v6 = v5 + 1;
          v8 = (void **)v5[1];
          if ( v8 )
            continue;
        }
        goto LABEL_12;
      }
    }
  }
  else
  {
    v5 = (void **)(v4 + 16);
  }
  v6 = v5;
LABEL_12:
  v9 = *v6;
  if ( !*v6 )
  {
    v9 = operator new(0x30u);
    v9[4] = a2;
    v9[5] = 0;
    *(_OWORD *)v9 = 0;
    v9[2] = v5;
    *v6 = v9;
    v10 = **(_QWORD **)(v4 + 8);
    if ( v10 )
    {
      *(_QWORD *)(v4 + 8) = v10;
      v11 = (__int64 *)*v6;
    }
    else
    {
      v11 = v9;
    }
    sub_4A450(*(__int64 **)(v4 + 16), v11);
    ++*(_QWORD *)(v4 + 24);
  }
  v9[5] = v13;
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88));
}
