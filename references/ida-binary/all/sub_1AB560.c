_QWORD *__fastcall sub_1AB560(_QWORD *a1, const char *a2, int a3)
{
  const char *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  char *v10; // rbx
  __int64 v11; // rdi
  unsigned int v13; // eax
  _QWORD v14[2]; // [rsp+0h] [rbp-118h] BYREF
  __int16 v15; // [rsp+10h] [rbp-108h]
  _QWORD v16[7]; // [rsp+20h] [rbp-F8h] BYREF
  char v17; // [rsp+58h] [rbp-C0h] BYREF
  char v18; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v19; // [rsp+D8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+E0h] [rbp-38h]
  unsigned __int64 v21; // [rsp+F8h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  sub_1AB230((__int64)v16, a2);
  v5 = (const char *)v14;
  LODWORD(v14[0]) = a3;
  v8 = sub_4AED50(v16, v14, v6, v7);
  v9 = v19;
  if ( v8 < 0 )
    goto LABEL_3;
  if ( v8 >= v20 )
    goto LABEL_3;
  v13 = *(_DWORD *)(v19 + 4 * v8);
  if ( !v13 )
    goto LABEL_3;
  *a1 = 0;
  v15 = 257;
  v14[1] = v13;
  v5 = (_BYTE *)(&word_3C + 1);
  v14[0] = get_idati(v9);
  if ( !(unsigned __int8)create_tinfo(a1, 61, 189, v14) )
  {
    clear_tinfo_t(a1);
    v9 = v19;
LABEL_3:
    *a1 = 0;
    goto LABEL_4;
  }
  v9 = v19;
LABEL_4:
  v16[0] = enum_chooser_t___vtable;
  if ( v9 )
  {
    v20 = 0;
    qfree(v9, v5);
  }
  v10 = &v18;
  v16[0] = &stru_86F6A0;
  do
  {
    v11 = *(_QWORD *)v10;
    if ( *(_QWORD *)v10 )
    {
      *((_QWORD *)v10 + 1) = 0;
      qfree(v11, v5);
    }
    v10 -= 24;
  }
  while ( &v17 != v10 );
  return a1;
}
