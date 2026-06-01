unsigned __int64 __fastcall sub_39D080(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 item_end; // r12
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-60h]
  unsigned __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-50h]
  char v22; // [rsp+21h] [rbp-47h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( a2 != -1 )
  {
    sub_39CEC0(a1, a2);
    v4 = (_QWORD *)a1[231];
    v5 = a1 + 230;
    if ( !v4 )
      goto LABEL_9;
    v6 = a1 + 230;
    do
    {
      while ( 1 )
      {
        v7 = v4[2];
        v8 = v4[3];
        if ( v4[4] < a2 )
          break;
        v6 = v4;
        v4 = (_QWORD *)v4[2];
        if ( !v7 )
          goto LABEL_7;
      }
      v4 = (_QWORD *)v4[3];
    }
    while ( v8 );
LABEL_7:
    if ( v5 == v6 || a2 < v6[4] )
    {
LABEL_9:
      v20 = a2;
      sub_2AB280(a1 + 229, &v20);
      v9 = a1[87];
      v10 = a1[86];
      v11 = v10;
      v12 = v10 + 16 * v9;
      if ( v10 == v12 )
      {
LABEL_10:
        v13 = -1;
      }
      else
      {
        while ( (*(_BYTE *)(v11 + 10) & 1) == 0 )
        {
          v11 += 16;
          if ( v12 == v11 )
            goto LABEL_10;
        }
        v13 = *(_QWORD *)v11;
      }
      v15 = v10 + 16 * (v9 - 1);
      do
      {
        if ( !v9 )
        {
          v19 = -1;
          goto LABEL_20;
        }
        v16 = v15;
        --v9;
        v15 -= 16;
      }
      while ( (*(_BYTE *)(v16 + 10) & 1) == 0 );
      v19 = *(_QWORD *)v16;
LABEL_20:
      item_end = -1;
      if ( (unsigned __int8)xrefblk_t_first_from(&v20, a2, 5) )
      {
        do
        {
          if ( (unsigned __int8)(v22 - 18) <= 1u )
          {
            sub_39CC00((__int64)a1, a2, v21);
            sub_39CEC0(a1, v21);
            if ( v21 >= v13 )
            {
              if ( v19 < v21 )
                return v23 - __readfsqword(0x28u);
            }
            else
            {
              v21 = v13 - 1;
              v18 = v13 - 1;
              if ( item_end == -1 )
              {
                item_end = get_item_end(a2);
                v18 = v21;
              }
              if ( item_end == v18 )
                v21 = item_end + 1;
            }
          }
        }
        while ( (unsigned __int8)xrefblk_t_next_from(&v20) );
      }
    }
  }
  return v23 - __readfsqword(0x28u);
}
