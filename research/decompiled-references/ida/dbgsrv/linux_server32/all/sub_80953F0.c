/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80953F0
// Address: 0x080953F0

//----- (080953F0) --------------------------------------------------------
int __cdecl sub_80953F0(int a1, const char *a2, _BYTE *a3, unsigned int a4, char a5, bool *a6)
{
  int result; // eax
  int *v7; // edi
  size_t v8; // esi
  int v9; // edx
  _DWORD *v10; // esi
  volatile signed __int32 *v11; // edx
  int v12; // edi
  _DWORD *v13; // eax
  int v14; // ecx
  _DWORD *v15; // esi
  unsigned int v16; // eax
  int v17; // edi
  int v18; // edx
  __int64 v19; // xmm0_8
  _DWORD *v20; // ebx
  _DWORD *v21; // ecx
  _DWORD *v22; // edi
  _DWORD *v23; // eax
  unsigned int v24; // eax
  _DWORD *v25; // eax
  size_t v26; // eax
  unsigned int v27; // edx
  void *v28; // eax
  int v29; // ecx
  int v30; // [esp+10h] [ebp-4Ch]
  size_t v31; // [esp+10h] [ebp-4Ch]
  int v32; // [esp+14h] [ebp-48h]
  void *v33; // [esp+14h] [ebp-48h]
  unsigned int *v34; // [esp+24h] [ebp-38h]
  unsigned int v35; // [esp+24h] [ebp-38h]
  size_t v36; // [esp+28h] [ebp-34h]
  __int16 v37; // [esp+36h] [ebp-26h] BYREF
  volatile signed __int32 *v38; // [esp+38h] [ebp-24h] BYREF
  unsigned int v39; // [esp+3Ch] [ebp-20h]

  v39 = __readgsdword(0x14u);
  if ( *(_BYTE *)(a1 + 404) )
  {
    *(_BYTE *)(a1 + 404) = 0;
    v13 = (_DWORD *)operator new(0x1Cu);
    v14 = *(_DWORD *)(a1 + 372);
    v15 = v13;
    *v13 = 0;
    v16 = *(_DWORD *)(v14 + 4);
    v15[2] = 0;
    v17 = v14;
    v18 = *(_DWORD *)(v14 + 12);
    v19 = *(_QWORD *)(v14 + 16);
    v15[6] = 0;
    v15[1] = v16;
    v15[3] = v18;
    *((_QWORD *)v15 + 2) = v19;
    if ( v16 == 1 )
    {
      v33 = v15 + 6;
    }
    else
    {
      if ( v16 > 0x1FFFFFFF )
      {
        if ( v16 <= 0x3FFFFFFF )
        {
          if ( v39 == __readgsdword(0x14u) )
            std::__throw_bad_alloc();
        }
        else if ( v39 == __readgsdword(0x14u) )
        {
          sub_8052751();
        }
LABEL_47:
        sub_80D7AB0();
      }
      v31 = 4 * v16;
      v33 = (void *)operator new(4 * v16);
      memset(v33, 0, v31);
    }
    *v15 = v33;
    v20 = *(_DWORD **)(v17 + 8);
    if ( v20 )
    {
      v21 = sub_8091F60((int)(v20 + 1));
      v21[6] = v20[6];
      v15[2] = v21;
      if ( v21 )
        *(_DWORD *)(*v15 + 4 * (v21[6] % v15[1])) = v15 + 2;
      while ( 1 )
      {
        v20 = (_DWORD *)*v20;
        if ( !v20 )
          break;
        while ( 1 )
        {
          v22 = v21;
          v23 = sub_8091F60((int)(v20 + 1));
          *v22 = v23;
          v21 = v23;
          v24 = v20[6];
          v21[6] = v24;
          v25 = (_DWORD *)(*v15 + 4 * (v24 % v15[1]));
          if ( *v25 )
            break;
          *v25 = v22;
          v20 = (_DWORD *)*v20;
          if ( !v20 )
            goto LABEL_29;
        }
      }
    }
LABEL_29:
    *(_UNKNOWN **)((char *)&off_811D168 + a1 - 135385076) = v15;
  }
  if ( a2 && *a2 && a4 <= 0x7F )
  {
    v7 = *(int **)((char *)&off_811D168 + a1 - 135385076);
    v32 = v7[3];
    v8 = strlen(a2);
    if ( v8 )
    {
      v9 = std::string::_Rep::_S_create(v8, 0, &v37);
      v34 = (unsigned int *)(v9 + 12);
      if ( v8 == 1 )
      {
        *(_BYTE *)(v9 + 12) = *a2;
      }
      else
      {
        v30 = v9;
        memcpy(v34, a2, v8);
        v9 = v30;
      }
      if ( (unsigned int *)v9 != std::string::_Rep::_S_empty_rep_storage )
      {
        *(_DWORD *)(v9 + 8) = 0;
        *(_DWORD *)v9 = v8;
        *(_BYTE *)(v9 + v8 + 12) = 0;
      }
    }
    else
    {
      v34 = &std::string::_Rep::_S_empty_rep_storage[3];
    }
    v38 = (volatile signed __int32 *)v34;
    v10 = sub_8095080(v7, (const void **)&v38);
    v11 = v38 - 3;
    if ( v38 - 3 != (volatile signed __int32 *)std::string::_Rep::_S_empty_rep_storage )
    {
      if ( *((_DWORD *)&qword_811CFF4 - 8) )
      {
        v29 = _InterlockedExchangeAdd(v38 - 1, 0xFFFFFFFF);
      }
      else
      {
        v29 = *((_DWORD *)v38 - 1);
        *((_DWORD *)v38 - 1) = v29 - 1;
      }
      if ( v29 <= 0 )
        std::string::_Rep::_M_destroy(v11, (char *)&v37 + 1);
    }
    v12 = v7[3];
    if ( a3 && *a3 && (v26 = strlen(a3), (v36 = v26) != 0) )
    {
      v27 = v26 + 1;
      v28 = (void *)*v10;
      if ( v10[2] < v27 )
      {
        v35 = v27;
        v28 = sub_80CF920((int)v10, v28, v27, 1u);
        v27 = v35;
        *v10 = v28;
      }
      v10[1] = v27;
      memmove(v28, a3, v36);
      *(_BYTE *)(*v10 + v36) = 0;
    }
    else
    {
      v10[1] = 0;
    }
    *((_BYTE *)v10 + 12) = a4;
    *((_BYTE *)v10 + 13) = a5;
    if ( a6 )
      *a6 = v32 != v12;
    result = 0;
  }
  else
  {
    result = sub_80C7880(38);
  }
  if ( v39 != __readgsdword(0x14u) )
    goto LABEL_47;
  return result;
}
// 804BAD0: using guessed type int __cdecl std::string::_Rep::_S_create(_DWORD, _DWORD, _DWORD);
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D168: using guessed type _UNKNOWN *off_811D168;
// 811F9B0: using guessed type unsigned int std::string::_Rep::_S_empty_rep_storage[4];
