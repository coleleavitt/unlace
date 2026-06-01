__int64 __fastcall sub_60D250(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 *v4; // rax
  __int64 v5; // rax
  char *v6; // rbx
  unsigned int v7; // ebp
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v2 = *a1;
  s1 = nullptr;
  v10 = 0;
  v3 = *(_QWORD *)(v2 + 1672);
  v4 = sub_505D70(v3 + 1624, a2);
  v5 = sub_510BD0(v3, (__int64 *)&s1, v4, 0);
  v6 = s1;
  v7 = 1;
  if ( v5 > 0 && (_QWORD)v10 && (unsigned __int64)(v10 - 1) > 6 )
    LOBYTE(v7) = strncmp(s1, "__objc_", 7u) != 0;
  if ( v6 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v6);
  }
  return v7;
}
