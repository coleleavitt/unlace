/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D888
// Address: 0x000000000044D888

//----- (000000000044D888) ----------------------------------------------------
__int64 __fastcall sub_44D888(_QWORD *a1, __int64 a2, const char **a3, __int64 **a4)
{
  int v7; // w21
  __int64 *v8; // x25
  int v10; // w1
  __int64 v11; // x0
  unsigned int v12; // w19
  __int64 v14; // x0
  __int64 v15; // x0
  const char *v16; // x2
  const char *v17; // x3
  char *v18; // x1
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  __int64 v20; // [xsp+48h] [xbp-18h]
  __int64 v21; // [xsp+50h] [xbp-10h]

  v7 = *(_DWORD *)(a2 + 52);
  v8 = *a4;
  if ( !v7 )
  {
LABEL_7:
    v14 = a1[1];
    ptr = nullptr;
    v20 = 0;
    v21 = 0;
    v15 = sub_43E4F8(v14, v7);
    if ( *(_QWORD *)(v15 + 64) )
    {
      v16 = *(const char **)(v15 + 56);
      if ( a3[1] )
      {
LABEL_9:
        v17 = *a3;
LABEL_10:
        sub_40CD68((__int64)&ptr, "%s.%s", v16, v17);
        v18 = (char *)&qword_4B2D48;
        if ( v20 )
          v18 = (char *)ptr;
        sub_486A58(0, v18);
        sub_4869C8(1538);
        sub_44D6D0(a1);
        v12 = 0;
        if ( ptr )
        {
          v20 = 0;
          j__free(ptr);
        }
        return v12;
      }
    }
    else
    {
      v16 = (const char *)&qword_4B2D48;
      if ( a3[1] )
        goto LABEL_9;
    }
    v17 = (const char *)&qword_4B2D48;
    goto LABEL_10;
  }
  v10 = *(_DWORD *)(a2 + 52);
  while ( 1 )
  {
    v11 = sub_43E4F8(a1[1], v10);
    if ( *(_DWORD *)(v11 + 80) != -1 )
      break;
    v10 = *(_DWORD *)(v11 + 48);
    if ( !v10 )
      goto LABEL_7;
  }
  *a4 = nullptr;
  return (unsigned __int8)sub_44CB48((__int64)a1, a2, *(_DWORD *)(v11 + 80), (__int64)a3, v8, 1u);
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
