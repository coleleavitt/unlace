/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BC530
// Address: 0x080BC530

//----- (080BC530) --------------------------------------------------------
int __cdecl sub_80BC530(int a1, int *a2)
{
  int (__cdecl *v2)(int); // eax
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int v6; // esi
  void (__cdecl *v8)(int); // eax
  const char *v9; // eax
  const char *v10; // esi
  size_t v11; // eax
  size_t v12; // edi
  unsigned int v13; // edx
  void *v14; // eax
  int v15; // [esp-34h] [ebp-34h]
  unsigned int v16; // [esp-34h] [ebp-34h]
  int v17; // [esp-24h] [ebp-24h] BYREF
  unsigned int v18; // [esp-20h] [ebp-20h]

  v2 = *(int (__cdecl **)(int))(*(_DWORD *)a1 + 12);
  v18 = __readgsdword(0x14u);
  if ( v2 == sub_80BC3C0 )
    v15 = *(_DWORD *)(a1 + 52);
  else
    v15 = v2(a1);
  if ( !v15 || *(_BYTE *)(a1 + 4) )
  {
    v6 = -1;
  }
  else
  {
    sub_80BD0F0((int)a2);
    v3 = *a2;
    v4 = a2[1];
    sub_80BC210(&v17, v15, 0, v4);
    while ( 1 )
    {
      if ( v4 <= 0 )
      {
        v6 = 0;
        goto LABEL_10;
      }
      v5 = sub_80BBF20(v15);
      if ( v5 < 0 )
        break;
      v4 -= v5;
      v3 += v5;
      sub_80BC260(&v17);
    }
    v8 = *(void (__cdecl **)(int))(*(_DWORD *)a1 + 24);
    if ( (char *)v8 != (char *)((char *)&qword_811CFF4 - 489876) )
      v8(a1);
    *(_BYTE *)(a1 + 4) = 1;
    if ( sub_80BBF40(v15) != -15059582 )
    {
      v9 = (const char *)sub_80BBF50(v15);
      v10 = v9;
      if ( v9 && (v11 = strlen(v9), (v12 = v11) != 0) )
      {
        v13 = v11 + 1;
        v14 = *(void **)(a1 + 8);
        if ( *(_DWORD *)(a1 + 16) < v13 )
        {
          v16 = v13;
          v14 = sub_80CF920(a1 + 8, v14, v13, 1u);
          *(_DWORD *)(a1 + 8) = v14;
          v13 = v16;
        }
        *(_DWORD *)(a1 + 12) = v13;
        memmove(v14, v10, v12);
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + v12) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 12) = 0;
      }
    }
    v6 = -1;
LABEL_10:
    sub_80BC240(&v17);
  }
  if ( v18 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v6;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
