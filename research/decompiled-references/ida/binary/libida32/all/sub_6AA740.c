__int64 __fastcall sub_6AA740(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  const char *v8; // rdi
  char *v9; // rax
  const char *v10; // rsi
  const char *v11; // rsi
  void *v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+8h] [rbp-50h]
  void *ptr; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+28h] [rbp-30h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v6 = *a1;
  v17 = __readfsqword(0x28u);
  sub_699670((__int64)&v13, *(__int64 **)(v6 + 1480), a2, a4, a5);
  ptr = nullptr;
  v8 = (const char *)v13;
  v16 = 0;
  if ( !v14 )
    v8 = haystack;
  v9 = sub_69C980(v8, (__int64)&ptr);
  if ( *v9 == 32 )
  {
    if ( v9[1] != 114 || (v10 = "__return_address", v9[2]) )
    {
      if ( v9[1] != 115 || v9[2] )
        goto LABEL_9;
      v10 = "__saved_registers";
    }
    sub_69C0D0((__int64 *)&ptr, v10);
    v11 = haystack;
    if ( (_QWORD)v16 )
      v11 = (const char *)ptr;
    sub_6993D0(*(_QWORD **)(*a1 + 1480), v11, a2);
  }
LABEL_9:
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    qfree(ptr);
  }
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
  }
  return 1;
}

