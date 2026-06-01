char __fastcall sub_9C8130(__int16 *a1, void (__fastcall *a2)(__int64), __int64 a3)
{
  __int16 v3; // ax
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  void (__fastcall *v11)(__int64); // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+8h] [rbp-20h]
  void (__fastcall **v13)(__int64); // [rsp+18h] [rbp-10h] BYREF

  v3 = *a1;
  v12 = a3;
  LOWORD(v4) = v3 & 0x1FF;
  v11 = a2;
  if ( (((_WORD)v4 + 423) & 0x1FFu) > 4 )
  {
LABEL_2:
    if ( (((_WORD)v4 + 433) & 0x1FFu) <= 9 )
    {
      LODWORD(v4) = (((unsigned __int16)a1[1] >> 3) & 0x7F) - 22;
      if ( (unsigned int)v4 > 1 )
        return v4;
      LOBYTE(v4) = sub_9C57D0(*((_QWORD *)a1 + 2));
      if ( !(_BYTE)v4 )
        return v4;
      v11(v12);
      LOWORD(v4) = ((*a1 & 0x1FF) + 394) & 0x1FF;
      if ( (unsigned __int16)v4 > 1u )
        return v4;
    }
    else
    {
      LOWORD(v4) = (v4 + 394) & 0x1FF;
      if ( (unsigned __int16)v4 > 1u )
        return v4;
    }
    LOWORD(v4) = ((unsigned __int16)a1[1] >> 3) & 0x3F;
    if ( (((((unsigned __int16)a1[1] >> 3) & 0x3F) + 54) & 0x3Fu) > 5 )
      goto LABEL_18;
    if ( sub_9C57D0(*((_QWORD *)a1 + 2)) )
    {
      v11(v12);
      if ( !sub_9C57D0(*((_QWORD *)a1 + 3)) )
      {
LABEL_16:
        LOWORD(v4) = (*a1 + 394) & 0x1FF;
        if ( (unsigned __int16)v4 > 1u )
          return v4;
        LOWORD(v4) = ((unsigned __int16)a1[1] >> 3) & 0x3F;
LABEL_18:
        if ( (_BYTE)v4 == 6 )
        {
          LOBYTE(v4) = sub_9C57D0(*((_QWORD *)a1 + 2));
          if ( (_BYTE)v4 )
          {
            LOBYTE(v4) = sub_9C57D0(*((_QWORD *)a1 + 3));
            if ( (_BYTE)v4 )
            {
              v11(v12);
              LOBYTE(v4) = ((__int64 (__fastcall *)(__int64, _QWORD))v11)(v12, *((_QWORD *)a1 + 3));
            }
          }
        }
        return v4;
      }
    }
    else
    {
      LOBYTE(v4) = sub_9C57D0(*((_QWORD *)a1 + 3));
      if ( !(_BYTE)v4 )
        return v4;
    }
    v11(v12);
    goto LABEL_16;
  }
  v5 = sub_BD7F30(*((_QWORD *)a1 + 4));
  if ( !v5 || (*(_BYTE *)(v5 + 28) & 0x7Fu) - 34 > 5 || (*(_BYTE *)(v5 + 29) & 1) == 0 )
    goto LABEL_8;
  v6 = sub_B68690(v5);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
  if ( *(_QWORD *)v6 >= v8 )
  {
    if ( v7 != v8 )
    {
      v4 = *(_QWORD *)v8;
      if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) == 388 )
        return v4;
      v4 = v8 + 8;
      while ( v7 != v4 )
      {
        v9 = *(_QWORD *)v4;
        v4 += 8LL;
        if ( *(_WORD *)(v9 + 36) == 388 )
          return v4;
      }
    }
    goto LABEL_8;
  }
  v4 = *(_QWORD *)v6;
  while ( *(_WORD *)(*(_QWORD *)v4 + 36LL) != 388 )
  {
    v4 += 8LL;
    if ( v8 == v4 )
      goto LABEL_8;
  }
  if ( v8 == v4 )
  {
LABEL_8:
    v13 = &v11;
    sub_F71C00(a1, sub_9C5920, &v13);
    LOWORD(v4) = *a1 & 0x1FF;
    goto LABEL_2;
  }
  return v4;
}

