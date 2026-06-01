/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4563A8
// Address: 0x00000000004563A8

//----- (00000000004563A8) ----------------------------------------------------
__int64 __fastcall sub_4563A8(__int64 a1, __int64 a2, _BYTE *a3)
{
  char *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x20
  int v8; // w0
  __int64 *v9; // x0
  char *v10; // x1
  __int64 v11; // x22
  __int64 v12; // x20
  __int64 v13; // x21
  void *v14; // x0
  char *v15; // x1
  unsigned int v16; // w24
  char *v18; // x1
  __int64 v19; // x22
  __int64 v20; // x20
  __int64 v21; // x21
  void *v22; // x0
  char *v23; // x1
  char v24; // [xsp+4Fh] [xbp-21h] BYREF
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  __int64 v26; // [xsp+58h] [xbp-18h]
  __int64 v27; // [xsp+60h] [xbp-10h]

  if ( *(_QWORD *)(a2 + 8) )
    v5 = *(char **)a2;
  else
    v5 = (char *)&qword_4B2D48;
  v6 = sub_453858(a1, v5);
  *a3 = 0;
  v7 = v6;
  if ( !v6 || (unsigned __int8)sub_451150(a1, v6) )
    return 0;
  v8 = *(unsigned __int8 *)(v7 + 25);
  ptr = nullptr;
  v26 = 0;
  v27 = 0;
  if ( !v8 )
  {
LABEL_6:
    if ( *(_QWORD *)(v7 + 8) > 1u )
    {
      sub_450DD0(a1, v7, (__int64 *)&ptr);
      *(_DWORD *)(a1 + 80) = *(_QWORD *)(a1 + 64) - 1;
      if ( *(_QWORD *)(v7 + 8) )
        v9 = *(__int64 **)v7;
      else
        v9 = &qword_4B2D48;
      *(_QWORD *)a1 = v9;
      *(_QWORD *)(a1 + 8) = v9;
    }
    v10 = (char *)ptr;
    *a3 = 1;
    if ( v10 )
    {
      v11 = v26;
      if ( v26 )
      {
        v12 = 0;
        v13 = 0;
        do
        {
          v14 = *(void **)&v10[v12];
          v15 = &v10[v12];
          if ( v14 )
          {
            *((_QWORD *)v15 + 1) = 0;
            j__free(v14);
          }
          ++v13;
          v12 += 24;
          v10 = (char *)ptr;
        }
        while ( v11 != v13 );
      }
      v26 = 0;
      j__free(v10);
    }
    return 0;
  }
  v16 = sub_455E08(a1, (__int64)&ptr, &v24);
  if ( !v16 && v24 )
  {
    if ( *(unsigned __int8 *)(v7 + 24) == v26 )
      goto LABEL_6;
    sub_486A58(0, v5);
    v16 = sub_4869C8(39);
  }
  v18 = (char *)ptr;
  if ( ptr )
  {
    v19 = v26;
    if ( v26 )
    {
      v20 = 0;
      v21 = 0;
      do
      {
        v22 = *(void **)&v18[v20];
        v23 = &v18[v20];
        if ( v22 )
        {
          *((_QWORD *)v23 + 1) = 0;
          j__free(v22);
        }
        ++v21;
        v20 += 24;
        v18 = (char *)ptr;
      }
      while ( v19 != v21 );
    }
    v26 = 0;
    j__free(v18);
  }
  return v16;
}
// 4563A8: could not find valid save-restore pair for x25
// 4B2D48: using guessed type __int64 qword_4B2D48;
