unsigned __int64 __fastcall sub_3AA340(__int64 a1, __int64 *a2, __int64 a3)
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
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdi
  const char *v27; // rdi
  __int64 v29; // [rsp+8h] [rbp-B0h]
  unsigned int v31; // [rsp+1Ch] [rbp-9Ch]
  __int64 v32; // [rsp+28h] [rbp-90h] BYREF
  const char *v33; // [rsp+30h] [rbp-88h] BYREF
  __int64 v34; // [rsp+38h] [rbp-80h]
  const char *v35; // [rsp+50h] [rbp-68h] BYREF
  __int64 v36; // [rsp+58h] [rbp-60h]
  __int128 v37; // [rsp+60h] [rbp-58h]
  unsigned __int64 v38; // [rsp+78h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a3 + 8);
  if ( !v3 )
    return v38 - __readfsqword(0x28u);
  v31 = *(_QWORD *)(a3 + 8);
  (*(void (__fastcall **)(const char **, __int64 *, _QWORD, __int64, _QWORD))(*a2 + 48))(
    &v33,
    a2,
    **(_QWORD **)a3,
    1,
    (unsigned int)v3);
  v6 = s1;
  if ( v34 )
    v6 = v33;
  sub_1326A0((__int64)&unk_3F60D3, v6);
  if ( (int)v3 <= 0 )
  {
LABEL_37:
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))callui)(24, 10, 0, &callui);
    v27 = v33;
    if ( v33 )
      goto LABEL_38;
    return v38 - __readfsqword(0x28u);
  }
  v7 = (unsigned int)(v3 - 1);
  v8 = 0;
  v29 = v7;
  while ( !(unsigned __int8)((__int64 (__fastcall *)(__int64))callui)(27) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)a3 + 8 * v8);
    func = get_func(v9);
    if ( !func )
      goto LABEL_35;
    if ( v8 )
    {
      (*(void (__fastcall **)(const char **, __int64 *, __int64, _QWORD, _QWORD))(*a2 + 48))(
        &v35,
        a2,
        v9,
        (unsigned int)(v8 + 1),
        v31);
      v11 = s1;
      if ( v36 )
        v11 = v35;
      sub_3210A0((__int64)&unk_3F60D3, v11);
      if ( v35 )
      {
        v36 = 0;
        qfree(v35);
      }
    }
    v35 = (const char *)func;
    v36 = 0;
    v37 = 0;
    sub_148200(&v32, a1, &v35, nullptr, 1);
    v12 = v32;
    if ( v32 )
    {
      a2[8] = v32;
      sub_2506C0(a2, v12 + 16, 0);
      v13 = (__int64 *)v32;
      if ( v32 )
      {
        if ( (*(_DWORD *)(v32 + 104))-- == 1 )
        {
          sub_2535B0(v13);
          v15 = v13[23];
          if ( v15 )
          {
            if ( v13[24] )
            {
              v16 = 0;
              v17 = v13[24];
              do
              {
                v18 = (__int64 *)(v15 + 24 * v16);
                v19 = *v18;
                if ( *v18 )
                {
                  v18[1] = 0;
                  qfree(v19);
                  v15 = v13[23];
                }
                ++v16;
              }
              while ( v17 != v16 );
            }
            v13[24] = 0;
            qfree(v15);
          }
          v20 = v13[20];
          if ( v20 )
          {
            v13[21] = 0;
            qfree(v20);
          }
          v21 = v13[16];
          if ( v21 )
          {
            if ( v13[17] )
            {
              v22 = 0;
              v23 = v13[17];
              do
              {
                v24 = (__int64 *)(v21 + 32 * v22);
                v25 = *v24;
                if ( *v24 )
                {
                  v24[1] = 0;
                  qfree(v25);
                  v21 = v13[16];
                }
                ++v22;
              }
              while ( v23 != v22 );
            }
            v13[17] = 0;
            qfree(v21);
          }
          sub_24FC90((__int64)(v13 + 2));
          j__qfree(v13);
        }
      }
      v26 = v36;
      if ( v36 )
      {
LABEL_34:
        *(_QWORD *)&v37 = 0;
        qfree(v26);
      }
    }
    else
    {
      sub_13B580(&v32, 0);
      v26 = v36;
      if ( v36 )
        goto LABEL_34;
    }
LABEL_35:
    if ( v29 == v8 )
      goto LABEL_37;
    ++v8;
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))callui)(24, 10, 0, &callui);
  v27 = v33;
  if ( v33 )
  {
LABEL_38:
    v34 = 0;
    qfree(v27);
  }
  return v38 - __readfsqword(0x28u);
}
