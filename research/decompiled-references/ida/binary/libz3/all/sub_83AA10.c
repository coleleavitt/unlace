__int64 __fastcall sub_83AA10(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // r10
  unsigned int v4; // r9d
  char v5; // al
  _DWORD *v6; // rdx
  unsigned int v7; // r11d
  int v8; // r9d
  unsigned int v9; // edi
  __int64 v10; // r12
  __int64 v11; // rax
  _DWORD *v12; // r8
  _DWORD *v13; // rsi
  _DWORD *i; // rax
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rdi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax

  *(_BYTE *)(a1 + 952) = 0;
  if ( !(unsigned __int8)sub_FF9CD0(*(_QWORD *)(a1 + 496)) && !*(_BYTE *)(a1 + 152) )
  {
    v20 = *(_QWORD *)(a1 + 520);
    if ( !v20 || !*(_DWORD *)(v20 - 4) )
    {
      v21 = *(_QWORD *)(a1 + 248);
      v22 = v21 ? *(_DWORD *)(v21 - 4) : 0;
      if ( *(_DWORD *)(a1 + 344) == v22 )
        return 0;
    }
  }
  *(_BYTE *)(a1 + 152) = 0;
  sub_82AC10(a1);
  if ( *(_QWORD *)(a1 + 472) )
  {
    sub_1021C90();
    sub_838C10(a1);
    sub_1004930(*(_QWORD *)(a1 + 496));
  }
  v2 = *(_DWORD *)(a1 + 344);
  v3 = *(_QWORD *)(a1 + 248);
  v4 = v2;
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 3184LL);
      if ( v4 >= *(_DWORD *)(v3 - 4) )
        break;
      if ( v5 )
        return 1;
      if ( (unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 72)) )
      {
        v3 = *(_QWORD *)(a1 + 248);
        v6 = *(_DWORD **)(a1 + 296);
        v7 = *(_DWORD *)(v3 + 4LL * *(unsigned int *)(a1 + 344));
        v8 = *(_DWORD *)(a1 + 344);
        v9 = v7 >> 1;
        v10 = 24LL * ((v7 >> 1) & (*(_DWORD *)(a1 + 304) - 1));
        v11 = 24LL * *(unsigned int *)(a1 + 304);
        v12 = &v6[(unsigned __int64)v10 / 4];
        v13 = &v6[(unsigned __int64)v11 / 4];
        if ( v10 != v11 )
        {
          for ( i = &v6[(unsigned __int64)v10 / 4]; v13 != i; i += 6 )
          {
            v15 = i[1];
            if ( v15 == 2 )
            {
              if ( v9 == *i && v9 == i[2] )
              {
LABEL_16:
                sub_832C70(a1, (*(_BYTE *)(*((_QWORD *)i + 2) + 8LL) & 1) == (v7 & 1), *((_QWORD *)i + 2));
                v8 = *(_DWORD *)(a1 + 344);
                v3 = *(_QWORD *)(a1 + 248);
                goto LABEL_17;
              }
            }
            else if ( !v15 )
            {
              goto LABEL_17;
            }
          }
        }
        for ( ; v12 != v6; v6 += 6 )
        {
          v19 = v6[1];
          if ( v19 == 2 )
          {
            if ( v9 == *v6 && v9 == v6[2] )
            {
              i = v6;
              goto LABEL_16;
            }
          }
          else if ( !v19 )
          {
            break;
          }
        }
LABEL_17:
        v4 = v8 + 1;
        *(_DWORD *)(a1 + 344) = v4;
        if ( v3 )
          continue;
      }
      goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    v5 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 3184LL);
  }
  if ( v5 )
    return 1;
  v16 = sub_1010850(*(_QWORD *)(a1 + 496));
  v17 = *(_QWORD *)(a1 + 72);
  if ( v16 == 3 )
    goto LABEL_42;
  if ( v16 > 3 )
  {
    if ( (unsigned int)(v16 - 10) > 1 )
      return sub_18290A0(v17);
LABEL_42:
    if ( (unsigned __int8)sub_18290A0(v17) )
    {
      sub_82E220(a1, v2);
      sub_83A570(a1);
      return 1;
    }
    return 0;
  }
  if ( v16 == 1 )
  {
    if ( (unsigned __int8)sub_18290A0(v17) )
    {
      sub_82FEE0(a1);
      return 1;
    }
    return 0;
  }
  return sub_18290A0(v17);
}

