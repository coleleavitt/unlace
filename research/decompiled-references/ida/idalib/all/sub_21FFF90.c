__int64 __fastcall sub_21FFF90(__int64 a1, __int64 a2)
{
  void **v4; // rdi
  __int64 v5; // rsi
  __int64 result; // rax
  void **v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // si
  __int64 v12; // rdx
  __int64 v13; // rdi
  char v14; // cl
  __int64 v15; // rdx
  char v16; // cl
  __int64 v17; // rdi
  char v18; // dl

  v4 = *(void ***)(a1 + 8);
  v5 = *(_QWORD *)(a2 + 8);
  if ( *v4 == &unk_26F7B20 )
    result = sub_21FFF90(v4, v5);
  else
    result = sub_21F9DB0((__int64)v4, v5);
  if ( (_DWORD)result == 1 )
  {
    v7 = (void **)(*(_QWORD *)(a1 + 8) + 24LL);
    v8 = *(_QWORD *)(a2 + 8) + 24LL;
    result = *v7 == &unk_26F7B20 ? sub_21FFF90(v7, v8) : sub_21F9DB0((__int64)v7, v8);
    if ( (result & 0xFFFFFFFD) == 0 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = v9;
      if ( *(_UNKNOWN **)v9 == &unk_26F7B20 )
        v10 = *(_QWORD *)(v9 + 8);
      v11 = (*(_BYTE *)(v10 + 20) & 8) != 0;
      if ( *(_UNKNOWN **)(v9 + 24) == &unk_26F7B20 )
        v12 = *(_QWORD *)(v9 + 32);
      else
        v12 = v9 + 24;
      v13 = *(_QWORD *)(a2 + 8);
      v14 = *(_BYTE *)(v12 + 20) >> 3;
      v15 = v13;
      v16 = v11 ^ v14 & 1;
      if ( *(_UNKNOWN **)v13 == &unk_26F7B20 )
        v15 = *(_QWORD *)(v13 + 8);
      if ( *(_UNKNOWN **)(v13 + 24) == &unk_26F7B20 )
        v17 = *(_QWORD *)(v13 + 32);
      else
        v17 = v13 + 24;
      v18 = ((*(_BYTE *)(v15 + 20) & 8) != 0) ^ ((*(_BYTE *)(v17 + 20) & 8) != 0);
      if ( v18 || !v16 )
      {
        if ( v16 )
        {
          if ( v18 )
            return (unsigned int)(2 - result);
        }
        else if ( v18 )
        {
          return 2;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}
