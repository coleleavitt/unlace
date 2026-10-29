__int64 __fastcall sub_5B7CA0(_QWORD *a1, unsigned __int64 a2, int a3, char a4)
{
  __int64 v6; // r12
  unsigned __int64 *v8; // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v19[3] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1[2] + 11LL) & 2) == 0 )
    return 0;
  v6 = a3;
  v8 = sub_505D70((__int64)(a1 + 203), a2);
  if ( !v8 || *((_BYTE *)v8 + 43) == 2 )
    return 0;
  v9 = sub_3BE900(a1, a2, 4);
  if ( (~(_WORD)v9 & 0x600) != 0 || (v9 & 0x10000000) == 0 )
  {
    v10 = sub_3C58C0(a1, a2);
    if ( a4 == 1 || v10 == -1 )
    {
      if ( (int)v6 != v10 )
      {
        if ( (_DWORD)v6 == -1 )
        {
          v17 = ea2node(a2);
          netnode_supdel(v17, 15, 65);
        }
        else
        {
          v19[0] = (int)v6 + 1LL;
          v11 = ea2node(a2);
          netnode_supset(v11, 15, v19, 8, 65, v12);
        }
LABEL_11:
        if ( (unsigned __int8)xrefblk_t_first_to(v19, a2, 1) )
        {
          do
          {
            sub_5CD8C0(a1, v19[0]);
            sub_3A61A0(a1, v19[0], v19[0] + 1, 0x28u);
          }
          while ( (unsigned __int8)xrefblk_t_next_to(v19) );
        }
        return 1;
      }
      return 1;
    }
    return 0;
  }
  v13 = (_QWORD *)sub_5CAA10(a1);
  v14 = v13;
  if ( !v13 || *v13 != a2 )
    return 0;
  v15 = v13[2];
  if ( (v15 & 0x4000) == 0 )
  {
    v16 = v14[6];
    if ( (_DWORD)v6 != -1 )
    {
      if ( v6 == v16 )
      {
LABEL_21:
        BYTE1(v15) |= 0x40u;
LABEL_22:
        v14[2] = v15;
        sub_5C77B0(a1, v14, 0);
        goto LABEL_11;
      }
LABEL_20:
      v14[6] = v6;
      goto LABEL_21;
    }
    if ( v16 )
    {
LABEL_29:
      v14[6] = 0;
      BYTE1(v15) &= ~0x40u;
      goto LABEL_22;
    }
    return 1;
  }
  if ( !a4 )
    return 0;
  v18 = v14[6];
  if ( (_DWORD)v6 == -1 )
  {
    if ( !v18 )
    {
      BYTE1(v15) &= ~0x40u;
      goto LABEL_22;
    }
    goto LABEL_29;
  }
  if ( v6 != v18 )
    goto LABEL_20;
  return 1;
}
