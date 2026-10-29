__int64 __fastcall sub_DC2170(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  __int64 v4; // r13
  char *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // si
  __int64 v9; // rax
  void *v10; // rdi
  int v11; // eax
  int v12; // edx
  void *v13; // rdi
  int v14; // eax
  void *v15; // rdi
  int v16; // eax
  unsigned int v17; // eax
  unsigned int i; // [rsp+0h] [rbp-64h]
  void *v19; // [rsp+4h] [rbp-60h]
  void *v20; // [rsp+4h] [rbp-60h]
  __int64 v21; // [rsp+Ch] [rbp-58h] BYREF
  __int64 v22; // [rsp+14h] [rbp-50h]
  __int64 v23; // [rsp+1Ch] [rbp-48h] BYREF
  __int64 v24; // [rsp+24h] [rbp-40h]

  result = 0;
  if ( a2[1] == 101 && a2[2] == 120 )
  {
    v4 = a1 + 2112;
    v5 = a2 + 3;
    v21 = 0;
    v22 = 0;
    v23 = 1;
    v24 = 0;
    sub_182CBA0(qword_1C7F2C0, &v23);
    LODWORD(v21) = *(_DWORD *)(a1 + 2112);
    v6 = *(_QWORD *)(a1 + 2120);
    *(_DWORD *)(a1 + 2112) = 0;
    v7 = v22;
    v22 = v6;
    LOBYTE(v6) = *(_BYTE *)(a1 + 2116);
    *(_QWORD *)(a1 + 2120) = v7;
    LOBYTE(v7) = v6 & 0xFC;
    v8 = *(_BYTE *)(a1 + 2132);
    BYTE4(v21) = v6 & 3;
    LODWORD(v6) = *(_DWORD *)(a1 + 2128);
    *(_BYTE *)(a1 + 2116) = v7;
    LODWORD(v23) = v6;
    v9 = *(_QWORD *)(a1 + 2136);
    *(_QWORD *)(a1 + 2136) = v24;
    v24 = v9;
    LOBYTE(v9) = BYTE4(v23);
    *(_DWORD *)(a1 + 2128) = 1;
    *(_BYTE *)(a1 + 2132) = v8 & 0xFC | v9 & 2;
    BYTE4(v23) = v8 & 1 | v8 & 2 | v9 & 0xFC;
    sub_25A130((char *)&v21);
    for ( i = 0; ; ++i )
    {
      v12 = (unsigned __int8)*v5;
      if ( (unsigned __int8)(v12 - 48) <= 9u )
        break;
      if ( (unsigned __int8)(v12 - 97) <= 5u )
      {
        v21 = 16;
        v22 = 0;
        v23 = 1;
        v24 = 0;
        sub_182CBA0(qword_1C7F2C0, &v23);
        LODWORD(v23) = 1;
        v15 = qword_1C7F2C0;
        BYTE4(v23) &= ~1u;
        if ( (*(_BYTE *)(a1 + 2132) & 1) == 0 && *(_DWORD *)(a1 + 2128) == 1 )
        {
          sub_1831650(qword_1C7F2C0, v4, &v21);
          sub_182CBA0(v15, a1 + 2128);
          *(_BYTE *)(a1 + 2132) &= ~1u;
          *(_DWORD *)(a1 + 2128) = 1;
        }
        else
        {
          sub_1848FF0(qword_1C7F2C0, v4, &v21);
        }
        sub_25A130((char *)&v21);
        v16 = *v5;
        v22 = 0;
        v23 = 1;
        v24 = 0;
        v21 = (unsigned int)(v16 - 87);
        sub_182CBA0(qword_1C7F2C0, &v23);
        BYTE4(v23) &= ~1u;
        LODWORD(v23) = 1;
        sub_2FC4A0((__int64)qword_1C7F2C0, v4, (__int64)&v21, v4);
        goto LABEL_18;
      }
      if ( (unsigned __int8)(v12 - 65) > 5u )
      {
        v17 = i;
        LOBYTE(v17) = i != 0;
        LOBYTE(v12) = (_BYTE)v12 == 0;
        return v12 & v17;
      }
      v21 = 16;
      v22 = 0;
      v23 = 1;
      v24 = 0;
      sub_182CBA0(qword_1C7F2C0, &v23);
      LODWORD(v23) = 1;
      v10 = qword_1C7F2C0;
      BYTE4(v23) &= ~1u;
      if ( (*(_BYTE *)(a1 + 2132) & 1) == 0 && *(_DWORD *)(a1 + 2128) == 1 )
      {
        sub_1831650(qword_1C7F2C0, v4, &v21);
        sub_182CBA0(v10, a1 + 2128);
        *(_BYTE *)(a1 + 2132) &= ~1u;
        *(_DWORD *)(a1 + 2128) = 1;
      }
      else
      {
        sub_1848FF0(qword_1C7F2C0, v4, &v21);
      }
      v19 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v21);
      sub_182CBA0(v19, &v23);
      v11 = *v5;
      v22 = 0;
      v23 = 1;
      v24 = 0;
      v21 = (unsigned int)(v11 - 55);
      sub_182CBA0(qword_1C7F2C0, &v23);
      BYTE4(v23) &= ~1u;
      LODWORD(v23) = 1;
      sub_2FC4A0((__int64)qword_1C7F2C0, v4, (__int64)&v21, v4);
      v20 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v21);
      sub_182CBA0(v20, &v23);
LABEL_12:
      ++v5;
    }
    v21 = 16;
    v22 = 0;
    v23 = 1;
    v24 = 0;
    sub_182CBA0(qword_1C7F2C0, &v23);
    LODWORD(v23) = 1;
    v13 = qword_1C7F2C0;
    BYTE4(v23) &= ~1u;
    if ( (*(_BYTE *)(a1 + 2132) & 1) == 0 && *(_DWORD *)(a1 + 2128) == 1 )
    {
      sub_1831650(qword_1C7F2C0, v4, &v21);
      sub_182CBA0(v13, a1 + 2128);
      *(_BYTE *)(a1 + 2132) &= ~1u;
      *(_DWORD *)(a1 + 2128) = 1;
    }
    else
    {
      sub_1848FF0(qword_1C7F2C0, v4, &v21);
    }
    sub_25A130((char *)&v21);
    v14 = *v5;
    v22 = 0;
    v23 = 1;
    v24 = 0;
    v21 = (unsigned int)(v14 - 48);
    sub_182CBA0(qword_1C7F2C0, &v23);
    BYTE4(v23) &= ~1u;
    LODWORD(v23) = 1;
    sub_2FC4A0((__int64)qword_1C7F2C0, v4, (__int64)&v21, v4);
LABEL_18:
    sub_25A130((char *)&v21);
    goto LABEL_12;
  }
  return result;
}

