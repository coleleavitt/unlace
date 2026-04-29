unsigned __int64 __fastcall sub_21740(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  unsigned __int8 v4; // bl
  int v5; // edx
  int v6; // eax
  char v7; // r12
  int v8; // ecx
  char v9; // bp
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 *v15; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v2 = *(_WORD *)(a2 + 24);
  v16 = __readfsqword(0x28u);
  if ( v2 == 278 )
  {
    v4 = *(_BYTE *)(a2 + 32);
    v6 = *(char *)(a2 + 33);
    v5 = (unsigned __int16)(v4 << 8);
LABEL_6:
    v7 = v6;
    if ( (v6 & 1) != 0 )
    {
      v8 = 4;
      v9 = 4;
    }
    else if ( (v6 & 2) != 0 )
    {
      v8 = 3;
      v9 = 3;
    }
    else
    {
      v8 = 1;
      v9 = 1;
      if ( (v6 & 4) != 0 )
      {
        v8 = 2;
        v9 = 2;
      }
    }
    v14 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
    v15 = (unsigned __int64 *)(v8 | v5 | (v6 << 16) & 0xFF0000u);
    netnode_supset();
    v10 = *(_QWORD **)(a1 + 536);
    if ( v10 )
    {
      v11 = a1 + 528;
      do
      {
        while ( 1 )
        {
          v12 = v10[2];
          v13 = v10[3];
          if ( v10[4] < v14 )
            break;
          v11 = (__int64)v10;
          v10 = (_QWORD *)v10[2];
          if ( !v12 )
            goto LABEL_15;
        }
        v10 = (_QWORD *)v10[3];
      }
      while ( v13 );
LABEL_15:
      if ( a1 + 528 != v11 && v14 >= *(_QWORD *)(v11 + 32) )
        goto LABEL_18;
    }
    else
    {
      v11 = a1 + 528;
    }
    v15 = &v14;
    v11 = sub_21670((_QWORD *)(a1 + 520), (_QWORD *)v11, (__int64)&unk_894E0, &v15);
LABEL_18:
    *(_BYTE *)(v11 + 40) = v9;
    *(_BYTE *)(v11 + 41) = v4;
    *(_BYTE *)(v11 + 42) = v7;
    return v16 - __readfsqword(0x28u);
  }
  if ( v2 == 1027 || v2 == 1029 )
  {
    v4 = 15;
    v5 = 3840;
    v6 = (*(_DWORD *)(a2 + 28) >> 19) & 0xF;
    goto LABEL_6;
  }
  return v16 - __readfsqword(0x28u);
}
