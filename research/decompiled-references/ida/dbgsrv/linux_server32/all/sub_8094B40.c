/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8094B40
// Address: 0x08094B40

//----- (08094B40) --------------------------------------------------------
unsigned int __cdecl sub_8094B40(int a1, char *s)
{
  size_t v2; // esi
  int v3; // eax
  unsigned int *v4; // ecx
  int *v5; // esi
  int *v6; // edi
  int **v7; // edx
  int *v8; // ebp
  int *v9; // ecx
  int v10; // ebp
  int v11; // edx
  void *v12; // eax
  int v13; // eax
  unsigned int result; // eax
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // [esp-14h] [ebp-58h]
  int v19; // [esp-10h] [ebp-54h]
  int v20; // [esp-Ch] [ebp-50h]
  int *v21; // [esp+0h] [ebp-44h]
  int v22; // [esp+0h] [ebp-44h]
  int v23; // [esp+4h] [ebp-40h]
  unsigned int v24; // [esp+4h] [ebp-40h]
  unsigned int *v25; // [esp+8h] [ebp-3Ch]
  int v26; // [esp+10h] [ebp-34h]
  _DWORD v27[2]; // [esp+14h] [ebp-30h] BYREF
  char v28; // [esp+1Eh] [ebp-26h] BYREF
  char v29; // [esp+1Fh] [ebp-25h] BYREF
  unsigned int *v30; // [esp+20h] [ebp-24h] BYREF
  unsigned int v31; // [esp+24h] [ebp-20h]

  v31 = __readgsdword(0x14u);
  if ( *(_BYTE *)(a1 + 404) )
  {
    if ( !byte_811F8A1 )
    {
      if ( v31 == __readgsdword(0x14u) )
        sub_80CFF40(303, v18, v19, v20);
      sub_80D7AB0();
    }
    BUG();
  }
  v21 = *(int **)(a1 + 372);
  if ( !s )
    JUMPOUT(0x804F52A);
  v2 = strlen(s);
  if ( !v2 )
  {
    v30 = &std::string::_Rep::_S_empty_rep_storage[3];
    goto LABEL_8;
  }
  v3 = std::string::_Rep::_S_create(v2, 0, &v28);
  v23 = v3;
  v4 = (unsigned int *)(v3 + 12);
  if ( v2 == 1 )
  {
    *(_BYTE *)(v3 + 12) = *s;
  }
  else
  {
    v25 = (unsigned int *)(v3 + 12);
    memcpy((void *)(v3 + 12), s, v2);
    v4 = v25;
  }
  if ( (unsigned int *)v23 == std::string::_Rep::_S_empty_rep_storage )
  {
    v30 = v4;
LABEL_8:
    sub_8093FD0(v27, v21, (const void **)&v30);
    v5 = (int *)v27[0];
    goto LABEL_9;
  }
  *(_DWORD *)v23 = v2;
  *(_DWORD *)(v23 + 8) = 0;
  *(_BYTE *)(v23 + v2 + 12) = 0;
  v30 = v4;
  sub_8093FD0(v27, v21, (const void **)&v30);
  v5 = (int *)v27[0];
  if ( &_pthread_key_create )
  {
    v16 = _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 8), 0xFFFFFFFF);
  }
  else
  {
    v16 = *(_DWORD *)(v23 + 8);
    *(_DWORD *)(v23 + 8) = v16 - 1;
  }
  if ( v16 <= 0 )
    std::string::_Rep::_M_destroy(v23, &v29);
LABEL_9:
  if ( v5 )
  {
    v6 = *(int **)(a1 + 372);
    v24 = v6[1];
    v26 = *v6;
    v22 = v5[6] % v24;
    v7 = (int **)(*v6 + 4 * v22);
    v8 = *v7;
    do
    {
      v9 = v8;
      v8 = (int *)*v8;
    }
    while ( v5 != v8 );
    v10 = *v5;
    if ( *v7 == v9 )
    {
      if ( v10 )
      {
        v15 = *(_DWORD *)(v10 + 24) % v24;
        if ( v22 != v15 )
        {
          *(_DWORD *)(v26 + 4 * v15) = v9;
          *(_DWORD *)(*v6 + 4 * v22) = 0;
          v10 = *v5;
        }
      }
      else
      {
        *v7 = nullptr;
        v10 = *v5;
      }
    }
    else if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 24) % v24;
      if ( v22 != v11 )
      {
        *(_DWORD *)(v26 + 4 * v11) = v9;
        v10 = *v5;
      }
    }
    *v9 = v10;
    v12 = (void *)v5[2];
    if ( v12 )
    {
      v5[3] = 0;
      sub_80CF780(v12);
    }
    v13 = v5[1];
    if ( (unsigned int *)(v13 - 12) != std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(v13 - 4), 0xFFFFFFFF);
      }
      else
      {
        v17 = *(_DWORD *)(v13 - 4);
        *(_DWORD *)(v13 - 4) = v17 - 1;
      }
      if ( v17 <= 0 )
        std::string::_Rep::_M_destroy(v13 - 12, &v30);
    }
    operator delete(v5, 0x1Cu);
    --v6[3];
  }
  result = v31 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 8094B7E: control flows out of bounds to 804F52A
// 8094E30: variable 'v18' is possibly undefined
// 8094E30: variable 'v19' is possibly undefined
// 8094E30: variable 'v20' is possibly undefined
// 804BAD0: using guessed type int __cdecl std::string::_Rep::_S_create(_DWORD, _DWORD, _DWORD);
// 811F8A1: using guessed type char byte_811F8A1;
// 811F9B0: using guessed type unsigned int std::string::_Rep::_S_empty_rep_storage[4];
