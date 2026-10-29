void __fastcall sub_20B4250(char *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // r13
  char *v5; // rbp
  int v6; // ebx
  char *v7; // rdi
  char *v8; // rax
  _QWORD *v9; // r11
  _QWORD *v10; // r12
  _QWORD *v11; // rsi
  _QWORD *v12; // r11
  char v13; // cl
  unsigned __int64 v15; // rax
  char v16; // dl
  char v17; // dl
  __int64 v18; // rax
  __int16 v19; // dx
  char *v20; // rdi
  __int64 v21; // rdi

  v13 = *a1;
  *((_DWORD *)a1 + 2) = 0;
  *a1 = (a3 != 0) | v13 & 0xFC | (2 * (a2 > 0xF));
  if ( (a3 != 0) & 2 | (2 * (a2 > 0xF)) & 2 )
  {
    v16 = 2;
    LOBYTE(v15) = 2;
  }
  else
  {
    v15 = 2LL * (a3 != 0);
    if ( v15 < a2 )
      LOBYTE(v15) = a2;
    v16 = v15 & 0xF;
  }
  v17 = (4 * v16) | *a1 & 0xC3;
  *a1 = v17;
  if ( (v17 & 2) != 0 )
  {
    *(_WORD *)a1 &= 0xFC3Fu;
    v21 = (__int64)(a1 - 16);
    *((_QWORD *)a1 - 2) = a1;
    *((_DWORD *)a1 - 2) = 0;
    *((_DWORD *)a1 - 1) = 0;
    v3 = *(unsigned int *)(v21 + 8);
    if ( a2 == v3 )
    {
      nullsub_1552();
    }
    else
    {
      v4 = 8 * a2;
      v5 = a1 - 16;
      v6 = a2;
      if ( a2 < v3 )
      {
        v9 = (_QWORD *)(*(_QWORD *)v21 + 8 * v3);
        v10 = (_QWORD *)(v4 + *(_QWORD *)v21);
        if ( v9 != v10 )
        {
          while ( 1 )
          {
            v11 = (_QWORD *)*--v9;
            if ( *v9 )
              break;
LABEL_21:
            if ( v10 == v9 )
              goto LABEL_16;
          }
          while ( 1 )
          {
            sub_20A0850((__int64)v9, v11);
            if ( v10 == v12 )
              break;
            v9 = v12 - 1;
            v11 = (_QWORD *)*v9;
            if ( !*v9 )
              goto LABEL_21;
          }
        }
      }
      else
      {
        if ( a2 > *(unsigned int *)(v21 + 12) )
        {
          sub_20B3EC0(v21, a2);
          v3 = *(unsigned int *)(v21 + 8);
        }
        v7 = (char *)(*(_QWORD *)v21 + 8 * v3);
        v8 = (char *)(v4 + *(_QWORD *)v5);
        if ( v7 != v8 )
          memset(v7, 0, 8 * ((unsigned __int64)(v8 - 8 - v7) >> 3) + 8);
      }
LABEL_16:
      *((_DWORD *)v5 + 2) = v6;
    }
  }
  else
  {
    v18 = 8 * (v15 & 0xF);
    v19 = *(_WORD *)a1 & 0xFC3F;
    v20 = &a1[-v18];
    *(_WORD *)a1 = v19 | ((a2 & 0xF) << 6);
    if ( a1 != &a1[-v18] )
      memset(v20, 0, 8 * ((unsigned __int64)(v18 - 8) >> 3) + 8);
  }
}
