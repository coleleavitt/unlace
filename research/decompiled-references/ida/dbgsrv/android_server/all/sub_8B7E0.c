/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B7E0
// Address: 0x000000000008B7E0

//----- (000000000008B7E0) ----------------------------------------------------
const char *__fastcall sub_8B7E0(const char *result, pthread_mutex_t *a2, char a3)
{
  const void *v3; // x22
  const char *v4; // x20
  size_t v6; // x0
  unsigned __int64 v7; // x23
  size_t v8; // x21
  void *align; // x0
  __int64 v10; // x0
  __int64 v11; // x8
  size_t v12; // x21
  __int64 v13; // x23
  __int64 v14; // x24
  unsigned __int64 v15; // x22
  _BYTE *v16; // x0
  int v17; // w21
  unsigned __int8 *v18; // x22
  int v19; // t1

  *(&a2->__align + 1) = 0;
  if ( (a3 & 1) == 0 )
  {
    v3 = result + 1034;
    v4 = result;
    v6 = strlen(result + 1034);
    if ( v6 )
    {
      v7 = v6 + 1;
      v8 = v6;
      if ( *(&a2->__align + 2) >= v6 + 1 )
      {
        align = (void *)a2->__align;
      }
      else
      {
        align = qvector_reserve(a2, (void *)a2->__align, v7, 1u);
        a2->__align = (__int64)align;
      }
      *(&a2->__align + 1) = v7;
      memmove(align, v3, v8);
      *(_BYTE *)(a2->__align + v8) = 0;
    }
    else
    {
      *(&a2->__align + 1) = 0;
    }
    v10 = __strlen_chk("|", 2);
    v11 = *(&a2->__align + 1);
    v12 = v10;
    if ( v11 )
      v13 = v11 - 1;
    else
      v13 = 0;
    v14 = v13 + v10;
    v15 = v13 + v10 + 1;
    if ( *(&a2->__align + 2) >= v15 )
    {
      v16 = (_BYTE *)a2->__align;
    }
    else
    {
      v16 = qvector_reserve(a2, (void *)a2->__align, v15, 1u);
      a2->__align = (__int64)v16;
    }
    *(&a2->__align + 1) = v15;
    v16[v14] = 0;
    result = (const char *)memmove((void *)(a2->__align + v13), "|", v12);
    v17 = *((unsigned __int16 *)v4 + 4);
    if ( *((_WORD *)v4 + 4) )
    {
      v18 = (unsigned __int8 *)(v4 + 10);
      do
      {
        v19 = *v18++;
        result = (const char *)sub_4C730(a2, "%02X", v19);
        --v17;
      }
      while ( v17 );
    }
  }
  return result;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
