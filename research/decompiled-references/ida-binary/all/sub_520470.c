__int64 __fastcall sub_520470(_QWORD *a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  const char *v5; // rax
  bool v7; // zf
  _QWORD *v9; // rax
  const char *v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // ebx
  void (*v14)(); // rax
  _QWORD *v15; // rax
  const char *v16; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v5 = &s1;
  v7 = *(_QWORD *)(a2 + 8) == 0;
  v18 = __readfsqword(0x28u);
  v16 = nullptr;
  v17 = 0;
  if ( !v7 )
    v5 = *(const char **)a2;
  sub_48E5C0((__int64 *)&v16, v5, a3, 0);
  if ( a4 )
  {
    v9 = (_QWORD *)a1[27];
    if ( v9 )
    {
      v10 = &s1;
      if ( !(_QWORD)v17 )
      {
LABEL_6:
        v11 = dirtree_mkdir(*v9, v10);
        goto LABEL_7;
      }
    }
    else
    {
      v9 = (_QWORD *)a1[26];
      v10 = &s1;
      if ( !(_QWORD)v17 )
        goto LABEL_6;
    }
    v10 = v16;
    goto LABEL_6;
  }
  v14 = *(void (**)())(*a1 + 528LL);
  if ( v14 != nullsub_299 )
    ((void (__fastcall *)(_QWORD *, const char **, _QWORD, __int64))v14)(a1, &v16, 0, a5);
  v15 = (_QWORD *)a1[27];
  if ( v15 )
  {
    v10 = &s1;
    if ( !(_QWORD)v17 )
    {
LABEL_14:
      v11 = dirtree_link(*v15, &s1, 1);
      goto LABEL_7;
    }
  }
  else
  {
    v15 = (_QWORD *)a1[26];
    v10 = &s1;
    if ( !(_QWORD)v17 )
      goto LABEL_14;
  }
  v10 = v16;
  v11 = dirtree_link(*v15, v16, 1);
LABEL_7:
  v12 = v11;
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, v10);
  }
  return v12;
}
