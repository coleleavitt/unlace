__int64 __fastcall sub_A400A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rsi
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned __int8 v15; // dl

  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  result = 1;
  v7 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = (_QWORD *)(v5[1] & 0xFFFFFFFFFFFFFFF0LL);
  v9 = (_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *v8 != *v9 )
  {
    v10 = *v5;
    if ( (unsigned int)*(unsigned __int8 *)(*v5 + 16) - 57 > 1 )
    {
      v10 = sub_F3F310(*v5, v5, v9, v8, a5);
      v11 = *(_QWORD *)v7;
      v12 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v7 + 16LL) - 57;
      if ( (unsigned int)v12 <= 1 )
      {
LABEL_4:
        if ( *(_DWORD *)(v10 + 20) != *(_DWORD *)(v11 + 20) )
          return 0;
LABEL_11:
        v13 = *(_QWORD *)&byte_8[*(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF0LL];
        v14 = *(_QWORD *)&byte_8[*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v14 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v14 | (unsigned __int8)*(_QWORD *)(v10 + 32)) & 7) == (v13 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v13 | (unsigned __int8)*(_QWORD *)(v11 + 32)) & 7) )
        {
          v15 = (*(_BYTE *)(v10 + 18) >> 3) & 0xF;
          if ( (unsigned int)v15 - 2 > 1 )
            return (((*(_BYTE *)(v11 + 18) >> 3) & 0xFu) - 2 > 1)
                 & (unsigned __int8)(((((*(_BYTE *)(v11 + 18) >> 3) & 0xF) + 10) & 0xFu) > 6 && ((v15 + 10) & 0xFu) > 6);
        }
        return 0;
      }
    }
    else
    {
      v11 = *(_QWORD *)v7;
      v12 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v7 + 16LL) - 57;
      if ( (unsigned int)v12 <= 1 )
        goto LABEL_4;
    }
    v11 = sub_F3F310(v11, v5, v12, v8, a5);
    if ( *(_DWORD *)(v10 + 20) != *(_DWORD *)(v11 + 20) )
      return 0;
    goto LABEL_11;
  }
  return result;
}

