_QWORD *__fastcall sub_4F11A0(__int64 a1, _QWORD *a2, _QWORD *a3, int a4, __int64 a5, __int64 a6, int a7, __int64 a8)
{
  int v10; // r13d
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  _QWORD *v15; // r14
  unsigned int v16; // r12d
  void *v17; // rax
  __int64 v19; // rax

  if ( a1 != a2[1] || a1 != a3[1] )
    return nullptr;
  v10 = a5;
  v11 = a6;
  if ( a4 == a7 )
  {
    v12 = a2[2];
    if ( !v12 )
    {
      if ( a4 )
        goto LABEL_9;
      v13 = a3[2];
      if ( !v13 )
        goto LABEL_15;
      goto LABEL_7;
    }
    if ( a4 == *(_DWORD *)(v12 - 4) )
    {
      v13 = a3[2];
      if ( !v13 )
      {
        v14 = 0;
        goto LABEL_8;
      }
LABEL_7:
      v14 = *(_DWORD *)(v13 - 4);
LABEL_8:
      if ( a4 != v14 )
        goto LABEL_9;
      if ( a7 )
      {
        v19 = 0;
        while ( *(_DWORD *)(a8 + 4 * v19) == (_DWORD)v19 && *(_DWORD *)(a5 + 4 * v19) == *(_DWORD *)(a6 + 4 * v19) )
        {
          if ( a7 == ++v19 )
            goto LABEL_15;
        }
        goto LABEL_9;
      }
LABEL_15:
      v15 = (_QWORD *)sub_186B270(8u);
      *v15 = off_1C4FF58;
      return v15;
    }
  }
LABEL_9:
  v15 = (_QWORD *)sub_186B270(0x38u);
  v16 = (unsigned int)sub_4EC5D0(a3);
  v17 = __dynamic_cast(
          a2,
          (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
          (const struct __class_type_info *)&`typeinfo for'datalog::udoc_relation,
          0);
  if ( !v17 )
    __cxa_bad_cast();
  sub_4F9B80((_DWORD)v15, (_DWORD)v17, v16, a4, v10, v11, a7, a8);
  return v15;
}

