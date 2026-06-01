__int64 __fastcall sub_5EC2E0(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rax
  char *v5; // rbx
  _BYTE *v6; // r12
  char *v7; // rax
  char *v8; // [rsp+8h] [rbp-40h] BYREF
  char *s1; // [rsp+10h] [rbp-38h] BYREF
  __int128 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v2 = 0;
  v11 = __readfsqword(0x28u);
  v8 = a2 + 1;
  if ( (*a2 & 0x3F) != 0x3D )
    return v2;
  s1 = nullptr;
  v10 = 0;
  sub_567540((__int64)&s1, &v8);
  v4 = *(_QWORD *)(a1 + 128);
  v5 = s1;
  v6 = *(_BYTE **)(v4 + 72);
  if ( (_QWORD)v10 )
  {
    v2 = 1;
    if ( strcmp(s1, *(const char **)(v4 + 72)) )
    {
      v7 = v5;
      goto LABEL_6;
    }
  }
  else
  {
    v2 = 1;
    v7 = &byte_2CCB1E1;
    if ( *v6 )
    {
LABEL_6:
      v2 = 0;
      if ( *v7 == 36 )
        LOBYTE(v2) = *v6 == 36;
    }
  }
  if ( v5 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v5);
  }
  return v2;
}
