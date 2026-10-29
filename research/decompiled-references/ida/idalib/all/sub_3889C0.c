__int64 __fastcall sub_3889C0(__int64 a1, char *a2, __int64 a3, char *a4)
{
  bool v6; // zf
  const char *v8; // r14
  const char *v9; // rsi
  char *v11; // rax
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v13; // [rsp+8h] [rbp-60h]
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+28h] [rbp-40h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v6 = *(_BYTE *)(a1 + 280) == 0;
  v16 = __readfsqword(0x28u);
  if ( v6 )
  {
    v8 = *(const char **)(a1 + 72);
    if ( v8 )
    {
      if ( strchr(*(const char **)(a1 + 72), 43) )
        goto LABEL_4;
      v11 = strchr(v8, 64);
      if ( v11 && v11[1] )
        goto LABEL_5;
    }
    sub_379110();
  }
LABEL_4:
  if ( !sub_388000(a1) )
  {
LABEL_5:
    if ( !*a2 )
      qstrncpy(a2, "*.i64", a3);
    sub_379110();
  }
  if ( a4 )
  {
    ptr = nullptr;
    v14 = 0;
    v13 = 0;
    v15 = 0;
    sub_3885A0(a1, (__int64 *)&ptr, (_BYTE *)(a1 + 278), a4, (__int64)&v14, 1);
    v9 = haystack;
    if ( (_QWORD)v13 )
      v9 = (const char *)ptr;
    qstrncpy(a2, v9, a3);
    if ( ptr )
    {
      *(_QWORD *)&v13 = 0;
      qfree(ptr);
    }
  }
  else
  {
    qtmpnam(a2);
    *(_BYTE *)(a1 + 278) = 1;
  }
  return sub_593F40(a2);
}
