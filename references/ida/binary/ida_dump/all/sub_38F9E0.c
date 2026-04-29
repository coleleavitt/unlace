__int64 __fastcall sub_38F9E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  unsigned int v4; // ebp
  char *v5; // rsi
  char *v6; // r12
  __int64 v8; // rdx
  char v9; // [rsp+Fh] [rbp-69h] BYREF
  char *s2; // [rsp+10h] [rbp-68h] BYREF
  __int128 v11; // [rsp+18h] [rbp-60h]
  char *s1; // [rsp+30h] [rbp-48h] BYREF
  __int128 v13; // [rsp+38h] [rbp-40h]
  unsigned __int64 v14; // [rsp+48h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 32);
  v14 = __readfsqword(0x28u);
  if ( !sub_1CE9E0(*(_QWORD *)(v1 + 8)) )
    return 0;
  v3 = *(_QWORD *)(a1 + 32);
  v9 = 1;
  s2 = nullptr;
  s1 = nullptr;
  v11 = 0;
  v13 = 0;
  sub_260EF0(v3, (__int64)&s2, &v9);
  v4 = sub_382A60((__int64)&s1, 0, (__int64)s2, (__int64)"Please enter function comment");
  if ( !(_BYTE)v4 )
    goto LABEL_8;
  if ( !(_QWORD)v11 )
  {
    v5 = (char *)::s1;
    if ( !(_QWORD)v13 )
      goto LABEL_8;
LABEL_14:
    v6 = s1;
    if ( !strcmp(s1, v5) )
    {
      v4 = 0;
      goto LABEL_9;
    }
    goto LABEL_15;
  }
  v5 = s2;
  if ( (_QWORD)v13 )
    goto LABEL_14;
  if ( *s2 )
  {
LABEL_15:
    set_func_cmt();
    sub_38F620(a1, 1u, v8);
    v6 = s1;
    goto LABEL_9;
  }
LABEL_8:
  v6 = s1;
  v4 = 0;
LABEL_9:
  if ( v6 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  if ( s2 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v4;
}
