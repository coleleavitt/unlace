__int64 __fastcall sub_79960(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v9; // r13d
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+18h] [rbp-50h]

  if ( *(_QWORD *)(a1 + 648) )
  {
    v4 = (__int64 *)(a1 + 120);
    v5 = a2 + 1;
    do
    {
      v6 = *v4;
      v4 += 7;
      *v5++ = v6;
    }
    while ( (__int64 *)(a1 + 456) != v4 );
    v7 = *(_QWORD *)(a1 + 656);
LABEL_5:
    *a2 = v7;
    return 1;
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 616);
    v10 = a1 + 96;
    v11 = 0;
    v12 = 0;
    while ( v9 > 6 )
    {
      v13 = *(_QWORD *)(v10 + 24);
      v10 += 56;
      a2[++v11] = v13;
      v12 += v13;
      if ( v11 == 6 )
      {
LABEL_9:
        if ( v9 <= 6 )
        {
          v15 = sub_92A50(a1 + 664);
        }
        else
        {
          v14 = *(_BYTE *)(a1 + 633);
          v15 = *(_QWORD *)(a1 + 640);
          if ( v14 == 2 )
          {
            v15 = sub_91610(v15, -1, 2);
          }
          else if ( v14 == 3 )
          {
            v15 = sub_9ACC0(v15, -1, 2);
          }
        }
        *(_QWORD *)(a1 + 648) = v15;
        *(_BYTE *)(a1 + 848) = v9 <= 6;
        v7 = sub_78C40(a1, v12);
        *(_QWORD *)(a1 + 656) = v7;
        goto LABEL_5;
      }
    }
    while ( (unsigned __int8)sub_79640(a1, v11) )
    {
      if ( (*(_BYTE *)(v10 + 40) & 0x20) == 0 )
      {
        if ( !sub_792A0((__int64 *)a1, v10) )
          return 0;
        v17 = sub_792A0((__int64 *)a1, v10);
        v18 = *(_QWORD *)(a1 + 664);
        v19 = v17;
        v20 = *(_QWORD *)(a1 + 672);
        if ( *(_QWORD *)(a1 + 680) < (unsigned __int64)(v20 + 1) )
        {
          v22 = v19;
          v21 = sub_96080(a1 + 664, v18, v20 + 1, 8);
          v19 = v22;
          *(_QWORD *)(a1 + 664) = v21;
          v18 = v21;
          v20 = *(_QWORD *)(a1 + 672);
        }
        *(_QWORD *)(v18 + 8 * v20) = v19;
        ++*(_QWORD *)(a1 + 672);
        *(_QWORD *)(v10 + 8) = v12;
      }
      v16 = *(_QWORD *)(v10 + 24);
      v10 += 56;
      a2[++v11] = v16;
      v12 += v16;
      if ( v11 == 6 )
        goto LABEL_9;
    }
    return 0;
  }
}

