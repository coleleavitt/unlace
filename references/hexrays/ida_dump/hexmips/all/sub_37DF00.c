__int64 __fastcall sub_37DF00(char a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  const char *v11; // rcx
  const char *v12; // rax
  _UNKNOWN **v14; // [rsp+0h] [rbp-A8h] BYREF
  int v15; // [rsp+8h] [rbp-A0h]
  __int64 v16; // [rsp+10h] [rbp-98h]
  const char *v17; // [rsp+20h] [rbp-88h] BYREF
  __int128 v18; // [rsp+28h] [rbp-80h]
  __int128 v19; // [rsp+40h] [rbp-68h] BYREF
  __int64 v20; // [rsp+50h] [rbp-58h]
  __int64 v21; // [rsp+58h] [rbp-50h]
  __int64 v22; // [rsp+60h] [rbp-48h]
  _UNKNOWN ***v23; // [rsp+68h] [rbp-40h]
  unsigned __int64 v24; // [rsp+78h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v14 = &off_4C6B98;
  v19 = 0;
  v15 = 0;
  v16 = a2;
  v20 = 0;
  v21 = 0x50000FFFFFFFFLL;
  v22 = 1;
  v23 = &v14;
  v6 = 1;
  v23 = (_UNKNOWN ***)((__int64 (__fastcall *)(_UNKNOWN ***))idaplace_t__clone)(&v14);
  v17 = nullptr;
  v18 = 0;
  if ( !a1 )
  {
    while ( (unsigned __int8)bookmarks_t_get_desc(&v17, &v19, v6, 0) )
    {
      if ( ++v6 == 1025 )
        goto LABEL_9;
    }
  }
  sub_675A0((__int64 *)&v17, a3, a4, v7, v8, v9);
  v10 = v18;
  if ( (unsigned __int64)v18 > 1 )
  {
    v11 = v17;
    v12 = &v17[v18 - 2];
    if ( *v12 != 10 )
      goto LABEL_8;
    *v12 = 0;
    v10 = v18;
  }
  v11 = s1;
  if ( v10 )
    v11 = v17;
LABEL_8:
  bookmarks_t_mark(&v19, v6, 0, v11, 0);
LABEL_9:
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  if ( v23 )
    qfree(v23);
  return 1;
}
