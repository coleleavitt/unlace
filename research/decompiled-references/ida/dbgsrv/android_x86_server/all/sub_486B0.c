/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_486B0
// Address: 0x000486B0

//----- (000486B0) --------------------------------------------------------
unsigned int __fastcall sub_486B0(int a1, int a2)
{
  int v3; // eax
  int v4; // esi
  char *v5; // ecx
  int v6; // esi
  int v7; // eax
  int v8; // edx
  int v9; // esi
  _BYTE *v10; // eax
  int v11; // edx
  int v12; // edx
  char *v13; // ecx
  size_t v14; // edi
  int v15; // eax
  int v16; // esi
  _BYTE *v17; // eax
  size_t v19; // [esp+8h] [ebp-34h]
  _DWORD *v20; // [esp+Ch] [ebp-30h]
  _DWORD *v21; // [esp+Ch] [ebp-30h]
  int v22; // [esp+10h] [ebp-2Ch]
  char *v23; // [esp+14h] [ebp-28h]
  char *v24; // [esp+18h] [ebp-24h] BYREF
  int v25; // [esp+1Ch] [ebp-20h]
  int v26; // [esp+20h] [ebp-1Ch]
  unsigned int v27; // [esp+28h] [ebp-14h]

  v27 = __readgsdword(0x14u);
  if ( *(_BYTE *)(a2 + 20) )
  {
    v24 = nullptr;
    v25 = 0;
    v26 = 0;
    v3 = *(_DWORD *)(a2 + 4);
    v4 = a1;
    if ( v3 )
    {
      --v3;
      v5 = *(char **)a2;
    }
    else
    {
      v5 = byte_EF875;
    }
    if ( !utf8_utf16((int)&v24, (int)v5, v3) )
    {
      if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
        interr(274);
      BUG();
    }
    v12 = v4;
    v13 = byte_F3BDC;
    if ( v25 )
      v13 = v24;
    v23 = v13;
    v14 = 2 * v25 - 2;
    if ( !v25 )
      v14 = 0;
    v15 = *(_DWORD *)(v4 + 4);
    v16 = v15 - 1;
    if ( !v15 )
      v16 = 0;
    if ( *(_DWORD *)(v12 + 8) >= v16 + v14 + 1 )
    {
      v17 = *(_BYTE **)v12;
    }
    else
    {
      v21 = (_DWORD *)v12;
      v17 = qvector_reserve(v12, *(void **)v12, v16 + v14 + 1, 1u);
      v12 = (int)v21;
      *v21 = v17;
    }
    *(_DWORD *)(v12 + 4) = v16 + v14 + 1;
    v17[v16 + v14] = 0;
    memmove((void *)(*(_DWORD *)v12 + v16), v23, v14);
    if ( v24 )
    {
      v25 = 0;
      qfree(v24);
      v24 = nullptr;
      v26 = 0;
    }
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 4);
    if ( v6 )
    {
      v19 = v6 - 1;
      if ( v6 != 1 )
      {
        v7 = *(_DWORD *)(a1 + 4);
        v8 = *(_DWORD *)(a2 + 4);
        v9 = v7 - 1;
        if ( !v7 )
          v9 = 0;
        if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v9 + v8) )
        {
          v11 = v9 + v8;
          v10 = *(_BYTE **)a1;
        }
        else
        {
          v20 = (_DWORD *)a1;
          v22 = v9 + v8;
          v10 = qvector_reserve(a1, *(void **)a1, v9 + v8, 1u);
          v11 = v22;
          a1 = (int)v20;
          *v20 = v10;
        }
        *(_DWORD *)(a1 + 4) = v11;
        v10[v9 + v19] = 0;
        memcpy((void *)(*(_DWORD *)a1 + v9), *(const void **)a2, v19);
      }
    }
  }
  return __readgsdword(0x14u);
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
