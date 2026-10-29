__int64 __fastcall sub_5400A0(__int64 *a1, __int64 *a2, __int64 a3, void *a4, unsigned __int64 *a5, unsigned int a6)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // r14
  unsigned __int64 v11; // r13
  __int64 v13; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-40h]

  v7 = *a5;
  if ( *a5 <= 0xFF )
  {
    if ( (v7 & 0xF) > 9 )
    {
      if ( !under_debugger )
        interr(933);
    }
    else
    {
      if ( (_BYTE)v7 )
      {
        v8 = a2[1];
        if ( v8 )
        {
          v11 = v8 + 1;
          v10 = a2[1];
          v9 = *a2;
          --v8;
          if ( a2[2] >= v11 )
            goto LABEL_6;
        }
        else
        {
          v9 = *a2;
          v10 = 1;
          v11 = 2;
          if ( (unsigned __int64)a2[2] >= 2 )
          {
LABEL_6:
            a2[1] = v11;
            *(_BYTE *)(v9 + v8) = v7;
            *(_BYTE *)(*a2 + v10) = 0;
            return 1;
          }
        }
        v13 = qvector_reserve(a2, v9, v11, 1);
        *a2 = v13;
        v9 = v13;
        goto LABEL_6;
      }
      if ( !under_debugger )
        interr(984);
    }
    BUG();
  }
  v18 = *(_QWORD *)(*a1 + 1824);
  sub_53EAE0(v18, *a5);
  v17 = sub_5340D0(v18, v7);
  return sub_53F4F0(v17, *a1, a2, a3, a4, a6, v7, nullptr);
}
