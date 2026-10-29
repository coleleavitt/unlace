/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74C60
// Address: 0x00074C60

//----- (00074C60) --------------------------------------------------------
void *__cdecl sub_74C60(int a1, int a2)
{
  int v2; // esi
  _BYTE *v3; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  _BYTE *v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // edi
  _BYTE *v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // edi
  _BYTE *v18; // eax
  const void *v20; // [esp-Ch] [ebp-38h]
  void *v21; // [esp+Ch] [ebp-20h]
  char v22; // [esp+Ch] [ebp-20h]
  size_t v23; // [esp+10h] [ebp-1Ch]
  size_t v24; // [esp+14h] [ebp-18h]
  int v25; // [esp+18h] [ebp-14h]

  v2 = a2;
  v3 = *(_BYTE **)(a2 + 12);
  v21 = nullptr;
  v4 = a1;
  switch ( (__int16)v3 )
  {
    case 2:
    case 6:
      goto LABEL_9;
    case 4:
      v6 = *(_DWORD *)(a1 + 4);
      v7 = v6 - 1;
      if ( !v6 )
        v7 = 0;
      v8 = v7 + 2;
      if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v7 + 2) )
      {
        v9 = *(_BYTE **)a1;
      }
      else
      {
        v9 = qvector_reserve(a1, *(void **)a1, v7 + 2, 1u);
        v8 = v7 + 2;
        v4 = a1;
        v2 = a2;
        *(_DWORD *)a1 = v9;
      }
      *(_DWORD *)(v4 + 4) = v8;
      v9[v7] = 34;
      v3 = *(_BYTE **)v4;
      *(_BYTE *)(*(_DWORD *)v4 + v7 + 1) = 0;
      LOBYTE(v21) = 34;
LABEL_9:
      v10 = *(_DWORD *)(v2 + 4);
      if ( v10 )
      {
        v3 = (_BYTE *)(v10 - 1);
        v23 = v10 - 1;
        if ( v10 != 1 )
        {
          v11 = *(_DWORD *)(v4 + 4);
          v12 = v11 - 1;
          if ( !v11 )
            v12 = 0;
          v24 = v12 + v23;
          v25 = v12;
          v13 = v12 + v10;
          if ( *(_DWORD *)(v4 + 8) >= v13 )
          {
            v14 = *(_BYTE **)v4;
          }
          else
          {
            v14 = qvector_reserve(v4, *(void **)v4, v13, 1u);
            v4 = a1;
            v2 = a2;
            *(_DWORD *)a1 = v14;
          }
          *(_DWORD *)(v4 + 4) = v13;
          v14[v24] = 0;
          v20 = *(const void **)v2;
          v15 = v4;
          v3 = memcpy((void *)(*(_DWORD *)v4 + v25), v20, v23);
          v4 = v15;
        }
      }
      LOBYTE(v5) = (_BYTE)v21;
      if ( (_BYTE)v21 )
        goto LABEL_18;
      goto LABEL_24;
    case 46:
    case 47:
    case 58:
    case 60:
    case 62:
      v5 = *(_DWORD *)(a2 + 12);
LABEL_18:
      v16 = *(_DWORD *)(v4 + 4);
      v17 = v16 - 1;
      if ( !v16 )
        v17 = 0;
      if ( *(_DWORD *)(v4 + 8) >= (unsigned int)(v17 + 2) )
      {
        v18 = *(_BYTE **)v4;
      }
      else
      {
        v22 = v5;
        v18 = qvector_reserve(v4, *(void **)v4, v17 + 2, 1u);
        LOBYTE(v5) = v22;
        v4 = a1;
        *(_DWORD *)a1 = v18;
      }
      *(_DWORD *)(v4 + 4) = v17 + 2;
      v18[v17] = v5;
      v3 = *(_BYTE **)v4;
      *(_BYTE *)(*(_DWORD *)v4 + v17 + 1) = 0;
LABEL_24:
      LOBYTE(v3) = 1;
      v21 = v3;
      break;
    default:
      return v21;
  }
  return v21;
}
