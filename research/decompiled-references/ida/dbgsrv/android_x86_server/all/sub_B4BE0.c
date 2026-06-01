/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B4BE0
// Address: 0x000B4BE0

//----- (000B4BE0) --------------------------------------------------------
char __cdecl sub_B4BE0(int a1, int a2, int a3)
{
  int v3; // ebx
  bool v4; // dl
  int *v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  bool v9; // cc
  sem_t *v10; // eax
  int v11; // eax
  sem_t *v12; // eax
  bool v14; // [esp+13h] [ebp-19h]
  char v15; // [esp+14h] [ebp-18h]

  v3 = a3;
  v4 = (a3 & 0x7F) == 0 || (((_BYTE)a3 + 1) & 0x7E) != 0;
  v5 = *(int **)(a1 + 12);
  if ( (int *)(a1 + 12) != v5 )
  {
    v6 = a2;
    v15 = 0;
    v14 = v4;
    while ( 1 )
    {
      if ( !*((_BYTE *)v5 + 28) )
      {
        if ( (v15 & 1) == 0 && ((v7 = v5[2], v7 == -1) || v7 == v6) && (v3 != 0xFFFF || (v5[5] & 8) != 0) )
        {
          v5[2] = v6;
          v5[3] = v3;
          *((_BYTE *)v5 + 28) = 1;
          v11 = v5[6];
          v15 = 1;
          if ( v11 )
          {
            v9 = *(_DWORD *)(v11 + 4) <= 1u;
            v12 = (sem_t *)(v11 + 12);
            if ( !v9 )
              v12 = (sem_t *)v12->__align;
            sem_post(v12);
            v4 = v14;
            v3 = a3;
          }
        }
        else
        {
          if ( !v4 )
            goto LABEL_23;
          if ( v5[2] != v6 )
            goto LABEL_23;
          *((_BYTE *)v5 + 16) = 1;
          *((_BYTE *)v5 + 28) = 1;
          v8 = v5[6];
          if ( !v8 )
            goto LABEL_23;
          v9 = *(_DWORD *)(v8 + 4) <= 1u;
          v10 = (sem_t *)(v8 + 12);
          if ( !v9 )
            v10 = (sem_t *)v10->__align;
          sem_post(v10);
          v3 = a3;
          v4 = v14;
        }
        v6 = a2;
      }
LABEL_23:
      v5 = (int *)*v5;
      if ( (int *)(a1 + 12) == v5 )
        return v15 & 1;
    }
  }
  v15 = 0;
  return v15 & 1;
}
