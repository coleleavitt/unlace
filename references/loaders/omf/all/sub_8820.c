__int64 __fastcall sub_8820(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  int *v9; // rdx
  int *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r12

  result = *(unsigned __int8 *)(a2 + 65);
  *(_OWORD *)(a2 + 16) = -1;
  if ( (_BYTE)result == 1 )
  {
    v13 = netnode_altval(qword_14520, -3, *(unsigned __int8 *)(a2 + 56));
    result = getseg(v13);
    if ( result )
    {
      result = *(_QWORD *)(result + 48);
      *(_QWORD *)(a2 + 24) = 0;
      *(_QWORD *)(a2 + 16) = result;
    }
  }
  else if ( (unsigned __int8)result <= 1u )
  {
    v7 = sub_8780(*(_QWORD *)(a2 + 56));
    v8 = *(_QWORD *)(a2 + 56);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(v7 + 48);
    v9 = (int *)qword_14550;
    if ( !qword_14550 )
      goto LABEL_15;
    v10 = &dword_14548;
    do
    {
      while ( 1 )
      {
        v11 = *((_QWORD *)v9 + 2);
        v12 = *((_QWORD *)v9 + 3);
        if ( *((_QWORD *)v9 + 4) >= v8 )
          break;
        v9 = *((int **)v9 + 3);
        if ( !v12 )
          goto LABEL_13;
      }
      v10 = v9;
      v9 = *((int **)v9 + 2);
    }
    while ( v11 );
LABEL_13:
    if ( v10 == &dword_14548 || v8 < *((_QWORD *)v10 + 4) || (v14 = *((_QWORD *)v10 + 5), v14 == -1) )
LABEL_15:
      sub_52E0("get_target");
    result = get_segm_base(v7, v12, v9, v11);
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 16) & (v14 - result);
  }
  else if ( (_BYTE)result == 2 )
  {
    v4 = sub_5380(*(_DWORD *)(a2 + 56) + word_143AA);
    result = getseg(v4);
    if ( result )
    {
      v6 = *(_QWORD *)(result + 48);
      *(_QWORD *)(a2 + 16) = v6;
      result = get_segm_base(result, a2, v6, v5);
      *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 16) & (v4 - result);
    }
    *(_DWORD *)(a2 + 4) |= 2u;
  }
  else if ( (_BYTE)result == 3 )
  {
    sub_52E0("tmethod");
  }
  return result;
}
