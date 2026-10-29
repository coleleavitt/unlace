/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: utf8_utf16
// Address: 0x00000000000B20BC

//----- (00000000000B20BC) ----------------------------------------------------
__int64 __fastcall utf8_utf16(void **a1, unsigned __int8 *a2, int a3)
{
  unsigned __int64 StatusReg; // x23
  int v4; // w9
  int v7; // w8
  int v8; // w24
  unsigned int utf8_char; // w21
  void *v10; // x8
  __int64 v11; // x25
  _WORD *v12; // x0
  void *v13; // x8
  __int64 v14; // x25
  _WORD *v15; // x0
  unsigned __int8 *v17[2]; // [xsp+0h] [xbp-60h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( a3 <= 0 )
    v4 = 16;
  else
    v4 = a3;
  v17[1] = *(unsigned __int8 **)(StatusReg + 40);
  v17[0] = a2;
  if ( (unsigned __int64)a1[2] < v4 )
    *a1 = qvector_reserve((pthread_mutex_t *)a1, *a1, v4, 2u);
  if ( !a3 )
    return 1;
  v7 = 1;
  while ( 1 )
  {
    v8 = v7;
    utf8_char = get_utf8_char(v17);
    if ( !utf8_char )
    {
      if ( a3 < 0 )
        return 1;
      ++v17[0];
      goto LABEL_20;
    }
    if ( utf8_char == -1 )
      return 0;
    if ( HIWORD(utf8_char) )
    {
      v10 = a1[1];
      if ( v10 )
        v11 = (__int64)v10 - 1;
      else
        v11 = 0;
      if ( (unsigned __int64)a1[2] >= v11 + 2 )
      {
        v12 = *a1;
      }
      else
      {
        v12 = qvector_reserve((pthread_mutex_t *)a1, *a1, v11 + 2, 2u);
        *a1 = v12;
      }
      a1[1] = (void *)(v11 + 2);
      v12[v11] = ((utf8_char - 0x10000) >> 10) & 0x3FF | 0xD800;
      LOWORD(utf8_char) = utf8_char & 0x3FF | 0xDC00;
      *((_WORD *)*a1 + v11 + 1) = 0;
    }
LABEL_20:
    v13 = a1[1];
    if ( v13 )
      v14 = (__int64)v13 - 1;
    else
      v14 = 0;
    if ( (unsigned __int64)a1[2] >= v14 + 2 )
    {
      v15 = *a1;
    }
    else
    {
      v15 = qvector_reserve((pthread_mutex_t *)a1, *a1, v14 + 2, 2u);
      *a1 = v15;
    }
    a1[1] = (void *)(v14 + 2);
    v15[v14] = utf8_char;
    *((_WORD *)*a1 + v14 + 1) = 0;
    v7 = v8 + 1;
    if ( (a3 & 0x80000000) == 0 && v8 >= a3 )
      return 1;
  }
}
