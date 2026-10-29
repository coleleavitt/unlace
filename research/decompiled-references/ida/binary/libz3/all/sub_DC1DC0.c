__int64 __fastcall sub_DC1DC0(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  unsigned __int8 *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // si
  char v9; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // eax
  void *v14; // rdi
  __int64 v15; // rsi
  int v16; // eax
  void *v17; // rdi
  int v18; // edx
  void *v19; // [rsp+0h] [rbp-68h]
  void *v20; // [rsp+0h] [rbp-68h]
  int v21; // [rsp+Ch] [rbp-5Ch]
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  __int64 v23; // [rsp+18h] [rbp-50h]
  __int64 v24; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+28h] [rbp-40h]

  if ( a2[1] != 105 )
    return 0;
  result = 0;
  if ( a2[2] == 110 )
  {
    v5 = a2 + 3;
    v22 = 0;
    v23 = 0;
    v24 = 1;
    v25 = 0;
    sub_182CBA0(qword_1C7F2C0, &v24);
    LODWORD(v22) = *(_DWORD *)(a1 + 2112);
    v6 = *(_QWORD *)(a1 + 2120);
    *(_DWORD *)(a1 + 2112) = 0;
    v7 = v23;
    v23 = v6;
    LOBYTE(v6) = *(_BYTE *)(a1 + 2116);
    *(_QWORD *)(a1 + 2120) = v7;
    LOBYTE(v7) = BYTE4(v22) & 1;
    v8 = v6 & 0xFC | BYTE4(v22) & 2;
    v9 = *(_BYTE *)(a1 + 2132);
    BYTE4(v22) = v6 & 1 | BYTE4(v22) & 0xFC | v6 & 2;
    LODWORD(v6) = *(_DWORD *)(a1 + 2128);
    *(_BYTE *)(a1 + 2116) = v8 | v7;
    LODWORD(v24) = v6;
    v10 = *(_QWORD *)(a1 + 2136);
    *(_QWORD *)(a1 + 2136) = v25;
    v25 = v10;
    LOBYTE(v10) = BYTE4(v24);
    *(_DWORD *)(a1 + 2128) = 1;
    *(_BYTE *)(a1 + 2132) = v9 & 0xFC | v10 & 2;
    BYTE4(v24) = v9 & 1 | v9 & 2 | v10 & 0xFC;
    sub_25A130((char *)&v22);
    result = 0;
    if ( (unsigned __int8)(a2[3] - 48) <= 1u )
    {
      v21 = 0;
      do
      {
        v22 = 2;
        v23 = 0;
        v24 = 1;
        v25 = 0;
        sub_182CBA0(qword_1C7F2C0, &v24);
        LODWORD(v24) = 1;
        v14 = qword_1C7F2C0;
        v15 = a1 + 2112;
        BYTE4(v24) &= ~1u;
        if ( (*(_BYTE *)(a1 + 2132) & 1) == 0 && *(_DWORD *)(a1 + 2128) == 1 )
        {
          sub_1831650(qword_1C7F2C0, v15, &v22);
          sub_182CBA0(v14, a1 + 2128);
          *(_BYTE *)(a1 + 2132) &= ~1u;
          *(_DWORD *)(a1 + 2128) = 1;
        }
        else
        {
          sub_1848FF0(qword_1C7F2C0, v15, &v22);
        }
        v20 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v22);
        sub_182CBA0(v20, &v24);
        v16 = (char)*v5;
        v23 = 0;
        v22 = (unsigned int)(v16 - 48);
        v24 = 1;
        v25 = 0;
        sub_182CBA0(qword_1C7F2C0, &v24);
        LODWORD(v24) = 1;
        v17 = qword_1C7F2C0;
        BYTE4(v24) &= ~1u;
        if ( (_DWORD)v22 )
        {
          if ( *(_DWORD *)(a1 + 2112) )
          {
            v11 = a1 + 2112;
            v12 = a1 + 2112;
            if ( (*(_BYTE *)(a1 + 2132) & 1) == 0 && *(_DWORD *)(a1 + 2128) == 1 )
            {
              sub_1831A80(qword_1C7F2C0, v12, &v22, v11);
              sub_182CBA0(v17, a1 + 2128);
              *(_BYTE *)(a1 + 2132) &= ~1u;
              *(_DWORD *)(a1 + 2128) = 1;
            }
            else
            {
              sub_1851D20(qword_1C7F2C0, v12, &v22, v11);
            }
          }
          else
          {
            sub_27B950((__int64)qword_1C7F2C0, a1 + 2112, (int *)&v22);
          }
        }
        else
        {
          sub_27B950((__int64)qword_1C7F2C0, a1 + 2112, (int *)(a1 + 2112));
        }
        ++v5;
        v19 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v22);
        sub_182CBA0(v19, &v24);
        v13 = *v5;
        ++v21;
      }
      while ( (unsigned __int8)(v13 - 48) <= 1u );
      v18 = v21;
      LOBYTE(v18) = v21 == 0;
      LOBYTE(v13) = (_BYTE)v13 != 0;
      return (v18 | v13) ^ 1u;
    }
  }
  return result;
}

