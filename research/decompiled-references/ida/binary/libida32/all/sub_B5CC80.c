unsigned __int64 __fastcall sub_B5CC80(__int64 a1)
{
  char v1; // al
  unsigned __int64 result; // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // cl
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // rdi

  v1 = *(_BYTE *)(a1 + 28);
  *(_BYTE *)(a1 + 74) |= 2u;
  result = (v1 & 0x7Fu) - 59;
  if ( (unsigned int)result <= 2 )
  {
    v4 = a1;
    v5 = sub_B685F0(a1);
    v6 = sub_B57ED0((__int64 *)(v5 + 2352), 104, 3u);
    result = sub_B72BC0(v6, a1);
    v9 = 0;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v4 + 96);
      *(_QWORD *)(v4 + 128) = v6;
      if ( (v10 & 1) != 0 )
      {
        if ( v9 )
          return result;
        result = v10 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_11;
      }
      if ( (v10 & 2) != 0 )
      {
        if ( v9 )
          return result;
        v9 = 1;
        if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          result = sub_6C1EC0((_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL), v4, v10, 1, v7, v8) & 0xFFFFFFFFFFFFFFFELL;
          v10 = result | 1;
          *(_QWORD *)(v4 + 96) = result | 1;
LABEL_11:
          v9 = 1;
          v12 = v10 & 0xFFFFFFFFFFFFFFF8LL;
          v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
          if ( result && (result & 4) != 0 && v12 )
          {
            v13 = *(_QWORD *)v12;
            result = *(unsigned int *)(*(_QWORD *)v12 + 12LL);
            if ( *(_DWORD *)(v12 + 8) != (_DWORD)result )
            {
              *(_DWORD *)(v12 + 8) = result;
              result = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64))(*(_QWORD *)v13 + 152LL))(
                         v13,
                         v4,
                         v11,
                         1);
            }
            v11 = *(_QWORD *)(v12 + 16);
            v9 = 1;
          }
          goto LABEL_6;
        }
      }
      else
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v11 )
          goto LABEL_6;
      }
      v11 = 0;
LABEL_6:
      if ( a1 != v11 )
      {
        v4 = v11;
        if ( v11 )
          continue;
      }
      return result;
    }
  }
  return result;
}

