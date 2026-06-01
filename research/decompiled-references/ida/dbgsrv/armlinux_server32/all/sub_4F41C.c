/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F41C
// Address: 0x0004F41C

//----- (0004F41C) --------------------------------------------------------
int __fastcall sub_4F41C(int *a1, int a2, _BYTE *a3)
{
  char *v5; // r10
  int v6; // r8
  int v7; // r0
  int v8; // r9
  int v9; // r3
  int *v10; // r3
  char *v11; // r3
  char *v12; // r7
  int v13; // r4
  char *v14; // r5
  void *v15; // r0
  char *v16; // r3
  char *v18; // r3
  char *v19; // r9
  int v20; // r4
  char *v21; // r5
  void *v22; // r0
  char *v23; // r3
  char v24; // [sp+7h] [bp-15h] BYREF
  void *ptr[3]; // [sp+8h] [bp-14h] BYREF

  if ( *(_DWORD *)(a2 + 4) )
    v5 = *(char **)a2;
  else
    v5 = (char *)&dword_8DB98;
  v6 = 0;
  v7 = sub_4D4DC((int)a1, v5);
  *a3 = 0;
  v8 = v7;
  if ( !v7 )
    return 0;
  if ( !sub_4BA28(a1, v7) )
  {
    v9 = *(unsigned __int8 *)(v8 + 13);
    memset(ptr, 0, sizeof(ptr));
    if ( !v9 )
    {
LABEL_6:
      if ( *(_DWORD *)(v8 + 4) > 1u )
      {
        sub_4B840(a1, v8, (__int64 *)ptr);
        a1[10] = a1[8] - 1;
        if ( *(_DWORD *)(v8 + 4) )
          v10 = *(int **)v8;
        else
          v10 = &dword_8DB98;
        *a1 = (int)v10;
        a1[1] = (int)v10;
      }
      v11 = (char *)ptr[0];
      *a3 = 1;
      if ( v11 )
      {
        v12 = (char *)ptr[1];
        if ( ptr[1] )
        {
          v13 = 0;
          v14 = nullptr;
          do
          {
            v15 = *(void **)&v11[v13];
            v16 = &v11[v13];
            if ( v15 )
            {
              *((_DWORD *)v16 + 1) = 0;
              sub_77F70(v15);
            }
            ++v14;
            v13 += 12;
            v11 = (char *)ptr[0];
          }
          while ( v12 != v14 );
        }
        ptr[1] = nullptr;
        sub_77F70(v11);
      }
      return 0;
    }
    v6 = sub_4EFC0((int)a1, (char **)ptr, &v24);
    if ( !v6 && v24 )
    {
      if ( (void *)*(unsigned __int8 *)(v8 + 12) == ptr[1] )
        goto LABEL_6;
      sub_70C04(0, v5);
      v6 = sub_70B98(39);
    }
    v18 = (char *)ptr[0];
    if ( ptr[0] )
    {
      v19 = (char *)ptr[1];
      if ( ptr[1] )
      {
        v20 = 0;
        v21 = nullptr;
        do
        {
          v22 = *(void **)&v18[v20];
          v23 = &v18[v20];
          if ( v22 )
          {
            *((_DWORD *)v23 + 1) = 0;
            sub_77F70(v22);
          }
          ++v21;
          v20 += 12;
          v18 = (char *)ptr[0];
        }
        while ( v19 != v21 );
      }
      ptr[1] = nullptr;
      sub_77F70(v18);
    }
  }
  return v6;
}
// 8DB98: using guessed type int dword_8DB98;
