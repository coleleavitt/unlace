__int64 __fastcall sub_2AE740(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx

  v3 = a3;
  if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 440);
    if ( (unsigned __int64)a3 < *(_QWORD *)(v4 + 24) )
    {
      v5 = (__int64 *)(*(_QWORD *)(v4 + 16) + 24LL * a3);
      v6 = v5[1];
      if ( v6 )
      {
        v7 = *v5;
        v8 = 0;
        while ( *(_QWORD *)(v7 + 16) <= 1u )
        {
          ++v8;
          v7 += 272;
          if ( v6 == v8 )
            return v3;
        }
        tag_remove(a2, *(_QWORD *)(v7 + 8), 0);
      }
    }
  }
  return v3;
}
