__int64 __fastcall sub_910440(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r13d
  __int64 v4; // rbx
  unsigned int v5; // ebp
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned int v10; // eax
  int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // edx

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_DWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v5 = sub_9E26A0(a1, a2, v4);
  if ( !(_BYTE)v5 )
    return v5;
  v6 = *(_DWORD *)(v4 + 48);
  if ( !v6 )
  {
    v7 = *(_QWORD *)(v4 + 24);
    if ( !v7 )
    {
      v8 = 64;
      goto LABEL_6;
    }
    if ( !*(_DWORD *)(v4 + 32) )
      goto LABEL_5;
    sub_A1DB00(v4);
    v6 = *(_DWORD *)(v4 + 48);
    if ( v6 != 1 )
    {
      if ( !v6 )
      {
        v13 = *(_QWORD *)(v4 + 24);
        v14 = *(_DWORD *)(v4 + 32);
        v8 = *(_QWORD *)(v13 + 32);
        if ( v14 != *(_DWORD *)(v8 + 16) && v14 )
          v8 = *(_QWORD *)(v13 + v14 + 32);
        goto LABEL_6;
      }
      goto LABEL_16;
    }
LABEL_13:
    v8 = *(_QWORD *)(v4 + 24);
    goto LABEL_6;
  }
  if ( v6 == 1 )
    goto LABEL_13;
LABEL_16:
  if ( (unsigned int)(v6 - 2) <= 1 )
    BUG();
  v7 = *(_QWORD *)(v4 + 24);
LABEL_5:
  v8 = *(_QWORD *)(v7 + 32);
LABEL_6:
  if ( (*(_QWORD *)v8 & 2) == 0
    && (v9 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL) != 0
    && (*(_BYTE *)(v9 + 28) & 0x7Fu) - 47 <= 2
    && (v10 = sub_781830(v9), v10 <= 0x1F) )
  {
    v12 = v3 & ((1 << v10) - 1);
    if ( (v3 & (1 << (v10 - 1))) != 0 )
      v12 |= -(1 << v10);
    *(_DWORD *)sub_8F7480((__int64 *)v4) = v12;
  }
  else
  {
    *(_DWORD *)sub_8F7480((__int64 *)v4) = v3;
  }
  return v5;
}

