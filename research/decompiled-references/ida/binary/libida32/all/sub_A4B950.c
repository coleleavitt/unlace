void __fastcall sub_A4B950(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // eax
  unsigned __int64 v8; // rcx
  char *v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  char *v12; // rsi
  void *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  _BYTE *v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rax
  char v19; // si
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  char v22; // al
  unsigned __int64 v23; // rsi
  char v24; // al
  unsigned __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // r12
  unsigned int v28; // edx
  char v29; // [rsp+24h] [rbp-64h] BYREF
  _BYTE v30[11]; // [rsp+25h] [rbp-63h] BYREF
  void *v31; // [rsp+30h] [rbp-58h] BYREF
  size_t v32; // [rsp+38h] [rbp-50h]
  _BYTE v33[72]; // [rsp+40h] [rbp-48h] BYREF

  sub_A4B8D0(a2, 98);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 2320) + 368LL) > 3u )
  {
    if ( (*(_BYTE *)(a4 + 28) & 0x7F) == 0x32 )
    {
      v10 = sub_B84E90(a4);
      v11 = sub_EB41A0(a1, v10, a4);
    }
    else
    {
      v23 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
        v23 = *(_QWORD *)v23;
      v24 = *(_BYTE *)(v23 + 8);
      v25 = v23 - 64;
      v26 = a4;
      if ( (v24 & 0x7Fu) - 58 >= 4 )
        v25 = 0;
      v27 = sub_EBA840(a1, v25);
      if ( *(char *)(a4 + 29) < 0 )
        v26 = sub_B4E9E0(a4);
      v28 = *(_DWORD *)(v26 + 68);
      if ( (v28 & 0xFFFFFFF0) == 0 )
      {
        sub_B5AD70(v26);
        v28 = *(_DWORD *)(v26 + 68);
      }
      v11 = *(_QWORD *)(*(_QWORD *)(v27 + 48) + 8LL * ((v28 >> 4) - 1));
    }
    if ( v11 )
    {
      v12 = v30;
      while ( 1 )
      {
        *--v12 = v11 % 0xA + 48;
        if ( v11 <= 9 )
          break;
        v11 /= 0xAu;
      }
    }
    else
    {
      v29 = 48;
      v12 = &v29;
    }
    v31 = v33;
    sub_A33C70(&v31, v12, (__int64)v30);
    v13 = v31;
    sub_9CA820(a2, v31, v32);
    v16 = v33;
    if ( v31 != v33 )
      operator delete(v31);
    v17 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v17 + 16) == 47 )
    {
      v18 = sub_F3D1D0(*v17, v13, v14, v16, v15);
      v19 = 105;
      if ( (*(_BYTE *)(v18 + 77) & 2) != 0 )
      {
        v20 = sub_6D3020(v18);
        v19 = sub_A45330(
                a1,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
      }
      sub_A4B8D0(a2, v19);
    }
    else
    {
      v22 = sub_A45330(a1, *v17);
      sub_A4B8D0(a2, v22);
    }
    v21 = sub_B54430(a4);
    v8 = v21;
    if ( !v21 )
      goto LABEL_3;
LABEL_18:
    v9 = v30;
    while ( 1 )
    {
      *--v9 = v8 % 0xA + 48;
      if ( v8 <= 9 )
        break;
      v8 /= 0xAu;
    }
    goto LABEL_4;
  }
  v7 = sub_B54430(a4);
  v8 = v7;
  if ( v7 )
    goto LABEL_18;
LABEL_3:
  v29 = 48;
  v9 = &v29;
LABEL_4:
  v31 = v33;
  sub_A33C70(&v31, v9, (__int64)v30);
  sub_9CA820(a2, v31, v32);
  if ( v31 != v33 )
    operator delete(v31);
}

