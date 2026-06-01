__int64 __fastcall sub_881EE0(__m128i *a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  unsigned __int8 v8; // al
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned int v18; // eax
  char v19; // r13
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // rbp
  unsigned int v23; // r14d
  unsigned __int64 v24; // r15
  void *v25; // rdi
  unsigned int v26; // eax
  char v27; // r13
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 v30; // r14
  unsigned int v31; // r15d
  unsigned __int64 v32; // rax
  void *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rsi
  unsigned __int64 v36; // [rsp+8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v38; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 16);
  v5 = sub_8811F0(a1, v4);
  if ( !(_BYTE)v5 )
    return 0;
  v7 = v5;
  v8 = *(_BYTE *)(a2 + 2) >> 3;
  if ( v8 != 8 )
  {
    if ( v8 > 8u )
    {
      if ( v8 == 12 )
        return v7;
    }
    else
    {
      if ( v8 == 6 )
        return v7;
      if ( v8 == 7 )
      {
        v9 = a1->m128i_i64[1];
        if ( !*(_BYTE *)v9 )
        {
          v10 = sub_2575D20(a1, v4, v6);
          v11 = v9 + 40;
          v12 = v10;
          if ( *(_QWORD *)(v9 + 40) == v10 )
            sub_257D180(v11);
          else
            sub_2577530(v11);
          v13 = a1->m128i_i64[1];
          if ( *(_QWORD *)(v13 + 64) == v12 )
            sub_257D180(v13 + 64);
          else
            sub_2577530(v13 + 64);
          return v7;
        }
        v26 = *(_DWORD *)(v9 + 16);
        v27 = *(_BYTE *)(v9 + 20);
        v38 = v26;
        if ( v26 > 0x40 )
        {
          sub_2585B30(&v37);
          v26 = v38;
          if ( v38 > 0x40 )
          {
            sub_25869C0(&v37, v9 + 8);
LABEL_32:
            sub_25860D0(&v37);
            v30 = a1->m128i_i64[1];
            v31 = v38;
            v32 = v37;
            if ( *(_DWORD *)(v30 + 16) > 0x40u )
            {
              v33 = *(void **)(v30 + 8);
              if ( v33 )
              {
                v36 = v37;
                operator delete[](v33);
                v32 = v36;
              }
            }
            *(_QWORD *)(v30 + 8) = v32;
            *(_DWORD *)(v30 + 16) = v31;
            *(_BYTE *)(v30 + 20) = v27;
            v34 = a1->m128i_i64[1];
            v18 = *(_DWORD *)(v34 + 32);
            v19 = *(_BYTE *)(v34 + 36);
            v38 = v18;
            if ( v18 <= 0x40 )
            {
              v20 = *(_QWORD *)(v34 + 24);
              goto LABEL_20;
            }
            v35 = v34 + 24;
            goto LABEL_38;
          }
          v28 = v37;
        }
        else
        {
          v28 = *(_QWORD *)(v9 + 8);
        }
        v29 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v26) & ~v28;
        if ( !v26 )
          v29 = 0;
        v37 = v29;
        goto LABEL_32;
      }
    }
    sub_828070(a1->m128i_i64[0], a2, 110);
    return 0;
  }
  v15 = a1->m128i_i64[1];
  if ( !*(_BYTE *)v15 )
  {
    v16 = sub_2575D20(a1, v4, v6);
    v17 = v15 + 64;
    if ( *(_QWORD *)(v15 + 64) == v16 )
      sub_257D180(v17);
    else
      sub_2577530(v17);
    return v7;
  }
  v18 = *(_DWORD *)(v15 + 32);
  v19 = *(_BYTE *)(v15 + 36);
  v38 = v18;
  if ( v18 <= 0x40 )
  {
    v20 = *(_QWORD *)(v15 + 24);
LABEL_20:
    v21 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v18) & ~v20;
    if ( !v18 )
      v21 = 0;
    v37 = v21;
    goto LABEL_23;
  }
  v35 = v15 + 24;
LABEL_38:
  sub_2585B30(&v37);
  v18 = v38;
  if ( v38 <= 0x40 )
  {
    v20 = v37;
    goto LABEL_20;
  }
  sub_25869C0(&v37, v35);
LABEL_23:
  sub_25860D0(&v37);
  v22 = a1->m128i_i64[1];
  v23 = v38;
  v24 = v37;
  if ( *(_DWORD *)(v22 + 32) > 0x40u )
  {
    v25 = *(void **)(v22 + 24);
    if ( v25 )
      operator delete[](v25);
  }
  *(_QWORD *)(v22 + 24) = v24;
  *(_DWORD *)(v22 + 32) = v23;
  *(_BYTE *)(v22 + 36) = v19;
  return v7;
}

