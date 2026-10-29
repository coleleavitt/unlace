/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100055E10
// Address: 0x0000000100055E10

//----- (0000000100055E10) ----------------------------------------------------
__int64 __fastcall sub_100055E10(__int64 a1, __int64 a2)
{
  __int64 v4; // x22
  char *v5; // x21
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // x9
  char *v8; // x8
  char *v9; // x21
  char *v10; // x0
  char v11; // w21
  _QWORD *v12; // x1
  __int64 v13; // x8
  bool v14; // cf
  __int64 v15; // x8
  __int64 v16; // x22
  void *v17; // x0
  void *v18; // x0
  char *__s1; // [xsp+8h] [xbp-58h] BYREF
  __int64 v21; // [xsp+10h] [xbp-50h]
  __int64 v22; // [xsp+18h] [xbp-48h]
  char v23; // [xsp+27h] [xbp-39h] BYREF

  __s1 = nullptr;
  v21 = 0;
  v22 = 0;
  sub_10004AF44((__int64)&__s1, (_QWORD *)a2, *(_QWORD **)(a1 + 16));
  v4 = v21;
  if ( v21 )
  {
    v5 = __s1;
    if ( !strcmp(__s1, ".debug_info") )
    {
      *(_BYTE *)(a1 + 24) = 1;
      goto LABEL_33;
    }
  }
  else
  {
    v5 = &byte_10007AE40;
  }
  if ( strcmp(v5, ".note.gnu.build-id") || (v6 = *(unsigned int *)(a2 + 16), WORD1(v6)) )
  {
    v9 = __s1;
    if ( v4 )
      v10 = __s1;
    else
      v10 = &byte_10007AE40;
    if ( strcmp(v10, ".gnu_debuglink") )
    {
      if ( !v9 )
        return 0;
      goto LABEL_34;
    }
    qlseek(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
    while ( qlread(*(_QWORD *)(a1 + 8), &v23, 1u) == 1 )
    {
      v11 = v23;
      if ( !v23 )
        goto LABEL_33;
      v12 = *(_QWORD **)(a1 + 56);
      v13 = *(_QWORD *)(a1 + 64);
      v14 = v13 != 0;
      v15 = v13 - 1;
      if ( v14 )
        v16 = v15;
      else
        v16 = 0;
      if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v16 + 2) )
      {
        v12 = qvector_reserve((_QWORD *)(a1 + 56), v12, v16 + 2, 1u);
        *(_QWORD *)(a1 + 56) = v12;
      }
      *(_QWORD *)(a1 + 64) = v16 + 2;
      *((_BYTE *)v12 + v16) = v11;
      *(_BYTE *)(*(_QWORD *)(a1 + 56) + v16 + 1) = 0;
    }
    v17 = *(void **)(a1 + 56);
    if ( v17 )
    {
      *(_QWORD *)(a1 + 64) = 0;
      qfree(v17);
      *(_QWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 72) = 0;
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( v7 >= v6 )
    {
      if ( v7 != v6 )
      {
        v23 = 0;
        sub_10001B764((_QWORD **)(a1 + 32), v6, &v23);
      }
    }
    else
    {
      v8 = *(char **)(a1 + 32);
      if ( *(_QWORD *)(a1 + 48) < v6 )
      {
        v8 = (char *)qvector_reserve((_QWORD *)(a1 + 32), *(_QWORD **)(a1 + 32), *(unsigned int *)(a2 + 16), 1u);
        *(_QWORD *)(a1 + 32) = v8;
        v7 = *(_QWORD *)(a1 + 40);
      }
      bzero(&v8[v7], v6 - v7);
      *(_QWORD *)(a1 + 40) = v6;
    }
    qlseek(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
    if ( qlread(*(_QWORD *)(a1 + 8), *(void **)(a1 + 32), *(unsigned int *)(a2 + 16)) != *(_DWORD *)(a2 + 16) )
    {
      v18 = *(void **)(a1 + 32);
      if ( v18 )
      {
        *(_QWORD *)(a1 + 40) = 0;
        qfree(v18);
        *(_QWORD *)(a1 + 32) = 0;
        *(_QWORD *)(a1 + 48) = 0;
      }
    }
  }
LABEL_33:
  v9 = __s1;
  if ( __s1 )
  {
LABEL_34:
    v21 = 0;
    qfree(v9);
  }
  return 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
