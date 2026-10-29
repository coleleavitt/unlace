__int64 __fastcall sub_70B100(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 *v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rax

  v3 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v5 = (__int64 *)v4;
  v6 = *v3;
  if ( *(_BYTE *)(*v3 + 16) != 33 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
    {
      v9 = sub_B0D320(*v3);
      v7 = *v5;
      v6 = v9;
      if ( *(_BYTE *)(v7 + 16) == 33 )
        goto LABEL_9;
    }
    else
    {
      v7 = *(_QWORD *)v4;
      if ( *(_BYTE *)(*(_QWORD *)v4 + 16LL) == 33 )
        return 0;
      v6 = 0;
    }
LABEL_7:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
      return 0;
    v7 = sub_B0D320(v7);
LABEL_9:
    if ( v6 && v7 )
      goto LABEL_3;
    return 0;
  }
  v7 = *(_QWORD *)v4;
  if ( *(_BYTE *)(*(_QWORD *)v4 + 16LL) != 33 )
    goto LABEL_7;
LABEL_3:
  result = sub_70ABF0(a1, v6, v7);
  if ( !(_BYTE)result )
    return sub_70ABF0(a1, v7, v6);
  return result;
}

