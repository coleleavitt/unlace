/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81100
// Address: 0x00081100

//----- (00081100) --------------------------------------------------------
int __fastcall sub_81100(int a1, int a2, int a3)
{
  _BOOL4 v3; // r7
  int *v4; // r4
  int *v5; // r6
  int v6; // r5
  int v7; // r0
  int v8; // r0
  unsigned int v9; // r1
  sem_t *v10; // r0
  int v11; // r0
  unsigned int v12; // r1
  sem_t *v13; // r0
  int v15; // [sp+0h] [bp-Ch]
  int v16; // [sp+4h] [bp-8h]

  v3 = 1;
  if ( a3 << 25 )
    v3 = ((a3 + 1) & 0x7E) != 0;
  v4 = *(int **)(a1 + 12);
  v5 = (int *)(a1 + 12);
  LOBYTE(v6) = 0;
  if ( (int *)(a1 + 12) != v4 )
  {
    v6 = 0;
    v16 = a3;
    v15 = a2;
    do
    {
      if ( !*((_BYTE *)v4 + 28) )
      {
        if ( !(v6 << 31) && ((v7 = v4[2], v7 == -1) || v7 == a2) && (a3 != 0xFFFF || (v4[5] & 8) != 0) )
        {
          v4[2] = a2;
          v4[3] = a3;
          *((_BYTE *)v4 + 28) = 1;
          v11 = v4[6];
          v6 = 1;
          if ( v11 )
          {
            v12 = *(_DWORD *)(v11 + 4);
            v13 = (sem_t *)(v11 + 12);
            if ( v12 > 1 )
              v13 = (sem_t *)v13->__align;
            sem_post(v13);
            a2 = v15;
            a3 = v16;
            v6 = 1;
          }
        }
        else if ( v3 && v4[2] == a2 )
        {
          *((_BYTE *)v4 + 28) = 1;
          *((_BYTE *)v4 + 16) = 1;
          v8 = v4[6];
          if ( v8 )
          {
            v9 = *(_DWORD *)(v8 + 4);
            v10 = (sem_t *)(v8 + 12);
            if ( v9 > 1 )
              v10 = (sem_t *)v10->__align;
            sem_post(v10);
            a3 = v16;
            a2 = v15;
          }
        }
      }
      v4 = (int *)*v4;
    }
    while ( v5 != v4 );
  }
  return v6 & 1;
}
