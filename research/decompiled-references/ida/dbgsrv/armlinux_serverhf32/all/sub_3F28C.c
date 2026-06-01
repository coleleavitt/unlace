/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F28C
// Address: 0x0003F28C

//----- (0003F28C) --------------------------------------------------------
_DWORD *__fastcall sub_3F28C(int a1, const char *a2, int a3)
{
  pthread_mutex_t *v6; // r9
  _DWORD *v7; // r4
  int v9; // r10
  size_t v10; // r0
  size_t v11; // r10
  int v12; // r2
  __int64 v13; // kr00_8
  void *v14; // r1
  _DWORD *v15; // r0
  int v16; // r3
  size_t v17; // r11
  void *v18; // r0

  if ( !a2 )
    return nullptr;
  v6 = (pthread_mutex_t *)dword_D3A90;
  sub_7A100((pthread_mutex_t *)dword_D3A90);
  v7 = (_DWORD *)sub_3F1F8(a1, a2);
  if ( !v7 )
  {
    v9 = *(_DWORD *)(a1 + 44);
    v7 = sub_805CC(0x38u);
    v7[7] = v9;
    v7[3] = v7 + 1;
    v7[4] = v7 + 1;
    v7[1] = 0;
    v7[2] = 0;
    v7[5] = 0;
    v7[6] = 0;
    v7[8] = 0;
    v7[9] = 0;
    v7[10] = 0;
    v7[11] = -1;
    v7[12] = -1;
    v7[13] = -1;
    v10 = strlen(a2);
    v11 = v10;
    if ( v10 )
    {
      v17 = v10 + 1;
      v18 = sub_77EB0((int)(v7 + 8), nullptr, v10 + 1, 1u);
      v7[8] = v18;
      v7[9] = v17;
      memmove(v18, a2, v11);
      *(_BYTE *)(v7[8] + v11) = 0;
    }
    v12 = a3;
    if ( a3 )
      v12 = *(_DWORD *)(a3 + 28);
    v13 = *(_QWORD *)(a1 + 44);
    v7[6] = v12;
    v14 = *(void **)(a1 + 40);
    if ( (unsigned int)(v13 + 1) > HIDWORD(v13) )
    {
      v15 = sub_77EB0(a1 + 40, v14, v13 + 1, 4u);
      v16 = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(a1 + 40) = v15;
      v15[v16] = v7;
    }
    else
    {
      *((_DWORD *)v14 + v13) = v7;
    }
    ++*(_DWORD *)(a1 + 44);
  }
  sub_7A128(v6);
  return v7;
}
// D3A90: using guessed type int dword_D3A90;
