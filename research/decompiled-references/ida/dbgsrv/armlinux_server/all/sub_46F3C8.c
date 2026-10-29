/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46F3C8
// Address: 0x000000000046F3C8

//----- (000000000046F3C8) ----------------------------------------------------
__int64 __fastcall sub_46F3C8(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 (*v6)(void); // x5
  char *v7; // x21
  __int64 v8; // x2
  char *v10; // x23
  char *v11; // x0
  size_t v14; // x0
  size_t v15; // x24
  unsigned __int64 v16; // x25
  void *v17; // x0
  char *s; // [xsp+48h] [xbp-18h] BYREF
  char *v19; // [xsp+50h] [xbp-10h]

  v6 = *(__int64 (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( (char *)v6 == (char *)sub_4628F0 )
    v7 = (char *)sub_46F150(a1, *(_BYTE *)(*a2 + 4), a2, 0);
  else
    v7 = (char *)v6();
  if ( v7 )
  {
    v8 = *(unsigned int *)v7;
    s = v7 + 5;
    v19 = &v7[v8 + 5];
    a3 = sub_48E5A8((unsigned __int8 **)&s, (unsigned __int64)v19);
    if ( a3 < 0 && a4 != 0 )
    {
      v10 = s;
      if ( v19 > s )
      {
        v11 = s + 1;
        if ( !*s )
        {
LABEL_17:
          s = v11;
          if ( v10 && (v14 = strlen(v10), (v15 = v14) != 0) )
          {
            v16 = v14 + 1;
            v17 = *(void **)a4;
            if ( v16 > *(_QWORD *)(a4 + 16) )
            {
              v17 = sub_491288(a4, *(void **)a4, v16, 1u);
              *(_QWORD *)a4 = v17;
            }
            *(_QWORD *)(a4 + 8) = v16;
            memmove(v17, v10, v15);
            *(_BYTE *)(*(_QWORD *)a4 + v15) = 0;
          }
          else
          {
            *(_QWORD *)(a4 + 8) = 0;
          }
          goto LABEL_14;
        }
        while ( v19 != v11 )
        {
          if ( !*v11++ )
            goto LABEL_17;
        }
      }
      *(_QWORD *)(a4 + 8) = 0;
    }
LABEL_14:
    j__free(v7);
  }
  return (unsigned int)a3;
}
// 46F3C8: could not find valid save-restore pair for x24
