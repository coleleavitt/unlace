__int64 __fastcall sub_B7D3B0(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // r13
  int v6; // edx
  _QWORD *v7; // r13
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r15
  void *v13; // rdi
  char v14; // al
  char v15; // dl
  _DWORD *v17; // rax
  int v18; // eax
  int v19; // edx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  char v22; // al
  _QWORD *v23; // r15
  _QWORD *v24; // r13
  int v25; // esi
  int v26; // edx
  char v27; // cl
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // r13
  void *v31; // [rsp+8h] [rbp-A0h]
  void *v32; // [rsp+10h] [rbp-98h] BYREF
  __int64 v33; // [rsp+18h] [rbp-90h]
  __int64 v34; // [rsp+20h] [rbp-88h] BYREF
  __int64 v35; // [rsp+28h] [rbp-80h]
  char v36[32]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v37; // [rsp+50h] [rbp-58h] BYREF
  __int64 v38; // [rsp+58h] [rbp-50h]
  __int64 v39; // [rsp+60h] [rbp-48h] BYREF
  __int64 v40; // [rsp+68h] [rbp-40h]

  v32 = nullptr;
  v33 = 0;
  v34 = 1;
  v35 = 0;
  v5 = sub_1666AE0(a2 + 872, a3, &v32, &v37);
  if ( !v5 )
  {
    if ( *(_WORD *)(a3 + 4) )
      goto LABEL_3;
    v17 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
    if ( !v17 )
    {
      if ( !*(_DWORD *)(a3 + 24) )
      {
LABEL_17:
        sub_B75C30(a3);
        v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 392LL))(a2, a3);
        sub_B7BFB0(a1, a2, v18);
        goto LABEL_12;
      }
LABEL_3:
      sub_1872CE0("");
      sub_1873130(114, 894);
    }
    if ( *v17 != 5 )
    {
      if ( !*(_DWORD *)(a3 + 24) && *v17 == -1 )
        goto LABEL_17;
      goto LABEL_3;
    }
    v19 = v17[1];
    switch ( v19 )
    {
      case 7:
        if ( *(_DWORD *)(a3 + 24) == 2 )
        {
          v30 = *(_QWORD *)(a3 + 32);
          sub_B7D3B0(&v37, a2, *(_QWORD *)(a3 + 40));
          sub_B7D3B0(v36, a2, v30);
          sub_3EBB80(a1, (__int64)v36, (__int64)&v37);
          sub_25A130(v36);
          sub_25A130((char *)&v37);
          goto LABEL_12;
        }
        break;
      case 6:
        v31 = qword_1C7F2C0;
        sub_182CEF0(qword_1C7F2C0, &v32);
        sub_182CBA0(v31, &v34);
        v20 = *(unsigned int *)(a3 + 24);
        v21 = (_QWORD *)(a3 + 32);
        LODWORD(v34) = 1;
        v22 = BYTE4(v34) & 0xFE;
        v20 *= 8;
        BYTE4(v34) &= ~1u;
        v23 = (_QWORD *)(a3 + 32 + v20);
        if ( v20 )
        {
          v24 = v21;
          do
          {
            sub_B7D3B0(&v37, a2, *v24);
            sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v32, (__int64)&v37, (__int64)&v32);
            ++v24;
            sub_25A130((char *)&v37);
          }
          while ( v23 != v24 );
          v22 = BYTE4(v34);
          v25 = v34;
          v5 = BYTE4(v34) & 1;
        }
        else
        {
          v25 = 1;
        }
        v26 = (int)v32;
        v27 = BYTE4(v32);
        *(_DWORD *)(a1 + 16) = v25;
        *(_DWORD *)a1 = v26;
        v14 = v5 & 3 | v22 & 2;
        *(_BYTE *)(a1 + 4) = v27 & 3 | *(_BYTE *)(a1 + 4) & 0xFC;
        v28 = v33;
        v33 = 0;
        *(_QWORD *)(a1 + 8) = v28;
        v15 = *(_BYTE *)(a1 + 20) & 0xFC;
        goto LABEL_11;
      case 9:
        v37 = 1;
        v38 = 0;
        v39 = 1;
        v40 = 0;
        sub_182CBA0(qword_1C7F2C0, &v39);
        v6 = v37;
        v7 = (_QWORD *)(a3 + 32);
        LODWORD(v37) = (_DWORD)v32;
        LODWORD(v32) = v6;
        v8 = v38;
        v38 = v33;
        v33 = v8;
        v9 = BYTE4(v37) & 1;
        LOBYTE(v8) = BYTE4(v32) & 0xFC | BYTE4(v37) & 2;
        BYTE4(v37) = BYTE4(v32) & 1 | BYTE4(v37) & 0xFC | BYTE4(v32) & 2;
        BYTE4(v32) = v9 | v8;
        LODWORD(v39) = v34;
        v10 = v35;
        v35 = v40;
        v40 = v10;
        LODWORD(v34) = 1;
        LOBYTE(v8) = BYTE4(v34) & 0xFC | BYTE4(v39) & 2;
        BYTE4(v39) = BYTE4(v34) & 1 | BYTE4(v34) & 2 | BYTE4(v39) & 0xFC;
        BYTE4(v34) = v8;
        sub_25A130((char *)&v37);
        v11 = 8LL * *(unsigned int *)(a3 + 24);
        v12 = (_QWORD *)(a3 + 32 + v11);
        if ( v11 )
        {
          do
          {
            sub_B7D3B0(&v37, a2, *v7);
            v13 = qword_1C7F2C0;
            if ( (v34 & 0x100000000LL) != 0 || (_DWORD)v34 != 1 || (v39 & 0x100000000LL) != 0 || (_DWORD)v39 != 1 )
            {
              sub_1848FF0(qword_1C7F2C0, &v32, &v37);
            }
            else
            {
              sub_1831650(qword_1C7F2C0, &v32, &v37);
              sub_182CBA0(v13, &v34);
              BYTE4(v34) &= ~1u;
              LODWORD(v34) = 1;
            }
            ++v7;
            sub_25A130((char *)&v37);
          }
          while ( v12 != v7 );
        }
        goto LABEL_10;
    }
    v29 = *(_DWORD *)(a3 + 24);
    if ( v19 == 8 )
    {
      if ( v29 == 1 )
      {
        sub_B7D3B0(&v37, a2, *(_QWORD *)(a3 + 32));
        sub_3EBD70(a1, (__int64)&v37);
        sub_25A130((char *)&v37);
        goto LABEL_12;
      }
    }
    else if ( v17[1] == 18 && v29 == 1 )
    {
      sub_B7D3B0(a1, a2, *(_QWORD *)(a3 + 32));
      goto LABEL_12;
    }
    goto LABEL_3;
  }
LABEL_10:
  *(_DWORD *)a1 = (_DWORD)v32;
  *(_BYTE *)(a1 + 4) = BYTE4(v32) & 3 | *(_BYTE *)(a1 + 4) & 0xFC;
  *(_QWORD *)(a1 + 8) = v33;
  v33 = 0;
  *(_DWORD *)(a1 + 16) = v34;
  v14 = *(_BYTE *)(a1 + 20) & 0xFC;
  v15 = BYTE4(v34) & 3;
LABEL_11:
  *(_BYTE *)(a1 + 20) = v15 | v14;
  *(_QWORD *)(a1 + 24) = v35;
  v35 = 0;
LABEL_12:
  sub_25A130((char *)&v32);
  return a1;
}

