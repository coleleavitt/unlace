__int64 __fastcall sub_11F5C0(unsigned int a1)
{
  char *v1; // r13
  int v2; // eax
  int v3; // r12d
  int v4; // eax
  int v5; // r12d
  int v6; // eax
  int v7; // edx
  int v8; // ebx
  int v9; // ebp
  int v10; // r9d
  unsigned int v11; // r12d
  __int64 v13; // rsi
  const void **v14; // rbp
  __int64 v15; // r15
  signed int v16; // ebx
  __int64 v17; // rax
  char v18; // cl
  __int64 v19; // r13
  __int64 v20; // rbx
  const void **v21; // rbp
  __int64 v22; // rsi
  _QWORD *v23; // r13
  __int64 v24; // r12
  __int64 v25; // rbp
  _QWORD *v26; // r13
  __int64 v27; // rdi
  __int64 v28; // rbp
  _QWORD *v29; // rbx
  char v30; // r11
  int v31; // r8d
  char v32; // al
  unsigned __int8 *v33; // rsi
  _BYTE *v34; // rdi
  __int64 v35; // rcx
  int v36; // r10d
  char v37; // al
  int v38; // [rsp+10h] [rbp-508h]
  char fixups; // [rsp+18h] [rbp-500h]
  _BYTE *v40; // [rsp+20h] [rbp-4F8h]
  int v41; // [rsp+20h] [rbp-4F8h]
  unsigned __int8 *v42; // [rsp+28h] [rbp-4F0h]
  char v43; // [rsp+28h] [rbp-4F0h]
  __int64 v44; // [rsp+30h] [rbp-4E8h]
  int v45; // [rsp+38h] [rbp-4E0h]
  unsigned int v46; // [rsp+3Ch] [rbp-4DCh] BYREF
  int fileregion_offset; // [rsp+4Ch] [rbp-4CCh] BYREF
  __int64 v48; // [rsp+50h] [rbp-4C8h] BYREF
  __int128 v49; // [rsp+58h] [rbp-4C0h]
  __int64 v50; // [rsp+70h] [rbp-4A8h] BYREF
  __int128 v51; // [rsp+78h] [rbp-4A0h]
  __int64 v52; // [rsp+90h] [rbp-488h]
  __int128 v53; // [rsp+98h] [rbp-480h]
  _QWORD *v54; // [rsp+B0h] [rbp-468h]
  __int128 v55; // [rsp+B8h] [rbp-460h]
  _BYTE v56[1024]; // [rsp+D0h] [rbp-448h] BYREF
  char v57; // [rsp+4D0h] [rbp-48h] BYREF
  unsigned __int64 v58; // [rsp+4D8h] [rbp-40h]

  v46 = a1;
  v1 = v56;
  v58 = __readfsqword(0x28u);
  v2 = nbits();
  v3 = v2 + 14;
  v4 = v2 + 7;
  if ( v4 >= 0 )
    v3 = v4;
  v5 = v3 >> 3;
  v6 = 1024 / (int)(b2a_width() + 1);
  v7 = 16;
  if ( v6 <= 16 )
    v7 = v6;
  v8 = v7;
  get_eah();
  if ( v8 > ~v46 )
    v8 = ~v46;
  v9 = 0;
  if ( v8 > 0 )
  {
    do
    {
      ++v1;
      ++v9;
      *(v1 - 1) = get_wide_byte();
    }
    while ( v8 > v9 && v1 < &v57 );
  }
  v49 = 0;
  v48 = 0;
  sub_11F440(&v48, v8, (void (__fastcall *)(_QWORD))&get_wide_byte);
  v51 = 0;
  v50 = 0;
  sub_11F440(&v50, v8, (void (__fastcall *)(_QWORD))&get_original_byte);
  fileregion_offset = get_fileregion_offset();
  if ( !(unsigned int)sub_18BA90(
                        986,
                        (unsigned int)&v46,
                        (unsigned int)&fileregion_offset,
                        (unsigned int)&v50,
                        (unsigned int)&v48,
                        v10) )
    goto LABEL_11;
  v52 = 0;
  v53 = 0;
  get_default_radix();
  v13 = v46;
  parse_binpat_str();
  if ( (_QWORD)v53 )
  {
    if ( (_QWORD)v53 != 1 )
    {
      if ( !under_debugger )
        interr();
      goto LABEL_93;
    }
    v14 = (const void **)v52;
    v15 = *(_QWORD *)(v52 + 32);
    if ( !v15 )
    {
      v16 = v5 * v8;
      if ( v16 > *(_DWORD *)(v52 + 8) )
        v16 = *(_DWORD *)(v52 + 8);
      v17 = v16 - 1;
      while ( v16 > 0 )
      {
        v18 = *(_BYTE *)(*(_QWORD *)v52 + v17--);
        if ( v56[v16 - 1] != v18 )
          goto LABEL_38;
        --v16;
      }
      if ( !v16 )
      {
        if ( v52 )
        {
          v19 = 1;
          v11 = 1;
          goto LABEL_29;
        }
LABEL_11:
        v11 = 1;
        goto LABEL_12;
      }
LABEL_38:
      patch_bytes();
      fixups = get_fixups();
      if ( !fixups )
      {
LABEL_54:
        sub_11A120(v46, v16);
        v27 = v52;
        if ( v52 )
        {
          v28 = v53;
          if ( (_QWORD)v53 )
          {
            do
            {
              v29 = (_QWORD *)(v27 + 80 * v15);
              if ( v29[6] )
              {
                v29[7] = 0;
                qfree();
              }
              if ( v29[3] )
              {
                v29[4] = 0;
                qfree();
              }
              if ( *v29 )
              {
                v29[1] = 0;
                qfree();
              }
              ++v15;
              v27 = v52;
            }
            while ( v28 != v15 );
          }
          *(_QWORD *)&v53 = 0;
          qfree();
        }
        goto LABEL_11;
      }
      v54 = nullptr;
      v55 = 0;
      get_default_radix();
      v22 = v46;
      parse_binpat_str();
      if ( (_QWORD)v55 == 1 )
      {
        v23 = v54;
        if ( v54[1] >= (unsigned __int64)v16 && !v54[4] )
        {
          v42 = (unsigned __int8 *)*v14;
          v40 = (_BYTE *)*v54;
          if ( !memcmp((const void *)*v54, *v14, v16) || v16 <= 0 )
          {
            if ( !v23 )
              goto LABEL_54;
            v24 = v55;
LABEL_45:
            v25 = 0;
            do
            {
              v26 = &v23[10 * v25];
              if ( v26[6] )
              {
                v26[7] = 0;
                qfree();
              }
              if ( v26[3] )
              {
                v26[4] = 0;
                qfree();
              }
              if ( *v26 )
              {
                v26[1] = 0;
                qfree();
              }
              ++v25;
              v23 = v54;
            }
            while ( v25 != v24 );
LABEL_53:
            *(_QWORD *)&v55 = 0;
            qfree();
            goto LABEL_54;
          }
          v30 = fixups;
          v31 = 0;
          v32 = 0;
          v33 = v42;
          v34 = v40;
          v35 = 0;
          while ( 1 )
          {
            v22 = v33[v35];
            v36 = v35;
            if ( v34[v35] == (_BYTE)v22 )
            {
              if ( v32 )
              {
                v44 = v35;
                v45 = v35;
                v43 = v30;
                v41 = v31;
                v38 = v35;
                v22 = v46 + v31 / v5;
                v37 = get_fixups();
                v36 = v38;
                v31 = v41;
                v30 = v43;
                v35 = v44;
                if ( v37 )
                {
                  if ( v16 != v45 )
                    goto LABEL_81;
LABEL_79:
                  v22 = v31 / v5 + v46;
                  v32 = get_fixups();
                  goto LABEL_80;
                }
              }
              v32 = 0;
            }
            else if ( !v32 )
            {
              v31 = v35;
              v32 = v30;
            }
            if ( v16 == ++v35 )
              break;
            v34 = (_BYTE *)*v23;
            v33 = (unsigned __int8 *)*v14;
          }
          if ( v16 == v36 + 1 )
          {
            if ( !v32 )
              goto LABEL_82;
            goto LABEL_79;
          }
LABEL_80:
          if ( !v32 )
            goto LABEL_82;
        }
LABEL_81:
        sub_1191A0(999, v22);
LABEL_82:
        v23 = v54;
        if ( !v54 )
          goto LABEL_54;
        v24 = v55;
        if ( !(_QWORD)v55 )
          goto LABEL_53;
        goto LABEL_45;
      }
      if ( !under_debugger )
        interr();
LABEL_93:
      BUG();
    }
    sub_92120((__int64)"ICON ERROR\nAUTOHIDE NONE\nThe variable bytes are not accepted in PatchByte command", v13);
    v14 = (const void **)v52;
    v11 = 0;
  }
  else
  {
    sub_8F660((__int64)"%s\n", s1);
    v14 = (const void **)v52;
    v11 = 1;
  }
  if ( v14 )
  {
    v19 = v53;
    if ( !(_QWORD)v53 )
    {
LABEL_37:
      *(_QWORD *)&v53 = 0;
      qfree();
      goto LABEL_12;
    }
LABEL_29:
    v20 = 0;
    do
    {
      v21 = &v14[10 * v20];
      if ( v21[6] )
      {
        v21[7] = nullptr;
        qfree();
      }
      if ( v21[3] )
      {
        v21[4] = nullptr;
        qfree();
      }
      if ( *v21 )
      {
        v21[1] = nullptr;
        qfree();
      }
      ++v20;
      v14 = (const void **)v52;
    }
    while ( v19 != v20 );
    goto LABEL_37;
  }
LABEL_12:
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree();
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
  }
  return v11;
}

