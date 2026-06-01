/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140014C10
// Address: 0x0000000140014C10

//----- (0000000140014C10) ----------------------------------------------------
const char *__fastcall sub_140014C10(__int64 a1, _QWORD **a2, unsigned __int64 *a3)
{
  _QWORD **v3; // r9
  _QWORD *v4; // rax
  __int64 v5; // r10
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 **v12; // rdx
  __int64 i; // rcx
  __int64 *j; // rdx

  v3 = (_QWORD **)*a2;
  v4 = (_QWORD *)**a2;
  if ( v4 == *a2 )
    return nullptr;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *a3;
  v7 = a3[1];
  while ( 1 )
  {
    v8 = v4[6] & v5;
    v9 = v6;
    v10 = v5 & (v8 + v4[7]);
    if ( v8 >= v6 )
      v9 = v4[6] & v5;
    v11 = v7;
    if ( v10 <= v7 )
      v11 = v10;
    if ( v11 >= v9 && v11 > v9 )
      break;
    v12 = (__int64 **)v4[2];
    if ( *((_BYTE *)v12 + 25) )
    {
      for ( i = v4[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
      {
        if ( v4 != *(_QWORD **)(i + 16) )
          break;
        v4 = (_QWORD *)i;
      }
      v4 = (_QWORD *)i;
    }
    else
    {
      v4 = (_QWORD *)v4[2];
      for ( j = *v12; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v4 = j;
    }
    if ( v4 == v3 )
      return nullptr;
  }
  if ( v4[9] )
    return (const char *)v4[8];
  else
    return Str1;
}
