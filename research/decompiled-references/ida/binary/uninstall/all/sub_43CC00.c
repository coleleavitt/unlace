__int64 __fastcall sub_43CC00(__int64 a1, char *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v8; // ebx
  __int64 v9; // rcx
  char **v10; // r13
  int v11; // r14d
  int v12; // r8d
  int v13; // r9d
  __int64 *v14; // rcx
  char *v15; // rsi
  int v16; // edx
  __int64 v17; // rax
  int v18; // edx
  char *v19; // rsi
  int v21; // ebx
  int v22; // eax
  int v23; // ebx
  int v24; // eax
  int i; // eax
  int v26; // ebx
  int v27; // eax
  int v28; // ebx
  int v29; // eax
  _QWORD *v30; // [rsp+0h] [rbp-F8h]
  __int64 v31; // [rsp+8h] [rbp-F0h]
  char *v32; // [rsp+10h] [rbp-E8h]
  __int64 *v33; // [rsp+18h] [rbp-E0h]
  int v34; // [rsp+20h] [rbp-D8h]
  int v35; // [rsp+24h] [rbp-D4h]
  unsigned int v36; // [rsp+28h] [rbp-D0h]
  char v37; // [rsp+2Fh] [rbp-C9h]
  int v39; // [rsp+3Ch] [rbp-BCh] BYREF
  char s[184]; // [rsp+40h] [rbp-B8h] BYREF

  v8 = 0;
  v9 = *(_QWORD *)(a1 + 48);
  v35 = 1;
  v34 = 0;
  v33 = nullptr;
  v37 = *a2;
  v10 = &(&off_654400)[4 * (unsigned __int8)*a2];
  v36 = (_DWORD)a2 - *(_DWORD *)(a1 + 104);
  if ( v9 )
  {
    v34 = *(_DWORD *)(v9 + 36);
    v33 = *(__int64 **)(v9 + 40);
  }
  s[0] = 0;
  v32 = nullptr;
  v31 = 0;
  v11 = 0;
  sub_490C60(a3, (unsigned int)"(%u) %s ", v36, (unsigned int)*v10, a5, a6, 0);
  LODWORD(v14) = *((_DWORD *)v10 + 4);
  if ( (int)v14 > 0 )
  {
    while ( 2 )
    {
      switch ( *((_DWORD *)v10 + v11 + 5) )
      {
        case 1:
          v8 = a2[v35++];
          if ( v37 != 34 && v37 != 36 && v37 != 38 )
            goto LABEL_27;
          goto LABEL_30;
        case 2:
          v23 = ((unsigned __int8)a2[v35 + 2] << 8) | ((unsigned __int8)a2[v35 + 1] << 16) | (a2[v35] << 24);
          v24 = (unsigned __int8)a2[v35 + 3];
          v35 += 4;
          v8 = v24 | v23;
          if ( v37 == 35 || v37 == 37 || v37 == 39 )
          {
LABEL_30:
            sprintf(s, "pc %u", v8 + v36);
          }
          else if ( v37 == 105 )
          {
            sprintf(s, "next cmd at pc %u", v8 + v36);
          }
LABEL_27:
          v15 = "%+d ";
          v16 = v8;
          goto LABEL_8;
        case 3:
          v8 = (unsigned __int8)a2[v35++];
          if ( v37 == 1 )
          {
            LODWORD(v14) = a1;
            v31 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL * v8);
          }
          v15 = "%u ";
          v16 = v8;
          goto LABEL_8;
        case 4:
        case 8:
          v21 = ((unsigned __int8)a2[v35 + 2] << 8)
              | ((unsigned __int8)a2[v35 + 1] << 16)
              | ((unsigned __int8)a2[v35] << 24);
          v22 = (unsigned __int8)a2[v35 + 3];
          v35 += 4;
          v8 = v22 | v21;
          if ( v37 == 2 )
          {
            LODWORD(v14) = a1;
            v31 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL * v8);
          }
          else if ( v8 != 1 && v37 == 105 )
          {
            sprintf(&s[strlen(s)], ", %u cmds start here", (unsigned int)v8);
          }
          sub_490C60(a3, (unsigned int)"%u ", v8, (_DWORD)v14, v12, v13, v30);
          if ( *((_DWORD *)v10 + v11 + 5) != 8 )
            goto LABEL_9;
          LODWORD(v14) = *((_DWORD *)v10 + 4);
          v30 = (_QWORD *)(*(_QWORD *)(a1 + 128) + 16LL * v8);
          goto LABEL_10;
        case 5:
          v15 = "%d ";
          v26 = ((unsigned __int8)a2[v35 + 2] << 8) | ((unsigned __int8)a2[v35 + 1] << 16) | (a2[v35] << 24);
          v27 = (unsigned __int8)a2[v35 + 3];
          v35 += 4;
          v8 = v27 | v26;
          v16 = v8;
          if ( v8 >= -1 )
            goto LABEL_8;
          if ( v8 == -2 )
          {
            sub_490C60(a3, (unsigned int)"end ", -2, (_DWORD)v14, v12, v13);
            LODWORD(v14) = *((_DWORD *)v10 + 4);
          }
          else
          {
            v15 = "end-%d ";
            v16 = -2 - v8;
LABEL_8:
            sub_490C60(a3, (_DWORD)v15, v16, (_DWORD)v14, v12, v13, v30);
LABEL_9:
            LODWORD(v14) = *((_DWORD *)v10 + 4);
          }
LABEL_10:
          if ( (int)v14 > ++v11 )
            continue;
          if ( !v31 )
            goto LABEL_45;
          sub_48EDF0(a3, "\t# ", 0xFFFFFFFFLL);
          v17 = sub_47ACD0(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL * v8), &v39);
          v18 = v39;
          v19 = (char *)v17;
          if ( v39 >= 41 )
            v18 = 40;
          break;
        case 6:
          v8 = (unsigned __int8)a2[v35++];
          goto LABEL_32;
        case 7:
          v28 = ((unsigned __int8)a2[v35 + 2] << 8)
              | ((unsigned __int8)a2[v35 + 1] << 16)
              | ((unsigned __int8)a2[v35] << 24);
          v29 = (unsigned __int8)a2[v35 + 3];
          v35 += 4;
          v8 = v29 | v28;
LABEL_32:
          if ( v33 )
          {
            if ( v8 >= v34 )
              sub_47D740(
                (unsigned int)"FormatInstruction: bad local var index %u (%u locals)",
                v8,
                v34,
                (_DWORD)v14,
                v12,
                v13);
            for ( i = 0; i < v8; ++i )
            {
              v14 = (__int64 *)*v33;
              v33 = (__int64 *)*v33;
            }
            if ( (*((_BYTE *)v33 + 17) & 2) != 0 )
            {
              sprintf(s, "temp var %u", v8);
            }
            else
            {
              strcpy(s, "var ");
              v32 = (char *)(v33 + 5);
            }
          }
          v15 = "%%v%u ";
          v16 = v8;
          goto LABEL_8;
        default:
          goto LABEL_10;
      }
      goto LABEL_14;
    }
  }
LABEL_45:
  if ( s[0] )
  {
    sub_490C60(a3, (unsigned int)"\t# %s", (unsigned int)s, (_DWORD)v14, v12, v13);
    if ( v32 )
    {
      v19 = v32;
      v18 = 40;
LABEL_14:
      sub_43CAE0(a3, v19, v18);
    }
  }
  sub_48EDF0(a3, "\n", 0xFFFFFFFFLL);
  if ( !v30 || !*(_QWORD *)(*v30 + 24LL) )
    return (unsigned int)v35;
  sub_48EDF0(a3, "\t\t[", 0xFFFFFFFFLL);
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*v30 + 24LL))(v30[1], a3, a1, v36);
  sub_48EDF0(a3, "]\n", 0xFFFFFFFFLL);
  return (unsigned int)v35;
}

