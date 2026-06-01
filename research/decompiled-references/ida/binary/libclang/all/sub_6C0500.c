__int64 __fastcall sub_6C0500(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // r12
  unsigned __int64 *v17; // rdx
  unsigned __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rax

  v6 = sub_7BACE0(a2);
  if ( v6 )
    sub_6C0500(a1, v6, 0, a4);
  if ( !a3 )
  {
    v7 = *(_QWORD *)(a2 + 120);
    if ( v7
      || (sub_6B0350((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96)), (v7 = *(_QWORD *)(a2 + 120)) != 0) )
    {
      if ( v7 <= 7 )
        goto LABEL_28;
    }
    else
    {
      sub_6B0350((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96));
      v7 = *(_QWORD *)(a2 + 120);
      if ( v7 <= 7 )
        goto LABEL_28;
    }
    v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8 )
    {
      v9 = sub_79C190(v8 + 48);
      v10 = *(unsigned int *)(a4 + 8);
      v11 = v9;
      if ( v9 )
      {
        do
        {
          if ( (*(_BYTE *)(v11 + 28) & 0x7F) == 0x30 )
          {
            v13 = v11;
            v14 = 0;
            while ( 1 )
            {
              v15 = *(_QWORD *)(v13 + 8);
              v13 = v15 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v15 <= 7 )
                break;
              if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0x30 )
                ++v14;
            }
            v16 = v14 + 1;
            if ( *(unsigned int *)(a4 + 12) >= (unsigned __int64)(v16 + v10) )
            {
              v17 = (unsigned __int64 *)(*(_QWORD *)a4 + 8 * v10);
              goto LABEL_17;
            }
            v10 += v16;
            goto LABEL_30;
          }
          v12 = *(_QWORD *)(v11 + 8);
          v11 = v12 & 0xFFFFFFFFFFFFFFF8LL;
        }
        while ( v12 > 7 );
        v16 = 0;
        if ( *(_DWORD *)(a4 + 12) >= *(_DWORD *)(a4 + 8) )
          goto LABEL_21;
        goto LABEL_29;
      }
      v16 = 0;
      if ( *(_DWORD *)(a4 + 12) < (unsigned int)v10 )
      {
LABEL_30:
        sub_25D6060(a4, a4 + 16, v10, 8);
        v10 = *(unsigned int *)(a4 + 8);
        v17 = (unsigned __int64 *)(*(_QWORD *)a4 + 8 * v10);
        if ( v11 )
        {
LABEL_17:
          *v17++ = v11;
          while ( 1 )
          {
            v18 = *(_QWORD *)(v11 + 8);
            v11 = v18 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v18 <= 7 )
              break;
            if ( (*(_BYTE *)(v11 + 28) & 0x7F) == 0x30 )
              goto LABEL_17;
          }
          v10 = *(unsigned int *)(a4 + 8);
        }
      }
LABEL_21:
      result = v16 + v10;
      *(_DWORD *)(a4 + 8) = v16 + v10;
      return result;
    }
LABEL_28:
    v10 = *(unsigned int *)(a4 + 8);
    v16 = 0;
    if ( *(_DWORD *)(a4 + 12) < (unsigned int)v10 )
    {
LABEL_29:
      v11 = 0;
      goto LABEL_30;
    }
    goto LABEL_21;
  }
  result = sub_7BBA20(a2);
  v20 = result;
  if ( result )
  {
    v21 = *(unsigned int *)(a4 + 8);
    v22 = v21 + 1;
    if ( *(unsigned int *)(a4 + 12) < (unsigned __int64)(v21 + 1) )
      goto LABEL_27;
    while ( 1 )
    {
      *(_QWORD *)(*(_QWORD *)a4 + 8 * v21) = v20;
      result = *(unsigned int *)(a4 + 8);
      v21 = (unsigned int)(result + 1);
      *(_DWORD *)(a4 + 8) = v21;
      v20 = *(_QWORD *)(v20 + 80);
      if ( !v20 )
        break;
      v22 = v21 + 1;
      if ( *(unsigned int *)(a4 + 12) < (unsigned __int64)(v21 + 1) )
      {
LABEL_27:
        sub_25D6060(a4, a4 + 16, v22, 8);
        v21 = *(unsigned int *)(a4 + 8);
      }
    }
  }
  return result;
}

