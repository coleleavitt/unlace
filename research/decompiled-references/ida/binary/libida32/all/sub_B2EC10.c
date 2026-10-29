bool __fastcall sub_B2EC10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int8 v7; // dl
  bool result; // al
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax

  v5 = *(_QWORD *)(a1 + 40);
  if ( !v5 )
    return 0;
  if ( (*(_BYTE *)(v5 + 48) & 1) == 0 )
  {
    sub_B169D0((__int64 *)v5, a2);
    v5 = *(_QWORD *)(a1 + 40);
  }
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
    return 0;
  v7 = *(_BYTE *)(v6 + 28) & 0x7F;
  if ( (unsigned int)v7 - 58 > 3
    || (a2 = *(unsigned __int8 *)(v6 + 73), result = 1, LOBYTE(a2) = (unsigned __int8)a2 >> 5, (_BYTE)a2 == 2) )
  {
    if ( v7 == 64 )
    {
      v9 = (_QWORD *)(*(_QWORD *)(v6 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      v10 = (*(_QWORD *)(v6 + 80) & 4) != 0 ? v9[1] : *v9;
      v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v11 + 16) == 24 )
      {
        v12 = (__int64 *)(*(_QWORD *)(v11 + 40) & 0xFFFFFFFFFFFFFFF0LL);
        if ( v12 )
        {
          v13 = *v12;
          if ( *v12 )
          {
            if ( *(_BYTE *)(v13 + 16) == 48 )
            {
              v14 = sub_F3F500(v13, a2, v9, v6, a5);
              if ( v14 )
              {
                if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 58 <= 3 )
                  return *(_BYTE *)(v14 + 73) >> 5 != 2;
              }
            }
          }
        }
      }
    }
    return 0;
  }
  return result;
}

