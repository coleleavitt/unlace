/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C864
// Address: 0x0004C864

//----- (0004C864) --------------------------------------------------------
int __fastcall sub_4C864(_DWORD *a1, char *a2, int a3)
{
  pthread_mutex_t *v6; // r11
  _DWORD *v7; // r3
  int v8; // r8
  void *v9; // r0
  char *v10; // r3
  char *v11; // r0
  const char *v12; // r5
  size_t v13; // r7
  void **v14; // r1
  unsigned int v15; // r0
  int v16; // r3
  unsigned int v17; // r2
  void *v18; // r5
  size_t v19; // r7
  void *v20; // r8
  void **v21; // r2
  void *v22; // r0
  int v23; // r4
  void **v25; // r0
  char *v26; // [sp+8h] [bp-24h]
  int v27; // [sp+Ch] [bp-20h]
  const char *v28; // [sp+14h] [bp-18h] BYREF
  void *ptr; // [sp+18h] [bp-14h] BYREF
  size_t v30; // [sp+1Ch] [bp-10h]
  void *v31; // [sp+20h] [bp-Ch]

  v6 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  if ( !a3 )
  {
    v7 = (_DWORD *)a1[3];
    if ( v7 )
    {
      v8 = a1[4];
      if ( v8 )
      {
        do
        {
          v9 = (void *)v7[3 * a3];
          v10 = (char *)&v7[3 * a3];
          if ( v9 )
          {
            *((_DWORD *)v10 + 1) = 0;
            sub_77F70(v9);
          }
          ++a3;
          v7 = (_DWORD *)a1[3];
        }
        while ( v8 != a3 );
      }
      a1[4] = 0;
      sub_77F70(v7);
      a1[3] = 0;
      a1[5] = 0;
    }
  }
  if ( a2 )
  {
    v11 = sub_77FAC(a2);
    v26 = v11;
    if ( !v11 )
    {
      v23 = 0;
      goto LABEL_22;
    }
    v12 = sub_79544(v11, ":", &v28);
    if ( v12 )
    {
      v27 = (int)(a1 + 3);
      do
      {
        if ( *v12 )
        {
          ptr = nullptr;
          v30 = 0;
          v31 = nullptr;
          v13 = strlen(v12);
          ptr = sub_78018((int)&ptr, nullptr, v13 + 1, 1u);
          v30 = v13 + 1;
          memmove(ptr, v12, v13);
          *((_BYTE *)ptr + v13) = 0;
          v14 = (void **)a1[3];
          if ( v14 > &ptr )
          {
            v15 = a1[5];
            v16 = a1[4];
            v17 = v16 + 1;
LABEL_25:
            if ( v15 < v17 )
            {
              v14 = (void **)sub_78018(v27, v14, v17, 0xCu);
              v16 = a1[4];
              a1[3] = v14;
            }
            v25 = &v14[3 * v16];
            *v25 = ptr;
            v25[1] = (void *)v30;
            v25[2] = v31;
            ++a1[4];
            goto LABEL_19;
          }
          v15 = a1[5];
          v16 = a1[4];
          v17 = v16 + 1;
          if ( &ptr >= &v14[3 * v15] )
            goto LABEL_25;
          v18 = ptr;
          v19 = v30;
          v20 = v31;
          ptr = nullptr;
          v30 = 0;
          v31 = nullptr;
          if ( v17 > v15 )
          {
            v14 = (void **)sub_78018(v27, v14, v17, 0xCu);
            v16 = a1[4];
            a1[3] = v14;
          }
          v21 = &v14[3 * v16];
          *v21 = v18;
          v22 = ptr;
          v21[1] = (void *)v19;
          v21[2] = v20;
          ++a1[4];
          if ( v22 )
          {
            v30 = 0;
            sub_77F70(v22);
          }
        }
LABEL_19:
        v12 = sub_79544(nullptr, ":", &v28);
      }
      while ( v12 );
    }
    sub_77F70(v26);
  }
  v23 = 1;
LABEL_22:
  sub_7A290(v6);
  return v23;
}
// D4AB0: using guessed type int dword_D4AB0;
