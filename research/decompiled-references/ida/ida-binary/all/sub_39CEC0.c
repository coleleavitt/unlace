unsigned __int64 __fastcall sub_39CEC0(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r14
  unsigned __int64 v18[2]; // [rsp+0h] [rbp-58h] BYREF
  char v19; // [rsp+11h] [rbp-47h]
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v3 = (_QWORD *)a1[225];
  v20 = __readfsqword(0x28u);
  if ( !v3 )
    goto LABEL_8;
  v5 = a1 + 224;
  v6 = v5;
  do
  {
    while ( 1 )
    {
      v7 = v3[2];
      v8 = v3[3];
      if ( v3[4] < a2 )
        break;
      v6 = v3;
      v3 = (_QWORD *)v3[2];
      if ( !v7 )
        goto LABEL_6;
    }
    v3 = (_QWORD *)v3[3];
  }
  while ( v8 );
LABEL_6:
  if ( v5 == v6 || a2 < v6[4] )
  {
LABEL_8:
    v18[0] = a2;
    sub_2AB280(a1 + 223, v18);
    v9 = a1[87];
    v10 = a1[86];
    v11 = v10;
    v12 = v10 + 16 * v9;
    if ( v10 == v12 )
    {
LABEL_26:
      v13 = -1;
    }
    else
    {
      while ( (*(_BYTE *)(v11 + 10) & 1) == 0 )
      {
        v11 += 16;
        if ( v12 == v11 )
          goto LABEL_26;
      }
      v13 = *(_QWORD *)v11;
    }
    v14 = v10 + 16 * (v9 - 1);
    do
    {
      if ( !v9 )
      {
        v16 = -1;
        goto LABEL_17;
      }
      v15 = v14;
      --v9;
      v14 -= 16;
    }
    while ( (*(_BYTE *)(v15 + 10) & 1) == 0 );
    v16 = *(_QWORD *)v15;
LABEL_17:
    if ( (unsigned __int8)xrefblk_t_first_to(v18, a2, 5) )
    {
      do
      {
        if ( (unsigned __int8)(v19 - 18) <= 1u )
        {
          sub_39CC00((__int64)a1, v18[0], a2);
          if ( v18[0] < v13 )
          {
            v18[0] = v13 - 1;
            if ( v13 - 1 == prev_not_tail(a2) )
              ++v18[0];
          }
          else if ( v16 < v18[0] )
          {
            return v20 - __readfsqword(0x28u);
          }
        }
      }
      while ( (unsigned __int8)xrefblk_t_next_to(v18) );
    }
  }
  return v20 - __readfsqword(0x28u);
}
