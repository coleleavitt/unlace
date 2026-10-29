void __fastcall sub_A0E90(__int64 a1)
{
  _QWORD *v1; // r12
  _QWORD *v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbx
  __int64 v6; // rdx

  v1 = (_QWORD *)(a1 + 184);
  v2 = *(_QWORD **)(a1 + 200);
  if ( v2 != (_QWORD *)(a1 + 184) )
  {
    do
    {
      v3 = v2[5];
      if ( v3 )
      {
        v4 = v2[6];
        if ( v4 )
        {
          for ( i = 0; i != v4; ++i )
          {
            v6 = v3 + 32 * i;
            if ( *(int *)v6 >= -1 )
            {
              if ( *(_QWORD *)(v6 + 8) )
              {
                *(_QWORD *)(v6 + 16) = 0;
                qfree();
                v3 = v2[5];
              }
            }
          }
        }
        v2[6] = 0;
        qfree();
        v2[5] = 0;
        v2[7] = 0;
      }
      v2 = (_QWORD *)std::_Rb_tree_increment();
    }
    while ( v2 != v1 );
  }
}

