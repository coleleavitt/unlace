__int64 __fastcall sub_384BF0(__int64 a1, char *a2, __int64 a3, char *a4)
{
  bool v6; // zf
  const char *v8; // r14
  char *v9; // r15
  char *v10; // rax
  const char *v11; // rsi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v14; // [rsp+8h] [rbp-70h]
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v6 = *(_BYTE *)(a1 + 232) == 0;
  v17 = __readfsqword(0x28u);
  if ( !v6 )
    goto LABEL_9;
  v8 = *(const char **)(a1 + 72);
  if ( !v8 )
LABEL_17:
    sub_3757B0();
  v9 = strchr(*(const char **)(a1 + 72), 43);
  v10 = strchr(v8, 64);
  if ( !v9 )
  {
    if ( v10 && v10[1] )
      goto LABEL_6;
    goto LABEL_17;
  }
  if ( v10 && !strchr(v10, 43) )
  {
LABEL_6:
    if ( !*a2 )
      qstrncpy(a2, "*.idb", a3);
    sub_3757B0();
  }
LABEL_9:
  if ( a4 )
  {
    ptr = nullptr;
    v15 = 0;
    v14 = 0;
    v16 = 0;
    sub_3847D0(a1, (__int64 *)&ptr, (_BYTE *)(a1 + 230), a4, (__int64)&v15, 1);
    v11 = haystack;
    if ( (_QWORD)v14 )
      v11 = (const char *)ptr;
    qstrncpy(a2, v11, a3);
    if ( ptr )
    {
      *(_QWORD *)&v14 = 0;
      qfree(ptr);
    }
  }
  else
  {
    qtmpnam(a2);
    *(_BYTE *)(a1 + 230) = 1;
  }
  return sub_57A620(a2);
}

