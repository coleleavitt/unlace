__int64 __fastcall sub_76B440(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  unsigned __int16 v5; // dx
  int v6; // eax
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rdx
  _WORD *v11; // rdi
  _DWORD *v13; // rax

  v4 = a2;
  v5 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
  LOBYTE(a2) = (unsigned __int8)v5 > 0xFu;
  v6 = a2;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = (2 * ((v5 >> 1) & 1))
     | (16 * v6)
     | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0);
  v9 = *(unsigned int *)(v7 + 4);
  v10 = v7 + 8 * v9 + 16;
  if ( 8 * v9 )
  {
    a4 = v7 + 16;
    while ( 1 )
    {
      v11 = *(_WORD **)(v10 - 8);
      if ( (*v11 & 0x1FF) != 0xEC )
        break;
      v10 -= 8;
      if ( a4 == v10 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( !(_DWORD)v9 )
      goto LABEL_6;
    v11 = *(_WORD **)(v7 + 8LL * (unsigned int)(v9 - 1) + 16);
    if ( !v11 )
      goto LABEL_6;
  }
  if ( ((*v11 + 510) & 0x1FFu) <= 0x81 )
  {
    v13 = (_DWORD *)sub_AC9000(v11, v7, v10, a4);
    if ( v13 )
      v8 |= (*v13 >> 14) & 0x1F;
  }
LABEL_6:
  if ( v4 )
    LOBYTE(v8) = v8 | 0xA;
  return v8 & 0x1E;
}

