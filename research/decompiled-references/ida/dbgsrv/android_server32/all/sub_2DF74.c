/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DF74
// Address: 0x0002DF74

//----- (0002DF74) --------------------------------------------------------
int __fastcall sub_2DF74(_DWORD *a1, int *a2)
{
  int *v2; // r5
  _DWORD *v3; // r6
  int *v4; // r7
  int v5; // r0
  unsigned int v6; // r4
  char *v7; // r2
  int v8; // r4
  int v9; // r5
  char *v10; // r0
  char *v11; // r6
  void *v12; // r0
  void *v13; // r0
  int v14; // r3
  _DWORD *v15; // r0
  void **v17; // [sp+4h] [bp-28h]
  int v20; // [sp+10h] [bp-1Ch]
  int v21; // [sp+18h] [bp-14h]
  char *v22; // [sp+1Ch] [bp-10h]
  char *v23; // [sp+20h] [bp-Ch]
  _DWORD v24[2]; // [sp+24h] [bp-8h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = a1 + 1;
  v21 = *(unsigned __int8 *)(*a1 + 480);
  v24[0] = 0;
  if ( a2[1] )
  {
    v17 = (void **)(a1 + 1);
    while ( 1 )
    {
      v5 = v3[2];
      v6 = v3[3];
      if ( v6 >= v5 + 1 )
      {
        v14 = *v4;
      }
      else
      {
        v22 = (char *)qvector_reserve((int)v4, nullptr, v5 + 1, 0x1Cu);
        v20 = v3[3];
        v3[3] = v6;
        v7 = (char *)v3[1];
        v8 = v3[2] - 1;
        if ( v8 >= 0 )
        {
          v9 = 0;
          v23 = (char *)v3[1];
          do
          {
            *(_DWORD *)&v22[v9] = *(_DWORD *)&v7[v9];
            *(_DWORD *)&v7[v9] = 0;
            v10 = &v22[v9];
            v11 = &v7[v9];
            *((_DWORD *)v10 + 1) = *(_DWORD *)&v7[v9 + 4];
            *((_DWORD *)v11 + 1) = 0;
            *((_DWORD *)v10 + 2) = *(_DWORD *)&v7[v9 + 8];
            *((_DWORD *)v11 + 2) = 0;
            *((_DWORD *)v10 + 3) = *(_DWORD *)&v7[v9 + 12];
            *((_DWORD *)v11 + 3) = 0;
            *((_DWORD *)v10 + 4) = *(_DWORD *)&v7[v9 + 16];
            *((_DWORD *)v11 + 4) = 0;
            *((_DWORD *)v10 + 5) = *(_DWORD *)&v7[v9 + 20];
            *((_DWORD *)v11 + 5) = 0;
            *((_DWORD *)v10 + 6) = *(_DWORD *)&v7[v9 + 24];
            v12 = *(void **)&v7[v9 + 12];
            if ( v12 )
            {
              *((_DWORD *)v11 + 4) = 0;
              qfree(v12);
              *((_DWORD *)v11 + 3) = 0;
              *((_DWORD *)v11 + 5) = 0;
              v7 = v23;
            }
            v13 = *(void **)&v7[v9];
            if ( v13 )
            {
              *((_DWORD *)v11 + 1) = 0;
              qfree(v13);
              v7 = v23;
              *(_DWORD *)&v23[v9] = 0;
              *((_DWORD *)v11 + 2) = 0;
            }
            v9 += 28;
            --v8;
          }
          while ( v8 >= 0 );
          v4 = (int *)v17;
          v7 = (char *)*v17;
          v2 = a2;
          v3 = a1;
        }
        qfree(v7);
        v3[3] = v20;
        v14 = (int)v22;
        v3[1] = v22;
        v5 = v3[2];
      }
      *(_DWORD *)(v14 + 28 * v5) = 0;
      v15 = (_DWORD *)(v14 + 28 * v5);
      v15[1] = 0;
      v15[2] = 0;
      v15[3] = 0;
      v15[4] = 0;
      v15[5] = 0;
      ++v3[2];
      if ( !sub_32FD8((int)v15, v24, v2, v21 != 0) )
        break;
      if ( v24[0] >= (unsigned int)v2[1] )
        return _stack_chk_guard - v24[1];
    }
    sub_33278(v4);
  }
  return _stack_chk_guard - v24[1];
}
