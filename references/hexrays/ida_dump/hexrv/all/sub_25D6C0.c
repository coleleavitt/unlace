__int64 __fastcall sub_25D6C0(
        __int64 a1,
        unsigned int a2,
        void (__fastcall ***a3)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *),
        unsigned __int8 a4)
{
  __int64 v7; // rsi
  _BYTE *v9; // rdi
  char *v10; // rbx
  char *v11; // rax
  char v12; // dl
  __int64 v13; // rax
  void *v14; // r9
  const char *v15; // rbx
  _BYTE *v17; // [rsp+0h] [rbp-78h] BYREF
  __int128 v18; // [rsp+8h] [rbp-70h]
  _BYTE v19[19]; // [rsp+20h] [rbp-58h] BYREF
  char v20; // [rsp+33h] [rbp-45h] BYREF
  char v21; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v7 = *(int *)(a1 + 16);
  v22 = __readfsqword(0x28u);
  v17 = nullptr;
  v18 = 0;
  tag_addr(&v17, v7, 0);
  v9 = v17;
  v10 = v19;
  v11 = v17;
  while ( 1 )
  {
    v12 = *v11++;
    *v10 = v12;
    if ( !v12 )
      break;
    if ( ++v10 == &v20 )
    {
      v20 = 0;
      if ( !v9 )
        goto LABEL_7;
      goto LABEL_5;
    }
  }
  if ( !v9 )
    goto LABEL_6;
LABEL_5:
  *(_QWORD *)&v18 = 0;
  qfree(v9);
LABEL_6:
  if ( v10 >= &v21 )
  {
    if ( !under_debugger )
      sub_37DDE0(519);
    BUG();
  }
LABEL_7:
  v13 = *(int *)(a1 + 8);
  *v10 = 0;
  v14 = &unk_3F421A;
  v15 = (const char *)*(&off_4B2D60 + 2 * v13);
  if ( !a4 )
    v14 = &unk_3F3793;
  (**a3)(a3, a2, &unk_3F40C9, v19, v15, v14);
  return a4 + a2 + (unsigned int)strlen(v15);
}
