__int64 __fastcall sub_1839E60(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  _QWORD *v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rcx
  _QWORD *v16; // r8
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  int v19; // edx
  _QWORD *v20; // rax
  __int64 v22; // [rsp+0h] [rbp-68h]

  *(_QWORD *)(a1 + 8) = a4 | a3 & 0xFFFFFFFFFFFFFFF8LL;
  v8 = a3 + 64;
  *(_QWORD *)a1 = a2;
  if ( !a3 )
    v8 = 0;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 544);
  v9 = *(_QWORD *)(a2 + 512);
  *(_QWORD *)(a2 + 512) = 0;
  *(_QWORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 9944);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 2632);
  *(_QWORD *)(a2 + 544) = v8;
  v10 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 9944) = 0;
  *(_DWORD *)(a2 + 80) = v10;
  *(_DWORD *)(a2 + 2632) = *(_DWORD *)(a2 + 3688);
  v11 = *(unsigned __int8 *)(a2 + 4276);
  v12 = *(_QWORD **)(a1 + 8);
  if ( !(_BYTE)v11 )
    goto LABEL_12;
  v13 = *(_QWORD **)(a2 + 4256);
  v14 = *(unsigned int *)(a2 + 4268);
  v15 = v14;
  v16 = &v13[v14];
  if ( v13 != v16 )
  {
    v17 = *(_QWORD **)(a2 + 4256);
    if ( v12 == (_QWORD *)*v13 )
      goto LABEL_11;
    do
    {
      if ( v16 == ++v17 )
        break;
    }
    while ( v12 != (_QWORD *)*v17 );
  }
  if ( (unsigned int)v14 < *(_DWORD *)(a2 + 4264) )
  {
    v14 = (unsigned int)(v14 + 1);
    v11 = 0;
    *(_DWORD *)(a2 + 4268) = v14;
    *v16 = v12;
    v13 = *(_QWORD **)(a2 + 4256);
    v17 = &v13[v15];
  }
  else
  {
LABEL_12:
    v17 = (_QWORD *)sub_2236760(a2 + 4256, v12);
    v13 = *(_QWORD **)(a2 + 4256);
    v11 = v19 ^ 1u;
    if ( !*(_BYTE *)(a2 + 4276) )
    {
      v18 = &v13[*(unsigned int *)(a2 + 4264)];
      goto LABEL_14;
    }
  }
LABEL_11:
  v18 = &v13[*(unsigned int *)(a2 + 4268)];
LABEL_14:
  if ( v17 != v18 && *v17 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v20 = v17 + 1;
    do
    {
      v12 = v20;
      if ( v18 == v20 )
        break;
      ++v20;
    }
    while ( *v12 >= 0xFFFFFFFFFFFFFFFELL );
  }
  *(_BYTE *)(a1 + 56) = v11;
  if ( (_BYTE)v11 )
    return sub_2222F90(a2 + 10056, v12);
  WORD2(v22) = 0;
  LODWORD(v22) = 12;
  return sub_1DBA9B0(a2, v12, v11, v18, v16, v14, v22, *(_DWORD *)(a3 + 24), a3, 0, 0, a4, 0, 0);
}
