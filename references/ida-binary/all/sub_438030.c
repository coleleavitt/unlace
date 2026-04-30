__int64 __fastcall sub_438030(unsigned __int8 (__fastcall ***a1)(_QWORD, __int64 *), char *a2, unsigned int a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v10; // [rsp+0h] [rbp-8h] BYREF
  __int128 vars0; // [rsp+8h] [rbp+0h]
  unsigned __int64 vars10; // [rsp+18h] [rbp+10h]

  vars10 = __readfsqword(0x28u);
  v10 = 0;
  vars0 = 0;
  if ( (unsigned __int8)sub_4339F0((const char *)&v10, a2, a3) )
  {
    a2 = (char *)&v10;
    v3 = (**a1)(a1, &v10);
  }
  else
  {
    v3 = 0;
  }
  v4 = v10;
  if ( v10 )
  {
    v5 = vars0;
    if ( (_QWORD)vars0 )
    {
      v6 = 0;
      do
      {
        v7 = (__int64 *)(v4 + 48 * v6);
        v8 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v8, a2);
          v4 = v10;
        }
        ++v6;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&vars0 = 0;
    qfree(v4, a2);
  }
  return v3;
}
