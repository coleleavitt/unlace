char __fastcall sub_1BC8A10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  char v17; // r11
  char v18; // al
  char v19; // r10
  char v20; // r9
  char v21; // si
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // esi
  int v25; // edx
  __int64 v26; // r12
  _QWORD *v27; // r8
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rbx
  char v32; // r11
  char v33; // r10
  char v34; // di
  char v35; // si
  __int64 v36; // rdx
  int v37; // esi
  int v38; // edx
  _QWORD *v42; // [rsp+10h] [rbp-48h]

  v5 = a2;
  v8 = a3 - 1;
  v9 = v8 / 2;
  if ( a2 < v8 / 2 )
  {
    v10 = a2;
    v11 = v8 / 2;
    while ( 1 )
    {
      v12 = 2 * (v10 + 1);
      v13 = (__int64 *)(a1 + 16 * (v10 + 1));
      v14 = *(v13 - 1);
      v15 = *v13;
      if ( *v13 != v14 )
      {
        v16 = *(unsigned __int8 *)(v14 + 16);
        if ( *(_BYTE *)(v15 + 16) != (_BYTE)v16 )
        {
          switch ( *(_BYTE *)(v15 + 16) )
          {
            case 0:
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xE:
            case 0xF:
            case 0x10:
            case 0x11:
              v17 = 0;
              v18 = 0;
              v19 = 1;
              v21 = 1;
              v20 = 1;
              break;
            case 1:
            case 3:
            case 4:
              v17 = 1;
              v18 = 1;
              v21 = 1;
              v19 = 1;
              v20 = 1;
              break;
            case 2:
              v17 = 0;
              v18 = 0;
              v19 = 0;
              v20 = 1;
              v21 = 1;
              break;
            case 5:
            case 6:
              v17 = 0;
              v18 = 1;
              v21 = 1;
              v19 = 1;
              v20 = 1;
              break;
            case 0xB:
            case 0xC:
              v17 = 0;
              v18 = 0;
              v19 = 0;
              v20 = 0;
              v21 = 0;
              break;
            case 0xD:
              v17 = 0;
              v18 = 0;
              v19 = 0;
              v20 = 0;
              v21 = 1;
              break;
          }
          switch ( v16 )
          {
            case 1LL:
            case 3LL:
            case 4LL:
              goto LABEL_23;
            case 2LL:
              v18 = v19;
              goto LABEL_13;
            case 5LL:
            case 6LL:
              v18 = v17;
              goto LABEL_13;
            case 7LL:
            case 8LL:
            case 9LL:
            case 10LL:
            case 15LL:
            case 16LL:
            case 17LL:
              goto LABEL_13;
            case 11LL:
            case 12LL:
              v18 = v21;
              goto LABEL_13;
            case 13LL:
              v18 = v20;
              goto LABEL_13;
            default:
              goto LABEL_63;
          }
        }
        v22 = *(_QWORD *)(v15 + 8);
        if ( !v22 )
          goto LABEL_23;
        v23 = *(_QWORD *)(v14 + 8);
        v24 = *(_DWORD *)(v22 + 24);
        if ( v23 )
        {
          v25 = *(_DWORD *)(v23 + 24);
          if ( !v24 )
            goto LABEL_23;
          if ( v25 )
          {
            v18 = sub_10246C0(*(_QWORD *)(a5 + 272), v24, v25);
LABEL_13:
            if ( !v18 )
            {
              v15 = *v13;
LABEL_23:
              v14 = v15;
              goto LABEL_15;
            }
          }
        }
        else if ( !v24 )
        {
          goto LABEL_23;
        }
        --v12;
        v14 = *(_QWORD *)(a1 + 8 * v12);
      }
LABEL_15:
      *(_QWORD *)(a1 + 8 * v10) = v14;
      v10 = v12;
      if ( v12 >= v11 )
      {
        v5 = a2;
        if ( (a3 & 1) != 0 )
          goto LABEL_17;
        goto LABEL_59;
      }
    }
  }
  v12 = a2;
  v26 = a2;
  if ( (a3 & 1) == 0 )
  {
LABEL_59:
    if ( (a3 - 2) / 2 == v12 )
    {
      *(_QWORD *)(a1 + 8 * v12) = *(_QWORD *)(a1 + 8 * (2 * v12 + 2) - 8);
      v12 = 2 * v12 + 1;
    }
LABEL_17:
    LOBYTE(v9) = v12 - 1;
    v26 = (v12 - 1) / 2;
    if ( v12 > v5 )
    {
      v27 = (_QWORD *)(a1 + 8 * v26);
      v28 = *v27;
      if ( a4 != *v27 )
      {
        v29 = v5;
        v30 = v12;
        v31 = v29;
        while ( 1 )
        {
          if ( *(_BYTE *)(v28 + 16) != *(_BYTE *)(a4 + 16) )
          {
            switch ( *(_BYTE *)(v28 + 16) )
            {
              case 1:
              case 3:
              case 4:
                v32 = 1;
                LOBYTE(v9) = 1;
                v33 = 1;
                v34 = 1;
                v35 = 1;
                goto LABEL_34;
              case 2:
                v32 = 0;
                LOBYTE(v9) = 0;
                v33 = 0;
                v34 = 1;
                v35 = 1;
                goto LABEL_34;
              case 5:
              case 6:
                v32 = 0;
                LOBYTE(v9) = 1;
                v33 = 1;
                v34 = 1;
                v35 = 1;
                goto LABEL_34;
              case 7:
              case 8:
              case 9:
              case 0xA:
              case 0xF:
              case 0x10:
              case 0x11:
                v32 = 0;
                LOBYTE(v9) = 0;
                v33 = 1;
                v34 = 1;
                v35 = 1;
                goto LABEL_34;
              case 0xB:
              case 0xC:
                v32 = 0;
                LOBYTE(v9) = 0;
                v33 = 0;
                v34 = 0;
                v35 = 0;
                goto LABEL_34;
              case 0xD:
                v32 = 0;
                LOBYTE(v9) = 0;
                v33 = 0;
                v34 = 0;
                v35 = 1;
LABEL_34:
                switch ( *(_BYTE *)(a4 + 16) )
                {
                  case 1:
                  case 3:
                  case 4:
                    goto LABEL_46;
                  case 2:
                    LOBYTE(v9) = v33;
                    goto LABEL_40;
                  case 5:
                  case 6:
                    LOBYTE(v9) = v32;
                    goto LABEL_40;
                  case 7:
                  case 8:
                  case 9:
                  case 0xA:
                  case 0xF:
                  case 0x10:
                  case 0x11:
                    goto LABEL_40;
                  case 0xB:
                  case 0xC:
                    LOBYTE(v9) = v35;
                    goto LABEL_40;
                  case 0xD:
                    LOBYTE(v9) = v34;
                    goto LABEL_40;
                  default:
                    goto LABEL_63;
                }
              default:
                break;
            }
LABEL_63:
            BUG();
          }
          v9 = *(_QWORD *)(v28 + 8);
          if ( !v9 )
            break;
          v36 = *(_QWORD *)(a4 + 8);
          v37 = *(_DWORD *)(v9 + 24);
          if ( v36 )
          {
            v42 = v27;
            v38 = *(_DWORD *)(v36 + 24);
            if ( !v37 )
              break;
            if ( v38 )
            {
              LOBYTE(v9) = sub_10246C0(*(_QWORD *)(a5 + 272), v37, v38);
              v27 = v42;
LABEL_40:
              if ( !(_BYTE)v9 )
                break;
              v28 = *v27;
            }
          }
          else if ( !v37 )
          {
            break;
          }
          *(_QWORD *)(a1 + 8 * v30) = v28;
          v9 = (v26 - 1) / 2;
          if ( v31 >= v26 )
            goto LABEL_48;
          v27 = (_QWORD *)(a1 + 8 * v9);
          v30 = v26;
          v28 = *v27;
          if ( a4 == *v27 )
            goto LABEL_48;
          v26 = (v26 - 1) / 2;
        }
LABEL_46:
        v12 = v30;
      }
    }
    v26 = v12;
  }
LABEL_48:
  *(_QWORD *)(a1 + 8 * v26) = a4;
  return v9;
}
