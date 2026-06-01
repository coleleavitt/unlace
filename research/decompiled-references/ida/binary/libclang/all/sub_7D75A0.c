unsigned __int64 __fastcall sub_7D75A0(unsigned __int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  signed __int64 v5; // rdx
  __int64 v6; // rax
  char v7; // al
  unsigned __int64 v8; // rdx
  _QWORD *v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // eax
  unsigned __int64 v16; // [rsp+8h] [rbp-20h]

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 48);
    v3 = sub_798D40(v2);
    if ( (unsigned int)sub_77B6A0(v2, v3, v4) )
      return a1;
    v5 = *(_QWORD *)(a1 + 64);
    if ( (v5 & 1) != 0 )
      return 0;
    v6 = v5 >> 1;
    if ( (v5 & 2) != 0 )
      return 0;
    if ( (v5 & 1) != 0 )
    {
      v7 = v5 & 0xFE;
      goto LABEL_6;
    }
    if ( (v5 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
      return 0;
    v10 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v6 & 1) != 0 )
    {
      v11 = v10[2275];
      if ( v11 )
      {
        v12 = v10[274];
        v10[284] += 24LL;
        v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v10[275] >= v13 + 24 && v12 )
          v10[274] = v13 + 24;
        else
          v13 = sub_7CF9B0((__int64)(v10 + 274), 24, 3);
        *(_QWORD *)v13 = v11;
        *(_DWORD *)(v13 + 8) = 0;
        *(_QWORD *)(v13 + 16) = a1;
        *(_QWORD *)(a1 + 64) = v13 | 5;
        v8 = v13 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_7:
        if ( !v8 )
          return 0;
        v14 = *(_QWORD *)v8;
        v15 = *(_DWORD *)(*(_QWORD *)v8 + 12LL);
        if ( *(_DWORD *)(v8 + 8) != v15 )
        {
          *(_DWORD *)(v8 + 8) = v15;
          v16 = v8;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v14 + 144LL))(v14, a1);
          v8 = v16;
        }
        a1 = *(_QWORD *)(v8 + 16);
        goto LABEL_18;
      }
      v5 = a1 & 0xFFFFFFFFFFFFFFFALL | 1;
      *(_QWORD *)(a1 + 64) = v5;
      v7 = a1 & 0xFA;
      if ( (a1 & 0xFFFFFFFFFFFFFFFALL) == 0 )
        return 0;
LABEL_6:
      v8 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v7 & 4) != 0 )
        goto LABEL_7;
      a1 = v8;
LABEL_18:
      if ( !a1 )
        return 0;
    }
    else
    {
      a1 = (unsigned __int64)v10;
    }
  }
}

