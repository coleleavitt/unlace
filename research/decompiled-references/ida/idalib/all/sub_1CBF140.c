__int64 __fastcall sub_1CBF140(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, _BYTE *a7)
{
  unsigned int v7; // r12d
  int v8; // ebp
  _DWORD *v9; // rax
  int v10; // r15d
  __int64 result; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rbx
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // rax
  int v17; // r15d
  _BYTE *v18; // rbp
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  char **v22; // rax
  char *v23; // rcx
  char **v24; // r12
  __int64 v25; // r8
  char *v26; // rsi
  char *v27; // rdi
  char *v28; // rax
  char *v29; // r8
  char *v30; // rbp
  __int64 v31; // rax
  int v32; // eax
  char *i; // rax
  __int64 v34; // rax
  __int64 v35[2]; // [rsp+8h] [rbp-E0h] BYREF
  bool v36; // [rsp+1Fh] [rbp-C9h] BYREF
  _BYTE v37[200]; // [rsp+20h] [rbp-C8h] BYREF

  v7 = a6;
  v8 = a5;
  v35[0] = a4;
  *a7 = 0;
  switch ( a3 )
  {
    case 0:
    case 1:
      return 0;
    case 2:
      v12 = (unsigned int)a5;
      switch ( (int)a5 )
      {
        case 0:
        case 2:
          return 0;
        case 1:
          v13 = (_BYTE *)v35[0];
          if ( (_DWORD)a6 )
            goto LABEL_13;
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
          if ( *(_DWORD *)(v21 + 260) == 15 )
          {
            v32 = *(_DWORD *)(v21 + 264);
            if ( v32 == 29 || v32 == 1 )
              goto LABEL_43;
          }
          if ( (*(_BYTE *)(v35[0] + 28) & 0x7Fu) - 34 > 5 )
            return 0;
          if ( !(unsigned __int8)sub_B77A80(v35[0]) )
            goto LABEL_55;
LABEL_43:
          if ( (*(_BYTE *)(v35[0] + 29) & 1) == 0 )
            goto LABEL_55;
          v22 = (char **)sub_B8C3D0(v35[0], a2, v12, a4, a5, a6);
          v23 = *v22;
          v24 = v22;
          v25 = 8LL * *((unsigned int *)v22 + 2);
          v26 = &(*v22)[v25];
          if ( !(v25 >> 5) )
          {
            v27 = *v22;
LABEL_65:
            v34 = (v26 - v27) >> 3;
            if ( v34 != 2 )
            {
              if ( v34 != 3 )
              {
                if ( v34 != 1 )
                  goto LABEL_68;
                goto LABEL_80;
              }
              if ( ((*(_WORD *)(*(_QWORD *)v27 + 36LL) - 195) & 0xFFFD) == 0 )
                goto LABEL_46;
              v27 += 8;
            }
            if ( ((*(_WORD *)(*(_QWORD *)v27 + 36LL) - 195) & 0xFFFD) == 0 )
              goto LABEL_46;
            v27 += 8;
LABEL_80:
            if ( ((*(_WORD *)(*(_QWORD *)v27 + 36LL) - 195) & 0xFFFD) == 0 )
              goto LABEL_46;
LABEL_68:
            v27 = v26;
LABEL_69:
            v30 = v27;
            goto LABEL_53;
          }
          v27 = *v22;
          if ( ((*(_WORD *)(*(_QWORD *)v23 + 36LL) - 195) & 0xFFFD) != 0 )
          {
            v27 = v23 + 8;
            if ( ((*(_WORD *)(*((_QWORD *)v23 + 1) + 36LL) - 195) & 0xFFFD) != 0 )
            {
              for ( i = *v22; ; i += 32 )
              {
                if ( ((*(_WORD *)(*((_QWORD *)i + 2) + 36LL) - 195) & 0xFFFD) == 0 )
                {
                  v27 = i + 16;
                  goto LABEL_46;
                }
                if ( ((*(_WORD *)(*((_QWORD *)i + 3) + 36LL) - 195) & 0xFFFD) == 0 )
                {
                  v27 = i + 24;
                  goto LABEL_46;
                }
                v27 = i + 32;
                if ( i + 32 == &v23[32 * (v25 >> 5)] )
                  goto LABEL_65;
                if ( ((*(_WORD *)(*((_QWORD *)i + 4) + 36LL) - 195) & 0xFFFD) == 0 )
                  goto LABEL_46;
                if ( ((*(_WORD *)(*((_QWORD *)i + 5) + 36LL) - 195) & 0xFFFD) == 0 )
                  break;
              }
              v27 = i + 40;
            }
          }
LABEL_46:
          if ( v26 == v27 )
            goto LABEL_69;
          v28 = v27 + 8;
          if ( v26 == v27 + 8 )
            goto LABEL_69;
          do
          {
            if ( ((*(_WORD *)(*(_QWORD *)v28 + 36LL) - 195) & 0xFFFD) != 0 )
            {
              *(_QWORD *)v27 = *(_QWORD *)v28;
              v27 += 8;
            }
            v28 += 8;
          }
          while ( v26 != v28 );
          v23 = *v24;
          v29 = &(*v24)[v25];
          v30 = &v27[v29 - v26];
          if ( v26 != v29 )
          {
            memmove(v27, v26, v29 - v26);
            v23 = *v24;
          }
LABEL_53:
          v31 = (v30 - v23) >> 3;
          *((_DWORD *)v24 + 2) = v31;
          if ( !(_DWORD)v31 )
            v13[29] &= ~1u;
LABEL_55:
          if ( (v13[28] & 0x7Fu) - 34 > 5 )
            return 0;
          v13[82] &= 0xFCu;
          return 0;
        case 3:
        case 4:
          v13 = (_BYTE *)v35[0];
LABEL_13:
          if ( !v13 )
            goto LABEL_37;
          break;
      }
      while ( 1 )
      {
        v15 = v13[28] & 0x7F;
        if ( (unsigned int)(v15 - 59) <= 2 )
        {
          v14 = sub_B97260((__int64)v13);
          goto LABEL_16;
        }
        if ( (unsigned int)(v15 - 34) <= 5 )
          break;
        if ( (unsigned int)(v15 - 40) <= 6 )
        {
          v14 = sub_B740B0((__int64)v13);
LABEL_16:
          if ( v14 == 2 )
            return 0;
        }
        v13 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v13 + 48LL))(v13);
        if ( !v13 )
        {
LABEL_37:
          sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), a2, 0x138Au, 0);
          sub_17BA610((__int64)v37, v35);
          sub_15F7200(v37);
          sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), v7, 0x17A4u, 0);
          v36 = v8 != 1;
          sub_1588420((__int64)v37, (unsigned __int8 *)&v36);
          sub_15F7200(v37);
          return 1;
        }
      }
      v14 = sub_B77D20((__int64)v13);
      goto LABEL_16;
    case 3:
      switch ( (int)a5 )
      {
        case 0:
        case 1:
          return 0;
        case 2:
        case 3:
          goto LABEL_7;
        case 4:
          sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), a2, 0xEAAu, 0);
          sub_15F7200(v37);
          v16 = (_DWORD *)v35[0];
          if ( v35[0] && !v7 )
          {
            do
            {
              v17 = v16[6];
              v16 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 48LL))(v16);
            }
            while ( v17 == 0 && v16 != nullptr );
          }
          goto LABEL_6;
        default:
          goto LABEL_2;
      }
    case 4:
      switch ( (int)a5 )
      {
        case 0:
        case 1:
          return 0;
        case 2:
          sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), a2, 0x1AE4u, 0);
          sub_17BA610((__int64)v37, v35);
          sub_15F7200(v37);
          sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), *(_DWORD *)(v35[0] + 24), 0x1893u, 0);
          sub_15F7200(v37);
          *a7 = 1;
          return 0;
        case 3:
          v18 = (_BYTE *)v35[0];
          if ( !v35[0] )
            return 0;
          break;
        case 4:
          sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), a2, (**(_BYTE **)(a1 + 232) & 0x20) == 0 ? 3756 : 5550, 0);
          sub_17BA610((__int64)v37, v35);
          sub_15F7200(v37);
          v9 = (_DWORD *)v35[0];
          if ( v35[0] && !v7 )
          {
            do
            {
              v10 = v9[6];
              v9 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 48LL))(v9);
            }
            while ( v10 == 0 && v9 != nullptr );
          }
LABEL_6:
          JUMPOUT(0x1CBF20D);
        default:
LABEL_2:
          BUG();
      }
      return result;
  }
  while ( 1 )
  {
    v20 = v18[28] & 0x7F;
    if ( (unsigned int)(v20 - 59) <= 2 )
    {
      v19 = sub_B97260((__int64)v18);
    }
    else if ( (unsigned int)(v20 - 34) > 5 )
    {
      if ( (unsigned int)(v20 - 40) > 6 )
        goto LABEL_30;
      v19 = sub_B740B0((__int64)v18);
    }
    else
    {
      v19 = sub_B77D20((__int64)v18);
    }
    if ( v19 == 2 )
    {
LABEL_7:
      *a7 = 1;
      return 0;
    }
LABEL_30:
    v18 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v18 + 48LL))(v18);
    if ( !v18 )
      return 0;
  }
}
