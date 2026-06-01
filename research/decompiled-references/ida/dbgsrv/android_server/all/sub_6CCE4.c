/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6CCE4
// Address: 0x000000000006CCE4

//----- (000000000006CCE4) ----------------------------------------------------
_QWORD *__fastcall sub_6CCE4(_QWORD *result, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // x8
  const void *v6; // x1
  _QWORD *v7; // x19
  unsigned __int8 *align; // x0
  unsigned int v11; // w23
  const void *v12; // x1
  unsigned __int8 *v13; // x0
  unsigned int v14; // w24
  pthread_mutex_t ptr; // [xsp+0h] [xbp-60h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = result[21];
  if ( v4 < a3 )
  {
    v6 = (const void *)result[20];
    v7 = result;
    if ( (unsigned __int64)v6 > v4 )
      goto LABEL_16;
    sub_4968C(&ptr, v6, v4 - (_QWORD)v6);
    if ( *(&ptr.__align + 1) )
      align = (unsigned __int8 *)ptr.__align;
    else
      align = (unsigned __int8 *)&byte_F154B;
    v11 = qustrlen(align);
    result = (_QWORD *)ptr.__align;
    if ( ptr.__align )
    {
      *(&ptr.__align + 1) = 0;
      qfree((void *)ptr.__align);
      ptr.__align = 0;
      *(&ptr.__align + 2) = 0;
    }
    v12 = (const void *)v7[21];
    if ( (unsigned __int64)v12 > a3 )
    {
LABEL_16:
      if ( !under_debugger )
        interr(1833);
      __break(1u);
      sub_39134(result);
    }
    sub_4968C(&ptr, v12, a3 - (_QWORD)v12);
    if ( *(&ptr.__align + 1) )
      v13 = (unsigned __int8 *)ptr.__align;
    else
      v13 = (unsigned __int8 *)&byte_F154B;
    v14 = qustrlen(v13);
    if ( ptr.__align )
    {
      *(&ptr.__align + 1) = 0;
      qfree((void *)ptr.__align);
      ptr.__align = 0;
      *(&ptr.__align + 2) = 0;
    }
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(
                         a2,
                         v11,
                         v14,
                         a4);
    v7[21] = a3;
  }
  return result;
}
// 6CE18: variable 'result' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
