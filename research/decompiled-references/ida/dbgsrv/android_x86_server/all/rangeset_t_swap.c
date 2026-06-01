/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_swap
// Address: 0x000B8E10

//----- (000B8E10) --------------------------------------------------------
unsigned int __cdecl rangeset_t_swap(int a1, int **a2)
{
  int v2; // eax
  char v3; // al
  int *v4; // esi
  unsigned int v5; // edi
  int v6; // eax
  int **v7; // edx
  int *v8; // esi
  int *v9; // edi
  int v10; // eax
  int *v11; // ecx
  int *v12; // eax
  int *v14; // [esp+8h] [ebp-44h]
  int *v15; // [esp+Ch] [ebp-40h]
  void *v16; // [esp+10h] [ebp-3Ch] BYREF
  int v17; // [esp+14h] [ebp-38h]
  int v18; // [esp+18h] [ebp-34h]
  int v19; // [esp+1Ch] [ebp-30h]
  char v20; // [esp+20h] [ebp-2Ch]
  int v21; // [esp+28h] [ebp-24h] BYREF
  int v22; // [esp+2Ch] [ebp-20h]
  char v23; // [esp+30h] [ebp-1Ch]
  unsigned int v24; // [esp+38h] [ebp-14h]

  v24 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 16);
  v16 = nullptr;
  v17 = 0;
  v18 = 0;
  v19 = v2;
  if ( v2 == -1 )
    v3 = 0;
  else
    v3 = must_journal();
  v20 = v3;
  if ( v3 )
  {
    v4 = *(int **)a1;
    v5 = *(_DWORD *)a1 + 8 * *(_DWORD *)(a1 + 4);
    if ( *(_DWORD *)a1 < v5 )
    {
      do
      {
        v6 = *v4;
        v22 = v4[1];
        v21 = v6;
        v23 = 1;
        sub_B8FF0((unsigned int *)&v16, (unsigned int)&v21);
        v4 += 2;
      }
      while ( (unsigned int)v4 < v5 );
      v3 = v20;
    }
  }
  v7 = a2;
  v8 = *a2;
  if ( v3 )
  {
    v9 = &v8[2 * (_DWORD)a2[1]];
    if ( v8 < v9 )
    {
      do
      {
        v10 = *v8;
        v22 = v8[1];
        v21 = v10;
        v23 = 0;
        sub_B8FF0((unsigned int *)&v16, (unsigned int)&v21);
        v8 += 2;
      }
      while ( v8 < v9 );
      v7 = a2;
      v8 = *a2;
    }
  }
  v14 = *(int **)a1;
  v11 = *(int **)(a1 + 4);
  v15 = *(int **)(a1 + 8);
  *(_DWORD *)a1 = v8;
  *(_DWORD *)(a1 + 4) = v7[1];
  *(_DWORD *)(a1 + 8) = v7[2];
  *v7 = v14;
  v7[1] = v11;
  v7[2] = v15;
  v12 = *(int **)(a1 + 12);
  *(_DWORD *)(a1 + 12) = v7[3];
  v7[3] = v12;
  if ( v16 )
  {
    v17 = 0;
    qfree(v16);
    v16 = nullptr;
    v18 = 0;
  }
  return __readgsdword(0x14u);
}
