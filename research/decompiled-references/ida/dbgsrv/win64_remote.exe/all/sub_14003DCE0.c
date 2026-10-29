/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003DCE0
// Address: 0x000000014003DCE0

//----- (000000014003DCE0) ----------------------------------------------------
__int64 __fastcall sub_14003DCE0(__int64 a1)
{
  __int64 *v2; // rbx
  char *v3; // rax
  char v4; // cl
  _BYTE *v5; // rcx
  char v6; // al
  bool v7; // zf
  __int64 v8; // rax
  char v9; // cl
  bool v10; // zf
  int v11; // ecx
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned int v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 8);
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        if ( !*(_BYTE *)(a1 + 152) )
        {
          while ( 1 )
          {
            v9 = *(_BYTE *)*v2;
            if ( v9 != 32 && (unsigned __int8)(v9 - 9) > 4u )
              break;
            v8 = *v2 + 1;
LABEL_12:
            *v2 = v8;
          }
          switch ( v9 )
          {
            case ';':
              v10 = (*(_BYTE *)(a1 + 724) & 8) == 0;
LABEL_27:
              if ( !v10 )
                goto LABEL_29;
              goto LABEL_28;
            case '/':
              v11 = *(_DWORD *)(a1 + 724);
              if ( (v11 & 1) == 0 )
              {
LABEL_28:
                if ( !**(_BYTE **)(a1 + 8) )
                  goto LABEL_29;
                return 0;
              }
              break;
            case '(':
              v11 = *(_DWORD *)(a1 + 724);
              if ( (v11 & 2) == 0 )
                goto LABEL_28;
              break;
            default:
              goto LABEL_28;
          }
          v12 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL);
          if ( v12 == 42 )
          {
            *(_BYTE *)(a1 + 152) = 1;
            continue;
          }
          if ( v12 != 47 )
            goto LABEL_28;
          v10 = (v11 & 4) == 0;
          goto LABEL_27;
        }
        break;
      }
      while ( 1 )
      {
        v3 = (char *)*v2;
        v4 = *(_BYTE *)*v2;
        if ( v4 != 42 )
          break;
LABEL_6:
        v5 = v3 + 1;
        *v2 = (__int64)(v3 + 1);
        v6 = v3[1];
        if ( v6 == 47 )
        {
          v7 = (*(_BYTE *)(a1 + 724) & 1) == 0;
LABEL_10:
          if ( !v7 )
          {
            v8 = (__int64)(v5 + 1);
            *(_BYTE *)(a1 + 152) = 0;
            goto LABEL_12;
          }
        }
        else if ( v6 == 41 )
        {
          v7 = (*(_BYTE *)(a1 + 724) & 2) == 0;
          goto LABEL_10;
        }
      }
      while ( v4 )
      {
        *v2 = (__int64)++v3;
        v4 = *v3;
        if ( *v3 == 42 )
          goto LABEL_6;
      }
LABEL_29:
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(a1 + 56) + 56 * v13;
        *(_QWORD *)a1 = *(_QWORD *)(v14 - 32);
        v2 = (__int64 *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = *(_QWORD *)(v14 - 24);
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(v14 - 8);
        *(_QWORD *)(a1 + 64) = v13 - 1;
        if ( *(_QWORD *)(v14 - 56) )
        {
          sub_14001A6C0((_QWORD *)(v14 - 56), 0);
          j_free(*(void **)(v14 - 56));
          *(_QWORD *)(v14 - 56) = 0;
          *(_QWORD *)(v14 - 40) = 0;
        }
        continue;
      }
      break;
    }
    *(_BYTE *)(a1 + 344) = 0;
    v15 = sub_14003BA20(a1, (int *)&v17);
    if ( v17 == -1 || v17 == 34 )
      return 34;
    if ( !v17 )
    {
      v2 = (__int64 *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v15;
      *(_QWORD *)a1 = v15;
      *(_QWORD *)(a1 + 16) = v15;
      *(_BYTE *)(a1 + 344) = 1;
      continue;
    }
    return sub_1400640B0(v17);
  }
}
