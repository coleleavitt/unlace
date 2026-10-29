void __fastcall sub_9CBCE0(__int64 a1, __int64 a2, std::ostream *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  const char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r15
  char *v12; // rax
  _BYTE *v13; // r12
  void *v14; // r14
  char *v15; // rax
  size_t v16; // r12
  _BYTE *v17; // rax
  __int64 v18; // rdx
  void *v19; // [rsp+0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+8h] [rbp-70h]
  __int128 v21; // [rsp+10h] [rbp-68h] BYREF
  __int64 v22; // [rsp+20h] [rbp-58h]
  char v23; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+2Ch] [rbp-4Ch]
  __int64 v25; // [rsp+30h] [rbp-48h]

  v5 = *(_QWORD *)(a2 + 16);
  if ( !*(_BYTE *)(a1 + 2) )
    goto LABEL_5;
  if ( *(_BYTE *)v5 == 11 )
  {
    v6 = *(_QWORD *)(v5 + 16);
    if ( *(_BYTE *)v6 == 5 && !*(_QWORD *)(v5 + 24) && *(_WORD *)(v6 + 2) == 2 )
    {
      v7 = *(_QWORD *)(a2 + 64);
      if ( (*(_BYTE *)(v7 + 40) & 7) != 0 )
      {
        if ( !*(_BYTE *)(a2 + 56) )
        {
          v14 = (void *)(a2 + 40);
          *(_QWORD *)(a2 + 24) = a2 + 40;
          v11 = a2 + 24;
          v15 = (char *)j__strlen(&byte_22F0C30);
          v16 = (size_t)v15;
          v19 = v15;
          if ( (unsigned __int64)v15 > 0xF )
          {
            v14 = (void *)sub_9C8230((__int64 *)&v19, 0);
            *(_QWORD *)(a2 + 24) = v14;
            *(_QWORD *)(a2 + 40) = v19;
          }
          else
          {
            if ( v15 == (_BYTE *)&dword_0 + 1 )
            {
              *(_BYTE *)(a2 + 40) = 0;
LABEL_26:
              v17 = v19;
              v18 = *(_QWORD *)(a2 + 24);
              *(_QWORD *)(a2 + 32) = v19;
              v17[v18] = 0;
LABEL_30:
              *(_BYTE *)(a2 + 56) = 1;
              v23 = 0;
              v21 = 0;
              LODWORD(v20) = 0;
              v24 = 1;
              v22 = 0;
              v19 = &off_2BEBE68;
              v25 = v11;
              sub_227B8B0(&v19, 0, 0, 0);
              sub_B72CF0(*(_QWORD *)(a2 + 64), &v19);
              v19 = &off_2BEBE68;
              sub_227B7A0(&v19);
              goto LABEL_9;
            }
            if ( !v15 )
              goto LABEL_26;
          }
          memcpy(v14, &byte_22F0C30, v16);
          goto LABEL_26;
        }
LABEL_9:
        v8 = *(const char **)(a2 + 24);
        v9 = *(_QWORD *)(a2 + 32);
LABEL_10:
        std::ostream::write(a3, v8, v9);
        return;
      }
LABEL_19:
      v8 = sub_995750(v7);
      goto LABEL_10;
    }
LABEL_5:
    sub_9CB080(a1, v5, a3, 1u, 1);
    if ( *(_BYTE *)(a1 + 2) && (*(_BYTE *)(a2 + 2) & 1) != 0 )
    {
      std::operator<<<std::char_traits<char>>(a3, "->");
      v7 = *(_QWORD *)(a2 + 64);
      if ( (*(_BYTE *)(v7 + 40) & 7) == 0 )
        goto LABEL_19;
    }
    else
    {
      std::operator<<<std::char_traits<char>>(a3, ".");
      v7 = *(_QWORD *)(a2 + 64);
      if ( (*(_BYTE *)(v7 + 40) & 7) == 0 )
        goto LABEL_19;
    }
    if ( *(_BYTE *)(a2 + 56) )
      goto LABEL_9;
    v10 = a2 + 40;
    *(_QWORD *)(a2 + 24) = a2 + 40;
    v11 = a2 + 24;
    v12 = (char *)j__strlen(&byte_22F0C30);
    v13 = v12;
    v19 = v12;
    if ( (unsigned __int64)v12 > 0xF )
    {
      v10 = sub_9C8230((__int64 *)&v19, 0);
      *(_QWORD *)(a2 + 24) = v10;
      *(_QWORD *)(a2 + 40) = v19;
    }
    else
    {
      if ( v12 == (_BYTE *)&dword_0 + 1 )
      {
        *(_BYTE *)(a2 + 40) = 0;
LABEL_29:
        *(_QWORD *)(a2 + 32) = v13;
        v13[v10] = 0;
        goto LABEL_30;
      }
      if ( !v12 )
        goto LABEL_29;
    }
    memcpy((void *)v10, &byte_22F0C30, (size_t)v13);
    v13 = v19;
    v10 = *(_QWORD *)(a2 + 24);
    goto LABEL_29;
  }
  if ( *(_BYTE *)v5 != 2 )
    goto LABEL_5;
  std::operator<<<std::char_traits<char>>(a3, "&");
  sub_B76FC0(&v19, *(_QWORD *)(a2 + 64));
  std::__ostream_insert<char,std::char_traits<char>>(a3, v19, v20);
  if ( v19 != &v21 )
    operator delete(v19);
}
