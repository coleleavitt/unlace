/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100069B50
// Address: 0x0000000100069B50

//----- (0000000100069B50) ----------------------------------------------------
__int64 __fastcall sub_100069B50(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // r13
  __int64 *v5; // rax
  __int64 **v6; // rbx
  __int64 **v7; // r15
  __int64 *v8; // r14
  __int64 v9; // rax
  __int64 *v10; // rsi
  __int64 *v12; // [rsp+10h] [rbp-30h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v4 = *(_QWORD *)(a1 + 88);
  v5 = *(__int64 **)(v4 + 16);
  if ( v5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = (__int64 **)v5;
        if ( v5[4] <= (unsigned __int64)a2 )
          break;
        v5 = (__int64 *)*v5;
        v6 = v7;
        if ( !*v7 )
          goto LABEL_8;
      }
      if ( v5[4] >= (unsigned __int64)a2 )
        break;
      v5 = (__int64 *)v5[1];
      if ( !v5 )
      {
        v6 = v7 + 1;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v6 = (__int64 **)(v4 + 16);
    v7 = (__int64 **)(v4 + 16);
LABEL_8:
    v12 = a3;
    v8 = (__int64 *)v7;
    v7 = (__int64 **)operator new(0x30u);
    v7[4] = a2;
    v7[5] = nullptr;
    *(_OWORD *)v7 = 0;
    v7[2] = v8;
    *v6 = (__int64 *)v7;
    v9 = **(_QWORD **)(v4 + 8);
    v10 = (__int64 *)v7;
    if ( v9 )
    {
      *(_QWORD *)(v4 + 8) = v9;
      v10 = *v6;
    }
    sub_10000C830(*(__int64 **)(v4 + 16), v10);
    ++*(_QWORD *)(v4 + 24);
    a3 = v12;
  }
  v7[5] = a3;
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88));
}
