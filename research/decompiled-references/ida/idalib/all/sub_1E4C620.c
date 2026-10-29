__int64 __fastcall sub_1E4C620(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rax
  char v13; // al
  unsigned int v14; // eax

  if ( !sub_B799A0(*(_QWORD *)(a2 + 16)) )
    return 1;
  v4 = *(unsigned int *)(a2 + 4);
  v5 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 40 > 6 )
  {
    if ( (unsigned __int8)sub_B8BE90(v5) )
    {
      v13 = *(_BYTE *)(v5 + 28) & 0x7F;
      if ( v13 == 67 )
      {
        sub_BBE5B0(v5);
        v14 = sub_BBE590(v5);
      }
      else
      {
        v14 = v13 == 47 ? *(_DWORD *)(v5 + 68) & 0xFFFFF : *(_DWORD *)(v5 + 64) & 0xFFFFF;
      }
      if ( v14 >= *(_DWORD *)(a1 + 28) )
        return 1;
    }
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v5 + 16) & 4) != 0 )
    {
      v6 = *(_QWORD *)v6;
      if ( (*(_BYTE *)(v6 + 8) & 0x7Fu) - 34 > 5 )
        goto LABEL_9;
    }
    else if ( (*(_BYTE *)(v6 + 8) & 0x7Fu) - 34 > 5 )
    {
      goto LABEL_9;
    }
    v7 = v6 - 72;
    if ( v7 )
    {
      v8 = sub_B77A30(v7);
      if ( v8 )
      {
        if ( (unsigned int)sub_BBD7B0(*(_QWORD *)(v8 + 56)) >= *(_DWORD *)(a1 + 28) )
          return 1;
      }
    }
  }
LABEL_9:
  v9 = *(_QWORD *)(a1 + 16);
  v10 = v5 | 4;
  v11 = *(unsigned int *)(v9 + 8);
  if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 12) )
  {
    sub_2237220(v9, v9 + 16, v11 + 1, 16);
    v11 = *(unsigned int *)(v9 + 8);
  }
  v12 = (__int64 *)(*(_QWORD *)v9 + 16 * v11);
  *v12 = v10;
  v12[1] = v4;
  ++*(_DWORD *)(v9 + 8);
  return 1;
}
