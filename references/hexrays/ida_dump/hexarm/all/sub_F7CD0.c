__int64 __fastcall sub_F7CD0(__int64 a1, int a2)
{
  __int64 v2; // rbx
  char *v3; // rdi
  unsigned int v4; // ebx
  char *v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 72);
  v8 = __readfsqword(0x28u);
  v6 = nullptr;
  v7 = 0;
  if ( (unsigned __int8)sub_11FFA0(a1, 0) )
  {
    v3 = *(char **)(a1 + 40);
  }
  else
  {
    v3 = nullptr;
    if ( *(_QWORD *)v2 != -1 )
    {
      sub_1D24F0(&v6, *(_QWORD *)v2, 0, 0);
      v3 = (char *)s1;
      if ( (_QWORD)v7 )
        v3 = v6;
    }
  }
  v4 = sub_F4C30(v3, a2, (__int64 *)(v2 + 288), *(_DWORD *)(v2 + 8));
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  return v4;
}
