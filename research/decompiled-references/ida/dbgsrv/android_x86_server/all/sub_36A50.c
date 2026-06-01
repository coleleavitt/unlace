/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36A50
// Address: 0x00036A50

//----- (00036A50) --------------------------------------------------------
unsigned int __cdecl sub_36A50(_DWORD *a1, int *a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  unsigned int v4; // edi
  char *v5; // edi
  int v6; // eax
  int v7; // esi
  void *v8; // eax
  void *v9; // eax
  int *v10; // edi
  int v11; // edx
  _DWORD *v12; // eax
  char v14; // [esp+3h] [ebp-29h]
  int *v15; // [esp+4h] [ebp-28h]
  char *v16; // [esp+8h] [ebp-24h]
  int v17; // [esp+Ch] [ebp-20h]
  int v18; // [esp+10h] [ebp-1Ch]
  unsigned int v19[6]; // [esp+14h] [ebp-18h] BYREF

  v2 = a1;
  v19[1] = __readgsdword(0x14u);
  v14 = *(_BYTE *)(*a1 + 476);
  v19[0] = 0;
  if ( a2[1] )
  {
    v15 = a1 + 1;
    while ( 1 )
    {
      v3 = v2[2];
      v4 = v2[3];
      if ( v4 >= v3 + 1 )
      {
        v11 = *v15;
        v10 = a2;
      }
      else
      {
        v16 = (char *)qvector_reserve((int)v15, nullptr, v3 + 1, 0x1Cu);
        v17 = v2[3];
        v2[3] = v4;
        v5 = (char *)v2[1];
        v6 = v2[2] - 1;
        if ( v6 >= 0 )
        {
          v7 = 0;
          do
          {
            v18 = v6;
            *(_DWORD *)&v16[v7] = *(_DWORD *)&v5[v7];
            *(_DWORD *)&v5[v7] = 0;
            *(_DWORD *)&v16[v7 + 4] = *(_DWORD *)&v5[v7 + 4];
            *(_DWORD *)&v5[v7 + 4] = 0;
            *(_DWORD *)&v16[v7 + 8] = *(_DWORD *)&v5[v7 + 8];
            *(_DWORD *)&v5[v7 + 8] = 0;
            *(_DWORD *)&v16[v7 + 12] = *(_DWORD *)&v5[v7 + 12];
            *(_DWORD *)&v5[v7 + 12] = 0;
            *(_DWORD *)&v16[v7 + 16] = *(_DWORD *)&v5[v7 + 16];
            *(_DWORD *)&v5[v7 + 16] = 0;
            *(_DWORD *)&v16[v7 + 20] = *(_DWORD *)&v5[v7 + 20];
            *(_DWORD *)&v5[v7 + 20] = 0;
            *(_DWORD *)&v16[v7 + 24] = *(_DWORD *)&v5[v7 + 24];
            v8 = *(void **)&v5[v7 + 12];
            if ( v8 )
            {
              *(_DWORD *)&v5[v7 + 16] = 0;
              qfree(v8);
              *(_DWORD *)&v5[v7 + 12] = 0;
              *(_DWORD *)&v5[v7 + 20] = 0;
            }
            v9 = *(void **)&v5[v7];
            if ( v9 )
            {
              *(_DWORD *)&v5[v7 + 4] = 0;
              qfree(v9);
              *(_DWORD *)&v5[v7] = 0;
              *(_DWORD *)&v5[v7 + 8] = 0;
            }
            v7 += 28;
            v6 = v18 - 1;
          }
          while ( v18 - 1 >= 0 );
          v5 = (char *)*v15;
          v2 = a1;
        }
        qfree(v5);
        v2[1] = v16;
        v2[3] = v17;
        v3 = v2[2];
        v10 = a2;
        v11 = (int)v16;
      }
      v12 = (_DWORD *)(v11 + 28 * v3);
      v12[1] = 0;
      *v12 = 0;
      v12[3] = 0;
      v12[2] = 0;
      v12[5] = 0;
      v12[4] = 0;
      ++v2[2];
      if ( !(unsigned __int8)sub_3D700((int)v12, v19, v10, v14) )
        break;
      if ( v19[0] >= v10[1] )
        return __readgsdword(0x14u);
    }
    sub_3DAA0(v15);
  }
  return __readgsdword(0x14u);
}
