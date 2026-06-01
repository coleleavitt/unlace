__int64 __fastcall sub_CBF7E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rsi
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v13; // rsi
  char v14; // al
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned int *v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-40h] BYREF
  __int64 v20; // [rsp+10h] [rbp-38h] BYREF
  __int64 v21; // [rsp+18h] [rbp-30h] BYREF
  __int64 *v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h]

  v6 = *(unsigned __int8 *)(a1 + 1360);
  v19 = a2;
  v7 = *(_QWORD *)(a2 + 16);
  if ( !(_BYTE)v6 )
  {
    v8 = *(_QWORD *)(a2 + 24);
    v23 = a1;
    v22 = &v19;
    v9 = *(_BYTE *)(v8 + 28) & 0x7F;
    v10 = (unsigned int)(v9 - 40);
    if ( (unsigned int)v10 <= 6 )
    {
      v11 = sub_E0B510(*(_QWORD *)(a1 + 1272), v8);
      v6 = HIDWORD(v11);
      if ( BYTE4(v11) )
      {
        v20 = v19 | 4;
        v6 = sub_CE25C0(a1, (unsigned int)v11, &v20);
        if ( (_BYTE)v6 )
        {
          if ( (*(_BYTE *)(*v22 + 1) & 6) == 0 )
          {
            v18 = sub_C90F00(v23, *v22);
            v6 = HIDWORD(v18);
            if ( BYTE4(v18) )
            {
              v21 = *v22 | 4;
              return (unsigned int)sub_D11290(v23, (unsigned int)v18, &v21);
            }
          }
        }
      }
      return v6;
    }
    if ( (unsigned int)(v9 - 49) > 2 )
    {
      if ( (unsigned __int8)sub_CB69D0(a1, v7, v10, a4, a5) )
        return (unsigned int)sub_CB4A90(a1, v8, v19);
      v21 = v19 | 4;
      v6 = sub_CE4440(a1, &v21);
      if ( (_BYTE)v6 )
        return (unsigned int)sub_CB4A90(a1, v8, v19);
      return v6;
    }
    if ( *(_BYTE *)(a1 + 1362) )
    {
      if ( !(unsigned __int8)sub_CBBC10(a1, v7, v10, a4, a5) )
        return v6;
    }
    else if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v7) )
    {
      return v6;
    }
    v13 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
      v13 = *(_QWORD *)v13;
    v14 = *(_BYTE *)(v13 + 8);
    v15 = v13 - 64;
    if ( (v14 & 0x7Fu) - 58 >= 4 )
      v15 = 0;
    v16 = sub_C90D90(a1, v15);
    if ( !v16 )
      return v6;
    v17 = (unsigned int *)sub_E0DFD0(v16, v8);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 48LL)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 43 > 1 )
    {
      v21 = v19 | 4;
      v6 = sub_CE2580(a1, v17[2], &v21);
      if ( !(_BYTE)v6 )
        return v6;
      return (unsigned int)sub_C935C0(&v22);
    }
    v21 = v19 | 4;
    v6 = sub_CF2130(a1, 13, v17[2], &v21);
    if ( (_BYTE)v6 )
      return (unsigned int)sub_C935C0(&v22);
    return v6;
  }
  return (unsigned int)sub_CB69D0(a1, v7, a3, a4, a5);
}

