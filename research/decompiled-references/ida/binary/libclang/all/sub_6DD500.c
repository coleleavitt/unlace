__int64 __fastcall sub_6DD500(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v4; // al
  char v5; // r13
  unsigned int v6; // r13d
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  char v12; // cl
  __int64 *v13; // rdx
  __int64 *v14; // rsi
  __int64 v15; // rcx

  v4 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v4 != (*(_BYTE *)(a3 + 28) & 0x7F) )
    return 0;
  if ( v4 != 65 )
  {
    if ( v4 == 45 )
    {
      if ( *(_BYTE *)(a2 + 80) == *(_BYTE *)(a3 + 80)
        && (*(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(a2 + 48) & 7LL) == (*(_QWORD *)&byte_8[*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(a3 + 48) & 7LL) )
      {
        v8 = sub_B07C80(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL));
        v9 = v8;
        if ( v8 )
        {
          if ( *(_BYTE *)(v8 + 16) == 16 )
          {
            v9 = *(_QWORD *)(v8 + 32);
            v6 = 1;
            if ( v9 )
            {
              v9 = *(_QWORD *)(a3 + 16LL * *(unsigned int *)(a3 + 84) + 88);
              LOBYTE(v6) = v9 == 0;
            }
          }
          else
          {
            v6 = 1;
            v9 = 0;
          }
        }
        else
        {
          v6 = 1;
        }
        v10 = sub_B07C80(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL));
        if ( !v10 || *(_BYTE *)(v10 + 16) != 16 || !*(_QWORD *)(v10 + 32) )
          return v6;
        v11 = *(_QWORD *)(a2 + 16LL * *(unsigned int *)(a2 + 84) + 88);
        if ( (v11 == 0) == (_BYTE)v6 )
        {
          if ( !(_BYTE)v6 )
            return sub_6A7280((__int64)a1, v11, v9);
          return v6;
        }
      }
    }
    else if ( ((*(_BYTE *)(a3 + 80) & 2) != 0) == ((*(_BYTE *)(a2 + 80) & 2) != 0) )
    {
      return sub_6DD6E0(a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a3 + 56));
    }
    return 0;
  }
  v5 = sub_7D53F0(a2, a2);
  if ( v5 != (unsigned __int8)sub_7D53F0(a3, a2) )
    return 0;
  v12 = *(_BYTE *)(a2 + 60);
  if ( ((v12 & 2) != 0) != ((*(_BYTE *)(a3 + 60) & 2) != 0) )
    return 0;
  v13 = (__int64 *)(a3 + 80);
  v14 = (__int64 *)(a2 + 80);
  if ( (*(_BYTE *)(a3 + 60) & 4) == 0 )
    v13 = nullptr;
  v15 = v12 & 4;
  if ( !(_DWORD)v15 )
    v14 = nullptr;
  return sub_6DD440(a1, v14, v13, v15);
}

