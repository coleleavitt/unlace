unsigned __int64 __fastcall sub_8C4440(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r14
  unsigned __int8 v12; // bl
  char v13; // bp
  __int64 v14; // rcx
  char v15; // al
  unsigned __int8 v16; // al
  __int64 v18; // rdi
  __int64 v19; // rax
  bool v20; // [rsp+3h] [rbp-45h]
  __int64 v22; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+8h] [rbp-40h]

  v20 = a4 != 0;
  v8 = 8LL * (a4 != 0) + 32;
  v9 = a1[274];
  a1[284] += v8;
  v10 = v8 + ((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= v10 && v9 )
  {
    a1[274] = v10;
    v11 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v11 = sub_8C1090((__int64)(a1 + 274), v8, 3);
  }
  v12 = (*(_BYTE *)(sub_77D590(a3) + 1) >> 3) & 7;
  v13 = (*(_BYTE *)(sub_77D590(a3) + 1) >> 1) & 3;
  if ( (*(_BYTE *)(a3 + 97) & 6) == 2 )
  {
    v14 = *(_QWORD *)(a3 + 48);
    v18 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v18 + 16) - 42 <= 1
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 <= 1
      && (v23 = *(_QWORD *)(a3 + 48), v19 = sub_B0D320(v18), v14 = v23, (v18 = v19) != 0) )
    {
      while ( (*(_BYTE *)(v18 + 18) & 0x10) != 0 )
      {
        while ( 1 )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(v18 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v18 + 16) - 42 <= 1 )
            break;
          v18 = sub_B0D320(v18);
          if ( (*(_BYTE *)(v18 + 18) & 0x10) == 0 )
            goto LABEL_15;
        }
      }
LABEL_15:
      v14 = *(_QWORD *)(v18 + 32);
    }
  }
  else
  {
    v14 = *(_QWORD *)(sub_77D590(a3) + 8);
  }
  *(_WORD *)v11 = *(_WORD *)v11 & 0xFE00 | 0x71;
  if ( byte_4AD234C )
  {
    v22 = v14;
    sub_AC4570(113);
    v14 = v22;
  }
  v15 = *(_BYTE *)(v11 + 1);
  *(_QWORD *)(v11 + 8) = v14;
  *(_QWORD *)(v11 + 16) = a3;
  *(_QWORD *)(v11 + 24) = a5;
  *(_BYTE *)(v11 + 1) = (2 * (v13 & 3)) | v15 & 0xF9;
  *(_DWORD *)(v11 + 4) = a2;
  *(_DWORD *)v11 = *(_DWORD *)v11 & 0xFFF007FF | (v20 << 19) | (v12 << 11);
  if ( a4 )
    *(_QWORD *)(v11 + 32) = a4;
  v16 = sub_76D020(v11);
  *(_BYTE *)(v11 + 1) = (v16 << 6) | *(_BYTE *)(v11 + 1) & 0x3F;
  *(_BYTE *)(v11 + 2) = *(_BYTE *)(v11 + 2) & 0xF8 | (v16 >> 2) & 7;
  return v11;
}

