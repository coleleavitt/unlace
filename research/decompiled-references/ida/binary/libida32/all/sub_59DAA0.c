__int64 __fastcall sub_59DAA0(_QWORD *a1, __int64 a2, int a3, char a4)
{
  unsigned int v5; // ebp
  unsigned int *v8; // rax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // edx
  unsigned int v16; // eax
  int v17; // edx
  unsigned int v18[3]; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1[2] + 11LL) & 2) == 0 )
    return 0;
  v5 = a2;
  v8 = sub_4EE820((__int64)(a1 + 194), a2);
  if ( !v8 || *((_BYTE *)v8 + 23) == 2 )
    return 0;
  v9 = sub_3B9AA0((__int64)a1, a2, 4);
  if ( (~(_WORD)v9 & 0x600) != 0 || (v9 & 0x10000000) == 0 )
  {
    v10 = sub_3C07C0(a1, a2);
    if ( a4 == 1 || v10 == -1 )
    {
      if ( v10 != a3 )
      {
        if ( a3 == -1 )
        {
          v16 = ea2node((unsigned int)a2);
          netnode_supdel(v16, 15, 65);
        }
        else
        {
          v18[0] = a3 + 1;
          v11 = ea2node((unsigned int)a2);
          netnode_supset(v11, 15, v18, 4, 65);
        }
LABEL_11:
        if ( (unsigned __int8)xrefblk_t_first_to(v18, v5, 1) )
        {
          do
          {
            sub_5B2990(a1, v18[0]);
            sub_3A1A90(a1, v18[0], v18[0] + 1, 0x28u);
          }
          while ( (unsigned __int8)xrefblk_t_next_to(v18) );
        }
        return 1;
      }
      return 1;
    }
    return 0;
  }
  v12 = sub_5AFCE0(a1);
  v13 = v12;
  if ( !v12 || *(_DWORD *)v12 != v5 )
    return 0;
  v14 = *(_QWORD *)(v12 + 8);
  if ( (v14 & 0x4000) == 0 )
  {
    v15 = *(_DWORD *)(v13 + 28);
    if ( a3 != -1 )
    {
      if ( a3 == v15 )
      {
LABEL_21:
        BYTE1(v14) |= 0x40u;
LABEL_22:
        *(_QWORD *)(v13 + 8) = v14;
        sub_5ACD60(a1, v13, 0);
        goto LABEL_11;
      }
LABEL_20:
      *(_DWORD *)(v13 + 28) = a3;
      goto LABEL_21;
    }
    if ( v15 )
    {
LABEL_29:
      *(_DWORD *)(v13 + 28) = 0;
      BYTE1(v14) &= ~0x40u;
      goto LABEL_22;
    }
    return 1;
  }
  if ( !a4 )
    return 0;
  v17 = *(_DWORD *)(v13 + 28);
  if ( a3 == -1 )
  {
    if ( !v17 )
    {
      BYTE1(v14) &= ~0x40u;
      goto LABEL_22;
    }
    goto LABEL_29;
  }
  if ( a3 != v17 )
    goto LABEL_20;
  return 1;
}

