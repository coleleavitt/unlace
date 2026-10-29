/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96200
// Address: 0x00096200

//----- (00096200) --------------------------------------------------------
int __cdecl sub_96200(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // edi
  int v10; // edi
  const char *v11; // eax
  const char *v12; // esi
  size_t v13; // eax
  size_t v14; // edi
  void **v15; // ecx
  size_t v16; // edx
  void *v17; // eax
  int v19; // [esp+4h] [ebp-28h]
  int v21; // [esp+Ch] [ebp-20h]
  _DWORD v22[7]; // [esp+10h] [ebp-1Ch] BYREF

  v22[2] = __readgsdword(0x14u);
  v4 = (*(int (__cdecl **)(int))(*(_DWORD *)a1 + 12))(a1);
  sub_95570(v22, v4, 1u, a3);
  v5 = a3;
  v6 = 0;
  if ( !a3 )
    goto LABEL_21;
  v19 = v4;
  while ( 1 )
  {
    v7 = v5;
    if ( sub_94BA0(v4, a4) <= 0 )
    {
      v21 = -1;
      goto LABEL_8;
    }
    v8 = sub_94B00(v4, a2, v7);
    if ( v8 <= 0 )
      break;
    v9 = v8;
    sub_955F0(v22, v8);
    v5 = v7 - v9;
    a2 += v9;
LABEL_9:
    v4 = v19;
    if ( !v5 )
    {
      v6 = 0;
      goto LABEL_21;
    }
  }
  v21 = v8;
LABEL_8:
  v10 = sub_94B40(v4);
  v5 = v7;
  if ( v10 == -21015 )
    goto LABEL_9;
  (*(void (__cdecl **)(int))(*(_DWORD *)a1 + 24))(a1);
  if ( v21 )
  {
    *(_BYTE *)(a1 + 4) = 1;
    if ( v10 != -15059582 )
    {
      v11 = (const char *)sub_94B70(v19);
      v12 = v11;
      if ( v11 && (v13 = strlen(v11)) != 0 )
      {
        v14 = v13;
        v15 = (void **)(a1 + 8);
        v16 = v13 + 1;
        if ( *(_DWORD *)(a1 + 16) >= v13 + 1 )
        {
          v17 = *v15;
        }
        else
        {
          v17 = qvector_reserve(a1 + 8, *v15, v13 + 1, 1u);
          *(_DWORD *)(a1 + 8) = v17;
          v16 = v14 + 1;
        }
        *(_DWORD *)(a1 + 12) = v16;
        memmove(v17, v12, v14);
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + v14) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 12) = 0;
      }
    }
  }
  v6 = -1;
LABEL_21:
  sub_955B0(v22);
  return v6;
}
