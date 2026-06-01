__int64 __fastcall sub_2161610(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // dx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+8h] [rbp-20h] BYREF
  __int64 v16; // [rsp+10h] [rbp-18h] BYREF
  char v17; // [rsp+18h] [rbp-10h]

  if ( a2[12] && a3 )
  {
    v4 = *(_WORD *)(a3 + 12);
    if ( v4 <= 0xFEFFu )
    {
      v5 = v4;
      if ( v4 )
      {
LABEL_5:
        v6 = a2[6];
        if ( v6 )
        {
          v7 = *(unsigned __int16 *)(v6 + 2);
          if ( (_WORD)v7 == 0xFFFF )
            goto LABEL_12;
        }
        else
        {
          v7 = *(unsigned int *)(a2[7] + 44LL);
        }
        if ( (unsigned int)v5 <= (unsigned int)v7 )
        {
          v8 = 5 * v5;
          v9 = a2[11];
          v17 &= ~1u;
          *(_BYTE *)(a1 + 16) &= ~1u;
          *(_QWORD *)(a1 + 8) = a2;
          v16 = v9 + 8 * v8 - 40;
          *(_QWORD *)a1 = v16;
LABEL_9:
          sub_21615F0(&v16);
          return a1;
        }
LABEL_12:
        v13 = sub_2195B10(a1, a2, v7, a4);
        sub_A09EA0((__int64)&v15, 3u, v13, "section index out of bounds");
        v14 = v15;
        v17 |= 1u;
        v16 = 0;
        *(_BYTE *)(a1 + 16) |= 1u;
        *(_QWORD *)a1 = v14;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v5 = *(int *)(a3 + 12);
    if ( (int)v5 > 0 )
      goto LABEL_5;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 360LL))(a2);
  *(_BYTE *)(a1 + 16) &= ~1u;
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = v12;
  return a1;
}
