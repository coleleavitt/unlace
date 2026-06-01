__int64 __fastcall sub_590C90(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // r12
  char *v5; // rdx
  unsigned int v6; // ebp
  __int64 v7; // rbx
  char *v8; // rax
  void *v9; // rdi
  _QWORD v11[2]; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v13 = 0;
  ptr = nullptr;
  v11[0] = sub_634EF0(a1);
  v11[1] = sub_634F70(a1);
  if ( (unsigned int)sub_7BD850(a1, &ptr, v11, a3) )
  {
    if ( (_QWORD)v13 )
      sub_368890();
    sub_378D50();
  }
  v4 = v13;
  v5 = (char *)ptr;
  v6 = v13;
  if ( ptr )
  {
    if ( (_QWORD)v13 )
    {
      v7 = 0;
      do
      {
        v8 = &v5[24 * v7];
        v9 = *(void **)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v8 + 1) = 0;
          qfree(v9);
          v5 = (char *)ptr;
        }
        ++v7;
      }
      while ( v4 != v7 );
    }
    *(_QWORD *)&v13 = 0;
    qfree(v5);
  }
  return v6;
}
