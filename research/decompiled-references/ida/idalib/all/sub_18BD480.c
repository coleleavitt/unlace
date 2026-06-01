__int64 __fastcall sub_18BD480(unsigned int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 (*v4)(); // rax
  unsigned int v5; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx

  if ( !(_BYTE)a1 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 60LL) & 4) != 0 )
    return 0;
  v4 = *(__int64 (**)())(**(_QWORD **)(a2 + 17448) + 256LL);
  if ( v4 == sub_102B8D0 )
    return 0;
  v5 = ((__int64 (__fastcall *)(_QWORD))v4)(*(_QWORD *)(a2 + 17448));
  if ( (_BYTE)v5 )
  {
    return 0;
  }
  else
  {
    v9 = *(_QWORD *)(*(_QWORD *)(sub_BFB900(a3) + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v11 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 57;
    if ( ((unsigned int)v11 <= 1 || (v9 = sub_18BBF30(v9, a2, v11, v10)) != 0)
      && ((*(_BYTE *)(v9 + 18) >> 3) & 0xF) != 4
      && *(_QWORD *)(a2 + 19032) == (*(_QWORD *)&byte_8[*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL]
                                   & 0xFFFFFFFFFFFFFFF8LL
                                   | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL]
                                    | (unsigned __int8)*(_QWORD *)(v9 + 32))
                                   & 7) )
    {
      if ( a4 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(sub_BFB900(a4) + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v14 = (unsigned int)*(unsigned __int8 *)(v12 + 16) - 57;
        if ( ((unsigned int)v14 <= 1 || (v12 = sub_18BBF30(v12, a2, v14, v13)) != 0)
          && ((*(_BYTE *)(v12 + 18) >> 3) & 0xF) != 4 )
        {
          LOBYTE(v5) = (*(_QWORD *)&byte_8[*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                      | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL]
                       | (unsigned __int8)*(_QWORD *)(v12 + 32))
                      & 7) == *(_QWORD *)(a2 + 19032);
        }
      }
      else
      {
        return a1;
      }
    }
  }
  return v5;
}
