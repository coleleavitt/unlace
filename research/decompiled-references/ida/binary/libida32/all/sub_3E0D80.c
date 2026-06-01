unsigned __int64 __fastcall sub_3E0D80(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  void *v4; // rdi
  char v5; // al
  __int64 v6; // rbp
  void *v7; // rdi
  char v9; // [rsp+Fh] [rbp-49h] BYREF
  unsigned int v10; // [rsp+10h] [rbp-48h] BYREF
  char v11; // [rsp+14h] [rbp-44h]
  unsigned __int64 v12; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 2144);
  v12 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 2120) = a2;
  *(_BYTE *)(a1 + 2176) = 0;
  while ( v3 )
  {
    sub_3DBA60(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    operator delete(v4, 0x28u);
  }
  v11 = 0;
  v10 = -1;
  *(_QWORD *)(a1 + 2144) = 0;
  *(_QWORD *)(a1 + 2152) = a1 + 2136;
  *(_QWORD *)(a1 + 2160) = a1 + 2136;
  *(_QWORD *)(a1 + 2168) = 0;
  if ( (unsigned __int8)sub_3DD450((_QWORD *)a1, (__int64)&v10, a2) )
  {
    v5 = v11;
    if ( v11 == 21 )
    {
      *(_BYTE *)(a1 + 2176) |= 1u;
      if ( !(unsigned __int8)sub_3DC190((_QWORD *)a1, (__int64)&v10, a2) )
        goto LABEL_8;
      v5 = v11;
    }
    while ( 1 )
    {
      v9 = v5 & 0x3F;
      sub_3E0C10((_QWORD *)(a1 + 2128), a1 + 2136, &v10, &v9);
      if ( !(unsigned __int8)sub_3DC350((_QWORD *)a1, &v10, a2) )
        break;
      v5 = v11;
    }
  }
LABEL_8:
  v6 = *(_QWORD *)(a1 + 2200);
  while ( v6 )
  {
    sub_3DBA60(*(_QWORD **)(v6 + 24));
    v7 = (void *)v6;
    v6 = *(_QWORD *)(v6 + 16);
    operator delete(v7, 0x28u);
  }
  *(_QWORD *)(a1 + 2200) = 0;
  *(_QWORD *)(a1 + 2208) = a1 + 2192;
  *(_QWORD *)(a1 + 2216) = a1 + 2192;
  *(_QWORD *)(a1 + 2224) = 0;
  if ( (unsigned __int8)sub_3FC530(a1, &v10) )
  {
    do
    {
      v9 = v11 & 0x3F;
      sub_3E0C10((_QWORD *)(a1 + 2184), a1 + 2192, &v10, &v9);
    }
    while ( (unsigned __int8)sub_3FD4E0(a1, &v10, a2) );
  }
  return v12 - __readfsqword(0x28u);
}

