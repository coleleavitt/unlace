unsigned __int64 __fastcall sub_1AF000(__int64 a1, void (***a2)(_QWORD, _QWORD, const char *, ...), __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // r12d
  int i; // r15d
  const char *v7; // r9
  const char *v10; // [rsp+10h] [rbp-58h] BYREF
  __int128 v11; // [rsp+18h] [rbp-50h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 48);
  v12 = __readfsqword(0x28u);
  v4 = **(_DWORD **)(a1 + 64);
  v5 = (v4 >> 20) & 4;
  if ( (v4 & 0x40000000) != 0 )
    v5 = (**(_DWORD **)(a1 + 64) >> 20) & 4 | 2;
  if ( (v4 & 0x20000000) != 0 )
    v5 |= 1u;
  if ( v3 )
  {
    for ( i = 0; ; ++i )
    {
      v11 = 0;
      v10 = nullptr;
      sub_1ADBD0((int *)v3, (__int64 *)&v10, a3, v5, 0.0);
      v7 = s1;
      if ( (_QWORD)v11 )
        v7 = v10;
      (**a2)(a2, 0, "%d.%2d %s\n", *(_DWORD *)(a1 + 72), i, v7);
      if ( v10 )
      {
        *(_QWORD *)&v11 = 0;
        qfree(v10);
      }
      v3 = *(_QWORD *)(v3 + 8);
      if ( !v3 )
        break;
    }
  }
  return v12 - __readfsqword(0x28u);
}
