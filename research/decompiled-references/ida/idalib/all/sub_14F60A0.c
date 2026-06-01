__int64 __fastcall sub_14F60A0(__int64 a1, int a2)
{
  int *v2; // r12
  char v3; // bp
  __int16 v5; // dx
  int v6; // r13d
  __int16 v7; // ax
  __int64 v8; // rbp
  __int64 *v9; // rdi
  __int64 *v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  size_t v14; // rax
  unsigned __int16 v15; // bp
  __int64 v16; // r13
  __int64 *v17; // rdi
  __int64 v18; // rax
  unsigned __int8 *v19[17]; // [rsp+0h] [rbp-88h] BYREF

  v2 = (int *)(a1 + 16);
  v3 = 0;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v5 = *(_WORD *)(a1 + 32);
  if ( v5 == 22 )
  {
    sub_146A990(a1);
    v15 = *(_WORD *)(a1 + 32);
    v3 = sub_141A630(v15) | (v15 == 1);
    if ( v3 || (v16 = *(_QWORD *)(a1 + 24)) == 0 )
    {
      sub_1564840(v19, a1, v2, 1760);
      sub_AE9DF0(v19, 0, 5u);
      sub_AEA040((__int64)v19);
      LOWORD(v19[0]) = 23;
      v3 = 0;
      sub_15680D0(a1, v19, 1, 1);
      v5 = *(_WORD *)(a1 + 32);
    }
    else
    {
      v17 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v17, v2);
      v18 = *(_QWORD *)(v16 + 16);
      if ( *(_DWORD *)v18 == 5 && *(_DWORD *)(v18 + 16) == 1935764579 && *(_BYTE *)(v18 + 20) == 115 )
      {
        if ( *(_WORD *)(a1 + 32) == 23 )
        {
          v3 = 1;
          sub_146A990(a1);
        }
        else
        {
          sub_1564840(v19, a1, v2, 14);
          sub_AE9DF0(v19, 23, 4u);
          sub_AEA040((__int64)v19);
          LOWORD(v19[0]) = 23;
          v3 = 1;
          sub_15680D0(a1, v19, 1, 1);
        }
      }
      else
      {
        sub_1564820(v19, a1, *(unsigned int *)(a1 + 40), 1760);
        sub_AE9DF0(v19, v16, 5u);
        sub_AEA040((__int64)v19);
        LOWORD(v19[0]) = 23;
        sub_15680D0(a1, v19, 1, 1);
      }
      v5 = *(_WORD *)(a1 + 32);
    }
  }
  if ( v5 == 3 )
  {
LABEL_12:
    v12 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v12 + 760) )
    {
      *(_BYTE *)(v12 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v12 + 48) + 6LL) = 1;
    }
    v13 = *(_QWORD *)(a1 + 96);
    *(_WORD *)(a1 + 32) = 1;
    sub_171E7F0(*(_QWORD *)(v13 + 656), *(_QWORD *)(v13 + 608));
  }
  else
  {
    v6 = v3 != 0 ? 2 : 0;
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15648A0(a1) )
      {
        LOWORD(v19[0]) = 63;
        sub_15680D0(a1, v19, 1, 0);
        return 0;
      }
      v7 = *(_WORD *)(a1 + 32);
      LODWORD(v8) = 0;
      if ( (unsigned __int16)(v7 - 7) > 0xCu && v7 != 1 )
        v8 = *(_QWORD *)(a1 + 24);
      v9 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v9, v2);
      sub_1A963E0(
        *(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL),
        *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
        a2,
        *(_DWORD *)(a1 + 40),
        0,
        v8,
        0,
        0,
        v6);
      if ( *(_WORD *)(a1 + 32) != 66 )
        break;
      v10 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v10, v2);
      if ( *(_WORD *)(a1 + 32) == 3 )
        goto LABEL_12;
    }
    v14 = j__strlen("@dynamic");
    sub_1569A00(a1, 63, 15, "@dynamic", v14);
  }
  return 0;
}
