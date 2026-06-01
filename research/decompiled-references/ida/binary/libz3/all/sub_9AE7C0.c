_BOOL8 __fastcall sub_9AE7C0(__int64 a1, unsigned int a2, __int64 a3)
{
  void *v4; // rbx
  void *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  void *v10; // r12
  void *v12; // r12
  bool v13; // [rsp+8h] [rbp-A0h]
  void *v14; // [rsp+8h] [rbp-A0h]
  void *v15; // [rsp+8h] [rbp-A0h]
  void *v16; // [rsp+8h] [rbp-A0h]
  __int64 i; // [rsp+18h] [rbp-90h]
  __int64 v19; // [rsp+20h] [rbp-88h]
  bool v20; // [rsp+28h] [rbp-80h]
  void *v21; // [rsp+28h] [rbp-80h]
  void *v22; // [rsp+28h] [rbp-80h]
  void *v23; // [rsp+28h] [rbp-80h]
  _BYTE v24[16]; // [rsp+30h] [rbp-78h] BYREF
  int v25; // [rsp+40h] [rbp-68h] BYREF
  char v26; // [rsp+44h] [rbp-64h]
  _BYTE v27[16]; // [rsp+50h] [rbp-58h] BYREF
  int v28; // [rsp+60h] [rbp-48h] BYREF
  char v29; // [rsp+64h] [rbp-44h]

  v4 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a3);
  sub_182CBA0(v4, a3 + 16);
  *(_BYTE *)(a3 + 20) &= ~1u;
  v5 = qword_1C7F2C0;
  *(_DWORD *)(a3 + 16) = 1;
  v19 = a3 + 32;
  sub_182CEF0(v5, a3 + 32);
  sub_182CBA0(v5, a3 + 48);
  v6 = *(_QWORD *)(a1 + 656);
  *(_BYTE *)(a3 + 52) &= ~1u;
  *(_DWORD *)(a3 + 48) = 1;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 24LL * (*(_DWORD *)(v6 + 4LL * a2) & 0xFFFFFFF));
  if ( v7 )
  {
    v20 = 0;
    for ( i = v7 + 40LL * *(unsigned int *)(v7 - 4); i != v7; v20 = v13 )
    {
      while ( 1 )
      {
        v8 = *(unsigned int *)(v7 + 32);
        v13 = (_DWORD)v8 != -1 && a2 != (_DWORD)v8;
        if ( v13 )
          break;
LABEL_4:
        v7 += 40;
        if ( i == v7 )
          goto LABEL_14;
      }
      v9 = v8 << 6;
      if ( *(_DWORD *)(a1 + 912) >= *(_DWORD *)(*(_QWORD *)(a1 + 920) + 4 * v8) )
      {
        sub_91F480((__int64)v24, *(_QWORD *)(a1 + 664) + v9);
        if ( (v26 & 1) != 0 || v25 != 1 || (*(_BYTE *)(v7 + 20) & 1) != 0 || *(_DWORD *)(v7 + 16) != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, v24, v7);
        }
        else
        {
          v16 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, v24, v7);
          sub_182CBA0(v16, &v25);
          v26 &= ~1u;
          v25 = 1;
        }
        if ( (v29 & 1) != 0 || v28 != 1 || (*(_BYTE *)(v7 + 20) & 1) != 0 || *(_DWORD *)(v7 + 16) != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, v27, v7);
        }
        else
        {
          v15 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, v27, v7);
          sub_182CBA0(v15, &v28);
          v29 &= ~1u;
          v28 = 1;
        }
        sub_2FC4A0((__int64)qword_1C7F2C0, a3, (__int64)v24, a3);
        sub_2FC4A0((__int64)qword_1C7F2C0, v19, (__int64)v27, v19);
        v14 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v27);
        sub_182CBA0(v14, &v28);
        v12 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v24);
        sub_182CBA0(v12, &v25);
        goto LABEL_4;
      }
      sub_91F480((__int64)v24, *(_QWORD *)(a1 + 672) + v9);
      if ( (v26 & 1) != 0 || v25 != 1 || (*(_BYTE *)(v7 + 20) & 1) != 0 || *(_DWORD *)(v7 + 16) != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, v24, v7);
      }
      else
      {
        v22 = qword_1C7F2C0;
        sub_1831650(qword_1C7F2C0, v24, v7);
        sub_182CBA0(v22, &v25);
        v26 &= ~1u;
        v25 = 1;
      }
      if ( (v29 & 1) != 0 || v28 != 1 || (*(_BYTE *)(v7 + 20) & 1) != 0 || *(_DWORD *)(v7 + 16) != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, v27, v7);
      }
      else
      {
        v23 = qword_1C7F2C0;
        sub_1831650(qword_1C7F2C0, v27, v7);
        sub_182CBA0(v23, &v28);
        v29 &= ~1u;
        v28 = 1;
      }
      sub_2FC4A0((__int64)qword_1C7F2C0, a3, (__int64)v24, a3);
      sub_2FC4A0((__int64)qword_1C7F2C0, v19, (__int64)v27, v19);
      v7 += 40;
      v21 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v27);
      sub_182CBA0(v21, &v28);
      v10 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v24);
      sub_182CBA0(v10, &v25);
    }
  }
  else
  {
    v20 = 0;
  }
LABEL_14:
  sub_1831620(qword_1C7F2C0, a3);
  sub_1831620(qword_1C7F2C0, v19);
  return v20;
}

