unsigned __int64 __fastcall sub_789630(unsigned __int64 a1)
{
  char v1; // al
  unsigned __int64 result; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbp
  char v8; // r14
  __int64 v9; // rdi
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __int64 v14; // rdi

  v1 = *(_BYTE *)(a1 + 28);
  *(_BYTE *)(a1 + 74) |= 2u;
  result = (v1 & 0x7Fu) - 57;
  if ( (unsigned int)result <= 2 )
  {
    v4 = (_QWORD *)sub_798D40(a1);
    v5 = v4[274];
    v4[284] += 104LL;
    v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v4[275] >= v6 + 104 && v5 )
    {
      v4[274] = v6 + 104;
      result = sub_7A2DB0((v5 + 7) & 0xFFFFFFFFFFFFFFF8LL, a1);
    }
    else
    {
      v6 = sub_779030((__int64)(v4 + 274), 104, 3);
      result = sub_7A2DB0(v6, a1);
    }
    v7 = a1;
    v8 = 0;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v7 + 96);
      *(_QWORD *)(v7 + 128) = v6;
      if ( (v9 & 1) != 0 )
      {
        if ( v8 )
          return result;
        result = v9 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v9 & 1) != 0 )
        {
          v8 = 1;
          goto LABEL_17;
        }
LABEL_10:
        if ( result <= 3 )
        {
          v8 = 1;
          v7 = v9 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_33;
        }
        v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (result & 2) != 0 )
        {
          v8 = 1;
LABEL_27:
          v13 = sub_6D4E90(v10, v7);
          result = v13 & 0xFFFFFFFFFFFFFFFELL;
          v9 = v13 | 1;
          *(_QWORD *)(v7 + 96) = v9;
LABEL_17:
          if ( !result )
            return result;
          goto LABEL_18;
        }
        if ( (_QWORD *)a1 == v10 )
          return result;
        v7 = (unsigned __int64)v10;
        v8 = 1;
      }
      else if ( (v9 & 2) != 0 )
      {
        if ( v8 )
          return result;
        v8 = 1;
        result = v9 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v9 & 1) == 0 )
          goto LABEL_10;
LABEL_18:
        v11 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (result & 4) != 0 )
        {
          if ( !v11 )
            return result;
          v14 = *(_QWORD *)v11;
          result = *(unsigned int *)(*(_QWORD *)v11 + 12LL);
          if ( *(_DWORD *)(v11 + 8) != (_DWORD)result )
          {
            *(_DWORD *)(v11 + 8) = result;
            result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v14 + 144LL))(
                       v14,
                       v7,
                       v12);
          }
          v12 = *(_QWORD *)(v11 + 16);
        }
        if ( a1 == v12 )
          return result;
        v7 = v12;
LABEL_33:
        if ( !v7 )
          return result;
      }
      else
      {
        result = v9 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v9 & 1) != 0 )
          goto LABEL_17;
        if ( result <= 3 )
          return result;
        v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (result & 2) != 0 )
          goto LABEL_27;
        if ( (_QWORD *)a1 == v10 )
          return result;
        v7 = (unsigned __int64)v10;
      }
    }
  }
  return result;
}

