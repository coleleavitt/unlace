/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D398
// Address: 0x0006D398

//----- (0006D398) --------------------------------------------------------
int __fastcall sub_6D398(void **a1, int *a2)
{
  int v3; // r0
  int v4; // r4
  int v5; // r6
  int v6; // r4
  int v7; // r5
  int v8; // r7
  const char *v9; // r0
  void **v10; // r2
  const char *v11; // r6
  void **v12; // r5
  size_t v13; // r0
  size_t v14; // r4
  unsigned int v15; // r7
  void *v16; // r0
  void **v17; // r5
  void **v19; // [sp+8h] [bp-14h]
  int v21; // [sp+14h] [bp-8h] BYREF

  v3 = (*((int (__fastcall **)(void **))*a1 + 3))(a1);
  v4 = -1;
  if ( v3 )
  {
    v5 = v3;
    if ( !*((_BYTE *)a1 + 4) )
    {
      v19 = a1;
      sub_6DA8C((int)a2);
      v6 = *a2;
      v7 = a2[1];
      sub_6CD00(&v21, v5, 0, v7);
      if ( v7 < 1 )
      {
        v4 = 0;
      }
      else
      {
        while ( 1 )
        {
          v8 = sub_6C6CC(v5);
          if ( v8 < 0 )
            break;
          sub_6CD2E(&v21);
          v7 -= v8;
          v6 += v8;
          if ( v7 <= 0 )
          {
            v4 = 0;
            goto LABEL_17;
          }
        }
        (*((void (__fastcall **)(void **))*v19 + 6))(v19);
        *((_BYTE *)v19 + 4) = 1;
        if ( sub_6C6E0(v5) != -15059582 )
        {
          v9 = (const char *)sub_6C6EA(v5);
          v10 = v19;
          v11 = v9;
          v12 = v19 + 2;
          if ( v9 && (v13 = strlen(v9), v10 = v19, v13) )
          {
            v14 = v13;
            v15 = v13 + 1;
            if ( (unsigned int)v19[4] >= v13 + 1 )
            {
              v16 = *v12;
            }
            else
            {
              v16 = qvector_reserve((int)v12, *v12, v15, 1u);
              *v12 = v16;
              v10 = v19;
            }
            v10[3] = (void *)v15;
            v17 = v10;
            memmove(v16, v11, v14);
            *((_BYTE *)v17[2] + v14) = 0;
          }
          else
          {
            v10[3] = nullptr;
          }
        }
        v4 = -1;
      }
LABEL_17:
      sub_6CD16(&v21);
    }
  }
  return v4;
}
