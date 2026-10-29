unsigned __int64 __fastcall sub_B7E570(__int64 a1, int a2, char a3)
{
  char v3; // r12
  __int64 v4; // rbx
  unsigned __int64 result; // rax
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rax
  _QWORD *v9; // rax
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  _QWORD *v19; // rax

  while ( 1 )
  {
    v3 = a3;
    v4 = a1;
    result = sub_B719B0(a1, a2);
    if ( BYTE4(result) )
      return result;
    LOBYTE(v6) = *(_BYTE *)(a1 + 28) & 0x7F;
    v7 = (unsigned __int8)v6;
    if ( (unsigned int)(unsigned __int8)v6 - 59 <= 2 )
    {
      v8 = sub_B971E0(a1);
      if ( v8 )
        return sub_B719B0(v8, a2);
      v6 = *(_BYTE *)(a1 + 28) & 0x7F;
      v7 = (unsigned __int8)v6;
    }
    if ( (unsigned int)(v7 - 60) <= 1 )
    {
      v11 = *(_QWORD **)(sub_BBF290(a1) + 48);
      if ( !v11 )
        return 0;
      while ( 1 )
      {
        result = sub_B719B0((__int64)v11, a2);
        if ( BYTE4(result) )
          break;
        if ( (v11[12] & 3) != 0 )
          return 0;
        v11 = sub_7052B0(v11 + 12, (__int64)v11, HIDWORD(result), v12, v13, v14);
        if ( !v11 )
          return 0;
      }
      return result;
    }
    if ( v3 == 1 || (_BYTE)v6 == 24 )
      goto LABEL_18;
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    if ( v16 == a1 )
      break;
    a3 = 1;
    a1 = v16;
  }
  LOBYTE(v6) = *(_BYTE *)(a1 + 28) & 0x7F;
  v7 = (unsigned __int8)v6;
LABEL_18:
  if ( (unsigned int)(v7 - 40) > 6 )
  {
    if ( (unsigned int)(v7 - 34) > 5 )
    {
      if ( (unsigned int)(v7 - 68) > 6 )
        return 0;
      v10 = *(_QWORD *)(a1 + 48);
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 152);
      if ( v17 && ((v17 >> 1) & 3) == 2 && (v18 = v17 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v10 = *(_QWORD *)((*(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 48);
      }
      else
      {
        v9 = (_QWORD *)sub_B77930(a1);
        if ( !v9 )
          return 0;
        v10 = *v9 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v10 )
          return 0;
      }
    }
  }
  else
  {
    if ( (_BYTE)v6 == 43 )
      return 0;
    v15 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v15 = *(_QWORD *)v15;
    if ( ((*(_BYTE *)(v15 + 8) + 70) & 0x7Fu) > 3 )
    {
LABEL_23:
      if ( (unsigned int)(v7 - 41) <= 1 )
      {
        v10 = *(_QWORD *)(sub_BBFE00(v4) + 48);
        return sub_B719B0(v10, a2);
      }
      return 0;
    }
    v19 = (_QWORD *)sub_B73ED0(a1);
    if ( !v19 || (v10 = *v19 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v7 = *(_BYTE *)(v4 + 28) & 0x7F;
      goto LABEL_23;
    }
  }
  return sub_B719B0(v10, a2);
}
