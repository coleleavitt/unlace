__int64 __fastcall sub_B63BD0(__int64 a1)
{
  unsigned int v1; // r15d
  char v2; // dl
  char v3; // r9
  char v4; // r8
  char v5; // si
  char v6; // al
  int v7; // edx
  int v8; // ebp
  unsigned int i; // r14d
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  char v14; // dl
  char v15; // al
  int v16; // edi
  int v17; // esi
  int v18; // ecx
  int v19; // edx
  _DWORD *v21; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v22; // [rsp+8h] [rbp-50h]
  _DWORD *v23; // [rsp+10h] [rbp-48h]

  v1 = 8;
  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v3 = 32 * ((v2 & 8) != 0);
  v4 = 16 * ((v2 & 0x10) != 0);
  v5 = 2 * ((v2 & 2) != 0);
  v6 = v5 | ((v2 & 4) != 0 ? 0xC : 0) | v4 | v3 | v2 & 1;
  v7 = v5 & 0x10 | v4 & 0x10;
  if ( v5 & 0x10 | v4 & 0x10 | v3 & 0x10 )
  {
    v1 = 24;
    v7 = 16;
  }
  v8 = *(_DWORD *)(a1 + 28);
  if ( (v6 & 8) == 0 )
    v1 = v7;
  if ( (v6 & 4) != 0 )
    v1 |= 4u;
  if ( (v6 & 2) != 0 )
    v1 |= 2u;
  if ( v8 )
  {
    for ( i = 0; i != v8; ++i )
    {
      v11 = sub_C03D50(a1, i);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 56);
        v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v12 & 4) != 0 )
          v13 = (_QWORD *)v13[4];
        if ( v13 )
        {
          v14 = *(_BYTE *)(*(_QWORD *)(*v13 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
          v15 = (2 * ((v14 & 2) != 0))
              | ((v14 & 4) != 0 ? 0xC : 0)
              | (16 * ((v14 & 0x10) != 0))
              | (32 * ((v14 & 8) != 0))
              | v14 & 1;
          v16 = (2 * ((v14 & 2) != 0)) & 0x10 | (16 * ((v14 & 0x10) != 0)) & 0x10;
          if ( (2 * ((v14 & 2) != 0)) & 0x10 | (16 * ((v14 & 0x10) != 0)) & 0x10 )
            v16 = 16;
          v17 = (2 * ((v14 & 2) != 0)) & 8 | ((v14 & 4) != 0 ? 8 : 0);
          if ( (2 * ((v14 & 2) != 0)) & 8 | ((v14 & 4) != 0 ? 8 : 0) )
            v17 = 8;
          v18 = (2 * ((v14 & 2) != 0)) & 4 | ((v14 & 4) != 0 ? 4 : 0);
          if ( (2 * ((v14 & 2) != 0)) & 4 | ((v14 & 4) != 0 ? 4 : 0) )
            v18 = 4;
          v19 = (2 * ((v14 & 2) != 0)) & 2;
          if ( (v15 & 2) != 0 )
            v19 = 2;
          v1 |= v19 | v18 | v17 | v16 | v15 & 1;
        }
      }
      sub_C03D60(&v21, a1, i);
      if ( v21 )
        v1 |= (*v21 >> 14) & 0x1F;
      if ( v22 )
        v1 |= (*v22 >> 14) & 0x1F;
      if ( v23 )
        v1 |= (*v23 >> 14) & 0x1F;
    }
  }
  return v1;
}
