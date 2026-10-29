__int64 __fastcall sub_D9D510(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  unsigned int v10; // eax
  unsigned __int8 **v11; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  int v16; // eax

  v4 = *(_DWORD *)(a3 + 24);
  if ( v4 != 2 )
  {
    if ( !v4 )
    {
      v5 = *(_QWORD *)(a3 + 32);
      if ( *(_BYTE *)(v5 + 29) )
        goto LABEL_4;
    }
    return 1;
  }
  v13 = *(_QWORD *)(a3 + 32);
  if ( !v13 )
    return 1;
  v14 = *(_QWORD *)(v13 + 16);
  if ( (v14 & 4) != 0 )
    return 1;
  v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v15 || !(unsigned __int8)sub_B559C0(v15) )
    return 1;
  v16 = *(_DWORD *)(a3 + 24);
  if ( v16 != 1 )
  {
    if ( (unsigned int)(v16 - 2) <= 1 )
      BUG();
    v5 = *(_QWORD *)(a3 + 32);
LABEL_4:
    v6 = **(_QWORD **)(v5 + 32);
    v7 = (v6 >> 1) & 1;
    if ( !(_DWORD)v7 )
      goto LABEL_5;
    goto LABEL_19;
  }
  v6 = **(_QWORD **)(a3 + 32);
  v7 = (v6 >> 1) & 1;
  if ( ((v6 >> 1) & 1) == 0 )
  {
LABEL_5:
    v8 = v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v8 )
    {
      if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 40 >= 7 )
        v8 = v7;
      v9 = v8;
    }
    else
    {
      v9 = 0;
    }
    goto LABEL_9;
  }
LABEL_19:
  v8 = 0;
  v9 = 0;
LABEL_9:
  v10 = sub_DFC980(*(_QWORD *)(a1 + 400));
  v11 = (unsigned __int8 **)sub_E0FF40(a1, v10, 2503, 0);
  if ( v11 )
    sub_AC60B0(v11, v8, 0xAu);
  sub_E10070(a1, *(unsigned int *)(v9 + 24), 103);
  return 0;
}

