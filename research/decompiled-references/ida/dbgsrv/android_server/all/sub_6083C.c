/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6083C
// Address: 0x000000000006083C

//----- (000000000006083C) ----------------------------------------------------
__int64 __fastcall sub_6083C(pthread_mutex_t *a1, __int64 a2, __int64 a3, signed __int64 a4)
{
  pthread_mutex_t *v4; // x19
  struct __pthread_internal_list *next; // x9
  __int64 v6; // x1
  unsigned int owner; // w8
  __int64 v8; // x2
  __int64 align; // x20
  unsigned __int64 v10; // x21
  char *v11; // x1
  unsigned __int64 v12; // x8
  int v13; // w23
  char *v14; // x0
  __int64 v15; // x20
  __int64 v16; // x8
  _BYTE *v17; // x0
  char v19[4]; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v20; // [xsp+8h] [xbp-38h]

  v4 = a1;
  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  next = a1[5].__list.__next;
  v6 = *((unsigned int *)&a1[5].__list.__prev->__prev + (_QWORD)next - 1);
  if ( next )
    a1[5].__list.__next = (struct __pthread_internal_list *)((char *)next - 1);
  owner = a1[5].__owner;
  v8 = -4 - (_DWORD)v6 + owner;
  if ( -4 - (_DWORD)v6 + owner )
  {
    ((void (__fastcall *)(__int64))loc_68E54)(a1[5].__align);
    v4[5].__size[12] = -1;
    return 0;
  }
  if ( owner > 4 )
  {
    align = a1[5].__align;
    v10 = owner - 5;
    a1[5].__owner = v10;
    v11 = *(char **)align;
    v12 = *(_QWORD *)(align + 8);
    v13 = *(unsigned __int8 *)(*(_QWORD *)align + v10);
    if ( v12 >= v10 )
    {
      if ( v12 != v10 )
      {
        v19[0] = 0;
        sub_5BBF4((pthread_mutex_t *)align, v10, v19);
      }
    }
    else
    {
      if ( *(_QWORD *)(align + 16) < v10 )
      {
        v14 = (char *)qvector_reserve((pthread_mutex_t *)align, v11, v10, 1u);
        v12 = *(_QWORD *)(align + 8);
        v11 = v14;
        *(_QWORD *)align = v14;
      }
      memset(&v11[v12], 0, v10 - v12);
      *(_QWORD *)(align + 8) = v10;
    }
    v4[5].__size[12] = -87;
    if ( v13 == 171 )
    {
      v15 = v4[5].__align;
      v4[5].__size[12] = -85;
      v16 = *(_QWORD *)(v15 + 8);
      if ( *(_QWORD *)(v15 + 16) >= (unsigned __int64)(v16 + 1) )
      {
        v17 = *(_BYTE **)v15;
      }
      else
      {
        v17 = qvector_reserve((pthread_mutex_t *)v15, *(void **)v15, v16 + 1, 1u);
        v16 = *(_QWORD *)(v15 + 8);
        *(_QWORD *)v15 = v17;
      }
      v17[v16] = -85;
      ++*(_QWORD *)(v15 + 8);
      ++v4[5].__owner;
      sub_5EB14((__int64)v4, 0);
      sub_5EB14((__int64)v4, 0);
    }
    else
    {
      sub_609EC(v4, (__int64)v11, v8, a4);
    }
    return 0;
  }
  if ( !under_debugger )
    a1 = interr(708);
  __break(1u);
  return sub_609EC(a1, v6, v8, a4);
}
// 60960: variable 'v11' is possibly undefined
// 60960: variable 'v8' is possibly undefined
// 60960: variable 'a4' is possibly undefined
// 609E9: variable 'v6' is possibly undefined
// 168DF0: using guessed type char under_debugger;
