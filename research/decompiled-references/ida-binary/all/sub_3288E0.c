unsigned __int64 __fastcall sub_3288E0(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 8) )
  {
    v2 = 19;
    v8 = 0;
    v9 = 0;
    sub_49EE50(&v8, 19);
    v3 = v8;
    v4 = v8 + 8 * v9;
    if ( v4 != v8 )
    {
      do
      {
        v2 = *(_QWORD *)(*(_QWORD *)v3 + 2392LL);
        v5 = *(_QWORD *)(v2 + 184);
        if ( v5 )
        {
          v6 = *(_QWORD **)a1;
          v7 = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
          if ( *(_QWORD *)a1 != v7 )
          {
            while ( v5 != *v6 )
            {
              if ( (_QWORD *)v7 == ++v6 )
                goto LABEL_11;
            }
            if ( v6 != (_QWORD *)v7 )
              sub_4A04A0(*(_QWORD *)(v2 + 40));
          }
        }
LABEL_11:
        v3 += 8;
      }
      while ( v4 != v3 );
      v3 = v8;
    }
    if ( v3 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v3, (const char *)v2);
    }
  }
  return v10 - __readfsqword(0x28u);
}
