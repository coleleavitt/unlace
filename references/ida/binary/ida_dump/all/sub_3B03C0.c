unsigned __int64 __fastcall sub_3B03C0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  const char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 func; // rbp
  const char *v11; // rsi
  __int64 v12; // rsi
  __int64 *v13; // rbp
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // r15
  _QWORD *v22; // rax
  __int64 v24; // [rsp+8h] [rbp-B0h]
  unsigned int v25; // [rsp+1Ch] [rbp-9Ch]
  __int64 v26; // [rsp+28h] [rbp-90h] BYREF
  const char *v27; // [rsp+30h] [rbp-88h] BYREF
  __int64 v28; // [rsp+38h] [rbp-80h]
  const char *v29; // [rsp+50h] [rbp-68h] BYREF
  __int64 v30; // [rsp+58h] [rbp-60h]
  __int128 v31; // [rsp+60h] [rbp-58h]
  unsigned __int64 v32; // [rsp+78h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a3 + 8);
  if ( !v3 )
    return v32 - __readfsqword(0x28u);
  v25 = *(_QWORD *)(a3 + 8);
  (*(void (__fastcall **)(const char **, __int64 *, _QWORD, __int64, _QWORD))(*a2 + 48))(
    &v27,
    a2,
    **(_QWORD **)a3,
    1,
    (unsigned int)v3);
  v6 = s1;
  if ( v28 )
    v6 = v27;
  sub_137260((__int64)&unk_4190BD, v6);
  if ( (int)v3 <= 0 )
  {
LABEL_37:
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))callui)(24, 10, 0, &callui);
    if ( v27 )
      goto LABEL_38;
    return v32 - __readfsqword(0x28u);
  }
  v7 = (unsigned int)(v3 - 1);
  v8 = 0;
  v24 = v7;
  while ( !(unsigned __int8)((__int64 (__fastcall *)(__int64))callui)(27) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)a3 + 8 * v8);
    func = get_func();
    if ( !func )
      goto LABEL_35;
    if ( v8 )
    {
      (*(void (__fastcall **)(const char **, __int64 *, __int64, _QWORD, _QWORD))(*a2 + 48))(
        &v29,
        a2,
        v9,
        (unsigned int)(v8 + 1),
        v25);
      v11 = s1;
      if ( v30 )
        v11 = v29;
      sub_326960((__int64)&unk_4190BD, v11);
      if ( v29 )
      {
        v30 = 0;
        qfree();
      }
    }
    v29 = (const char *)func;
    v30 = 0;
    v31 = 0;
    sub_14CDC0(&v26, a1, &v29, nullptr, 1);
    v12 = v26;
    if ( v26 )
    {
      a2[8] = v26;
      sub_255A80(a2, v12 + 16, 0);
      v13 = (__int64 *)v26;
      if ( v26 )
      {
        if ( (*(_DWORD *)(v26 + 104))-- == 1 )
        {
          sub_258970(v13);
          v15 = v13[23];
          if ( v15 )
          {
            if ( v13[24] )
            {
              v16 = 0;
              v17 = v13[24];
              do
              {
                v18 = (_QWORD *)(v15 + 24 * v16);
                if ( *v18 )
                {
                  v18[1] = 0;
                  qfree();
                  v15 = v13[23];
                }
                ++v16;
              }
              while ( v17 != v16 );
            }
            v13[24] = 0;
            qfree();
          }
          if ( v13[20] )
          {
            v13[21] = 0;
            qfree();
          }
          v19 = v13[16];
          if ( v19 )
          {
            if ( v13[17] )
            {
              v20 = 0;
              v21 = v13[17];
              do
              {
                v22 = (_QWORD *)(v19 + 32 * v20);
                if ( *v22 )
                {
                  v22[1] = 0;
                  qfree();
                  v19 = v13[16];
                }
                ++v20;
              }
              while ( v21 != v20 );
            }
            v13[17] = 0;
            qfree();
          }
          sub_255050((__int64)(v13 + 2));
          j__qfree();
        }
      }
      if ( v30 )
      {
LABEL_34:
        *(_QWORD *)&v31 = 0;
        qfree();
      }
    }
    else
    {
      sub_140140(&v26, 0);
      if ( v30 )
        goto LABEL_34;
    }
LABEL_35:
    if ( v24 == v8 )
      goto LABEL_37;
    ++v8;
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))callui)(24, 10, 0, &callui);
  if ( v27 )
  {
LABEL_38:
    v28 = 0;
    qfree();
  }
  return v32 - __readfsqword(0x28u);
}
