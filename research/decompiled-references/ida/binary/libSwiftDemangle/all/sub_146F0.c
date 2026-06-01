unsigned __int64 __fastcall sub_146F0(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 result; // rax
  int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int16 v14; // si
  char v15; // al
  const char *v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  unsigned int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  const char *v28; // rdx
  __int64 v29; // r13
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rdi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // rax
  const char *v40; // rdx
  __int64 v41; // r14
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v44[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 >= v2 )
  {
    --v3;
LABEL_4:
    *(_QWORD *)(a1 + 72) = v3;
    v6 = 0;
LABEL_5:
    v7 = sub_14640((_QWORD *)a1);
    v8 = sub_CD20((_QWORD *)a1, 221, v7);
LABEL_6:
    switch ( v6 )
    {
      case 1LL:
        goto LABEL_30;
      case 2LL:
        goto LABEL_22;
      case 3LL:
        v10 = *(_DWORD *)(a1 + 96);
        if ( v10
          && (v11 = (unsigned int)(v10 - 1),
              v12 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v11),
              *(_WORD *)(v12 + 16) == 221) )
        {
          *(_DWORD *)(a1 + 96) = v11;
        }
        else
        {
          v12 = 0;
        }
        v13 = v8;
        v14 = 37;
        return sub_CE00((_QWORD *)a1, v14, v13, v12);
      case 4LL:
        v2 = *(_QWORD *)(a1 + 64);
        goto LABEL_14;
      case 5LL:
        result = sub_CD20((_QWORD *)a1, 39, v8);
        break;
      default:
        goto LABEL_38;
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = v3 + 1;
    *(_QWORD *)(a1 + 72) = v3 + 1;
    switch ( *(_BYTE *)(v4 + v3) )
    {
      case 'B':
        v21 = *(_DWORD *)(a1 + 96);
        if ( v21 )
        {
          v22 = *(_QWORD *)(a1 + 88);
          v23 = v21 - 1;
          v8 = *(_QWORD *)(v22 + 8LL * v23);
          if ( *(_WORD *)(v8 + 16) == 221 )
          {
            *(_DWORD *)(a1 + 96) = v23;
LABEL_30:
            v24 = *(_DWORD *)(a1 + 96);
            if ( !v24 )
            {
LABEL_45:
              v12 = 0;
              goto LABEL_34;
            }
            v22 = *(_QWORD *)(a1 + 88);
            v23 = v24 - 1;
          }
          else
          {
            v8 = 0;
          }
          v12 = *(_QWORD *)(v22 + 8LL * v23);
          if ( *(_WORD *)(v12 + 16) == 221 )
          {
            *(_DWORD *)(a1 + 96) = v23;
            goto LABEL_34;
          }
          goto LABEL_45;
        }
        v8 = 0;
        v12 = 0;
LABEL_34:
        v13 = v8;
        v14 = 33;
        return sub_CE00((_QWORD *)a1, v14, v13, v12);
      case 'C':
        v6 = 1;
        goto LABEL_48;
      case 'L':
        v32 = *(_DWORD *)(a1 + 96);
        if ( v32
          && (v33 = *(_QWORD *)(a1 + 88),
              v34 = (unsigned int)(v32 - 1),
              v8 = *(_QWORD *)(v33 + 8 * v34),
              *(_WORD *)(v8 + 16) == 221) )
        {
          *(_DWORD *)(a1 + 96) = v34;
LABEL_14:
          v5 = *(_QWORD *)(a1 + 72);
        }
        else
        {
          v8 = 0;
        }
        if ( v2 <= v5 )
        {
LABEL_40:
          v30 = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 72) = v5 + 1;
          v15 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + v5);
          if ( v15 == 85 )
          {
            v16 = (const char *)&aMrun[2];
            goto LABEL_18;
          }
          v16 = (const char *)&aMrun[1];
          if ( v15 == 82 )
          {
LABEL_18:
            v12 = sub_C650((_QWORD *)a1, 98, v16);
            v13 = v8;
            v14 = 38;
            return sub_CE00((_QWORD *)a1, v14, v13, v12);
          }
          switch ( v15 )
          {
            case 'C':
              v16 = "C";
              goto LABEL_18;
            case 'D':
              v16 = "D";
              goto LABEL_18;
            case 'E':
              v38 = sub_D1F0((_QWORD *)a1);
              if ( !v38 )
                goto LABEL_40;
              v43 = sub_D1F0((_QWORD *)a1);
              v40 = "E";
              v41 = v43;
              goto LABEL_71;
            case 'M':
              v38 = sub_D1F0((_QWORD *)a1);
              if ( !v38 )
                goto LABEL_40;
              v39 = sub_D1F0((_QWORD *)a1);
              v40 = (const char *)aMrun;
              v41 = v39;
LABEL_71:
              v42 = sub_C650((_QWORD *)a1, 98, v40);
              v30 = sub_CE00((_QWORD *)a1, 38, v8, v42);
              sub_CCF0((_QWORD *)a1, v30, v38);
              if ( v41 )
                sub_CCF0((_QWORD *)a1, v30, v41);
              break;
            case 'N':
              v16 = (const char *)&aMrun[3];
              goto LABEL_18;
            case 'T':
              v16 = (const char *)&unk_3800A;
              goto LABEL_18;
            case 'e':
              v27 = sub_D1F0((_QWORD *)a1);
              v28 = "e";
              v29 = v27;
              if ( !v27 )
                goto LABEL_40;
              goto LABEL_68;
            case 'm':
              v36 = sub_D1F0((_QWORD *)a1);
              v28 = "m";
              v29 = v36;
              if ( !v36 )
                goto LABEL_40;
LABEL_68:
              v37 = sub_C650((_QWORD *)a1, 98, v28);
              v30 = sub_CE00((_QWORD *)a1, 38, v8, v37);
              sub_CCF0((_QWORD *)a1, v30, v29);
              break;
            default:
              goto LABEL_40;
          }
        }
        result = v30;
        break;
      case 'M':
        v6 = 4;
        goto LABEL_48;
      case 'P':
        v6 = 0;
        goto LABEL_48;
      case 'Q':
        v25 = *(_DWORD *)(a1 + 96);
        if ( v25
          && (v26 = (unsigned int)(v25 - 1), v8 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v26),
                                             *(_WORD *)(v8 + 16) == 221) )
        {
          *(_DWORD *)(a1 + 96) = v26;
        }
        else
        {
          v8 = 0;
        }
