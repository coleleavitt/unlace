__int64 __fastcall sub_3880E0(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v3; // rax
  __int64 v4; // rdi
  _QWORD *v5; // r13
  unsigned int v6; // ebp
  char *v7; // rsi
  __int64 v8; // rdx
  char *v9; // r12
  __int64 v11; // rdx
  unsigned __int8 v12; // [rsp+Fh] [rbp-69h] BYREF
  char *s2; // [rsp+10h] [rbp-68h] BYREF
  __int128 v14; // [rsp+18h] [rbp-60h]
  char *s1; // [rsp+30h] [rbp-48h] BYREF
  __int128 v16; // [rsp+38h] [rbp-40h]
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 32);
  v17 = __readfsqword(0x28u);
  v3 = sub_1C8060(*(_QWORD *)(v1 + 8));
  if ( !v3 )
    return 0;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = v3;
  v12 = 1;
  s2 = nullptr;
  s1 = nullptr;
  v14 = 0;
  v16 = 0;
  sub_259B70(v4, (__int64)&s2, (char *)&v12);
  v6 = sub_37B160((__int64)&s1, 0, (__int64)s2, (__int64)"Please enter function comment");
  if ( !(_BYTE)v6 )
    goto LABEL_8;
  if ( !(_QWORD)v14 )
  {
    v7 = (char *)::s1;
    if ( !(_QWORD)v16 )
      goto LABEL_8;
LABEL_14:
    v9 = s1;
    if ( !strcmp(s1, v7) )
    {
      v6 = 0;
      goto LABEL_9;
    }
    v8 = v12;
    goto LABEL_16;
  }
  v7 = s2;
  if ( (_QWORD)v16 )
    goto LABEL_14;
  if ( *s2 )
  {
    v8 = v12;
    v9 = (char *)::s1;
LABEL_16:
    set_func_cmt(v5, v9, v8);
    sub_387D20(a1, 1u, v11);
    v9 = s1;
    goto LABEL_9;
  }
LABEL_8:
  v9 = s1;
  v6 = 0;
LABEL_9:
  if ( v9 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v9);
  }
  if ( s2 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(s2);
  }
  return v6;
}
