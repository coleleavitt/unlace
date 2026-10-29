__int64 __fastcall sub_13F20(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int16 v4; // ax
  char v5; // al
  char v7; // al
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax

  if ( a2 && a3 )
  {
    v4 = *(_WORD *)(a3 + 16);
    if ( v4 != 296 )
    {
      if ( v4 == 73 || v4 == 243 || v4 == 209 )
        return a2;
      v5 = *(_BYTE *)(a3 + 18);
      switch ( v5 )
      {
        case 4:
          v12 = 2;
          break;
        case 5:
          v12 = *(unsigned int *)(a3 + 8);
          if ( !*(_DWORD *)(a3 + 8) )
            return a2;
          break;
        case 3:
          v12 = 1;
          break;
        default:
          return a2;
      }
      v13 = 0;
      if ( v5 == 4 )
        goto LABEL_27;
LABEL_22:
      if ( v5 == 5 )
      {
        if ( *(unsigned int *)(a3 + 8) <= v13 )
        {
LABEL_24:
          while ( 1 )
          {
            v14 = 0;
LABEL_25:
            ++v13;
            sub_13F20(a1, a2, v14);
            if ( v13 >= v12 )
              return a2;
            v5 = *(_BYTE *)(a3 + 18);
            if ( v5 != 4 )
              goto LABEL_22;
LABEL_27:
            if ( v13 <= 1 )
              goto LABEL_30;
          }
        }
        v15 = *(_QWORD *)a3;
      }
      else
      {
        if ( v5 != 3 || v13 )
          goto LABEL_24;
LABEL_30:
        v15 = a3;
      }
      v14 = *(_QWORD *)(v15 + 8 * v13);
      goto LABEL_25;
    }
    v7 = *(_BYTE *)(a3 + 18);
    v8 = *(unsigned int *)(a3 + 8);
    switch ( v7 )
    {
      case 4:
        v10 = 8;
        break;
      case 5:
        if ( !(_DWORD)v8 )
          goto LABEL_13;
        v11 = *(_QWORD *)a3;
        v10 = 8 * v8 - 8;
LABEL_16:
        if ( *(_WORD *)(*(_QWORD *)(v11 + v10) + 16LL) == 332 )
          return a2;
        goto LABEL_13;
      case 3:
        v10 = 0;
        break;
      default:
LABEL_13:
        v9 = sub_12C70(a1, 1);
        *(_WORD *)(v9 + 16) = 332;
        *(_QWORD *)v9 = a2;
        *(_BYTE *)(v9 + 18) = 2;
        sub_C080(a3, v9, a1);
        return a2;
    }
    v11 = a3;
    goto LABEL_16;
  }
  return 0;
}
