__int64 __fastcall sub_EF9570(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // rdi
  unsigned int v4; // ebx
  __int64 result; // rax
  _DWORD *v6; // rsi
  char v7; // cl
  int v8; // ebx
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // ebx
  __int64 v12; // rbp
  __int64 v13; // r12
  unsigned int v14; // ebx
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  char v18; // dl
  char v19; // al
  int v20; // ebx
  int v21; // ecx
  int v22; // edx
  char v23; // al
  char v24; // cl
  char v25; // dl
  char v26; // bl
  char v27; // al
  int v28; // ebx
  int v29; // ecx
  int v30; // edx
  _BYTE v31[32]; // [rsp+8h] [rbp-20h] BYREF

  switch ( *(_DWORD *)a1 & 0x7FFFFFFF )
  {
    case 0:
    case 9:
      v12 = *(_QWORD *)(a1 + 8);
      v13 = v12 + 24LL * *(unsigned int *)(a1 + 4);
      if ( v13 == v12 )
        goto LABEL_5;
      v14 = 0;
      do
      {
        v15 = v12;
        v12 += 24;
        v14 |= sub_EF9570(v15);
      }
      while ( v13 != v12 );
      return v14;
    case 1:
      v16 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v17 = *(_QWORD *)v16;
      v18 = *(_BYTE *)(*(_QWORD *)v16 + 17LL);
      v19 = (2 * ((v18 & 2) != 0))
          | ((v18 & 4) != 0 ? 0xC : 0)
          | (16 * ((v18 & 0x10) != 0))
          | (32 * ((v18 & 8) != 0))
          | v18 & 1;
      v20 = (2 * ((v18 & 2) != 0)) & 0x10 | (16 * ((v18 & 0x10) != 0)) & 0x10;
      if ( (2 * ((v18 & 2) != 0)) & 0x10 | (16 * ((v18 & 0x10) != 0)) & 0x10 )
        v20 = 8;
      v21 = (2 * ((v18 & 2) != 0)) & 0xC | ((v18 & 4) != 0 ? 0xC : 0);
      if ( (2 * ((v18 & 2) != 0)) & 0xC | ((v18 & 4) != 0 ? 0xC : 0) )
        v21 = 4;
      v22 = (2 * ((v18 & 2) != 0)) & 2;
      if ( (v19 & 2) != 0 )
        v22 = 2;
      v4 = v22 | v21 | v19 & 1 | v20;
      if ( *(_BYTE *)(v17 + 16) == 38 )
        v4 |= 4u;
      goto LABEL_6;
    case 2:
      v2 = *(_QWORD *)(a1 + 16);
      if ( !sub_B6A370(v2) || (v3 = (_QWORD *)sub_B69600(v2)) == nullptr )
      {
        v3 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) & 4) != 0 )
          v3 = (_QWORD *)*v3;
      }
      v4 = 6;
      if ( !(unsigned __int8)sub_B6A440((unsigned __int64)v3) )
        goto LABEL_5;
      goto LABEL_6;
    case 3:
    case 4:
    case 5:
LABEL_5:
      v4 = 0;
LABEL_6:
      result = v4;
      break;
    case 6:
      sub_EFED50(v31, *(_QWORD *)(a1 + 8));
      v23 = sub_EFF530(v31);
      v24 = v23 & 8;
      if ( (v23 & 8) != 0 )
        v24 = 16;
      v25 = v23 & 4;
      if ( (v23 & 4) != 0 )
        v25 = 12;
      v26 = v23 & 2;
      if ( (v23 & 2) != 0 )
        v26 = 2;
      v27 = v26 | v25 | v24 | v23 & 1;
      v28 = v27 & 0x10;
      if ( (v27 & 0x10) != 0 )
        v28 = 8;
      v29 = v27 & 0xC;
      if ( (v27 & 0xC) != 0 )
        v29 = 4;
      v30 = v27 & 2;
      if ( (v27 & 2) != 0 )
        v30 = 2;
      result = v30 | v29 | v27 & 1 | (unsigned int)v28;
      break;
    case 7:
      result = 6;
      break;
    case 8:
      v6 = *(_DWORD **)(a1 + 8);
      v7 = (2 * (((*v6 >> 14) & 2) != 0))
         | (4 * (((*v6 >> 14) & 4) != 0))
         | (8 * (((*v6 >> 14) & 8) != 0))
         | ((*v6 & 0x4000) != 0)
         | (16 * (((*v6 >> 14) & 0x10) != 0));
      v8 = v7 & 0x10;
      if ( (v7 & 0x10) != 0 )
        v8 = 8;
      v9 = (2 * (((*v6 >> 14) & 2) != 0)) & 0xC
         | (4 * (((*v6 >> 14) & 4) != 0)) & 0xC
         | (8 * (((*v6 >> 14) & 8) != 0)) & 0xC
         | ((*v6 & 0x4000) != 0) & 0xC;
      if ( (2 * (((*v6 >> 14) & 2) != 0)) & 0xC
         | (4 * (((*v6 >> 14) & 4) != 0)) & 0xC
         | (8 * (((*v6 >> 14) & 8) != 0)) & 0xC
         | ((*v6 & 0x4000) != 0) & 0xC )
      {
        v9 = 4;
      }
      v10 = (2 * (((*v6 >> 14) & 2) != 0)) & 2 | ((*v6 & 0x4000) != 0) & 2;
      if ( (2 * (((*v6 >> 14) & 2) != 0)) & 2 | ((*v6 & 0x4000) != 0) & 2 )
        v10 = 2;
      v11 = v10 | v9 | ((*v6 & 0x4000) != 0) | v8;
      if ( (*(_WORD *)v6 & 0x1FF) == 0x16 )
        v11 |= 6u;
      result = v11;
      break;
  }
  return result;
}

