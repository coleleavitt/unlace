/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F5F0
// Address: 0x0005F5F0

//----- (0005F5F0) --------------------------------------------------------
int *__cdecl sub_5F5F0(int a1, int *a2, char **a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  int v5; // eax
  int *v6; // ecx
  char v7; // al
  int v8; // eax
  int v9; // esi
  size_t v10; // edi
  void *v11; // eax
  unsigned int v12; // ecx
  size_t v13; // edi
  size_t v14; // edx
  _BYTE *v15; // eax
  size_t v16; // esi
  unsigned int v17; // edi
  char *v18; // eax
  int *v19; // esi
  size_t v21; // [esp+14h] [ebp-38h]
  int v22; // [esp+18h] [ebp-34h] BYREF
  size_t v23; // [esp+1Ch] [ebp-30h]
  unsigned int v24; // [esp+20h] [ebp-2Ch]
  void *v25; // [esp+28h] [ebp-24h] BYREF
  int v26; // [esp+2Ch] [ebp-20h]
  int v27; // [esp+30h] [ebp-1Ch]
  unsigned int v28; // [esp+38h] [ebp-14h]

  v28 = __readgsdword(0x14u);
  *a2 = -1;
  v25 = nullptr;
  v26 = 0;
  v27 = 0;
  v3 = (_DWORD *)sub_5E1B0(a1, (int *)&v25);
  if ( !v3 )
  {
LABEL_22:
    v6 = nullptr;
    goto LABEL_23;
  }
  v4 = (_DWORD *)sub_537A0(v3[4]);
  v5 = sub_5C350(v4, (int)&v25);
  if ( v5 != -1 )
  {
    v6 = a2;
    *a2 = v5;
    LOBYTE(v6) = 1;
    goto LABEL_23;
  }
  v7 = sub_5F280(a1, v3, (int)&v25, a3);
  LOBYTE(v6) = 1;
  if ( !v7 )
  {
    set_qerrno(88);
    v8 = sub_537A0(v3[4]);
    v9 = v8;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v10 = *(_DWORD *)(v8 + 24);
    if ( v10 )
    {
      v22 = (int)qalloc_or_throw(*(_DWORD *)(v8 + 24));
      v24 = v10;
      memcpy((void *)v22, *(const void **)(v9 + 20), v10);
      v23 = v10;
      v11 = (void *)v22;
      v12 = v10;
      v13 = v10 - 1;
    }
    else
    {
      v12 = 0;
      v11 = nullptr;
      v13 = 0;
    }
    if ( v12 < v13 + 2 )
    {
      v11 = qvector_reserve((int)&v22, v11, v13 + 2, 1u);
      v22 = (int)v11;
    }
    v23 = v13 + 2;
    *((_BYTE *)v11 + v13) = 46;
    *(_BYTE *)(v22 + v13 + 1) = 0;
    if ( v26 )
    {
      v14 = v26 - 1;
      if ( v26 != 1 )
      {
        v15 = (_BYTE *)v22;
        v16 = v23 - 1;
        if ( !v23 )
          v16 = 0;
        v17 = v16 + v26;
        if ( v24 < v16 + v26 )
        {
          v21 = v26 - 1;
          v15 = qvector_reserve((int)&v22, (void *)v22, v17, 1u);
          v22 = (int)v15;
          v14 = v21;
        }
        v23 = v17;
        v15[v16 + v14] = 0;
        memcpy((void *)(v22 + v16), v25, v14);
      }
    }
    if ( v23 )
      v18 = (char *)v22;
    else
      v18 = byte_EF875;
    set_error_string(0, v18);
    if ( v22 )
    {
      v23 = 0;
      qfree((void *)v22);
      v22 = 0;
      v24 = 0;
    }
    goto LABEL_22;
  }
LABEL_23:
  if ( v25 )
  {
    v19 = v6;
    v26 = 0;
    qfree(v25);
    v25 = nullptr;
    v27 = 0;
    return v19;
  }
  return v6;
}
// 5F809: variable 'v6' is possibly undefined
