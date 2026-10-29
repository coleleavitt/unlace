/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100058034
// Address: 0x0000000100058034

//----- (0000000100058034) ----------------------------------------------------
void __fastcall sub_100058034(void **a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // x8
  char *v6; // x22
  __int64 v7; // x21
  char *v8; // x24
  char *v9; // x25
  void *v10; // x0
  unsigned __int64 v12; // x9
  unsigned __int64 v14; // x22
  __int64 v15; // x23
  _QWORD *v16; // x0
  unsigned __int64 v17; // x8
  unsigned __int64 v18; // x21
  __int64 v19; // x22
  _QWORD *v20; // x0
  __int64 v21; // [xsp+8h] [xbp-68h] BYREF
  void *v22; // [xsp+10h] [xbp-60h]
  __int64 v23; // [xsp+18h] [xbp-58h]
  __int64 v24; // [xsp+20h] [xbp-50h]

  v5 = (unsigned __int64)a1[1];
  v6 = (char *)(v5 - a2);
  if ( v5 > a2 )
  {
    v7 = 32 * a2;
    do
    {
      v8 = (char *)*a1;
      if ( *(int *)((char *)*a1 + v7) >= -1 )
      {
        v9 = &v8[v7];
        v10 = *(void **)&v8[v7 + 8];
        if ( v10 )
        {
          *((_QWORD *)v9 + 2) = 0;
          qfree(v10);
          *((_QWORD *)v9 + 1) = 0;
          *(_QWORD *)&v8[v7 + 24] = 0;
        }
        *(_DWORD *)&v8[v7] = -2;
      }
      v7 += 32;
      --v6;
    }
    while ( v6 );
LABEL_18:
    a1[1] = (void *)a2;
    return;
  }
  if ( v5 >= a2 )
    return;
  v12 = (unsigned __int64)a1[2];
  if ( (unsigned __int64)*a1 > a3 || (unsigned __int64)*a1 + 32 * v12 <= a3 )
  {
    if ( v12 < a2 )
    {
      *a1 = qvector_reserve(a1, *a1, a2, 0x20u);
      v5 = (unsigned __int64)a1[1];
    }
    v14 = a2 - v5;
    if ( a2 > v5 )
    {
      v15 = 32 * v5;
      do
      {
        v16 = (char *)*a1 + v15;
        *(_DWORD *)v16 = -2;
        v16[2] = 0;
        v16[3] = 0;
        v16[1] = 0;
        sub_10005825C(v16, a3);
        v15 += 32;
        --v14;
      }
      while ( v14 );
    }
    goto LABEL_18;
  }
  LODWORD(v21) = -2;
  v23 = 0;
  v24 = 0;
  v22 = nullptr;
  sub_10005825C(&v21, a3);
  if ( (unsigned __int64)a1[2] < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 0x20u);
  v17 = (unsigned __int64)a1[1];
  v18 = a2 - v17;
  if ( a2 > v17 )
  {
    v19 = 32 * v17;
    do
    {
      v20 = (char *)*a1 + v19;
      *(_DWORD *)v20 = -2;
      v20[2] = 0;
      v20[3] = 0;
      v20[1] = 0;
      sub_10005825C(v20, (__int64)&v21);
      v19 += 32;
      --v18;
    }
    while ( v18 );
  }
  a1[1] = (void *)a2;
  if ( (int)v21 >= -1 && v22 )
  {
    v23 = 0;
    qfree(v22);
  }
}
