__int64 __fastcall sub_D8B430(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rbp
  void *v10; // rbx
  void *v12; // rbx
  __int64 v13; // rax
  void *v14; // rbx
  void *v15; // rbx
  void *v16; // rbx
  void *v17; // rbx
  void *v18; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+8h] [rbp-30h]
  void *v20; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-20h]

  sub_CE6180(*(_QWORD *)(a1 + 184), *(_QWORD *)(a2 + 8), a3, a4, a5);
  v7 = 13;
  v8 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  if ( (*(_BYTE *)(v8 + 1) & 6) == 0 )
    v7 = sub_CE6180(*(_QWORD *)(a1 + 184), *(_QWORD *)(v8 + 8), 13, v5, v6);
  sub_D8B1A0((__int64)&v18, *(_QWORD *)(a1 + 176), v7);
  v9 = *(_QWORD *)(a1 + 176);
  switch ( v9 )
  {
    case 0LL:
    case 1LL:
      sub_220AC30(&v20, &v18);
      LOBYTE(v14) = (_BYTE)v20;
      if ( v21 > 0x40 )
        v14 = *(void **)v20;
      *(_BYTE *)sub_E216C0(v9, 8) = (_BYTE)v14;
      if ( v21 > 0x40 )
        goto LABEL_7;
      break;
    case 2LL:
    case 3LL:
      sub_220AC30(&v20, &v18);
      LOWORD(v16) = (_WORD)v20;
      if ( v21 > 0x40 )
        v16 = *(void **)v20;
      *(_WORD *)sub_E216C0(v9, 8) = (_WORD)v16;
      if ( v21 > 0x40 )
        goto LABEL_7;
      break;
    case 4LL:
    case 5LL:
      sub_220AC30(&v20, &v18);
      LODWORD(v10) = (_DWORD)v20;
      if ( v21 > 0x40 )
        v10 = *(void **)v20;
      *(_DWORD *)sub_E216C0(v9, 8) = (_DWORD)v10;
      if ( v21 > 0x40 )
        goto LABEL_7;
      break;
    case 6LL:
    case 7LL:
      sub_220AC30(&v20, &v18);
      v15 = v20;
      if ( v21 > 0x40 )
        v15 = *(void **)v20;
      *(_QWORD *)sub_E216C0(v9, 8) = v15;
      if ( v21 > 0x40 )
        goto LABEL_7;
      break;
    case 8LL:
    case 9LL:
      sub_220AC30(&v20, &v18);
      v12 = v20;
      if ( v21 > 0x40 )
        v12 = *(void **)v20;
      v13 = sub_E216C0(v9, 16);
      *(_QWORD *)v13 = v12;
      *(_DWORD *)(v13 + 8) = 64;
      if ( v21 > 0x40 )
        goto LABEL_7;
      break;
    case 10LL:
      sub_220AC30(&v20, &v18);
      v17 = v20;
      if ( v21 > 0x40 )
        v17 = *(void **)v20;
      *(_BYTE *)sub_E216C0(v9, 8) = v17 != nullptr;
      if ( v21 > 0x40 )
      {
LABEL_7:
        if ( v20 )
          operator delete[](v20);
      }
      break;
  }
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  return 1;
}
