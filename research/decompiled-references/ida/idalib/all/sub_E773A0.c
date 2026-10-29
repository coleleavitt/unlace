_QWORD *__fastcall sub_E773A0(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax

  v1 = (_QWORD *)operator new(0xF0u);
  *v1 = &off_2B4BA80;
  v2 = v1 + 3;
  v1[1] = a1;
  v1[2] = 1;
  do
  {
    *v2 = -4096;
    v2 += 2;
  }
  while ( v1 + 11 != v2 );
  v3 = v1 + 12;
  for ( v1[11] = 1; v1 + 20 != v3; v3 += 2 )
    *v3 = -4096;
  v4 = v1 + 21;
  for ( v1[20] = 1; v1 + 29 != v4; v4 += 2 )
    *v4 = -4096;
  v1[29] = 0;
  v5 = v1[1];
  v6 = *(_QWORD *)(v5 + 2320);
  if ( (*(_BYTE *)(v6 + 60) & 0x10) != 0 && (v7 = *(_QWORD *)(v5 + 17456)) != 0 )
  {
    v8 = sub_A64930(v5, v7);
    v9 = v1[29];
    v1[29] = v8;
    if ( v9 )
LABEL_10:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else if ( (*(_BYTE *)(v6 + 96) & 0x30) != 0 )
  {
    v11 = sub_A62AC0(v5);
    v12 = sub_E3A9F0(v1[1], v11, 0);
    v9 = v1[29];
    v1[29] = v12;
    if ( v9 )
      goto LABEL_10;
  }
  return v1;
}
