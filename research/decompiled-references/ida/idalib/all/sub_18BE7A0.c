__int64 __fastcall sub_18BE7A0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 *v4; // rsi
  __int64 *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  __int64 v12; // rdx
  bool v13; // cl
  __int64 v14; // rdx

  v4 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 57 <= 1 )
  {
    v8 = *v4;
    v9 = (unsigned int)*(unsigned __int8 *)(*v4 + 16) - 57;
    if ( (unsigned int)v9 <= 1 )
    {
      *a3 = 0;
LABEL_4:
      if ( (*(_BYTE *)(v7 + 18) & 0x78) == 0 )
      {
        v10 = (*(_BYTE *)(v8 + 18) >> 3) & 0xF;
        if ( (unsigned int)v10 - 6 <= 1 )
          return 1;
        if ( ((v10 + 8) & 0xFu) <= 4 )
        {
LABEL_7:
          *a3 = 1;
          return 1;
        }
      }
      return 0;
    }
    goto LABEL_11;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1 )
  {
    v7 = sub_F63050(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), v4, a3, a4);
    v8 = *v4;
    if ( (unsigned int)*(unsigned __int8 *)(*v4 + 16) - 57 <= 1 )
    {
      *a3 = 0;
      if ( v7 )
        goto LABEL_4;
      goto LABEL_16;
    }
LABEL_11:
    v12 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
    if ( (unsigned int)v12 <= 1 )
    {
      v8 = sub_F63050(v8, v4, v12, v9);
      *a3 = 0;
      v13 = v8 != 0;
      if ( v7 )
      {
        if ( v8 )
          goto LABEL_4;
        return 0;
      }
      goto LABEL_22;
    }
    goto LABEL_26;
  }
  v8 = *v4;
  if ( (unsigned int)*(unsigned __int8 *)(*v4 + 16) - 57 <= 1 )
  {
    *a3 = 0;
    goto LABEL_16;
  }
  v14 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
  if ( (unsigned int)v14 <= 1 )
  {
    v8 = sub_F63050(*v4, v4, v14, a4);
    *a3 = 0;
    v13 = v8 != 0;
LABEL_22:
    if ( !v13 )
      return 0;
LABEL_16:
    if ( (*(_BYTE *)(v8 + 18) & 0x78) == 0 )
    {
      if ( sub_F58320(*v6) )
        return 1;
      if ( sub_F58350(*v6) )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_26:
  *a3 = 0;
  return 0;
}
