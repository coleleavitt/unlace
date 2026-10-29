void __fastcall sub_E21600(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx

  v2 = a1[1];
  v3 = v2 - a2;
  if ( v2 != a2 )
  {
    v4 = *a1;
    v5 = *(_QWORD *)(*a1 + 16LL);
    v6 = *a1 + 24LL;
    v7 = v5 - v6;
    if ( v3 > v5 - v6 )
    {
      do
      {
        while ( 1 )
        {
          v3 -= v7;
          if ( !*(_QWORD *)v4 )
            break;
          free(*(void **)v4);
          v8 = (_QWORD *)*a1;
          v9 = *a1 + 24LL;
          *v8 = 0;
          v8[2] = v9;
          v4 = v8[1];
          v5 = *(_QWORD *)(v4 + 16);
          v6 = v4 + 24;
          *a1 = v4;
          v7 = v5 - (v4 + 24);
          if ( v3 <= v7 )
            goto LABEL_5;
        }
        *(_QWORD *)(v4 + 16) = v6;
        v4 = *(_QWORD *)(v4 + 8);
        v5 = *(_QWORD *)(v4 + 16);
        v6 = v4 + 24;
        *a1 = v4;
        v7 = v5 - (v4 + 24);
      }
      while ( v7 < v3 );
LABEL_5:
      v2 = a1[1];
    }
    *(_QWORD *)(v4 + 16) = v5 - v3;
    a1[1] = v2 - v3;
  }
}
