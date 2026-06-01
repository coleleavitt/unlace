__int64 __fastcall sub_BF9D30(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, int a5, int a6)
{
  __int16 v8; // ax
  char v9; // al
  void *v10; // rcx
  char v11; // r13
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  void *v17; // rcx
  __int64 v18; // r13
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  bool v22; // cc
  void *v23; // [rsp+0h] [rbp-88h] BYREF
  __int64 v24; // [rsp+8h] [rbp-80h]
  char v25; // [rsp+10h] [rbp-78h]
  void *v26; // [rsp+20h] [rbp-68h] BYREF
  void *v27; // [rsp+28h] [rbp-60h]
  int v28; // [rsp+30h] [rbp-58h]
  char v29; // [rsp+34h] [rbp-54h]

  v8 = *(_WORD *)a1 & 0x1FF;
  switch ( v8 )
  {
    case '4':
      v9 = sub_F41620(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      v10 = *(void **)(a1 + 16);
      v11 = v9;
      v12 = *(unsigned int *)(a1 + 24);
      v13 = (unsigned __int64)(v12 + 63) >> 6;
      if ( v13 > 1 )
      {
        sub_21E18D0(&v23, v12, v13, v10);
        v10 = v23;
        LODWORD(v12) = v24;
      }
      else
      {
        LODWORD(v24) = *(_DWORD *)(a1 + 24);
        if ( (unsigned int)v12 > 0x40 )
        {
          sub_21E1730(&v23, v10, 0);
          v10 = v23;
          LODWORD(v12) = v24;
        }
        else
        {
          v23 = v10;
        }
      }
      BYTE4(v26) &= ~1u;
      LODWORD(v24) = 0;
      LODWORD(v26) = 2;
      v27 = v10;
      v28 = v12;
      v29 = v11;
      goto LABEL_6;
    case 's':
      v15 = *(_QWORD *)a1;
      BYTE4(v24) = 1;
      LODWORD(v24) = 1;
      v23 = (void *)((v15 >> 19) & 1);
LABEL_16:
      sub_B72A30((__int64)&v26, (__int64 *)&v23);
LABEL_6:
      sub_A2BFE0(a2 + 16, (__int64)&v26);
      if ( (unsigned int)v26 > 1 )
        sub_A2BBA0((int *)&v26);
      if ( (unsigned int)v24 > 0x40 )
      {
        if ( v23 )
          operator delete[](v23);
      }
LABEL_11:
      *a4 = 1;
      return 1;
    case '>':
      v16 = sub_21D4FB0(*(_BYTE *)(a1 + 2) >> 3);
      v17 = *(void **)(a1 + 16);
      v18 = v16;
      v19 = *(unsigned int *)(a1 + 24);
      v20 = (unsigned __int64)(v19 + 63) >> 6;
      if ( v20 > 1 )
      {
        sub_21E18D0(&v26, v19, v20, v17);
      }
      else
      {
        LODWORD(v27) = *(_DWORD *)(a1 + 24);
        if ( (unsigned int)v19 > 0x40 )
          sub_21E1730(&v26, v17, 0);
        else
          v26 = v17;
      }
      if ( v18 == sub_21D5390() )
        sub_21DC060(&v23, v18, &v26);
      else
        sub_21DBA90(&v23, v18, &v26);
      if ( (unsigned int)v27 > 0x40 && v26 )
        operator delete[](v26);
      sub_BF4E50((__int64)&v26, &v23);
      sub_A2BFE0(a2 + 16, (__int64)&v26);
      if ( (unsigned int)v26 > 1 )
        sub_A2BBA0((int *)&v26);
      sub_971860(&v23);
      goto LABEL_11;
    case 'N':
      sub_BD30A0((__int64)&v23, a3, (void *)*(unsigned int *)(a1 + 16), *(_QWORD *)(a1 + 8));
      goto LABEL_16;
    case '=':
      if ( ((*(_QWORD *)a1 >> 16) & 0x1E0) != 0 )
      {
        sub_BD3DC0((__int64)&v26, a1, a3, (int)a4, a5, a6, (int)v23, v24, v25);
        if ( (_DWORD)v26 != 7 )
        {
          sub_A2BFE0(a2 + 16, (__int64)&v26);
          v22 = (unsigned int)v26 <= 1;
          *a4 = 1;
          if ( !v22 )
            sub_A2BBA0((int *)&v26);
          return 1;
        }
        sub_A2BBA0((int *)&v26);
      }
      return sub_BF9D30(*(_QWORD *)(a1 + 16), a2, a3, a4);
  }
  result = 0;
  if ( (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    *a4 = 0;
    return 1;
  }
  return result;
}

