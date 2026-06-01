__int64 __fastcall sub_168130(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v6; // r12
  __int64 v7; // rsi
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __int64 v11; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a2 == 1 )
  {
    sub_94440((__int64 *)a1);
    if ( a4 )
      get_ea_name();
  }
  else
  {
    if ( a2 != 2 )
    {
      if ( *(_QWORD *)(a3 + 8) == -1 )
        return a1;
      goto LABEL_4;
    }
    sub_94440((__int64 *)a1);
  }
  if ( *(_QWORD *)(a3 + 8) == -1 )
    return a1;
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    v9 = v6 + 11;
    v8 = v6 + 12;
    v7 = *(_QWORD *)a1;
    --v6;
    if ( *(_QWORD *)(a1 + 16) >= v8 )
      goto LABEL_11;
LABEL_15:
    v11 = qvector_reserve();
    *(_QWORD *)a1 = v11;
    v7 = v11;
    goto LABEL_11;
  }
  v7 = *(_QWORD *)a1;
  v8 = 13;
  v9 = 12;
  if ( *(_QWORD *)(a1 + 16) < 0xDu )
    goto LABEL_15;
LABEL_11:
  *(_QWORD *)(a1 + 8) = v8;
  *(_BYTE *)(v7 + v9) = 0;
  qmemcpy((void *)(*(_QWORD *)a1 + v6), " defined at ", 12);
LABEL_4:
  sub_96630((__int64 *)a1);
  if ( *(_WORD *)(a3 + 16) )
  {
    get_ph();
    sub_96630((__int64 *)a1);
  }
  return a1;
}

