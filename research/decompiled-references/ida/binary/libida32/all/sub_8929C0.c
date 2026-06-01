bool __fastcall sub_8929C0(__int64 a1, const void *a2, _WORD *a3, _WORD *a4, char a5)
{
  unsigned __int8 *v7; // rdi
  unsigned __int8 v8; // al
  __int16 v10; // bp
  int v11; // eax
  unsigned __int8 *v12; // rax

  if ( (int)sub_884210((void *)a1, 0x7Fu, a2, 0xA0u, a3, a4) < 0 )
    return 0;
  if ( a5 )
  {
LABEL_3:
    v7 = (unsigned __int8 *)(a1 + 34);
    goto LABEL_7;
  }
  if ( *(_DWORD *)a1 != -255576159 )
  {
    if ( *(_DWORD *)(a1 + 16) == -1510013123 || *(int *)(a1 + 4) > 969507778 )
    {
      v10 = *(_WORD *)(a1 + 16);
      *(_WORD *)(a1 + 2) = v10;
      memmove((void *)(a1 + 34), (const void *)(a1 + 20), 0x45u);
      v11 = *(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 28) = 0;
      *(_DWORD *)(a1 + 16) = v11;
      *(_WORD *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 4) = 0;
    }
    else
    {
      v10 = *(_WORD *)(a1 + 2);
    }
    if ( (unsigned __int16)(v10 - 520) <= 0x1E0u || v10 == 1853 )
      goto LABEL_3;
    return 0;
  }
  v12 = (unsigned __int8 *)memmove((void *)(a1 + 34), (const void *)(a1 + 4), 0x45u);
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v7 = v12;
  *(_DWORD *)(a1 + 28) = 0;
  *(_WORD *)(a1 + 32) = 0;
  *(_WORD *)(a1 + 6) = 0;
  *(_DWORD *)(a1 + 2) = 384;
LABEL_7:
  while ( 1 )
  {
    v8 = *v7;
    if ( !*v7 )
      break;
    if ( v8 <= 0x1Fu && v8 != 10 )
    {
      v8 = v7[1];
      return v8 == 0;
    }
    ++v7;
  }
  return v8 == 0;
}

