__int64 __fastcall sub_1C495B0(__int64 a1, __int64 *a2, const __m128i *a3, double a4)
{
  __int64 v5; // rbp
  unsigned int v6; // ebx
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // rbx
  unsigned __int16 v10; // ax
  __int64 *v11; // rax
  __int16 v12; // ax
  unsigned __int64 *v13; // rdx
  unsigned __int64 *v14; // rbx

  v5 = a2[1];
  v6 = sub_B8E180(*(_QWORD *)(a1 + 544));
  if ( (_BYTE)v6 )
    return v6;
  if ( v5 )
  {
    if ( (*(_DWORD *)v5 & 0x8000) == 0 )
    {
      if ( !(unsigned __int8)sub_1C481B0((__int64 *)a1, a2, a3, a4) )
        return v6;
      v8 = *(_WORD *)v5 & 0x1FF;
      while ( 1 )
      {
        if ( v8 == 79 )
        {
          v9 = sub_BFA3B0(v5);
          goto LABEL_9;
        }
        if ( ((v8 + 452) & 0x1FFu) > 1 )
          break;
        v9 = *(_QWORD *)(v5 + 16);
        if ( v9 == v5 )
          goto LABEL_28;
        v8 = *(_WORD *)v9 & 0x1FF;
        if ( (unsigned int)v8 - 113 <= 1 )
        {
          if ( (*(_QWORD *)v9 & 0x80000) != 0 && v8 != 114 )
            goto LABEL_12;
LABEL_15:
          v8 = *(_WORD *)v9 & 0x1FF;
        }
        v5 = v9;
      }
      if ( v8 == 48 )
      {
        v9 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v5 + 16) & 4) != 0 )
          v9 = *(_QWORD *)(v9 + 40);
        goto LABEL_9;
      }
      if ( v8 == 116 )
      {
        v9 = *(_QWORD *)(v5 + 24);
LABEL_9:
        v10 = *(_WORD *)v9 & 0x1FF;
        if ( (unsigned int)v10 - 113 <= 1 && (*(_QWORD *)v9 & 0x80000) != 0 && v10 != 114 )
          goto LABEL_12;
      }
      else
      {
        if ( (unsigned int)v8 - 113 > 1 || (*(_QWORD *)v5 & 0x80000) == 0 || v8 == 114 )
          goto LABEL_28;
        v9 = v5;
LABEL_12:
        if ( *(_DWORD *)(v9 + 32) == 1 )
          goto LABEL_29;
        if ( *(_DWORD *)(v9 + 32) <= 1u || !sub_BFDFF0(*(_QWORD *)(v9 + 48)) )
          goto LABEL_14;
        if ( (*(_WORD *)v9 & 0x1FF) != 0x72 )
LABEL_29:
          v11 = (__int64 *)(v9 + 40);
        else
          v11 = (__int64 *)(v9 + 48);
        if ( !sub_BFDFF0(*v11) && (*(_QWORD *)v9 & 0x200000LL) == 0 )
        {
          v12 = *(_WORD *)v9;
          v13 = (unsigned __int64 *)(v9 + 48);
          v14 = (unsigned __int64 *)(v9 + 40);
          if ( (v12 & 0x1FF) == 0x72 )
            v14 = v13;
          v9 = *v14;
        }
      }
LABEL_14:
      if ( v9 == v5 )
        goto LABEL_28;
      goto LABEL_15;
    }
    return 1;
  }
  else
  {
    if ( !(unsigned __int8)sub_1C481B0((__int64 *)a1, a2, a3, a4) )
      return v6;
LABEL_28:
    a2[1] = v5;
    return 1;
  }
}
