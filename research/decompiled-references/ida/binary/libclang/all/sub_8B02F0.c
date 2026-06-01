__int64 __fastcall sub_8B02F0(__int64 *a1, __int64 a2)
{
  char v3; // al
  __int64 *v4; // rbp
  void *v5; // rax
  unsigned int v6; // r12d
  unsigned __int8 v8; // r13
  unsigned int v9; // ebx
  unsigned int v10; // eax
  int v11; // edx
  char v12; // r15
  void *v13; // rsi
  __int64 v14; // rdi
  _DWORD *v15; // rsi
  unsigned int v16; // eax
  void *v17; // rsi
  __int64 v18; // rdi
  char v19; // [rsp+Fh] [rbp-B9h] BYREF
  void *v20; // [rsp+10h] [rbp-B8h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-B0h]
  char v22; // [rsp+1Ch] [rbp-ACh]
  unsigned int v23; // [rsp+20h] [rbp-A8h]
  void *v24; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-90h]
  char v26; // [rsp+3Ch] [rbp-8Ch]
  unsigned int v27; // [rsp+40h] [rbp-88h]
  void *v28; // [rsp+50h] [rbp-78h] BYREF
  void *v29; // [rsp+58h] [rbp-70h]
  unsigned int v30; // [rsp+60h] [rbp-68h]
  char v31; // [rsp+64h] [rbp-64h]
  unsigned int v32; // [rsp+68h] [rbp-60h]

  v3 = *(_BYTE *)(a2 + 2) >> 3;
  if ( v3 == 7 )
  {
    v6 = sub_8ADEA0(a1, *(_QWORD *)(a2 + 16));
    if ( !(_BYTE)v6 )
      return 0;
    v15 = (_DWORD *)a1[1];
    if ( *v15 != 4 )
    {
      v6 = 0;
      sub_826D30(*a1, a2, 110);
      return v6;
    }
    sub_2572AA0(&v20, v15 + 2, &v19);
    if ( v19 && !(unsigned __int8)sub_82C2F0(*a1, a2, (__int64)&v20, *(_QWORD *)(a2 + 8)) )
    {
      v6 = 0;
LABEL_19:
      if ( v21 > 0x40 && v20 )
        operator delete[](v20);
      return v6;
    }
    v16 = v21;
    v25 = v21;
    if ( v21 > 0x40 )
    {
      sub_2585B30(&v24);
      v16 = v25;
      v17 = v24;
    }
    else
    {
      v17 = v20;
      v24 = v20;
    }
    v29 = v17;
    v18 = a1[1];
    v30 = v16;
    BYTE4(v28) &= ~1u;
    v26 = v22;
    v27 = v23;
    v25 = 0;
    v31 = v22;
    v32 = v23;
    LODWORD(v28) = 4;
    sub_6A01B0(v18, (__int64)&v28);
    if ( (unsigned int)v28 > 1 )
      goto LABEL_15;
    goto LABEL_16;
  }
  if ( v3 == 9 )
  {
    v6 = sub_8571E0(*(_QWORD *)(a2 + 16), &v19, *a1);
    if ( !(_BYTE)v6 )
      return v6;
    v8 = v19 ^ 1;
    v9 = sub_70B7E0(*(_QWORD *)(*a1 + 16), *(_QWORD *)(a2 + 8));
    v10 = (unsigned __int16)v9;
    v25 = (unsigned __int16)v9;
    v11 = HIBYTE(v9) & 0x20;
    v12 = ((unsigned __int8)v11 >> 5) ^ 1;
    if ( (unsigned __int16)v9 > 0x40u )
    {
      sub_2585A50(&v24, v8, (v9 & 0x20000000) != 0);
      v10 = v25;
      LODWORD(v29) = v25;
      if ( v25 <= 0x40 )
      {
        v21 = v25;
        v22 = v12;
        v20 = v24;
        v23 = v9;
      }
      else
      {
        sub_2585B30(&v28);
        v10 = (unsigned int)v29;
        v22 = v12;
        v23 = v9;
        v21 = (unsigned int)v29;
        v20 = v28;
        if ( v25 > 0x40 && v24 )
        {
          operator delete[](v24);
          v10 = v21;
        }
        v25 = v10;
        if ( v10 > 0x40 )
        {
          sub_2585B30(&v24);
          v10 = v25;
          v13 = v24;
LABEL_14:
          v29 = v13;
          v14 = a1[1];
          BYTE4(v28) &= ~1u;
          v26 = v22;
          v27 = v23;
          v30 = v10;
          v25 = 0;
          v31 = v22;
          v32 = v23;
          LODWORD(v28) = 4;
          sub_6A01B0(v14, (__int64)&v28);
          if ( (unsigned int)v28 > 1 )
LABEL_15:
            sub_69F740((__int64)&v28);
LABEL_16:
          if ( v25 > 0x40 && v24 )
            operator delete[](v24);
          goto LABEL_19;
        }
      }
    }
    else
    {
      if ( (_WORD)v9 )
      {
        v21 = (unsigned __int16)v9;
        v20 = (void *)(v8 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v9));
      }
      else
      {
        v21 = 0;
        v20 = nullptr;
      }
      v22 = ((unsigned __int8)v11 >> 5) ^ 1;
      v23 = v9;
    }
    v13 = v20;
    v24 = v20;
    goto LABEL_14;
  }
  if ( v3 != 6 )
  {
    v4 = (__int64 *)sub_A2E130(*a1, a2, 110, 0);
    v5 = (void *)sub_AC7B80(a2);
    if ( v4 )
    {
      v28 = v5;
      LOBYTE(v29) = 1;
      sub_839C90(v4, (__int64 *)&v28);
    }
    return 0;
  }
  return sub_8ADEA0(a1, *(_QWORD *)(a2 + 16));
}

