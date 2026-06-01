__int64 __fastcall sub_3030(
        __int64 a1,
        __int64 (__fastcall ***a2)(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5),
        int a3)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rdx
  char *v9; // rsi
  char v10; // al
  char *v11; // rax
  char *v12; // r15
  unsigned int v13; // edi
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // rax
  const char *v17; // r14
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 (__fastcall *v22)(__int64, __int64, __int64, __int64, void *); // rax
  char *v23; // rax
  __int64 v24; // rax
  char *v26; // rsi
  _BYTE *v27; // r14
  __int64 (__fastcall *v28)(__int64, __int64, __int64, __int64, void *); // rax
  __int64 v29; // rax
  unsigned int v30; // edx
  char v31; // cl
  __int64 v32; // rcx
  _BYTE *v33; // r15
  __int64 v34; // rsi
  __int64 v35; // rax
  char v36; // dl
  unsigned int v37; // edi
  __int64 v38; // [rsp+8h] [rbp-4F8h]
  __int64 v39; // [rsp+10h] [rbp-4F0h]
  __int64 v40; // [rsp+10h] [rbp-4F0h]
  __int64 v42; // [rsp+20h] [rbp-4E0h]
  __int64 v44; // [rsp+30h] [rbp-4D0h]
  __int64 v45; // [rsp+38h] [rbp-4C8h]
  _BYTE *v46; // [rsp+40h] [rbp-4C0h] BYREF
  __int128 v47; // [rsp+48h] [rbp-4B8h]
  char v48[48]; // [rsp+60h] [rbp-4A0h] BYREF
  char nptr[10]; // [rsp+90h] [rbp-470h] BYREF
  __int16 v50; // [rsp+9Ah] [rbp-466h]
  char v51[2]; // [rsp+A0h] [rbp-460h] BYREF
  char v52; // [rsp+A2h] [rbp-45Eh]
  char v53[29]; // [rsp+A3h] [rbp-45Dh] BYREF
  _BYTE v54[1032]; // [rsp+C0h] [rbp-440h] BYREF
  unsigned __int64 v55; // [rsp+4C8h] [rbp-38h]

  v55 = __readfsqword(0x28u);
  v38 = 0;
  v44 = 0;
  v42 = a3;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v4 = qlseek(a1, 0, 1);
        v5 = v4;
        if ( (v4 & 1) != 0 )
          qlseek(a1, v4 + 1, 0);
        if ( a3 >= 0 && v42 <= v5 )
        {
          v7 = 5;
          goto LABEL_44;
        }
        v6 = qlread(a1, v48, 60);
        v7 = v6;
        if ( !v6 )
          goto LABEL_44;
        if ( v6 != 60 )
          goto LABEL_43;
        if ( v50 != 2656 )
        {
          v7 = 3;
          goto LABEL_44;
        }
        v8 = 0;
        v9 = v51;
        do
        {
          v10 = v48[v8];
          if ( v10 == 10 )
          {
            *v9 = 0;
            v11 = v9;
            goto LABEL_14;
          }
          *v9 = v10;
          if ( !v10 )
            break;
          ++v8;
          ++v9;
        }
        while ( v8 != 16 );
        v11 = v9;
LABEL_14:
        v12 = v11;
        if ( v51 < v11 )
        {
          while ( 1 )
          {
            v13 = *(v12 - 1);
            if ( v13 > 0x7F || !isspace(v13) )
              break;
            *--v12 = 0;
            if ( v12 == v51 )
              goto LABEL_19;
          }
          if ( v51 < v12 && *(v12 - 1) == 47 )
            *(v12 - 1) = 0;
        }