LABEL_38:
        v12 = sub_13360(a1);
        goto LABEL_34;
      case 'S':
        v17 = *(_DWORD *)(a1 + 96);
        if ( !v17 )
        {
          v8 = 0;
          goto LABEL_44;
        }
        v18 = *(_QWORD *)(a1 + 88);
        v19 = v17 - 1;
        v8 = *(_QWORD *)(v18 + 8LL * v19);
        if ( *(_WORD *)(v8 + 16) == 221 )
        {
          *(_DWORD *)(a1 + 96) = v19;
LABEL_22:
          v20 = *(_DWORD *)(a1 + 96);
          if ( !v20 )
            goto LABEL_44;
          v18 = *(_QWORD *)(a1 + 88);
          v19 = v20 - 1;
        }
        else
        {
          v8 = 0;
        }
        v12 = *(_QWORD *)(v18 + 8LL * v19);
        if ( *(_WORD *)(v12 + 16) == 221 )
        {
          *(_DWORD *)(a1 + 96) = v19;
          goto LABEL_26;
        }
LABEL_44:
        v12 = 0;
LABEL_26:
        v13 = v8;
        v14 = 36;
        return sub_CE00((_QWORD *)a1, v14, v13, v12);
      case 'T':
        v6 = 2;
LABEL_48:
        v31 = sub_14640((_QWORD *)a1);
        v44[0] = sub_FBF0(a1, v31);
        v8 = v44[0];
        if ( v44[0] )
          goto LABEL_49;
        goto LABEL_6;
      case 'b':
        v6 = 1;
        goto LABEL_5;
      case 'c':
        v6 = 1;
        goto LABEL_54;
      case 'h':
        v6 = 3;
        goto LABEL_5;
      case 'l':
        v6 = 4;
        goto LABEL_5;
      case 'm':
        v6 = 4;
        goto LABEL_54;
      case 'p':
        v6 = 0;
        goto LABEL_54;
      case 's':
        v6 = 2;
        goto LABEL_5;
      case 't':
        v6 = 2;
LABEL_54:
        v35 = sub_14640((_QWORD *)a1);
        v44[0] = sub_FF80(a1, v35);
        v8 = v44[0];
        if ( v44[0] )
LABEL_49:
          sub_11EC0(a1 + 104, v44, (_QWORD *)a1);
        goto LABEL_6;
      case 'v':
        v6 = 5;
        goto LABEL_5;
      default:
        goto LABEL_4;
    }
  }
  return result;
}

