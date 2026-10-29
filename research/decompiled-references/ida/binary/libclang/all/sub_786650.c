__int64 __fastcall sub_786650(__int64 a1, int a2, char a3)
{
  char v3; // r12
  __int64 v4; // rbx
  __int64 result; // rax
  int v6; // eax
  char v7; // cl
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-20h]

  while ( 1 )
  {
    v3 = a3;
    v4 = a1;
    result = sub_778D80(a1, a2);
    if ( BYTE4(result) )
      return result;
    v6 = *(_BYTE *)(a1 + 28) & 0x7F;
    v7 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( (unsigned int)(v6 - 57) <= 2 )
    {
      v8 = sub_7A46C0(a1);
      if ( v8 )
      {
        v9 = v8;
        return sub_778D80(v9, a2);
      }
      v6 = *(_BYTE *)(a1 + 28) & 0x7F;
      v7 = *(_BYTE *)(a1 + 28) & 0x7F;
      if ( (unsigned int)(v6 - 58) <= 1 )
      {
        v10 = *(_QWORD *)(sub_7D65F0(a1) + 48);
        if ( !v10 )
          goto LABEL_11;
        while ( 1 )
        {
          result = sub_778D80(v10, a2);
          if ( BYTE4(result) )
            return result;
          v11 = *(_QWORD *)(v10 + 96);
          if ( (v11 & 1) == 0 && (v11 & 2) == 0 )
          {
            v10 = sub_6E77B0((unsigned __int64 *)(v10 + 96), v10);
            if ( v10 )
              continue;
          }
          goto LABEL_11;
        }
      }
    }
    if ( v3 == 1 || v7 == 22 )
      goto LABEL_14;
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    if ( v13 == a1 )
      break;
    a3 = 1;
    a1 = v13;
  }
  v6 = *(_BYTE *)(a1 + 28) & 0x7F;
  v7 = *(_BYTE *)(a1 + 28) & 0x7F;
LABEL_14:
  if ( (unsigned int)(v6 - 38) <= 6 )
  {
    if ( v7 == 41 )
      goto LABEL_11;
    v12 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v12 = *(_QWORD *)v12;
    if ( ((*(_BYTE *)(v12 + 8) + 72) & 0x7Fu) > 3 )
    {
LABEL_19:
      if ( (unsigned int)(v6 - 39) <= 1 )
      {
        v9 = *(_QWORD *)(sub_7D8D10(v4) + 48);
        return sub_778D80(v9, a2);
      }
LABEL_11:
      BYTE4(v18) = 0;
      return v18;
    }
    v16 = (_QWORD *)sub_77D020(a1);
    if ( !v16 || (v9 = *v16 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v6 = *(_BYTE *)(v4 + 28) & 0x7F;
      goto LABEL_19;
    }
    return sub_778D80(v9, a2);
  }
  if ( (unsigned int)(v6 - 32) > 5 )
  {
    if ( (unsigned int)(v6 - 66) > 6 )
      goto LABEL_11;
    return sub_778D80(*(_QWORD *)(a1 + 48), a2);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 152);
    if ( !v14 || (*(_QWORD *)(a1 + 152) & 6LL) != 4 || (v17 = v14 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v15 = (_QWORD *)sub_780C90(a1);
      if ( v15 )
      {
        v9 = *v15 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v9 )
          return sub_778D80(v9, a2);
      }
      goto LABEL_11;
    }
    return sub_778D80(*(_QWORD *)((*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 48), a2);
  }
}

