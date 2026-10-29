void __fastcall sub_400AD0(__int64 a1)
{
  __int64 *v2; // r12
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v9; // rbx
  __int64 i; // rbp

  v2 = *(__int64 **)(a1 + 88);
  if ( v2 )
  {
    sub_2B4F40(v2 + 6);
    sub_3FCDF0(v2[4], v2[5]);
    v3 = (_QWORD *)v2[2];
    if ( v3 )
    {
      v4 = *((unsigned int *)v3 - 1);
      if ( (_DWORD)v4 )
      {
        v5 = &v3[7 * v4];
        do
        {
          while ( 1 )
          {
            sub_2B4F40(v3 + 5);
            v6 = v3[2];
            if ( v6 )
            {
              v7 = v3[3];
              if ( (*(_DWORD *)(v6 + 8))-- == 1 )
                break;
            }
            v3 += 7;
            if ( v3 == v5 )
              goto LABEL_9;
          }
          sub_15D7BC0(v7, v6);
          v3 += 7;
        }
        while ( v3 != v5 );
LABEL_9:
        v3 = (_QWORD *)v2[2];
      }
      sub_186B220(v3 - 1);
    }
    sub_186B220(v2);
    *(_QWORD *)(a1 + 88) = 0;
  }
  v9 = *(_QWORD *)(a1 + 96);
  *(_BYTE *)(a1 + 78) &= ~1u;
  if ( v9 )
  {
    for ( i = v9 + 8LL * *(unsigned int *)(v9 - 4); i != v9; v9 += 8 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)v9 + 78LL) & 1) != 0 )
        sub_400AD0();
    }
  }
}

