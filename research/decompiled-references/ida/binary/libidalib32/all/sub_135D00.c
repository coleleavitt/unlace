unsigned __int64 __fastcall sub_135D00(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 8) )
  {
    v8 = 0;
    v9 = 0;
    sub_192D70(&v8, 19);
    v2 = v8;
    v3 = v8 + 8 * v9;
    if ( v3 != v8 )
    {
      do
      {
        v4 = *(_QWORD *)(*(_QWORD *)v2 + 2520LL);
        v5 = *(_QWORD *)(v4 + 184);
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
              sub_193820(*(_QWORD *)(v4 + 40));
          }
        }
LABEL_11:
        v2 += 8;
      }
      while ( v3 != v2 );
      v2 = v8;
    }
    if ( v2 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
  }
  return v10 - __readfsqword(0x28u);
}

