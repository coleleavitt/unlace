/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45870
// Address: 0x00045870

//----- (00045870) --------------------------------------------------------
int __cdecl sub_45870(int a1, int a2)
{
  char *v2; // eax
  size_t v3; // edx
  _BYTE *v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // edi
  char *v7; // esi
  size_t v8; // eax
  size_t v10; // [esp+14h] [ebp-38h]
  int v11; // [esp+18h] [ebp-34h] BYREF
  unsigned int v12; // [esp+1Ch] [ebp-30h]
  unsigned int v13; // [esp+20h] [ebp-2Ch]
  void *v14; // [esp+28h] [ebp-24h] BYREF
  int v15; // [esp+2Ch] [ebp-20h]
  int v16; // [esp+30h] [ebp-1Ch]
  unsigned int v17; // [esp+38h] [ebp-14h]

  v17 = __readgsdword(0x14u);
  v14 = nullptr;
  v15 = 0;
  v16 = 0;
  if ( *(_DWORD *)(a1 + 8) )
    v2 = *(char **)(a1 + 4);
  else
    v2 = byte_EF875;
  if ( (unsigned __int8)eval_expr(a2, -1, v2, (int)&v14) )
    goto LABEL_19;
  sub_1B530((int)&v11, "IDC_FAILURE: ");
  if ( v15 )
  {
    v3 = v15 - 1;
    if ( v15 != 1 )
    {
      v4 = (_BYTE *)v11;
      v5 = v12 - 1;
      if ( !v12 )
        v5 = 0;
      v6 = v5 + v15;
      if ( v13 < v5 + v15 )
      {
        v10 = v15 - 1;
        v4 = qvector_reserve((int)&v11, (void *)v11, v6, 1u);
        v11 = (int)v4;
        v3 = v10;
      }
      v12 = v6;
      v4[v5 + v3] = 0;
      memcpy((void *)(v11 + v5), v14, v3);
    }
  }
  if ( v12 )
  {
    v7 = (char *)v11;
    if ( !v11 )
    {
      v7 = nullptr;
      v8 = 0;
      goto LABEL_17;
    }
  }
  else
  {
    v7 = byte_EF875;
  }
  v8 = strlen(v7);
LABEL_17:
  *(_BYTE *)a2 = 7;
  sub_2DCA0((_DWORD *)(a2 + 4), v7, v8);
  if ( v11 )
  {
    v12 = 0;
    qfree((void *)v11);
    v11 = 0;
    v13 = 0;
  }
LABEL_19:
  if ( v14 )
  {
    v15 = 0;
    qfree(v14);
    v14 = nullptr;
    v16 = 0;
  }
  return 0;
}
