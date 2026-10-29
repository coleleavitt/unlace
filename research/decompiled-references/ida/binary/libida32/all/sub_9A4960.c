char __fastcall sub_9A4960(__int64 a1, bool *a2)
{
  __int16 v2; // dx
  char result; // al
  void *v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned int v8; // ebp
  int v9; // eax
  void *v10; // rdi
  void *v11; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-20h]

  v2 = *(_WORD *)a1 & 0x1FF;
  result = v2 == 104 || v2 == 58;
  if ( result )
  {
    *a2 = 0;
    return result;
  }
  switch ( v2 )
  {
    case 's':
      *a2 = (*(_QWORD *)a1 & 0x80000LL) != 0;
      return 1;
    case '4':
      v5 = *(void **)(a1 + 16);
      v6 = *(unsigned int *)(a1 + 24);
      v7 = (unsigned __int64)(v6 + 63) >> 6;
      if ( v7 > 1 )
      {
        sub_21E18D0(&v11, v6, v7, v5);
      }
      else
      {
        v12 = *(_DWORD *)(a1 + 24);
        if ( (unsigned int)v6 <= 0x40 )
        {
          v11 = v5;
          goto LABEL_8;
        }
        sub_21E1730(&v11, v5, 0);
      }
      v8 = v12;
      if ( v12 > 0x40 )
      {
        v9 = sub_21E2A40(&v11);
        v10 = v11;
        *a2 = v8 != v9;
        if ( v10 )
          operator delete[](v10);
        return 1;
      }
LABEL_8:
      *a2 = v11 != nullptr;
      return 1;
    case 'O':
      return sub_9A4960(*(_QWORD *)(a1 + 16));
  }
  return result;
}

