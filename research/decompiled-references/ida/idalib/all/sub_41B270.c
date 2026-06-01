__int64 __fastcall sub_41B270(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  _QWORD *v5; // rdx
  void *v6; // rdi
  __int64 v7; // rbp
  _QWORD *v8; // r13
  void *v9; // rdi
  bool v10; // cc
  int v11; // eax
  signed int v12; // edx
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  void *v15; // rdi
  __int64 v16; // rbp
  _QWORD *v17; // r12
  void *v18; // rdi

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1600LL);
  if ( *(_QWORD *)(v2 + 24) > 1u )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 1600LL);
    v4 = 1;
    while ( 1 )
    {
      if ( (v4 & 0x8000u) != 0 && (v4 & 0x7FFF) != 0 && (unsigned __int64)(v4 & 0x7FFF) < *(_QWORD *)(v3 + 24) )
      {
        v5 = (_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL * (v4 & 0x7FFF));
        if ( *v5 )
          *v5 = 0;
      }
      if ( (unsigned __int64)++v4 >= *(_QWORD *)(v2 + 24) )
        break;
      v3 = *(_QWORD *)(*(_QWORD *)a1 + 1600LL);
    }
  }
  v6 = *(void **)(v2 + 16);
  if ( v6 )
  {
    *(_QWORD *)(v2 + 24) = 0;
    qfree(v6);
    *(_QWORD *)(v2 + 16) = 0;
    *(_QWORD *)(v2 + 32) = 0;
  }
  v7 = *(_QWORD *)(v2 + 56);
  while ( v7 )
  {
    v8 = (_QWORD *)v7;
    sub_41ABB0(*(_QWORD **)(v7 + 24));
    v9 = *(void **)(v7 + 32);
    v7 = *(_QWORD *)(v7 + 16);
    if ( v9 )
    {
      v8[5] = 0;
      qfree(v9);
    }
    operator delete(v8, 0x40u);
  }
  v10 = *(_QWORD *)(v2 + 136) <= 1u;
  *(_BYTE *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 64) = v2 + 48;
  *(_QWORD *)(v2 + 72) = v2 + 48;
  v11 = 1;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  if ( !v10 )
  {
    do
    {
      v12 = v11 & 0xFFFFFFBF;
      if ( v11 >= 0 && (v11 & 0xFFFFFFBF) != 0 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)a1 + 1600LL);
        if ( (unsigned __int64)v12 < *(_QWORD *)(v13 + 136) )
        {
          v14 = (_QWORD *)(*(_QWORD *)(v13 + 128) + 16LL * v12);
          if ( *v14 )
            *v14 = 0;
        }
      }
      ++v11;
    }
    while ( (unsigned __int64)v11 < *(_QWORD *)(v2 + 136) );
  }
  v15 = *(void **)(v2 + 128);
  if ( v15 )
  {
    *(_QWORD *)(v2 + 136) = 0;
    qfree(v15);
    *(_QWORD *)(v2 + 128) = 0;
    *(_QWORD *)(v2 + 144) = 0;
  }
  v16 = *(_QWORD *)(v2 + 168);
  while ( v16 )
  {
    v17 = (_QWORD *)v16;
    sub_41ABB0(*(_QWORD **)(v16 + 24));
    v18 = *(void **)(v16 + 32);
    v16 = *(_QWORD *)(v16 + 16);
    if ( v18 )
    {
      v17[5] = 0;
      qfree(v18);
    }
    operator delete(v17, 0x40u);
  }
  *(_BYTE *)(v2 + 208) = 0;
  *(_QWORD *)(v2 + 168) = 0;
  *(_QWORD *)(v2 + 176) = v2 + 160;
  *(_QWORD *)(v2 + 184) = v2 + 160;
  *(_QWORD *)(v2 + 192) = 0;
  return v2 + 160;
}
