/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4EE3C
// Address: 0x0004EE3C

//----- (0004EE3C) --------------------------------------------------------
int __fastcall sub_4EE3C(int a1, char **a2, _BYTE *a3)
{
  int v4; // r8
  int v6; // r10
  int v7; // r9
  int v8; // r2
  int v9; // r0
  int v10; // r4
  unsigned __int8 *v11; // r3
  int v12; // r2
  void *v13; // r0
  int v15; // r2
  unsigned int v16; // r4
  unsigned __int8 *v17; // r2
  char v18; // r11
  unsigned int v19; // r6
  unsigned int v20; // r4
  void *v21; // r1
  unsigned int v22; // r6
  unsigned int v23; // r4
  void *v24; // r1
  int v25; // r6
  unsigned int v26; // r11
  unsigned int v27; // r4
  void *v28; // r1
  int v29; // r2
  char v30; // r6
  unsigned int v31; // r11
  unsigned int v32; // r4
  void *v33; // r1
  int v34; // r0
  char *v35; // r3
  char *v36; // r1
  void **v37; // r2
  void *v38; // r6
  __int64 v39; // kr00_8
  int v40; // r3
  char *v41; // r0
  char *v42; // r3
  char *v43; // r1
  char *v44; // r2
  void *v45; // r6
  __int64 v46; // kr08_8
  int v47; // r3
  char *v48; // r0
  void *ptr; // [sp+10h] [bp-14h] BYREF
  unsigned int v52; // [sp+14h] [bp-10h]
  unsigned int v53; // [sp+18h] [bp-Ch]
  int v54; // [sp+1Ch] [bp-8h]

  v4 = 0;
  v6 = 0;
  v7 = 0;
  ptr = nullptr;
  v52 = 0;
  v8 = _stack_chk_guard;
  *a3 = 1;
  v53 = 0;
  v54 = v8;
  while ( 1 )
  {
    v9 = sub_4ECEC(a1);
    v10 = v9;
    if ( v9 == 34 )
    {
      if ( v7 )
        v34 = 38;
      else
        v34 = 0;
      v10 = sub_70A2C(v34);
      v13 = ptr;
      goto LABEL_8;
    }
    if ( v9 )
      goto LABEL_59;
    v11 = *(unsigned __int8 **)(a1 + 4);
    v12 = *v11;
    if ( !v7 )
      break;
    while ( 2 )
    {
      switch ( v12 )
      {
        case 0:
          v16 = v52;
          goto LABEL_19;
        case 9:
        case 10:
        case 32:
          v17 = v11 + 1;
          if ( v4 )
          {
            *(_DWORD *)(a1 + 4) = v17;
            ++v11;
            goto LABEL_16;
          }
          v16 = v52;
          v4 = v7;
          goto LABEL_13;
        case 34:
          v16 = v52;
          *(_DWORD *)(a1 + 4) = v11 + 1;
          v25 = *v11;
          if ( v16 )
            goto LABEL_36;
          while ( 2 )
          {
            v26 = v16;
            v27 = 2;
            v28 = ptr;
            if ( v53 >= 2 )
              goto LABEL_37;
LABEL_42:
            v28 = sub_77EB0((int)&ptr, v28, v27, 1u);
            ptr = v28;
LABEL_37:
            v52 = v27;
            *((_BYTE *)v28 + v26) = v25;
            *((_BYTE *)ptr + v26 + 1) = 0;
            v11 = *(unsigned __int8 **)(a1 + 4);
            if ( v25 != 92 )
            {
              v29 = *v11;
              v16 = v52;
              if ( v29 == 34 )
                goto LABEL_52;
LABEL_39:
              if ( !v29 )
                goto LABEL_19;
              *(_DWORD *)(a1 + 4) = v11 + 1;
              v25 = *v11;
              if ( !v16 )
                continue;
LABEL_36:
              v26 = v16 - 1;
              v27 = v16 + 1;
              v28 = ptr;
              if ( v27 > v53 )
                goto LABEL_42;
              goto LABEL_37;
            }
            break;
          }
          v30 = *v11;
          v16 = v52;
          if ( *v11 )
          {
            if ( v52 )
            {
              v31 = v52 - 1;
              v32 = v52 + 1;
              v33 = ptr;
              if ( v52 + 1 > v53 )
              {
LABEL_57:
                v33 = sub_77EB0((int)&ptr, v33, v32, 1u);
                ptr = v33;
              }
            }
            else
            {
              v31 = 0;
              v32 = 2;
              v33 = ptr;
              if ( v53 < 2 )
                goto LABEL_57;
            }
            v52 = v32;
            *((_BYTE *)v33 + v31) = v30;
            *((_BYTE *)ptr + v31 + 1) = 0;
            v16 = v52;
            v11 = (unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 1);
            *(_DWORD *)(a1 + 4) = v11;
            v29 = *v11;
            if ( v29 != 34 )
              goto LABEL_39;
LABEL_52:
            v17 = v11 + 1;
LABEL_13:
            *(_DWORD *)(a1 + 4) = v17;
            v18 = *v11;
            if ( v16 )
            {
LABEL_14:
              v19 = v16 - 1;
              v20 = v16 + 1;
              v21 = ptr;
              if ( v53 < v20 )
                goto LABEL_29;
            }
            else
            {
LABEL_28:
              v19 = v16;
              v20 = 2;
              v21 = ptr;
              if ( v53 < 2 )
              {
LABEL_29:
                v21 = sub_77EB0((int)&ptr, v21, v20, 1u);
                ptr = v21;
              }
            }
            v52 = v20;
            *((_BYTE *)v21 + v19) = v18;
            *((_BYTE *)ptr + v19 + 1) = 0;
            v11 = *(unsigned __int8 **)(a1 + 4);
LABEL_16:
            v12 = *v11;
            continue;
          }
LABEL_19:
          if ( v16 )
          {
            v22 = v16 - 1;
            v23 = v16 + 1;
            v24 = ptr;
            if ( v53 >= v23 )
              goto LABEL_21;
LABEL_54:
            v24 = sub_77EB0((int)&ptr, v24, v23, 1u);
            ptr = v24;
          }
          else
          {
            v22 = 0;
            v23 = 2;
            v24 = ptr;
            if ( v53 < 2 )
              goto LABEL_54;
          }
LABEL_21:
          v52 = v23;
          *((_BYTE *)v24 + v22) = 32;
          v4 = v7;
          *((_BYTE *)ptr + v22 + 1) = 0;
LABEL_22:
          v7 = 1;
          break;
        case 40:
          if ( (*(_DWORD *)(a1 + 648) & 2) != 0 && v11[1] == 42 )
            goto LABEL_22;
          ++v6;
          goto LABEL_31;
        case 41:
          if ( !v6 )
          {
            v42 = a2[1];
            v43 = *a2;
            if ( v42 + 1 > a2[2] )
            {
              v48 = (char *)sub_77EB0((int)a2, v43, (unsigned int)(v42 + 1), 0xCu);
              v42 = a2[1];
              v43 = v48;
              *a2 = v48;
            }
            v10 = 0;
            v44 = &v43[12 * (_DWORD)v42];
            *(_DWORD *)v44 = 0;
            *((_DWORD *)v44 + 1) = 0;
            *((_DWORD *)v44 + 2) = 0;
            v45 = ptr;
            ++a2[1];
            v13 = *(void **)v44;
            v46 = *(_QWORD *)(v44 + 4);
            *(_DWORD *)v44 = v45;
            ptr = v13;
            *((_DWORD *)v44 + 1) = v52;
            v52 = v46;
            *((_DWORD *)v44 + 2) = v53;
            v47 = *(_DWORD *)(a1 + 4);
            v53 = HIDWORD(v46);
            *(_DWORD *)(a1 + 4) = v47 + 1;
            goto LABEL_8;
          }
          --v6;
          v17 = v11 + 1;
          v16 = v52;
          goto LABEL_13;
        case 44:
          if ( !v6 )
          {
            v35 = a2[1];
            v36 = *a2;
            if ( v35 + 1 > a2[2] )
            {
              v41 = (char *)sub_77EB0((int)a2, v36, (unsigned int)(v35 + 1), 0xCu);
              v35 = a2[1];
              v36 = v41;
              *a2 = v41;
            }
            v37 = (void **)&v36[12 * (_DWORD)v35];
            *v37 = nullptr;
            v37[1] = nullptr;
            v37[2] = nullptr;
            ++a2[1];
            v38 = *v37;
            v39 = *(_QWORD *)(v37 + 1);
            *v37 = ptr;
            ptr = v38;
            v37[1] = (void *)v52;
            v52 = v39;
            v37[2] = (void *)v53;
            v40 = *(_DWORD *)(a1 + 4);
            v53 = HIDWORD(v39);
            *(_DWORD *)(a1 + 4) = v40 + 1;
            goto LABEL_22;
          }
LABEL_31:
          v17 = v11 + 1;
          v16 = v52;
          goto LABEL_13;
        case 47:
          if ( (*(_DWORD *)(a1 + 648) & 1) != 0 && v11[1] == 42 )
            goto LABEL_22;
          v15 = *(_DWORD *)(a1 + 648) & 4;
          if ( !v15 )
            goto LABEL_12;
          if ( v11[1] == 47 )
            goto LABEL_22;
          v16 = v52;
          *(_DWORD *)(a1 + 4) = v11 + 1;
          v4 = 0;
          v18 = *v11;
          if ( !v16 )
            goto LABEL_28;
          goto LABEL_14;
        case 59:
          v15 = *(_DWORD *)(a1 + 648) & 8;
          if ( v15 )
            goto LABEL_22;
LABEL_12:
          v16 = v52;
          v4 = v15;
          v17 = v11 + 1;
          goto LABEL_13;
        default:
          v17 = v11 + 1;
          v16 = v52;
          v4 = 0;
          goto LABEL_13;
      }
      break;
    }
  }
  if ( v12 == 40 )
  {
    *(_DWORD *)(a1 + 4) = v11 + 1;
    if ( v11[1] != 41 )
      goto LABEL_22;
    v13 = ptr;
    *(_DWORD *)(a1 + 4) = v11 + 2;
  }
  else
  {
    *a3 = 0;
LABEL_59:
    v13 = ptr;
  }
LABEL_8:
  if ( v13 )
  {
    v52 = 0;
    sub_77E08(v13);
  }
  return v10;
}
