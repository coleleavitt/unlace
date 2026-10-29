unsigned __int64 __fastcall sub_5BDF20(__int64 a1, __int64 a2, int a3, char a4)
{
  unsigned int *v4; // rax
  unsigned int v6; // r14d
  __int64 v8; // rdx
  const char *v9; // rsi
  void *v10[4]; // [rsp+0h] [rbp-498h] BYREF
  void *v11; // [rsp+20h] [rbp-478h] BYREF
  __int128 v12; // [rsp+28h] [rbp-470h]
  void *ptr; // [rsp+40h] [rbp-458h] BYREF
  __int128 v14; // [rsp+48h] [rbp-450h]
  char v15[1032]; // [rsp+60h] [rbp-438h] BYREF
  unsigned __int64 v16; // [rsp+468h] [rbp-30h]

  v4 = (unsigned int *)(*(_QWORD *)(a1 + 48) + ((__int64)a3 << 6));
  v16 = __readfsqword(0x28u);
  v6 = *v4;
  sub_5BCB40((__int64)v10, *v4);
  if ( (a4 & 1) != 0 )
  {
    v11 = nullptr;
    v12 = 0;
    generate_disasm_line(&v11, v6, 6);
    v8 = 0;
    v9 = haystack;
    ptr = nullptr;
    v14 = 0;
    if ( (_QWORD)v12 )
    {
      v9 = (const char *)v11;
      v8 = (unsigned int)(v12 - 1);
    }
    qstr2user(&ptr, v9, v8);
    sub_38CDA0();
    if ( ptr )
    {
      *(_QWORD *)&v14 = 0;
      qfree(ptr);
    }
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11);
    }
  }
  else
  {
    sub_5BC100(*(_QWORD *)(a1 + 16), v6, v15, (a4 & 2) != 0, 1);
    if ( v15[0] )
      v15[0] = 10;
    sub_38CDA0();
  }
  if ( v10[0] )
  {
    v10[1] = nullptr;
    qfree(v10[0]);
  }
  return v16 - __readfsqword(0x28u);
}

