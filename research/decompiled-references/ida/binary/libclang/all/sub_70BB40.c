__int64 __fastcall sub_70BB40(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  __int64 v7; // r12
  __int64 v8; // rdi
  char v9; // al
  __int64 v10; // rax
  int *v11; // rdx
  __int64 (*v12)(); // rcx
  __int64 v13; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int16 v21; // ax
  __int64 (*v22)(); // rax
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rbp

  while ( 2 )
  {
    sub_6F6DE0((__int64)a1, a2);
    v5 = v4;
    v6 = v4;
    v7 = v4 >> 32;
    while ( 1 )
    {
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 16) - 2) <= 4u )
        goto LABEL_2;
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v9 = *(_BYTE *)(v8 + 16);
      if ( (unsigned __int8)(v9 - 2) > 4u )
        goto LABEL_7;
      v10 = sub_B0D320(a2);
      if ( !v10 )
        break;
      a2 = v10;
LABEL_2:
      a2 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    }
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v9 = *(_BYTE *)(v8 + 16);
LABEL_7:
    v11 = (int *)a1[2161];
    if ( v9 == 32 )
    {
      a2 = *(_QWORD *)(sub_6CD020(a1, v11[36]) & 0xFFFFFFFFFFFFFFF0LL);
      continue;
    }
    break;
  }
  v12 = *(__int64 (**)())(*(_QWORD *)v11 + 824LL);
  if ( v12 != sub_6A6850 )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD))v12)(a1[2161]) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v9 = *(_BYTE *)(v8 + 16);
      goto LABEL_11;
    }
    return v6;
  }
LABEL_11:
  if ( v9 != 47 )
  {
    if ( *(_BYTE *)(a2 + 16) != 14 )
    {
      if ( v9 != 14 )
        goto LABEL_18;
      v24 = sub_B0D320(a2);
      if ( !v24 )
      {
LABEL_17:
        v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v9 = *(_BYTE *)(v8 + 16);
LABEL_18:
        if ( v9 == 46 )
        {
          v15 = *(_QWORD *)(sub_B14A40(v8) + 128);
          v16 = 0;
          if ( v15 > 7 )
          {
            if ( (v15 & 4) != 0 )
            {
              v17 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
              v18 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
              v19 = *(_QWORD *)(v18 + 8);
              if ( (v19 & 7) != 0 || (v19 & 8) != 0 )
                v18 = sub_B0CF30(v17, sub_6A6850);
              v16 = v18 & 0xFFFFFFFFFFFFFFF0LL;
            }
            else
            {
              v16 = v15 & 0xFFFFFFFFFFFFFFF0LL;
            }
          }
          a2 = *(_QWORD *)v16;
          v20 = *(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
          v8 = *(_QWORD *)v20;
          v9 = *(_BYTE *)(*(_QWORD *)v20 + 16LL);
        }
        if ( v9 == 13 )
        {
          v21 = (*(_WORD *)(v8 + 18) >> 3) & 0x1FF;
          if ( v21 == 481
            || ((v21 - 445) & 0xFFF7) == 0
            || v21 == 482
            && (v22 = *(__int64 (**)())(*(_QWORD *)a1[2161] + 832LL), v22 != sub_6A6860)
            && (unsigned __int8)v22() )
          {
            if ( !(_DWORD)v7 )
            {
              v23 = sub_6F6DE0((__int64)a1, a2);
              if ( v23 >= v5 )
                return v23;
              return v5;
            }
          }
        }
        return v6;
      }
      a2 = v24;
    }
    a2 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_17;
  }
  v13 = sub_B14A40(v8);
  if ( (_DWORD)v7 == 1 || *(char *)(v13 + 28) < 0 )
    return v6;
  v25 = *(_QWORD *)(sub_AB4240(a1, v13) + 24);
  return (unsigned int)sub_6F7120((__int64)a1) * (unsigned int)v25;
}

