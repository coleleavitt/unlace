/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96020
// Address: 0x00096020

//----- (00096020) --------------------------------------------------------
int __cdecl sub_96020(int a1, int *a2)
{
  int v2; // edi
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // esi
  const char *v8; // eax
  const char *v9; // edi
  size_t v10; // eax
  size_t v11; // edx
  void **v12; // ecx
  size_t v13; // esi
  void *v14; // eax
  size_t v15; // esi
  int v16; // [esp+18h] [ebp-24h]
  int v17; // [esp+1Ch] [ebp-20h]
  int v18; // [esp+1Ch] [ebp-20h]
  size_t v19; // [esp+1Ch] [ebp-20h]
  _DWORD v20[7]; // [esp+20h] [ebp-1Ch] BYREF

  v20[2] = __readgsdword(0x14u);
  v2 = -1;
  v16 = (*(int (__cdecl **)(int))(*(_DWORD *)a1 + 12))(a1);
  if ( v16 && !*(_BYTE *)(a1 + 4) )
  {
    sub_96BB0((int)a2);
    v17 = *a2;
    v3 = a2[1];
    sub_95570(v20, v16, 0, v3);
    if ( v3 <= 0 )
    {
LABEL_7:
      v2 = 0;
    }
    else
    {
      v4 = v17;
      while ( 1 )
      {
        v18 = v4;
        v5 = sub_94AC0(v16, v4, v3);
        v6 = v5;
        if ( v5 < 0 )
          break;
        sub_955F0(v20, v5);
        v4 = v6 + v18;
        v3 -= v6;
        if ( v3 <= 0 )
          goto LABEL_7;
      }
      (*(void (__cdecl **)(int))(*(_DWORD *)a1 + 24))(a1);
      *(_BYTE *)(a1 + 4) = 1;
      v2 = -1;
      if ( sub_94B40(v16) != -15059582 )
      {
        v8 = (const char *)sub_94B70(v16);
        v9 = v8;
        if ( v8 && (v10 = strlen(v8)) != 0 )
        {
          v11 = v10;
          v12 = (void **)(a1 + 8);
          v13 = v10 + 1;
          if ( *(_DWORD *)(a1 + 16) >= v10 + 1 )
          {
            v14 = *v12;
          }
          else
          {
            v19 = v10;
            v14 = qvector_reserve(a1 + 8, *v12, v10 + 1, 1u);
            *(_DWORD *)(a1 + 8) = v14;
            v11 = v19;
          }
          *(_DWORD *)(a1 + 12) = v13;
          v15 = v11;
          memmove(v14, v9, v11);
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + v15) = 0;
          v2 = -1;
        }
        else
        {
          *(_DWORD *)(a1 + 12) = 0;
          v2 = -1;
        }
      }
    }
    sub_955B0(v20);
  }
  return v2;
}
