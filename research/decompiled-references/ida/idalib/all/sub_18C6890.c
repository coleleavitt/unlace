char __fastcall sub_18C6890(int **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rbp
  __int64 v17; // rsi
  __int64 *v18; // rdi

  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_7;
  v6 = **a1;
  if ( v6 == 2 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
    {
LABEL_7:
      LOBYTE(v7) = 1;
      return v7;
    }
    v11 = sub_F63270(v8, a2, a3, a4, a5, a6);
    v16 = v11;
    if ( v11 )
    {
      v17 = v11[13];
      v18 = (__int64 *)(v17 + 96);
      if ( v11[16] )
        goto LABEL_10;
      sub_7052B0(v18, v17, v12, v13, v14, v15);
      if ( v16[16] )
      {
        v17 = v16[13];
        v18 = (__int64 *)(v17 + 96);
LABEL_10:
        sub_7052B0(v18, v17, v12, v13, v14, v15);
        if ( (*(_BYTE *)(v16[16] + 2LL) & 8) != 0 )
        {
          LOBYTE(v7) = 1;
          return v7;
        }
      }
    }
    return (unsigned int)sub_B7D2B0(a3, *(_QWORD *)(*(_QWORD *)a2 + 248LL)) ^ 1;
  }
  LOBYTE(v7) = v6 == 3
            && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 43 <= 1;
  return v7;
}
