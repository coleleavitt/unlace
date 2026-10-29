bool __fastcall sub_1AE8C40(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int16 v8; // ax
  __int64 v9; // rax
  __int64 v10; // r8
  __int16 v11; // dx
  __int16 v12; // cx
  __int16 v13; // dx
  __int16 v14; // dx
  __int16 v15; // ax
  __int16 v16; // ax
  __int16 v17; // dx

  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 232LL) + 64LL) > 0x31u )
    return a3 != 0;
  result = 1;
  if ( a3 != 1 )
  {
    v4 = 16 * a3 - 16;
    v5 = a2 + v4;
    v6 = v4 >> 6;
    v7 = v4 >> 4;
    if ( v6 > 0 )
    {
      if ( !*(_QWORD *)(v5 - 8) )
      {
        v8 = *(_WORD *)(*(_QWORD *)(v5 - 16) & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF;
        if ( ((v8 + 389) & 0x1FFu) <= 1 || v8 == 44 )
        {
          v9 = v5 - 16;
          if ( !*(_QWORD *)(v5 - 24) )
          {
            v10 = v5 + 48 - (v6 << 6);
            do
            {
              v11 = *(_WORD *)(*(_QWORD *)(v9 - 16) & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF;
              if ( ((v11 + 389) & 0x1FFu) > 1 && v11 != 44 )
                break;
              if ( *(_QWORD *)(v9 - 24) )
                return v9 - 16 == a2;
              v12 = *(_WORD *)(*(_QWORD *)(v9 - 32) & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF;
              if ( ((v12 + 389) & 0x1FFu) > 1 && v12 != 44 )
                return v9 - 16 == a2;
              v5 = v9 - 32;
              if ( *(_QWORD *)(v9 - 40) )
                return v5 == a2;
              v13 = *(_WORD *)(*(_QWORD *)(v9 - 48) & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF;
              if ( ((v13 + 389) & 0x1FFu) > 1 && v13 != 44 )
                return v5 == a2;
              v5 = v9 - 48;
              if ( v10 == v9 )
              {
                v7 = (v5 - a2) >> 4;
                goto LABEL_18;
              }
              if ( *(_QWORD *)(v9 - 56) )
                return v5 == a2;
              v14 = *(_WORD *)(*(_QWORD *)(v9 - 64) & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF;
              if ( ((v14 + 389) & 0x1FFu) > 1 && v14 != 44 )
                return v5 == a2;
              v9 -= 64;
            }
            while ( !*(_QWORD *)(v9 - 8) );
          }
          return v9 == a2;
        }
      }
      return v5 == a2;
    }
LABEL_18:
    if ( v7 != 2 )
    {
      if ( v7 != 3 )
      {
        if ( v7 != 1 )
          return 1;
LABEL_41:
        if ( !*(_QWORD *)(v5 - 8) )
        {
          v17 = *(_WORD *)(*(_QWORD *)(v5 - 16) & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF;
          result = v17 == 44 || ((v17 + 389) & 0x1FFu) <= 1;
          if ( result )
            return result;
        }
        return v5 == a2;
      }
      if ( *(_QWORD *)(v5 - 8) )
        return v5 == a2;
      v15 = *(_WORD *)(*(_QWORD *)(v5 - 16) & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF;
      if ( ((v15 + 389) & 0x1FFu) > 1 && v15 != 44 )
        return v5 == a2;
      v5 -= 16;
    }
    if ( *(_QWORD *)(v5 - 8) )
      return v5 == a2;
    v16 = *(_WORD *)(*(_QWORD *)(v5 - 16) & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF;
    if ( ((v16 + 389) & 0x1FFu) > 1 && v16 != 44 )
      return v5 == a2;
    v5 -= 16;
    goto LABEL_41;
  }
  return result;
}
