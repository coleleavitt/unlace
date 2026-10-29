_BOOL8 __fastcall sub_798F40(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax

  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) + 29) & 4) == 0 )
  {
    if ( !a2 )
      goto LABEL_3;
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    v5 = v4;
    if ( (*(_BYTE *)(v4 + 29) & 1) == 0 )
      goto LABEL_3;
    if ( (*(_BYTE *)(v4 + 28) & 0x7F) != 0 )
      v4 = sub_793320(v4);
    v6 = sub_6BB160(*(_QWORD *)(v4 + 88), v5);
    v7 = *v6;
    v8 = *v6 + 8LL * *((unsigned int *)v6 + 2);
    if ( v7 < v8 )
    {
      while ( *(_WORD *)(*(_QWORD *)v7 + 32LL) != 380 )
      {
        v7 += 8LL;
        if ( v8 == v7 )
          goto LABEL_3;
      }
    }
    else
    {
      if ( v7 == v8 )
        goto LABEL_3;
      while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 380 )
      {
        v8 += 8LL;
        if ( v7 == v8 )
          goto LABEL_3;
      }
    }
    if ( v7 == v8 )
    {
LABEL_3:
      v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
      return (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2) + 29) & 4) != 0;
    }
  }
  return 1;
}

