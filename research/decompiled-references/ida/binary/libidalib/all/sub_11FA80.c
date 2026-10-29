__int64 __fastcall sub_11FA80(__int64 a1)
{
  int v1; // eax
  int v2; // r12d
  int v3; // eax
  int v4; // r12d
  int v5; // eax
  int v6; // edx
  int v7; // ebx
  __int64 eah; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  char *v11; // rbp
  int v12; // r13d
  int v13; // r9d
  unsigned int v14; // r12d
  __int64 v16; // rsi
  const void **v17; // rbp
  __int64 v18; // r15
  int v19; // ebx
  __int64 v20; // rax
  char v21; // cl
  __int64 v22; // r13
  __int64 v23; // rbx
  const void **v24; // rbp
  __int64 v25; // rsi
  _QWORD *v26; // r13
  __int64 v27; // r12
  __int64 v28; // rbp
  _QWORD *v29; // r13
  __int64 v30; // rdi
  __int64 v31; // rbp
  _QWORD *v32; // rbx
  char v33; // r11
  int v34; // r8d
  char v35; // al
  unsigned __int8 *v36; // rsi
  _BYTE *v37; // rdi
  __int64 v38; // rcx
  int v39; // r10d
  char v40; // al
  char fixups; // [rsp+14h] [rbp-514h]
  int v42; // [rsp+20h] [rbp-508h]
  _BYTE *v43; // [rsp+28h] [rbp-500h]
  int v44; // [rsp+28h] [rbp-500h]
  unsigned __int8 *v45; // [rsp+30h] [rbp-4F8h]
  char v46; // [rsp+30h] [rbp-4F8h]
  int v47; // [rsp+3Ch] [rbp-4ECh]
  __int64 v48; // [rsp+40h] [rbp-4E8h]
  __int64 v49; // [rsp+48h] [rbp-4E0h] BYREF
  __int64 fileregion_offset; // [rsp+58h] [rbp-4D0h] BYREF
  __int64 v51; // [rsp+60h] [rbp-4C8h] BYREF
  __int128 v52; // [rsp+68h] [rbp-4C0h]
  __int64 v53; // [rsp+80h] [rbp-4A8h] BYREF
  __int128 v54; // [rsp+88h] [rbp-4A0h]
  __int64 v55; // [rsp+A0h] [rbp-488h]
  __int128 v56; // [rsp+A8h] [rbp-480h]
  _QWORD *v57; // [rsp+C0h] [rbp-468h]
  __int128 v58; // [rsp+C8h] [rbp-460h]
  _BYTE v59[1024]; // [rsp+E0h] [rbp-448h] BYREF
  char v60; // [rsp+4E0h] [rbp-48h] BYREF
  unsigned __int64 v61; // [rsp+4E8h] [rbp-40h]

  v49 = a1;
  v61 = __readfsqword(0x28u);
  v1 = nbits();
  v2 = v1 + 14;
  v3 = v1 + 7;
  if ( v3 >= 0 )
    v2 = v3;
  v4 = v2 >> 3;
  v5 = 1024 / (int)(b2a_width() + 1);
  v6 = 16;
  if ( v5 <= 16 )
    v6 = v5;
  v7 = v6;
  eah = get_eah();
  v9 = -1;
  if ( *(_DWORD *)(eah + 24) != 8 )
    v9 = 0x100000000LL;
  v10 = v9 - v49;
  v11 = v59;
  if ( v10 < v7 )
    v7 = v10;
  v12 = 0;
  if ( v7 > 0 )
  {
    do
    {
      ++v12;
      *v11++ = get_wide_byte();
    }
    while ( v7 > v12 && v11 < &v60 );
  }
  v52 = 0;
  v51 = 0;
  sub_11F900(&v51, v7, (void (__fastcall *)(__int64, char *))&get_wide_byte);
  v54 = 0;
  v53 = 0;
  sub_11F900(&v53, v7, (void (__fastcall *)(__int64, char *))&get_original_byte);
  fileregion_offset = get_fileregion_offset();
  if ( !(unsigned int)sub_18C660(
                        986,
                        (unsigned int)&v49,
                        (unsigned int)&fileregion_offset,
                        (unsigned int)&v53,
                        (unsigned int)&v51,
                        v13) )
    goto LABEL_13;
  v55 = 0;
  v56 = 0;
  get_default_radix();
  v16 = v49;
  parse_binpat_str();
  if ( (_QWORD)v56 )
  {
    if ( (_QWORD)v56 != 1 )
    {
      if ( !under_debugger )
        interr();
      goto LABEL_95;
    }
    v17 = (const void **)v55;
    v18 = *(_QWORD *)(v55 + 32);
    if ( !v18 )
    {
      v19 = v4 * v7;
      if ( v19 > *(_DWORD *)(v55 + 8) )
        v19 = *(_DWORD *)(v55 + 8);
      v20 = v19 - 1;
      while ( v19 > 0 )
      {
        v21 = *(_BYTE *)(*(_QWORD *)v55 + v20--);
        if ( v59[v19 - 1] != v21 )
          goto LABEL_40;
        --v19;
      }
      if ( !v19 )
      {
        if ( v55 )
        {
          v22 = 1;
          v14 = 1;
          goto LABEL_31;
        }
LABEL_13:
        v14 = 1;
        goto LABEL_14;
      }
LABEL_40:
      patch_bytes();
      fixups = get_fixups();
      if ( !fixups )
      {
LABEL_56:
        sub_11A520(v49, v19);
        v30 = v55;
        if ( v55 )
        {
          v31 = v56;
          if ( (_QWORD)v56 )
          {
            do
            {
              v32 = (_QWORD *)(v30 + 80 * v18);
              if ( v32[6] )
              {
                v32[7] = 0;
                qfree();
              }
              if ( v32[3] )
              {
                v32[4] = 0;
                qfree();
              }
              if ( *v32 )
              {
                v32[1] = 0;
                qfree();
              }
              ++v18;
              v30 = v55;
            }
            while ( v31 != v18 );
          }
          *(_QWORD *)&v56 = 0;
          qfree();
        }
        goto LABEL_13;
      }
      v57 = nullptr;
      v58 = 0;
      get_default_radix();
      v25 = v49;
      parse_binpat_str();
      if ( (_QWORD)v58 == 1 )
      {
        v26 = v57;
        if ( v57[1] >= (unsigned __int64)v19 && !v57[4] )
        {
          v45 = (unsigned __int8 *)*v17;
          v43 = (_BYTE *)*v57;
          if ( !memcmp((const void *)*v57, *v17, v19) || v19 <= 0 )
          {
            if ( !v26 )
              goto LABEL_56;
            v27 = v58;
LABEL_47:
            v28 = 0;
            do
            {
              v29 = &v26[10 * v28];
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
              ++v28;
              v26 = v57;
            }
            while ( v27 != v28 );
LABEL_55:
            *(_QWORD *)&v58 = 0;
            qfree();
            goto LABEL_56;
          }
          v33 = fixups;
          v34 = 0;
          v35 = 0;
          v36 = v45;
          v37 = v43;
          v38 = 0;
          while ( 1 )
          {
            v25 = v36[v38];
            v39 = v38;
            if ( v37[v38] == (_BYTE)v25 )
            {
              if ( v35 )
              {
                v48 = v38;
                v47 = v38;
                v46 = v33;
                v44 = v34;
                v42 = v38;
                v25 = v49 + v34 / v4;
                v40 = get_fixups();
                v39 = v42;
                v34 = v44;
                v33 = v46;
                v38 = v48;
                if ( v40 )
                {
                  if ( v19 != v47 )
                    goto LABEL_83;
LABEL_81:
                  v25 = v34 / v4 + v49;
                  v35 = get_fixups();
                  goto LABEL_82;
                }
              }
              v35 = 0;
            }
            else if ( !v35 )
            {
              v34 = v38;
              v35 = v33;
            }
            if ( v19 == ++v38 )
              break;
            v37 = (_BYTE *)*v26;
            v36 = (unsigned __int8 *)*v17;
          }
          if ( v19 == v39 + 1 )
          {
            if ( !v35 )
              goto LABEL_84;
            goto LABEL_81;
          }
LABEL_82:
          if ( !v35 )
            goto LABEL_84;
        }
LABEL_83:
        sub_1195A0(999, v25);
LABEL_84:
        v26 = v57;
        if ( !v57 )
          goto LABEL_56;
        v27 = v58;
        if ( !(_QWORD)v58 )
          goto LABEL_55;
        goto LABEL_47;
      }
      if ( !under_debugger )
        interr();
LABEL_95:
      BUG();
    }
    sub_92200((__int64)"ICON ERROR\nAUTOHIDE NONE\nThe variable bytes are not accepted in PatchByte command", v16);
    v17 = (const void **)v55;
    v14 = 0;
  }
  else
  {
    sub_8F740((__int64)"%s\n", s1);
    v17 = (const void **)v55;
    v14 = 1;
  }
  if ( v17 )
  {
    v22 = v56;
    if ( !(_QWORD)v56 )
    {
LABEL_39:
      *(_QWORD *)&v56 = 0;
      qfree();
      goto LABEL_14;
    }
LABEL_31:
    v23 = 0;
    do
    {
      v24 = &v17[10 * v23];
      if ( v24[6] )
      {
        v24[7] = nullptr;
        qfree();
      }
      if ( v24[3] )
      {
        v24[4] = nullptr;
        qfree();
      }
      if ( *v24 )
      {
        v24[1] = nullptr;
        qfree();
      }
      ++v23;
      v17 = (const void **)v55;
    }
    while ( v22 != v23 );
    goto LABEL_39;
  }
LABEL_14:
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree();
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  return v14;
}

