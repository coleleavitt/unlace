__int64 __fastcall sub_18B0170(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rdx

  v4 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  result = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(unsigned __int8 *)(result + 16);
  if ( (_BYTE)v6 == 42 )
    goto LABEL_2;
  v8 = *(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) == 42 )
  {
    result = sub_F63050(result, a2, v6, v8);
    if ( result )
      goto LABEL_2;
    result = *(_QWORD *)v4;
    v6 = *(unsigned __int8 *)(*(_QWORD *)v4 + 16LL);
  }
  a4 = (unsigned int)(unsigned __int8)v6 - 43;
  if ( (unsigned int)a4 <= 1 )
    goto LABEL_11;
  a4 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)a4 <= 1 )
  {
    result = sub_F63050(result, a2, v6, a4);
    if ( result )
    {
LABEL_11:
      while ( 1 )
      {
        v9 = (*(_BYTE *)(result + 18) & 0x10) == 0;
        result = *(_QWORD *)(*(_QWORD *)(result + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( v9 )
          break;
        v10 = (unsigned int)*(unsigned __int8 *)(result + 16) - 43;
        if ( (unsigned int)v10 > 1 )
          result = sub_F63050(result, a2, v10, a4);
      }
      goto LABEL_3;
    }
    result = *(_QWORD *)v4;
    v6 = *(unsigned __int8 *)(*(_QWORD *)v4 + 16LL);
  }
  if ( (_BYTE)v6 == 33 )
    goto LABEL_2;
  a4 = *(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(a4 + 16) != 33 )
    goto LABEL_4;
  result = sub_F63050(result, a2, v6, a4);
  if ( result )
  {
LABEL_2:
    result = *(_QWORD *)(*(_QWORD *)(result + 32) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_3:
    LOBYTE(v6) = *(_BYTE *)(result + 16);
    goto LABEL_4;
  }
  result = *(_QWORD *)v4;
  LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)v4 + 16LL);
LABEL_4:
  if ( (_BYTE)v6 != 26 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v7 + 16) == 26 )
      return sub_F63050(result, a2, v7, a4);
    else
      return 0;
  }
  return result;
}
