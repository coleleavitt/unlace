__int64 __fastcall serialize_tinfo(__int64 *a1, __int64 a2, void *a3, unsigned __int64 *a4, unsigned int a5)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  __int64 v11; // rax
  __int64 *v14; // r15
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-40h]

  v5 = *a4;
  if ( *a4 <= 0xFF )
  {
    if ( (v5 & 0xF) > 9 )
    {
      if ( !under_debugger )
        interr(933);
    }
    else
    {
      if ( (_BYTE)v5 )
      {
        v6 = a1[1];
        if ( v6 )
        {
          v9 = v6 + 1;
          v8 = a1[1];
          v7 = *a1;
          --v6;
          if ( a1[2] >= v9 )
            goto LABEL_6;
        }
        else
        {
          v7 = *a1;
          v8 = 1;
          v9 = 2;
          if ( (unsigned __int64)a1[2] >= 2 )
          {
LABEL_6:
            a1[1] = v9;
            *(_BYTE *)(v7 + v6) = v5;
            *(_BYTE *)(*a1 + v8) = 0;
            return 1;
          }
        }
        v11 = qvector_reserve(a1, v7, v9, 1);
        *a1 = v11;
        v7 = v11;
        goto LABEL_6;
      }
      if ( !under_debugger )
        interr(984);
    }
    BUG();
  }
  v14 = *(__int64 **)(qword_2CCB598 + 1672);
  v16 = *(_QWORD *)(*v14 + 1824);
  sub_53EAE0(v16, *a4);
  v15 = sub_5340D0(v16, v5);
  return sub_53F4F0(v15, *v14, a1, a2, a3, a5, v5, nullptr);
}
