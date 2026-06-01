__int64 __fastcall sub_821780(__int64 a1, __int64 a2, __int64 a3, bool *a4)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rdx
  __int64 i; // rbx
  __int64 v11; // rdi
  char v12; // cl
  bool v13; // al
  char v14; // al
  unsigned int v15; // r15d
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx

  v6 = *(unsigned int *)(a2 + 32);
  v7 = *(unsigned int *)(a3 + 32);
  if ( v6 > v7 )
    v6 = v7;
  if ( !v6 )
  {
    v15 = 0;
    v13 = 0;
    goto LABEL_18;
  }
  for ( i = 0; i != v6; ++i )
  {
    while ( 1 )
    {
      v15 = i;
      v16 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8 * i);
      v17 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * i);
      if ( (a1 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
      {
        v11 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
        v12 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        v13 = v12 == 14 || (unsigned __int8)(v12 - 2) <= 4u;
        if ( v13 )
        {
          if ( v17 != v16 )
            goto LABEL_18;
          v14 = *(_BYTE *)(v11 + 16);
          if ( v12 == 14 )
          {
            if ( v14 == 14 )
            {
LABEL_9:
              a1 = *(_QWORD *)(v11 + 32);
              goto LABEL_10;
            }
          }
          else if ( (unsigned __int8)(v14 - 2) <= 4u )
          {
            goto LABEL_9;
          }
          v11 = sub_B0D320(v11);
          goto LABEL_9;
        }
      }
      if ( v17 != v16 )
        goto LABEL_17;
      v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v17 <= 7 )
      {
        a1 = 0;
        goto LABEL_10;
      }
      a1 = 0;
      if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 47 <= 2 )
        break;
LABEL_10:
      if ( v6 == ++i )
        goto LABEL_16;
    }
    a1 = *(_QWORD *)(v18 + 48);
  }
LABEL_16:
  ++v15;
LABEL_17:
  v13 = 0;
LABEL_18:
  *a4 = v13;
  return v15;
}

