void __fastcall sub_20F8D0(__int64 a1, const char *a2)
{
  _QWORD *v2; // r12
  _QWORD *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax

  v2 = (_QWORD *)(a1 + 184);
  v3 = *(_QWORD **)(a1 + 200);
  if ( v3 != (_QWORD *)(a1 + 184) )
  {
    do
    {
      v4 = v3[5];
      if ( v4 )
      {
        v5 = v3[6];
        if ( v5 )
        {
          for ( i = 0; i != v5; ++i )
          {
            v7 = v4 + 32 * i;
            if ( *(int *)v7 >= -1 )
            {
              v8 = *(_QWORD *)(v7 + 8);
              if ( v8 )
              {
                *(_QWORD *)(v7 + 16) = 0;
                qfree(v8, a2);
                v4 = v3[5];
              }
            }
          }
        }
        v3[6] = 0;
        qfree(v4, a2);
        v3[5] = 0;
        v3[7] = 0;
      }
      v3 = (_QWORD *)std::_Rb_tree_increment(v3);
    }
    while ( v3 != v2 );
  }
}