LABEL_19:
        v45 = strtoll(nptr, nullptr, 10);
        v14 = qlseek(a1, 0, 1);
        if ( !v44 && v51[0] == 47 )
          break;
        if ( *(_WORD *)v51 != 12579 || v52 != 47 )
        {
          if ( !v51[0] )
            goto LABEL_22;
          if ( !v44 || v51[0] != 47 )
          {
LABEL_47:
            v26 = v51;
            goto LABEL_48;
          }
          v29 = strtol(&v51[1], nullptr, 10);
          v30 = v51[1];
          v26 = &v51[1];
          v31 = v51[1];
          if ( (unsigned int)v51[1] > 0x7F )
            goto LABEL_48;
          while ( v30 - 48 <= 9 )
          {
            v30 = *++v26;
            v31 = v30;
            if ( v30 > 0x7F )
              goto LABEL_48;
          }
          if ( v31 )
          {
LABEL_48:
            v27 = v54;
            qstrncpy(v54, v26, 1024);
          }
          else if ( v29 < 0 )
          {
            v27 = v54;
            qstrncpy(v54, "?", 1024);
          }
          else
          {
            v27 = v54;
            v32 = v44 + v29;
            if ( v44 + v29 < (unsigned __int64)(v44 + v38) )
            {
              v27 = v54;
              v33 = v54;
              v34 = v38 - v29;
              v35 = 0;
              while ( 1 )
              {
                v36 = *(_BYTE *)(v32 + v35);
                if ( v36 == 10 || v35 == 1023 )
                  break;
                *v33 = v36;
                if ( v36 )
                {
                  ++v35;
                  ++v33;
                  if ( v35 != v34 )
                    continue;
                }
                goto LABEL_82;
              }
              *v33 = 0;
LABEL_82:
              if ( v54 < v33 )
              {
                while ( 1 )
                {
                  v37 = (char)*(v33 - 1);
                  if ( v37 > 0x7F || !isspace(v37) )
                    break;
                  *--v33 = 0;
                  if ( v33 == v54 )
                    goto LABEL_49;
                }
                if ( v54 < v33 && *(v33 - 1) == 47 )
                  *(v33 - 1) = 0;
              }
            }
          }
LABEL_49:
          v28 = **a2;
          if ( v28 == sub_2850 )
          {
            v46 = nullptr;
            v47 = 0;
            if ( !(unsigned __int8)is_valid_utf8(v54) )
            {
              if ( (unsigned __int8)idb_utf8(&v46, v54, 0xFFFFFFFFLL, 0) )
              {
                v27 = &unk_6308;
                if ( (_QWORD)v47 )
                  v27 = v46;
              }
            }
            v7 = ((int (__fastcall *)(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, void *), __int64, _QWORD, __int64, __int64, _QWORD, _BYTE *))a2[1])(
                   a2[2],
                   v14,
                   0,
                   v45,
                   v45,
                   0,
                   v27);
            if ( v46 )
            {
              *(_QWORD *)&v47 = 0;
              qfree(v46);
            }
          }
          else
          {
            v7 = v28((__int64)a2, v14, (__int64)v48, v45, v54);
          }
          if ( v7 )
            goto LABEL_44;
          goto LABEL_22;
        }
LABEL_28:
        v15 = strtol(v53, nullptr, 10);
        v16 = qalloc(v15 + 1);
        v17 = (const char *)v16;
        if ( !v16 )
          goto LABEL_91;
        v18 = qlread(a1, v16, v15);
        if ( v18 != v15 )
        {
LABEL_43:
          v7 = 2;
          goto LABEL_44;
        }
        v17[v18] = 0;
        v39 = v18;
        v19 = strncmp(v17, "__.SYMDEF", 9u);
        v20 = v39;
        if ( v19 )
        {
          v40 = v39 + v14;
          v21 = v45 - v20;
          v22 = **a2;
          if ( v22 == sub_2850 )
          {
            v46 = nullptr;
            v47 = 0;
            if ( (unsigned __int8)is_valid_utf8(v17) || !(unsigned __int8)idb_utf8(&v46, v17, 0xFFFFFFFFLL, 0) )
            {
              v23 = (char *)v17;
            }
            else
            {
              v23 = (char *)&unk_6308;
              if ( (_QWORD)v47 )
                v23 = v46;
            }
            v7 = ((int (__fastcall *)(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, void *), __int64, _QWORD, __int64, __int64, _QWORD, char *))a2[1])(
                   a2[2],
                   v40,
                   0,
                   v21,
                   v21,
                   0,
                   v23);
            if ( v46 )
            {
              *(_QWORD *)&v47 = 0;
              qfree(v46);
            }
          }
          else
          {
            v7 = v22((__int64)a2, v40, (__int64)v48, v45 - v20, (void *)v17);
          }
          if ( v7 )
            goto LABEL_44;
        }
        qfree(v17);
LABEL_22:
        qlseek(a1, v14 + v45, 0);
      }
      if ( v51[1] )
      {
        if ( *(_WORD *)v51 != 12579 || v52 != 47 )
          goto LABEL_47;
        goto LABEL_28;
      }
    }
    while ( !v45 );
    v44 = qalloc(v45);
    if ( !v44 )
      break;
    v24 = qlread(a1, v44, v45);
    if ( v24 != v45 )
      goto LABEL_43;
    v38 = v24;
  }
LABEL_91:
  v7 = 4;
LABEL_44:
  qfree(v44);
  return v7;
}

