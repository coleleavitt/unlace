__int64 __fastcall sub_910280(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r12d
  __int64 v4; // rbx
  unsigned int v5; // ebp
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rdx
  _WORD *v15; // rax
  __int64 v17; // rcx
  unsigned int v18; // edx

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(unsigned __int16 *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v5 = sub_9E26A0(a1, a2, v4);
  if ( !(_BYTE)v5 )
    return v5;
  v6 = *(_DWORD *)(v4 + 48);
  if ( v6 )
  {
    if ( v6 != 1 )
    {
LABEL_21:
      if ( (unsigned int)(v6 - 2) <= 1 )
        BUG();
      v7 = *(_QWORD *)(v4 + 24);
      goto LABEL_5;
    }
  }
  else
  {
    v7 = *(_QWORD *)(v4 + 24);
    if ( !v7 )
    {
      v8 = 64;
      goto LABEL_6;
    }
    if ( !*(_DWORD *)(v4 + 32) )
    {
LABEL_5:
      v8 = *(_QWORD *)(v7 + 32);
      goto LABEL_6;
    }
    sub_A1DB00(v4);
    v6 = *(_DWORD *)(v4 + 48);
    if ( v6 != 1 )
    {
      if ( v6 )
        goto LABEL_21;
      v17 = *(_QWORD *)(v4 + 24);
      v18 = *(_DWORD *)(v4 + 32);
      v8 = *(_QWORD *)(v17 + 32);
      if ( v18 != *(_DWORD *)(v8 + 16) && v18 )
        v8 = *(_QWORD *)(v17 + v18 + 32);
LABEL_6:
      v9 = *(_QWORD *)v8;
      if ( (*(_QWORD *)v8 & 2) != 0 )
        goto LABEL_18;
      goto LABEL_7;
    }
  }
  v9 = **(_QWORD **)(v4 + 24);
  if ( (v9 & 2) != 0 )
    goto LABEL_18;
LABEL_7:
  v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v10 && (*(_BYTE *)(v10 + 28) & 0x7Fu) - 47 <= 2 )
  {
    v11 = sub_781830(v10);
    if ( v11 <= 0xF )
    {
      v12 = *(_QWORD *)(v4 + 24);
      v13 = *(_QWORD *)v4;
      v3 &= (1 << v11) - 1;
      if ( !*(_DWORD *)(v4 + 48) )
        goto LABEL_11;
    }
    else
    {
      v12 = *(_QWORD *)(v4 + 24);
      v13 = *(_QWORD *)v4;
      if ( !*(_DWORD *)(v4 + 48) )
      {
LABEL_11:
        if ( *(_BYTE *)(sub_8E5480(v4) + 51) )
        {
          v14 = *(unsigned int *)(v4 + 32);
          v15 = (_WORD *)(v12 + v14 + 72);
          if ( v14 == v13 )
            goto LABEL_14;
        }
      }
    }
    v15 = (_WORD *)(v12 + v13 + 40);
LABEL_14:
    *v15 = v3;
    return v5;
  }
LABEL_18:
  *(_WORD *)sub_8F7430((__int64 *)v4) = v3;
  return v5;
}

