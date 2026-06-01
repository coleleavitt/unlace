__int64 __fastcall sub_97ABE0(_QWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rsi
  char v17; // al

  if ( (unsigned __int8)sub_978340(a1, (_WORD *)a2) || a3 == 1 )
  {
    v11 = a1[2];
    if ( !v11 )
    {
      v11 = sub_975DA0((__int64)a1, 0, v5, v6, v7, v8);
      a1[2] = v11;
    }
    sub_9784E0(a1, v11, a2);
  }
  v9 = a1[2];
  if ( (*(_BYTE *)(a2 + 2) & 0x78) == 0 && *(char *)(a2 + 2) < 0 )
  {
    v12 = sub_9705F0(*(_QWORD *)(**(_QWORD **)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL));
    v15 = v12;
    if ( v12 )
    {
      v16 = *(_QWORD *)(v12 + 40);
LABEL_11:
      v9 = sub_979740((__int64)a1, v16, 1, 0, v13, v14);
      while ( 1 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v15 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        v17 = *(_BYTE *)(v15 + 16);
        if ( (unsigned __int8)(v17 - 2) > 4u )
          break;
        if ( v17 == 6 )
        {
          v16 = *(_QWORD *)(v15 + 40);
          if ( v16 )
            goto LABEL_11;
        }
      }
    }
  }
  return v9;
}

