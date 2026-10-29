__int64 __fastcall sub_7776F0(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, char *a5, __int64 a6)
{
  char *v7; // r11
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  _QWORD *v19; // rdx
  __int64 v20; // r10

  v7 = a5;
  v11 = a1[6] + 176 * a2;
  v12 = *(_QWORD *)(v11 + 32);
  v13 = *(_QWORD *)(v11 + 24);
  v14 = v13 + 9 * v12;
  if ( (*(_BYTE *)(v11 + 168) & 4) != 0 )
  {
    if ( *(_BYTE *)(a4 + 8) )
    {
      v16 = *(_QWORD *)(v11 + 24);
      if ( v12 )
      {
        do
        {
          if ( !*(_BYTE *)(v16 + 8) )
            break;
          if ( *(_QWORD *)v16 == *(_QWORD *)a4 )
            goto LABEL_7;
          v16 += 9;
        }
        while ( v16 != v14 );
      }
    }
    else
    {
      v16 = sub_773990(*(_QWORD *)(v11 + 24), v13 + 9 * v12, a4);
      if ( v16 != v20 && *(_QWORD *)v16 == *v19 && !*(_BYTE *)(v16 + 8) )
        goto LABEL_8;
    }
LABEL_21:
    if ( !under_debugger )
      interr(1787);
    BUG();
  }
  if ( v13 == v14 )
    goto LABEL_21;
  v15 = *(_QWORD *)a4;
  v16 = v13;
  while ( v15 != *(_QWORD *)v16 || *(_BYTE *)(a4 + 8) != *(_BYTE *)(v16 + 8) )
  {
    v16 += 9;
    if ( v16 == v14 )
      goto LABEL_21;
  }
LABEL_7:
  if ( v16 == v14 )
    goto LABEL_21;
LABEL_8:
  v17 = 0x8E38E38E38E38E39LL * (v16 - v13);
  if ( v17 == -1 )
    goto LABEL_21;
  if ( !v7 || sub_777000((__int64)a1, a3, v7) == -1 )
    return sub_776A40(a1, a2, a3, v17, a6, 1);
  else
    return 1;
}
