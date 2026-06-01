__int64 __fastcall sub_61F520(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5, _QWORD *a6, __int64 a7)
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r15
  unsigned int v17; // r14d
  __int64 v18; // rbx
  const char *v19; // rsi
  __int64 v25; // [rsp+38h] [rbp-2050h] BYREF
  char v26[4096]; // [rsp+40h] [rbp-2048h] BYREF
  char v27[4104]; // [rsp+1040h] [rbp-1048h] BYREF
  unsigned __int64 v28; // [rsp+2048h] [rbp-40h]

  v9 = *a1;
  v28 = __readfsqword(0x28u);
  qmutex_lock(v9);
  if ( (_BYTE)a7 )
    sub_61F070((__int64)a1, a2, v10, v11, v12, v13);
  qstrncpy(v26, a2, 4096);
  sub_61BAF0(v26);
  qstrncpy(v27, v26, 4096);
  qstrlwr(v27);
  v14 = a1[7];
  v15 = v14 + 80 * a1[8];
  if ( v14 == v15 )
  {
LABEL_17:
    v17 = 0;
  }
  else
  {
    v16 = v14;
    while ( 1 )
    {
      v17 = sub_61D8F0(v16, &v25, v27);
      if ( (_BYTE)v17 )
        break;
      v16 += 80;
      if ( v15 == v16 )
        goto LABEL_17;
    }
    v18 = v25;
    v19 = haystack;
    if ( *(_QWORD *)(v25 + 8) )
      v19 = *(const char **)v25;
    qstrncpy(a2, v19, a3);
    if ( a4 )
    {
      set_file_ext(v27, 4096, a2, a4);
      qstrncpy(a2, v27, a3);
    }
    if ( a5 )
      *a5 = *(_BYTE *)(v18 + 48);
    if ( a6 && *(_QWORD *)(v18 + 32) > 1u )
      *a6 = *(_QWORD *)(v18 + 24);
  }
  qmutex_unlock(v9);
  return v17;
}
