void __fastcall sub_97F9F0(__int64 a1, __int64 a2)
{
  void *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rbp
  void *v8; // rbx
  void *v9; // rbx
  void *v10; // rbx
  void *v11; // rbx
  void *v12; // rbx
  __int64 v13; // rax
  void *v14; // rbx
  __int64 v15; // rax
  void *v16; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-30h]
  void *v18; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-20h]

  v2 = (void *)sub_8CA760(*(__int64 **)(a1 + 192), *(_QWORD *)(a2 + 8));
  v3 = *(unsigned __int8 *)(a2 + 3);
  v18 = v2;
  v4 = (unsigned int)v2;
  v5 = *(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + v3);
  if ( (*(_BYTE *)(v5 + 1) & 6) != 0 )
    v6 = ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8)
                                                                               & 0xFFFFFFFFFFFFFFF0LL)
                                                                   + 8LL)
                                                       & 0xFFFFFFFFFFFFFFF0LL)
                                           + 16LL)
        - 25 < 2)
       + 13;
  else
    v6 = sub_8CA760(*(__int64 **)(a1 + 192), *(_QWORD *)(v5 + 8));
  sub_97E960((__int64)&v16, *(_QWORD *)(a1 + 184), v6, 0);
  v7 = *(_QWORD *)(a1 + 184);
  switch ( v4 )
  {
    case 0LL:
    case 1LL:
      sub_258FBA0(&v18, &v16);
      LOBYTE(v9) = (_BYTE)v18;
      if ( v19 > 0x40 )
        v9 = *(void **)v18;
      *(_BYTE *)sub_A1A4E0(v7, 8) = (_BYTE)v9;
      if ( v19 > 0x40 )
        goto LABEL_8;
      break;
    case 2LL:
    case 3LL:
      sub_258FBA0(&v18, &v16);
      LOWORD(v10) = (_WORD)v18;
      if ( v19 > 0x40 )
        v10 = *(void **)v18;
      *(_WORD *)sub_A1A4E0(v7, 8) = (_WORD)v10;
      if ( v19 > 0x40 )
        goto LABEL_8;
      break;
    case 4LL:
    case 5LL:
      sub_258FBA0(&v18, &v16);
      LODWORD(v8) = (_DWORD)v18;
      if ( v19 > 0x40 )
        v8 = *(void **)v18;
      *(_DWORD *)sub_A1A4E0(v7, 8) = (_DWORD)v8;
      if ( v19 > 0x40 )
        goto LABEL_8;
      break;
    case 6LL:
    case 7LL:
      sub_258FBA0(&v18, &v16);
      v11 = v18;
      if ( v19 > 0x40 )
        v11 = *(void **)v18;
      *(_QWORD *)sub_A1A4E0(v7, 8) = v11;
      if ( v19 > 0x40 )
        goto LABEL_8;
      break;
    case 8LL:
      sub_258FBA0(&v18, &v16);
      v12 = v18;
      if ( v19 > 0x40 )
        v12 = *(void **)v18;
      v13 = sub_A1A4E0(v7, 16);
      *(_DWORD *)(v13 + 8) = 0;
      *(_QWORD *)v13 = v12;
      if ( v19 > 0x40 )
        goto LABEL_8;
      break;
    case 9LL:
      sub_258FBA0(&v18, &v16);
      v15 = sub_A1A4E0(v7, 16);
      *(_DWORD *)(v15 + 8) = 0;
      *(_QWORD *)v15 = 0;
      if ( v19 > 0x40 )
        goto LABEL_8;
      break;
    case 10LL:
      sub_258FBA0(&v18, &v16);
      v14 = v18;
      if ( v19 > 0x40 )
        v14 = *(void **)v18;
      *(_BYTE *)sub_A1A4E0(v7, 8) = v14 != nullptr;
      if ( v19 > 0x40 )
      {
LABEL_8:
        if ( v18 )
          operator delete[](v18);
      }
      break;
  }
  if ( v17 > 0x40 )
  {
    if ( v16 )
      operator delete[](v16);
  }
}

