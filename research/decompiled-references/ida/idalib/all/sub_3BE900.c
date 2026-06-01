unsigned __int64 __fastcall sub_3BE900(_QWORD *a1, unsigned __int64 a2, char a3)
{
  unsigned int *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r13
  int v9; // edx
  unsigned __int64 v10; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // r15
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 range; // rdx
  unsigned __int64 v21; // rax

  if ( a2 == -1 )
    return 0;
  sub_3BDAC0((__int64)a1, a2, 0);
  v6 = (unsigned int *)a1[129];
  v7 = a1[128];
  if ( (unsigned __int64)v6 > 0xFFFFFFFFFFFFFFFDLL )
  {
    if ( v7 == a2 )
    {
      v8 = *(unsigned int *)(a1[125] + 48LL);
    }
    else
    {
      v16 = a1 + 113;
      v17 = a1[125];
      if ( v6 == (unsigned int *)-1LL )
        v16 = a1 + 119;
      v18 = v16[3];
      while ( v17 != v18 )
      {
        v19 = std::_Rb_tree_decrement(v17);
        v8 = *(_QWORD *)(v19 + 40);
        v17 = v19;
        if ( v8 )
        {
          if ( (_QWORD *)v19 != v16 + 1 )
          {
            v8 = (unsigned __int64)(a2 < *(_QWORD *)(v19 + 32) + v8) << 9;
            goto LABEL_33;
          }
          break;
        }
        if ( (*(_DWORD *)(v19 + 48) & 0x600) != 0x200 )
          goto LABEL_33;
      }
      v8 = 0;
LABEL_33:
      if ( a1[146] )
      {
        range = rangeset_t_find_range(a1 + 145, a2);
        v21 = v8;
        if ( range )
        {
          BYTE1(v21) = BYTE1(v8) | 1;
          v8 = v21;
        }
      }
    }
    if ( (a3 & 3) != 0 )
      goto LABEL_6;
LABEL_17:
    v8 &= 0xFFFFFFFFFFFFFE00LL;
    goto LABEL_18;
  }
  if ( !v6 || v7 != a2 )
    return 0;
  v8 = *v6;
  if ( (a3 & 3) == 0 )
    goto LABEL_17;
LABEL_6:
  if ( (a3 & 2) == 0 )
  {
    if ( (unsigned __int8)sub_3FC580(a1) )
    {
      if ( sub_3FCE70(a1, a2) )
      {
        v9 = sub_3FC7A0(a1, 0, a2);
        v10 = v8;
        if ( v9 > 0 )
        {
          BYTE1(v10) = BYTE1(v8) | 1;
          v8 = v10;
        }
      }
    }
  }
LABEL_18:
  if ( (a3 & 4) == 0 )
  {
    v12 = (_QWORD *)a1[193];
    if ( v12 )
    {
      v13 = a1 + 192;
      do
      {
        while ( 1 )
        {
          v14 = v12[2];
          v15 = v12[3];
          if ( v12[4] < a2 )
            break;
          v13 = v12;
          v12 = (_QWORD *)v12[2];
          if ( !v14 )
            goto LABEL_24;
        }
        v12 = (_QWORD *)v12[3];
      }
      while ( v15 );
LABEL_24:
      if ( v13 != a1 + 192 && a2 >= v13[4] )
        v8 |= (unsigned __int64)*((unsigned int *)v13 + 10) << 32;
    }
  }
  return v8;
}
