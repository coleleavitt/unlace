__int64 __fastcall sub_3F0810(__int64 a1, __int64 a2, __int64 a3, char a4, double a5)
{
  __int64 v5; // r12
  char v7; // al
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int16 v11; // dx
  __int64 result; // rax

  v5 = a2;
  v7 = *(_BYTE *)(a3 + 1);
  v8 = a3;
  v9 = *(_QWORD *)(a1 + 832);
  LOBYTE(a2) = v7 == 1;
  LOBYTE(a3) = v7 == 12;
  v10 = (unsigned int)a3 | (unsigned int)a2;
  v11 = *(_WORD *)(v8 + 6);
  if ( *(_DWORD *)(v9 + 80) == 8 )
  {
    if ( (_BYTE)v10 )
    {
      if ( (unsigned __int16)(v11 - 163) <= 0x1Fu )
        return sub_3EE470(a1, v8, a4, a5);
      goto LABEL_11;
    }
  }
  else if ( (_BYTE)v10 )
  {
    if ( (unsigned __int16)(v11 - 45) <= 0x2Fu )
      return sub_3EE470(a1, v8, a4, a5);
    goto LABEL_11;
  }
  if ( (unsigned __int8)(v7 - 3) > 1u )
  {
LABEL_11:
    if ( get_dtype_size(*(unsigned __int8 *)(v8 + 5)) >= (unsigned __int64)*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 800)
                                                                                              + 112LL)
                                                                                  + 80LL)
      || *(_BYTE *)(v8 + 1) != 8
      || (unsigned __int8)(*(_BYTE *)(v8 + 33) - 6) > 7u )
    {
      return *(unsigned __int8 *)(v8 + 5);
    }
    if ( !*(_BYTE *)v8 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC85Au, v10, a5);
      BUG();
    }
    return *(unsigned __int8 *)(v5 + 45);
  }
  result = 2;
  if ( *(_DWORD *)(v9 + 84) == 8 )
    return 7;
  return result;
}
