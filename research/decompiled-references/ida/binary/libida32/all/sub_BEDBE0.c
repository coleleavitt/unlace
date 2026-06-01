__int64 __fastcall sub_BEDBE0(unsigned __int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned __int64 v6; // rax
  __int64 v8; // r15
  __int64 i; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rsi

  v6 = *(unsigned int *)(a3 + 32);
  if ( v6 > *(unsigned int *)(a2 + 32) )
    v6 = *(unsigned int *)(a2 + 32);
  if ( v6 )
  {
    v8 = (unsigned int)(v6 - 1);
    for ( i = 0; ; i = v14 )
    {
      v13 = i;
      v15 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8 * i);
      v12 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * i);
      v16 = a1 & 0xFFFFFFFFFFFFFFF0LL;
      if ( v16 )
      {
        v10 = *(_QWORD *)v16;
        v11 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        if ( (unsigned __int8)(v11 - 2) <= 4u )
        {
          if ( v15 != v12 )
            goto LABEL_23;
          v12 = (unsigned int)*(unsigned __int8 *)(v10 + 16) - 2;
          if ( (unsigned __int8)(*(_BYTE *)(v10 + 16) - 2) > 4u )
            goto LABEL_22;
          goto LABEL_8;
        }
        if ( (_BYTE)v11 == 14 )
        {
          if ( v15 != v12 )
          {
LABEL_23:
            *a4 = 1;
            return v13;
          }
          if ( *(_BYTE *)(v10 + 16) != 14 )
LABEL_22:
            v10 = sub_F3F310(v10, v15, v12, v11);
LABEL_8:
          a1 = *(_QWORD *)(v10 + 32);
          goto LABEL_9;
        }
      }
      if ( v15 != v12 )
        goto LABEL_16;
      v17 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      a1 = v17;
      if ( !v17 )
        goto LABEL_9;
      if ( (*(_BYTE *)(v17 + 28) & 0x7Fu) - 49 > 2 )
      {
        a1 = 0;
LABEL_9:
        v13 = i + 1;
        v14 = i + 1;
        if ( v8 == i )
          goto LABEL_16;
        continue;
      }
      a1 = *(_QWORD *)(v17 + 48);
      v13 = i + 1;
      v14 = i + 1;
      if ( v8 == i )
        goto LABEL_16;
    }
  }
  v13 = 0;
LABEL_16:
  *a4 = 0;
  return v13;
}

