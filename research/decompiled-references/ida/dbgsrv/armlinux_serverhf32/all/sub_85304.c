/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85304
// Address: 0x00085304

//----- (00085304) --------------------------------------------------------
_DWORD *__fastcall sub_85304(int a1)
{
  _BYTE *v1; // r2
  int v3; // r4
  int v5; // r3
  int v6; // r1
  _DWORD *v7; // r4
  _DWORD *v8; // r0
  int v9; // r0
  _BYTE *v10; // r2
  __int64 v11; // kr00_8
  int v12; // r1
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  __int64 v15; // kr08_8
  int v16; // r0
  int *v17; // r8
  int v18; // r0
  unsigned __int8 *v19; // r2
  int v20; // r6
  _DWORD *v21; // r7
  int v22; // r4
  unsigned int v23; // r3
  bool v24; // cc
  bool v25; // zf
  int v26; // r3
  _DWORD *v27; // r0
  int v28; // r3
  __int64 v29; // kr10_8
  int *v30; // r0
  _BYTE *v31; // r3
  int *v32; // r6
  int v33; // r2
  _DWORD *v34; // r0
  _DWORD *v35; // r4
  int v36; // r7
  __int64 v37; // kr18_8
  _DWORD *v38; // r2
  __int64 v39; // r2
  int v40; // r1
  int v41; // r0
  _DWORD *v43; // r0
  __int64 v44; // kr20_8
  int v45; // r0
  int v46; // r3
  int v47; // r4
  int v48; // [sp+4h] [bp-4h] BYREF

  v1 = *(_BYTE **)(a1 + 12);
  switch ( *v1 )
  {
    case 'N':
      *(_DWORD *)(a1 + 12) = v1 + 1;
      v17 = sub_85FF0((_DWORD *)a1, &v48, 1);
      if ( !v17 )
        return nullptr;
      v18 = sub_8412C(a1, 0);
      v19 = *(unsigned __int8 **)(a1 + 12);
      v20 = v18;
      v21 = nullptr;
      v22 = *v19;
      while ( 2 )
      {
        while ( 2 )
        {
          if ( !v22 )
            goto LABEL_77;
          if ( v22 != 68 )
            goto LABEL_22;
          if ( (v19[1] & 0xDF) == 0x54 )
            v27 = sub_85668(a1);
          else
            v27 = sub_861D4(a1);
LABEL_64:
          if ( v21 )
            goto LABEL_59;
          v19 = *(unsigned __int8 **)(a1 + 12);
          v21 = v27;
          v28 = *v19;
          if ( v28 != 69 )
            goto LABEL_37;
LABEL_66:
          v22 = v28;
LABEL_22:
          v23 = (unsigned __int8)(v22 - 97);
          v24 = v23 > 0x19;
          if ( v23 > 0x19 )
            v24 = (unsigned __int8)(v22 - 48) > 9u;
          if ( !v24 )
            goto LABEL_34;
          v25 = v22 == 85;
          if ( v22 != 85 )
            v25 = v22 == 67;
          v26 = v25;
          if ( v22 == 76 )
            v26 |= 1u;
          if ( v26 )
          {
LABEL_34:
            v27 = sub_861D4(a1);
            if ( !v21 )
            {
              v19 = *(unsigned __int8 **)(a1 + 12);
              v21 = v27;
              v28 = *v19;
              if ( v22 == 83 )
                goto LABEL_61;
              goto LABEL_36;
            }
            goto LABEL_59;
          }
          switch ( v22 )
          {
            case 'S':
              v27 = (_DWORD *)sub_84478((_DWORD *)a1, 1);
              if ( !v21 )
              {
                v19 = *(unsigned __int8 **)(a1 + 12);
                v21 = v27;
                v22 = *v19;
                continue;
              }
LABEL_59:
              v40 = 1;
LABEL_60:
              v41 = sub_84094(a1, v40, __SPAIR64__((unsigned int)v27, (unsigned int)v21));
              v19 = *(unsigned __int8 **)(a1 + 12);
              v21 = (_DWORD *)v41;
              v28 = *v19;
              if ( v22 == 83 )
              {
LABEL_61:
                v22 = v28;
                continue;
              }
LABEL_36:
              if ( v28 != 69 )
              {
LABEL_37:
                if ( v21 )
                {
                  v29 = *(_QWORD *)(a1 + 32);
                  if ( (int)v29 < SHIDWORD(v29) )
                  {
                    *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v29) = v21;
                    *(_DWORD *)(a1 + 32) = v29 + 1;
                    v22 = *v19;
                    continue;
                  }
                }
LABEL_77:
                *v17 = 0;
                return nullptr;
              }
              goto LABEL_66;
            case 'I':
              if ( !v21 )
                goto LABEL_77;
              *(_DWORD *)(a1 + 12) = v19 + 1;
              v27 = (_DWORD *)sub_8522C((_DWORD *)a1);
              v40 = 4;
              goto LABEL_60;
            case 'T':
              v27 = sub_84338(a1);
              goto LABEL_64;
          }
        }
        if ( v22 != 69 )
        {
          if ( v22 == 77 && v21 != nullptr )
          {
            *(_DWORD *)(a1 + 12) = v19 + 1;
            v22 = *++v19;
            continue;
          }
          goto LABEL_77;
        }
        break;
      }
      *v17 = (int)v21;
      if ( !v21 )
        return nullptr;
      if ( v20 )
      {
        v46 = v48;
        v48 = v20;
        *(_DWORD *)(v20 + 8) = v46;
      }
      if ( *v19 != 69 )
        return nullptr;
      v47 = v48;
      *(_DWORD *)(a1 + 12) = v19 + 1;
      return (_DWORD *)v47;
    case 'S':
      if ( v1[1] != 116 )
      {
        v3 = sub_84478((_DWORD *)a1, 0);
        if ( **(_BYTE **)(a1 + 12) == 73 )
          goto LABEL_12;
        return (_DWORD *)v3;
      }
      v5 = *(_DWORD *)(a1 + 20);
      v6 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 12) = v1 + 2;
      if ( v5 < v6 )
      {
        v7 = (_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * v5);
        *(_DWORD *)(a1 + 20) = v5 + 1;
        v7[1] = 0;
        *v7 = 0;
        v7[2] = "std";
        v7[3] = 3;
      }
      else
      {
        v7 = nullptr;
      }
      v8 = sub_861D4(a1);
      v9 = sub_84094(a1, 1, __SPAIR64__((unsigned int)v8, (unsigned int)v7));
      v3 = v9;
      v10 = *(_BYTE **)(a1 + 12);
      *(_DWORD *)(a1 + 48) += 3;
      if ( *v10 != 73 )
        return (_DWORD *)v3;
      if ( v9 )
      {
        v11 = *(_QWORD *)(a1 + 32);
        if ( (int)v11 < SHIDWORD(v11) )
        {
          v12 = *(_DWORD *)(a1 + 28);
          *(_DWORD *)(v12 + 4 * v11) = v9;
          *(_DWORD *)(a1 + 32) = v11 + 1;
LABEL_12:
          v13 = (_DWORD *)a1;
          goto LABEL_17;
        }
      }
      return nullptr;
    case 'U':
      return sub_861D4(a1);
    case 'Z':
      *(_DWORD *)(a1 + 12) = v1 + 1;
      v30 = sub_864F4(a1, 0);
      v31 = *(_BYTE **)(a1 + 12);
      v32 = v30;
      if ( *v31 != 69 )
        return nullptr;
      *(_DWORD *)(a1 + 12) = v31 + 1;
      v33 = (unsigned __int8)v31[1];
      if ( v33 == 115 )
      {
        *(_DWORD *)(a1 + 12) = v31 + 2;
        if ( sub_845FC(a1) )
        {
          v44 = *(_QWORD *)(a1 + 20);
          if ( (int)v44 < SHIDWORD(v44) )
          {
            v45 = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 20) = v44 + 1;
            HIDWORD(v39) = v45 + 16 * v44;
            *(_QWORD *)HIDWORD(v39) = 0;
            *(_DWORD *)(HIDWORD(v39) + 8) = "string literal";
            *(_DWORD *)(HIDWORD(v39) + 12) = 14;
          }
          else
          {
            HIDWORD(v39) = 0;
          }
          goto LABEL_54;
        }
      }
      else
      {
        if ( v33 != 100 )
        {
          v34 = (_DWORD *)sub_85304(a1);
          v35 = v34;
          if ( !v34 || *v34 == 69 || *v34 == 71 )
            goto LABEL_53;
          v36 = -1;
          goto LABEL_48;
        }
        *(_DWORD *)(a1 + 12) = v31 + 2;
        v36 = sub_84304(a1);
        if ( v36 >= 0 )
        {
          v43 = (_DWORD *)sub_85304(a1);
          v35 = v43;
          if ( !v43 )
            goto LABEL_50;
          if ( *v43 == 69 || *v43 == 71 )
          {
LABEL_49:
            if ( v36 == -1 )
            {
LABEL_53:
              HIDWORD(v39) = v35;
LABEL_54:
              LODWORD(v39) = v32;
              return (_DWORD *)sub_84094(a1, 2, v39);
            }
LABEL_50:
            v37 = *(_QWORD *)(a1 + 20);
            if ( (int)v37 < SHIDWORD(v37) )
            {
              v38 = (_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * v37);
              v38[1] = 0;
              *(_DWORD *)(a1 + 20) = v37 + 1;
              *v38 = 70;
              v38[2] = v35;
              v35 = v38;
              v38[3] = v36;
            }
            else
            {
              v35 = nullptr;
            }
            goto LABEL_53;
          }
LABEL_48:
          if ( !sub_845FC(a1) )
            return nullptr;
          goto LABEL_49;
        }
      }
      return nullptr;
    default:
      v14 = sub_861D4(a1);
      v3 = (int)v14;
      if ( **(_BYTE **)(a1 + 12) != 73 )
        return (_DWORD *)v3;
      if ( !v14 )
        return nullptr;
      v15 = *(_QWORD *)(a1 + 32);
      if ( (int)v15 >= SHIDWORD(v15) )
        return nullptr;
      v12 = *(_DWORD *)(a1 + 28);
      v13 = (_DWORD *)a1;
      *(_DWORD *)(v12 + 4 * v15) = v3;
      *(_DWORD *)(a1 + 32) = v15 + 1;
LABEL_17:
      v16 = sub_852F0(v13, v12);
      return (_DWORD *)sub_84094(a1, 4, __SPAIR64__(v16, v3));
  }
}
// 853D2: variable 'v12' is possibly undefined
