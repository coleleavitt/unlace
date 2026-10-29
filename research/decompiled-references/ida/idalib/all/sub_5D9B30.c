unsigned __int64 __fastcall sub_5D9B30(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 *v6; // rax
  unsigned __int64 v8; // r14
  __int64 v10; // rdx
  const char *v11; // rsi
  const char *v12; // r8
  void *v13[4]; // [rsp+0h] [rbp-498h] BYREF
  void *v14; // [rsp+20h] [rbp-478h] BYREF
  __int128 v15; // [rsp+28h] [rbp-470h]
  void *ptr; // [rsp+40h] [rbp-458h] BYREF
  __int128 v17; // [rsp+48h] [rbp-450h]
  char v18[1032]; // [rsp+60h] [rbp-438h] BYREF
  unsigned __int64 v19; // [rsp+468h] [rbp-30h]

  v6 = (__int64 *)(*(_QWORD *)(a1 + 48) + ((__int64)a3 << 6));
  v19 = __readfsqword(0x28u);
  v8 = *v6;
  sub_5D8400((__int64)v13, *v6);
  if ( (a4 & 1) != 0 )
  {
    v14 = nullptr;
    v15 = 0;
    generate_disasm_line(&v14, v8, 6);
    v10 = 0;
    v11 = haystack;
    ptr = nullptr;
    v17 = 0;
    if ( (_QWORD)v15 )
    {
      v11 = (const char *)v14;
      v10 = (unsigned int)(v15 - 1);
    }
    qstr2user(&ptr, v11, v10);
    v12 = haystack;
    if ( (_QWORD)v17 )
      v12 = (const char *)ptr;
    sub_391AE0(a2, (__int64)"\"%d\" [ label = \"%s: %s\", ", a3, (const char *)v13[0], v12);
    if ( ptr )
    {
      *(_QWORD *)&v17 = 0;
      qfree(ptr);
    }
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14);
    }
  }
  else
  {
    sub_5D7900(*(_QWORD *)(a1 + 16), v8, v18, (a4 & 2) != 0, 0);
    if ( v18[0] )
      sub_391AE0(a2, (__int64)"\"%d\" [ label = \"%s\\l%s\", ", a3, (const char *)v13[0], v18);
    else
      sub_391AE0(a2, (__int64)"\"%d\" [ label = \"%s\", ", a3, (const char *)v13[0]);
  }
  if ( v13[0] )
  {
    v13[1] = nullptr;
    qfree(v13[0]);
  }
  return v19 - __readfsqword(0x28u);
}
