__int64 __fastcall sub_AB5A80(__int64 *a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // r15
  __int64 v7; // rbp
  _QWORD *v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // r12
  unsigned int v12; // [rsp+8h] [rbp-40h]

  if ( *(_DWORD *)(a1[58] + 4LL * a2) == a2 )
  {
    v3 = a1[2];
    v4 = **(_QWORD **)(a1[4] + 8LL * a2);
    if ( !(unsigned int)sub_8E7030(v3)
      || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 7488) + 56LL))(
           *(_QWORD *)(v3 + 7488),
           v4) )
    {
      v5 = a1[63];
      v6 = (_QWORD *)(v5 + 8LL * a2);
      v7 = a2;
      while ( 1 )
      {
        v8 = (_QWORD *)(v5 + 8 * v7);
        v9 = a1[2];
        v10 = **(_QWORD **)(a1[4] + 8 * v7);
        if ( !*v8 )
          break;
        v12 = *(_DWORD *)(*v8 - 4LL);
        if ( (unsigned int)sub_8E7030(a1[2]) )
          goto LABEL_7;
LABEL_9:
        v11 = 0;
        if ( v12 )
        {
          do
          {
            if ( *(_BYTE *)(*(_QWORD *)(a1[2] + 8848) + *(unsigned int *)(*v6 + v11)) != *(_BYTE *)(*(_QWORD *)(a1[2] + 8848)
                                                                                                  + *(unsigned int *)(*v8 + v11)) )
            {
              sub_1872CE0("");
              sub_1873130(114, 1947);
            }
            v11 += 4;
          }
          while ( 4LL * v12 != v11 );
        }
LABEL_13:
        v7 = *(unsigned int *)(a1[60] + 4 * v7);
        if ( a2 == (_DWORD)v7 )
          return 1;
        v5 = a1[63];
      }
      if ( !(unsigned int)sub_8E7030(a1[2]) )
        goto LABEL_13;
      v12 = 0;
LABEL_7:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v9 + 7488) + 56LL))(
              *(_QWORD *)(v9 + 7488),
              v10) )
      {
        sub_1872CE0("");
        sub_1873130(114, 1931);
      }
      goto LABEL_9;
    }
  }
  return 1;
}

