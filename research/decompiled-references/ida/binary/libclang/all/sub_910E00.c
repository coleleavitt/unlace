__int64 __fastcall sub_910E00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // r12
  __int64 v4; // rbx
  unsigned int v5; // ebp
  int v6; // eax
  __int64 *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  _BYTE *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // rdx
  _BYTE *v20; // rax

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_BYTE *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v5 = sub_9E26A0(a1, a2, v4);
  if ( !(_BYTE)v5 )
    return v5;
  v6 = *(_DWORD *)(v4 + 48);
  if ( v6 )
  {
    if ( v6 == 1 )
      goto LABEL_26;
  }
  else
  {
    v7 = *(__int64 **)(v4 + 24);
    if ( !v7 )
    {
      v10 = 0x400000001LL;
      goto LABEL_9;
    }
    if ( !*(_DWORD *)(v4 + 32) )
    {
      v8 = v7[4];
LABEL_6:
      v9 = *(unsigned int *)(v4 + 32);
      if ( (_DWORD)v9 != *(_DWORD *)(v8 + 16) && (_DWORD)v9 )
      {
        v10 = **(_QWORD **)((char *)v7 + v9 + 32);
        if ( (v10 & 2) != 0 )
          goto LABEL_11;
      }
      else
      {
        v10 = *(_QWORD *)v8;
        if ( (*(_QWORD *)v8 & 2) != 0 )
          goto LABEL_11;
      }
LABEL_9:
      v11 = v10 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v11 || (*(_BYTE *)(v11 + 28) & 0x7Fu) - 47 > 2 )
      {
LABEL_11:
        v12 = sub_8E5480(v4);
        v13 = *(_QWORD *)v4;
        if ( *(_BYTE *)(v12 + 51) )
        {
          v14 = *(unsigned int *)(v4 + 32);
          v15 = (char *)v7 + v14 + 72;
          if ( v14 == v13 )
            goto LABEL_29;
        }
        goto LABEL_28;
      }
      goto LABEL_19;
    }
    sub_A1DB00(v4);
    v6 = *(_DWORD *)(v4 + 48);
    if ( v6 == 1 )
    {
LABEL_26:
      v7 = *(__int64 **)(v4 + 24);
      v16 = *v7;
      if ( (*v7 & 2) != 0 )
        goto LABEL_27;
      goto LABEL_17;
    }
    if ( !v6 )
    {
      v7 = *(__int64 **)(v4 + 24);
      v8 = v7[4];
      goto LABEL_6;
    }
  }
  if ( (unsigned int)(v6 - 2) <= 1 )
    BUG();
  v7 = *(__int64 **)(v4 + 24);
  v16 = *(_QWORD *)v7[4];
  if ( (v16 & 2) != 0 )
    goto LABEL_27;
LABEL_17:
  v11 = v16 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v11 && (*(_BYTE *)(v11 + 28) & 0x7Fu) - 47 <= 2 )
  {
LABEL_19:
    sub_781830(v11);
    v17 = *(_QWORD *)(v4 + 24);
    v18 = *(_QWORD *)v4;
    if ( *(_DWORD *)(v4 + 48)
      || !*(_BYTE *)(sub_8E5480(v4) + 51)
      || (v19 = *(unsigned int *)(v4 + 32), v20 = (_BYTE *)(v17 + v19 + 72), v19 != v18) )
    {
      v20 = (_BYTE *)(v17 + v18 + 40);
    }
    *v20 = v3;
    return v5;
  }
LABEL_27:
  v13 = *(_QWORD *)v4;
LABEL_28:
  v15 = (char *)v7 + v13 + 40;
LABEL_29:
  *v15 = v3;
  return v5;
}

