/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468548
// Address: 0x0000000000468548

//----- (0000000000468548) ----------------------------------------------------
__int64 __fastcall sub_468548(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x2
  const char *v5; // x19
  unsigned int v7; // w1
  unsigned __int64 v8; // x2
  void *v9; // x0
  void **v10; // x22
  __int64 v11; // x25
  unsigned __int64 v12; // x19
  void *v13; // x0
  char v14; // w23
  __int64 v15; // x19
  void *v16; // x0
  char v17; // [xsp+4Fh] [xbp-21h] BYREF
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  __int64 v19; // [xsp+58h] [xbp-18h]
  __int64 v20; // [xsp+60h] [xbp-10h]

  v4 = *(_QWORD **)(a1 + 16);
  ptr = nullptr;
  v19 = 0;
  v20 = 0;
  sub_467088(&ptr, (__int64 *)a2, v4);
  v5 = (const char *)&qword_4B2D48;
  if ( v19 )
    v5 = (const char *)ptr;
  if ( !strcmp(v5, ".debug_info") )
  {
    *(_BYTE *)(a1 + 24) = 1;
    goto LABEL_5;
  }
  if ( !strcmp(v5, ".note.gnu.build-id") )
  {
    v7 = *(_DWORD *)(a2 + 16);
    if ( v7 <= 0xFFFF )
    {
      v8 = *(_QWORD *)(a1 + 40);
      if ( v7 > v8 )
      {
        sub_4684E8(a1 + 32, v7);
      }
      else if ( v7 < v8 )
      {
        *(_QWORD *)(a1 + 40) = v7;
      }
      sub_48C428(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
      if ( *(_DWORD *)(a2 + 16) != sub_48C160(*(_QWORD *)(a1 + 8), *(void **)(a1 + 32), *(unsigned int *)(a2 + 16)) )
      {
        v9 = *(void **)(a1 + 32);
        if ( v9 )
        {
          *(_QWORD *)(a1 + 40) = 0;
          j__free(v9);
          *(_QWORD *)(a1 + 32) = 0;
          *(_QWORD *)(a1 + 48) = 0;
        }
      }
      goto LABEL_5;
    }
  }
  if ( strcmp(v5, ".gnu_debuglink") )
    goto LABEL_5;
  sub_48C428(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
  v10 = (void **)(a1 + 56);
  while ( sub_48C160(*(_QWORD *)(a1 + 8), &v17, 1u) == 1 )
  {
    v14 = v17;
    if ( !v17 )
      goto LABEL_5;
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      v11 = v15 - 1;
      v12 = v15 + 1;
      v13 = *v10;
      if ( *(_QWORD *)(a1 + 72) >= v12 )
        goto LABEL_19;
    }
    else
    {
      v12 = 2;
      v11 = 0;
      v13 = *v10;
      if ( *(_QWORD *)(a1 + 72) >= 2u )
        goto LABEL_19;
    }
    v13 = sub_491288(a1 + 56, v13, v12, 1u);
    *v10 = v13;
LABEL_19:
    *(_QWORD *)(a1 + 64) = v12;
    *((_BYTE *)v13 + v11) = v14;
    *(_BYTE *)(*(_QWORD *)(a1 + 56) + v11 + 1) = 0;
  }
  v16 = *(void **)(a1 + 56);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 64) = 0;
    j__free(v16);
    *(_QWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 72) = 0;
  }
LABEL_5:
  if ( ptr )
  {
    v19 = 0;
    j__free(ptr);
  }
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
