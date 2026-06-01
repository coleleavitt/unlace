__int64 __fastcall sub_7D47C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbp
  _QWORD *v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  char v22; // dl
  _QWORD *v23; // rax
  __int64 v24; // r12
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  char v27; // dl
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // rdi
  int v31; // eax

  v3 = *(_QWORD *)(sub_798D40(a1) + 18200);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v3 + 80LL))(v3, *(_QWORD *)(a1 + 72), 1);
  v4 = *(_QWORD *)(a1 + 80);
  if ( !v4 )
    v4 = sub_7D0C20(a1);
  v5 = *(_QWORD *)(v4 + 120);
  v6 = v5 + 8LL * *(unsigned int *)(v4 + 128);
  if ( v6 != v5 )
  {
    while ( (a2 & 7 | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL]) != (*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 48LL) + 32LL)
                                                                                          & 0xFFFFFFFFFFFFFFF0LL]
                                                                       | *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 48LL)
                                                                                   + 32LL)
                                                                       & 7LL) )
    {
      v5 += 8;
      if ( v6 == v5 )
        return 0;
    }
    v7 = *(_QWORD *)(*(_QWORD *)v5 + 104LL);
    v8 = *(_QWORD *)(v7 + 96);
    v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v8 & 1) != 0 )
      goto LABEL_10;
    if ( v9 <= 3 )
      goto LABEL_22;
    v23 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    v11 = (__int64)v23;
    if ( (v9 & 2) != 0 )
    {
      v24 = v23[2275];
      if ( v24 )
      {
        v25 = v23[274];
        v23[284] += 24LL;
        v26 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v11 + 2200) >= v26 + 24 && v25 )
          *(_QWORD *)(v11 + 2192) = v26 + 24;
        else
          v26 = sub_7CF9B0(v11 + 2192, 24, 3);
        *(_QWORD *)v26 = v24;
        *(_DWORD *)(v26 + 8) = 0;
        *(_QWORD *)(v26 + 16) = v7;
        *(_QWORD *)(v7 + 96) = v26 | 5;
        v27 = v26;
        v10 = v26 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = v10;
        LOBYTE(v9) = v27 & 0xFA | 4;
LABEL_11:
        if ( (v9 & 4) != 0 && v10 )
        {
          v28 = *(_QWORD *)v11;
          v29 = *(_DWORD *)(*(_QWORD *)v11 + 12LL);
          if ( *(_DWORD *)(v11 + 8) != v29 )
          {
            *(_DWORD *)(v11 + 8) = v29;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, v7);
          }
          v11 = *(_QWORD *)(v11 + 16);
        }
        goto LABEL_12;
      }
      v9 = v7 & 0xFFFFFFFFFFFFFFFALL;
      v8 = v7 & 0xFFFFFFFFFFFFFFFALL | 1;
      *(_QWORD *)(v7 + 96) = v8;
LABEL_10:
      v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      v11 = v10;
      if ( !v9 )
        goto LABEL_12;
      goto LABEL_11;
    }
    while ( 1 )
    {
LABEL_12:
      if ( !sub_782740(v11) )
        return v11;
      v12 = *(_QWORD *)(v11 + 96);
      if ( (v12 & 1) != 0 )
        goto LABEL_22;
      v13 = v12 >> 1;
      if ( (v12 & 2) != 0 )
        goto LABEL_22;
      if ( (v12 & 1) != 0 )
      {
        v14 = v12 & 0xFFFFFFFFFFFFFFF8LL;
        v15 = *(_QWORD *)(v11 + 96) & 0xFFFFFFFFFFFFFFFELL;
        v16 = v14;
        goto LABEL_17;
      }
      if ( (v12 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
      {
LABEL_22:
        v11 = 0;
      }
      else
      {
        v18 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v13 & 1) != 0 )
        {
          v16 = v18[2275];
          if ( v16 )
          {
            v19 = v18[274];
            v18[284] += 24LL;
            v20 = ((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 24;
            if ( v18[275] >= v20 && v19 )
            {
              v18[274] = v20;
              v21 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v21 = sub_7CF9B0((__int64)(v18 + 274), 24, 3);
            }
            *(_QWORD *)v21 = v16;
            *(_DWORD *)(v21 + 8) = 0;
            *(_QWORD *)(v21 + 16) = v11;
            *(_QWORD *)(v11 + 96) = v21 | 5;
            v22 = v21;
            v14 = v21 & 0xFFFFFFFFFFFFFFF8LL;
            v16 = v14;
            LOBYTE(v15) = v22 & 0xFA | 4;
          }
          else
          {
            *(_QWORD *)(v11 + 96) = v11 & 0xFFFFFFFFFFFFFFFALL | 1;
            LOBYTE(v15) = v11 & 0xFA;
            if ( (v11 & 0xFFFFFFFFFFFFFFFALL) == 0 )
              goto LABEL_19;
            v14 = v11 & 0xFFFFFFFFFFFFFFF8LL;
            v16 = v11 & 0xFFFFFFFFFFFFFFF8LL;
          }
LABEL_17:
          if ( (v15 & 4) != 0 && v14 )
          {
            v30 = *(_QWORD *)v16;
            v31 = *(_DWORD *)(*(_QWORD *)v16 + 12LL);
            if ( *(_DWORD *)(v16 + 8) != v31 )
            {
              *(_DWORD *)(v16 + 8) = v31;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 144LL))(v30, v11);
            }
            v11 = *(_QWORD *)(v16 + 16);
          }
          else
          {
LABEL_19:
            v11 = v16;
          }
        }
        else
        {
          v11 = (__int64)v18;
        }
      }
    }
  }
  return 0;
}

