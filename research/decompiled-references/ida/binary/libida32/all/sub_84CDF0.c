void __fastcall sub_84CDF0(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // r12
  char v5; // r13
  int v6; // r14d
  _QWORD *v7; // rax
  char v8; // cl
  unsigned __int8 v9; // r14
  _QWORD *v10; // rax
  char v11; // cl
  __int16 v12; // di
  char v13; // si
  unsigned __int8 v14; // bp
  _BYTE *v15; // rax
  _BYTE *v16; // rdx
  _BYTE *v17; // rax
  char *v18; // rax

  if ( *(_DWORD *)a1 )
    return;
  v4 = a3;
  v5 = byte_239ED40[a4] + 16;
  if ( a2 == 70 )
  {
    v14 = *((_BYTE *)&unk_239EDD0 + a3);
    if ( v14 > 3u )
    {
      v17 = sub_8441E0(a1, 7);
      if ( !v17 )
        return;
      *v17 = 6;
      v16 = v17 + 5;
      *(_QWORD *)(a1 + 120) += 6LL;
      v17[1] = 15;
      v17[2] = v5;
      v17[3] = -62;
      v17[4] = (v14 > 7u) + 64;
    }
    else
    {
      v15 = sub_8441E0(a1, 6);
      if ( !v15 )
        return;
      *v15 = 5;
      v16 = v15 + 4;
      *(_QWORD *)(a1 + 120) += 5LL;
      v15[1] = 15;
      v15[2] = v5;
      v15[3] = -62;
    }
    *v16 = 8;
    v16[1] = byte_239EDB0[v4] | 0xD0;
    return;
  }
  if ( (a2 & 0xC0) != 0 )
  {
    v6 = 15;
LABEL_5:
    v7 = sub_8441E0(a1, 8);
    if ( v7 )
    {
      *(_BYTE *)v7 = 7;
      v8 = byte_239EDB0[v6];
      *(_QWORD *)(a1 + 120) += 7LL;
      *((_BYTE *)v7 + 1) = 15;
      *((_BYTE *)v7 + 2) = v5;
      *((_WORD *)v7 + 2) = 3912;
      *((_BYTE *)v7 + 3) = v8 | 0xC0;
      *((_BYTE *)v7 + 6) = -74;
      *((_BYTE *)v7 + 7) = v8 | (8 * v8) | 0xC0;
      if ( v6 == 15 )
      {
        if ( (a2 & 0xC0) != 0 )
        {
          sub_849F80((unsigned int *)a1, 0x246u, v4, 0, v4, 0, 0xFu, 0);
        }
        else
        {
          *(_DWORD *)(a1 + 144) = (_BYTE)a2 != 32;
          v18 = sub_844340(a1, 1u, 15, 0, v4, 0);
          if ( v18 )
            *v18 = -119;
        }
      }
    }
    return;
  }
  v9 = *((_BYTE *)&unk_239EDD0 + a3);
  if ( v9 <= 3u )
  {
    v6 = a3;
    goto LABEL_5;
  }
  v10 = sub_8441E0(a1, 9);
  if ( v10 )
  {
    *(_BYTE *)v10 = 8;
    v11 = byte_239EDB0[(int)v4];
    *(_QWORD *)(a1 + 120) += 8LL;
    if ( v9 <= 7u )
    {
      v12 = 3904;
      v13 = 72;
    }
    else
    {
      v12 = 3905;
      v13 = 77;
    }
    *((_BYTE *)v10 + 4) = v11 | 0xC0;
    *((_WORD *)v10 + 3) = -18929;
    *(_WORD *)((char *)v10 + 1) = v12;
    *((_BYTE *)v10 + 3) = v5;
    *((_BYTE *)v10 + 5) = v13;
    *((_BYTE *)v10 + 8) = v11 | (8 * v11) | 0xC0;
  }
}

