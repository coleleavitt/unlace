__int64 __fastcall sub_AAC040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 *v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax

  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = (__int64 *)v6;
  v8 = *v5;
  if ( *(_BYTE *)(*v5 + 16) != 34 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
    {
      v13 = sub_F63050(*v5, v5, v6, a4);
      v9 = *v7;
      v8 = v13;
      if ( *(_BYTE *)(v9 + 16) == 34 )
      {
LABEL_9:
        if ( v8 && v9 )
          goto LABEL_3;
        return 0;
      }
    }
    else
    {
      v9 = *(_QWORD *)v6;
      if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) == 34 )
        return 0;
      v8 = 0;
    }
LABEL_7:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
      return 0;
    v9 = sub_F63050(v9, v5, v6, a4);
    goto LABEL_9;
  }
  v9 = *(_QWORD *)v6;
  if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) != 34 )
    goto LABEL_7;
LABEL_3:
  result = sub_AABC90(a1, v8, v9, a4, a5);
  if ( !(_BYTE)result )
    return sub_AABC90(a1, v9, v8, v11, v12);
  return result;
}
