__int64 __fastcall sub_438700(__int64 a1, __int64 a2, char *a3, unsigned int a4)
{
  const char *v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int128 v14; // [rsp+8h] [rbp-30h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v5 = a3;
  v15 = __readfsqword(0x28u);
  v13 = 0;
  v14 = 0;
  if ( (unsigned __int8)sub_4339F0((const char *)&v13, a3, a4)
    && (v5 = (const char *)&v13,
        (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, char *))(*(_QWORD *)a1 + 8LL))(a1, &v13, a3)) )
  {
    v6 = 3;
  }
  else
  {
    v6 = 7;
  }
  v7 = v13;
  if ( v13 )
  {
    v8 = v14;
    if ( (_QWORD)v14 )
    {
      v9 = 0;
      do
      {
        v10 = (__int64 *)(v7 + 48 * v9);
        v11 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v11, v5);
          v7 = v13;
        }
        ++v9;
      }
      while ( v8 != v9 );
    }
    *(_QWORD *)&v14 = 0;
    qfree(v7, v5);
  }
  return v6;
}
