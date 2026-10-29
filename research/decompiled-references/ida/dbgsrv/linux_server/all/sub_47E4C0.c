/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E4C0
// Address: 0x000000000047E4C0

//----- (000000000047E4C0) ----------------------------------------------------
__int64 __fastcall sub_47E4C0(__int64 a1)
{
  unsigned __int64 v2; // rbx
  const void *v3; // rbp
  void *v4; // rdi
  unsigned int v5; // ebx
  char *v7; // rax
  size_t v8; // rax
  size_t v9; // rbp
  size_t v10; // r13
  void *v11; // rdi
  void *v12; // rax
  pthread_mutex_t *v13; // [rsp+8h] [rbp-1040h] BYREF
  char s[4104]; // [rsp+10h] [rbp-1038h] BYREF
  unsigned __int64 v15; // [rsp+1018h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  sub_482EF0(&v13);
  v2 = xmmword_4C84A8;
  if ( (unsigned __int64)xmmword_4C84A8 <= 1 )
  {
    v7 = (char *)sub_47E390();
    sub_4821A0(s, v7, 4096);
    if ( s[0] )
    {
      sub_480480(s, 4096, (unsigned __int8 *)s, ".idapro", 0);
      if ( sub_480B00(s) )
      {
        v8 = strlen(s);
        v9 = v8;
        if ( !v8 )
        {
LABEL_11:
          *(_QWORD *)&xmmword_4C84A8 = 0;
          v5 = 0;
          goto LABEL_7;
        }
      }
      else
      {
        sub_480980(s, 0x1FFu);
        v8 = strlen(s);
        v9 = v8;
        if ( !v8 )
          goto LABEL_11;
      }
      v10 = v8 + 1;
      v11 = qword_4C84A0;
      if ( *((_QWORD *)&xmmword_4C84A8 + 1) < v8 + 1 )
      {
        qword_4C84A0 = sub_481540((__int64)&qword_4C84A0, qword_4C84A0, v8 + 1, 1u);
        v11 = qword_4C84A0;
      }
      *(_QWORD *)&xmmword_4C84A8 = v10;
      memmove(v11, s, v9);
      *((_BYTE *)qword_4C84A0 + v9) = 0;
    }
    v2 = xmmword_4C84A8;
    if ( (unsigned __int64)xmmword_4C84A8 <= 1 )
    {
      v5 = 0;
      goto LABEL_7;
    }
  }
  if ( (void **)a1 != &qword_4C84A0 )
  {
    v3 = qword_4C84A0;
    v4 = *(void **)a1;
    if ( *(_QWORD *)(a1 + 16) < v2 )
    {
      v12 = sub_481540(a1, *(void **)a1, v2, 1u);
      *(_QWORD *)a1 = v12;
      v4 = v12;
    }
    *(_QWORD *)(a1 + 8) = v2;
    memmove(v4, v3, v2 - 1);
    *(_BYTE *)(*(_QWORD *)a1 + v2 - 1) = 0;
  }
  v5 = 1;
LABEL_7:
  sub_482F10(v13);
  return v5;
}
// 4C84A8: using guessed type __int128 xmmword_4C84A8;
