void __fastcall sub_59BB0(__int64 *a1, void (*a2)(void))
{
  __int64 v2; // r13
  __int64 v3; // r14
  _QWORD *v4; // rbx
  _QWORD *v5; // r15
  __int64 v6; // [rsp+8h] [rbp-40h]

  v2 = a1[4];
  v6 = *a1;
  if ( *a1 )
  {
    v3 = 0;
    do
    {
      if ( *(_QWORD *)v2 && *(_BYTE *)(v2 + 8) )
      {
        if ( a2 )
          a2();
        --a1[3];
      }
      v4 = *(_QWORD **)(v2 + 16);
      if ( v4 )
      {
        while ( 1 )
        {
          if ( a2 )
            ((void (__fastcall *)(_QWORD))a2)(*v4);
          --a1[3];
          v5 = (_QWORD *)v4[2];
          free(v4);
          if ( !v5 )
            break;
          v4 = v5;
        }
      }
      ++v3;
      v2 += 24;
    }
    while ( v6 != v3 );
  }
}

