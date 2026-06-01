unsigned __int64 __fastcall sub_8C8320(_QWORD *a1, unsigned int a2, char a3)
{
  __int64 v4; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ecx

  v4 = 8LL * a2;
  if ( !a3 )
    v4 = 0;
  v6 = v4 + 16LL * a2 + 40;
  v7 = a1[274];
  a1[284] += v6;
  v8 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v6 + v8 && v7 )
    a1[274] = v6 + v8;
  else
    v8 = sub_8C7D70((__int64)(a1 + 274), v6, 3);
  *(_WORD *)v8 = *(_WORD *)v8 & 0xFE00 | 0x27;
  if ( byte_4AD234C )
    sub_AC4570(39);
  v9 = *(_DWORD *)(v8 + 16);
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 20) = 0;
  v10 = a2 & 0x7FFFFFFF | v9 & 0x80000000;
  *(_DWORD *)(v8 + 16) = v10;
  *(_BYTE *)(v8 + 19) = (a3 << 7) | HIBYTE(v10) & 0x7F;
  return v8;
}

