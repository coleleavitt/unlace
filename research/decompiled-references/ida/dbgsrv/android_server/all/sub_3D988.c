/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D988
// Address: 0x000000000003D988

//----- (000000000003D988) ----------------------------------------------------
_QWORD *__fastcall sub_3D988(pthread_mutex_t *a1, _QWORD *a2, char *s2)
{
  struct __pthread_internal_list *next; // x8
  __int64 v4; // x24
  __int64 v5; // x25
  int v7; // w21
  _QWORD *v8; // x22
  __int64 v9; // x23
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x29
  unsigned __int64 v12; // x20
  __int64 v13; // t1
  unsigned int v14; // w8
  const char *v15; // x0
  __int64 v17; // [xsp+8h] [xbp-68h]

  next = a1[3].__list.__next;
  v4 = *(&a1[3].__align + 1);
  v5 = *(&a1[3].__align + 2);
  v7 = (int)a2;
  v8 = (_QWORD *)(v4 + 8 * ((unsigned __int64)next / 0x38));
  v17 = (__int64)&a1[3];
  if ( v5 == v4 )
    v9 = 0;
  else
    v9 = *v8 + 72 * ((unsigned __int64)next % 0x38);
  v10 = (unsigned __int64)next + a1[4].__align;
  v11 = v10 / 0x38;
  v12 = v10 % 0x38;
  while ( 1 )
  {
    if ( v5 == v4 )
    {
      if ( !v9 )
        return nullptr;
    }
    else if ( v9 == *(_QWORD *)(v4 + 8 * v11) + 72 * v12 )
    {
      return nullptr;
    }
    v14 = *(_DWORD *)(v9 + 20) & 0xFFFFFFF;
    if ( v14 != v7 )
      goto LABEL_16;
    if ( v14 > 0xB || ((1 << *(_BYTE *)(v9 + 20)) & 0x902) == 0 )
      break;
    if ( *(_QWORD *)(v9 + 32) )
      v15 = *(const char **)(v9 + 24);
    else
      v15 = &byte_F154B;
    a1 = (pthread_mutex_t *)strcmp(v15, s2);
    if ( !(_DWORD)a1 )
    {
      sub_3DB0C(v17, v8, v9);
      return (_QWORD *)(&dword_0 + 1);
    }
LABEL_16:
    v9 += 72;
    if ( v9 - *v8 == 4032 )
    {
      v13 = v8[1];
      ++v8;
      v9 = v13;
    }
  }
  if ( !under_debugger )
    a1 = interr(3295);
  __break(1u);
  return sub_3DB0C((__int64)a1, a2, (__int64)s2);
}
// 3DB09: variable 'a2' is possibly undefined
// 3DB09: variable 's2' is possibly undefined
// 0: using guessed type int dword_0;
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
