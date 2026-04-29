__int64 __fastcall sub_38FDB0(__int64 a1, __m128i *a2)
{
  __int64 v3; // rdi
  const char *v4; // r12
  __int64 v5; // rcx
  unsigned int v6; // ebp
  __int64 v7; // r8
  int v8; // r9d
  char *v9; // r14
  __int64 v10; // rdi
  __int64 v12; // rdx
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 32);
  v15 = __readfsqword(0x28u);
  s1 = nullptr;
  v14 = 0;
  v4 = sub_257EB0(v3, (unsigned __int64 *)a2, 1);
  v6 = sub_382FA0((__int64)&s1, 0, (__int64)v4, (__int64)"Please enter comment");
  if ( !(_BYTE)v6 )
    goto LABEL_7;
  if ( !v4 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    v9 = (char *)::s1;
    if ( (_QWORD)v14 )
      v9 = s1;
    goto LABEL_13;
  }
  if ( !(_QWORD)v14 )
  {
    if ( *v4 )
    {
      v10 = *(_QWORD *)(a1 + 32);
      v9 = (char *)::s1;
      goto LABEL_13;
    }
LABEL_7:
    v9 = s1;
    v6 = 0;
    goto LABEL_8;
  }
  v9 = s1;
  if ( strcmp(s1, v4) )
  {
    v10 = *(_QWORD *)(a1 + 32);
LABEL_13:
    sub_25CAF0(v10, a2, v9, v5, v7, v8);
    sub_2B6A10(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) + 112LL),
      **(_QWORD **)(a1 + 32),
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 72LL));
    sub_38FB60(a1, 1u, v12);
    v9 = s1;
    goto LABEL_8;
  }
  v6 = 0;
LABEL_8:
  if ( v9 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v9);
  }
  return v6;
}
