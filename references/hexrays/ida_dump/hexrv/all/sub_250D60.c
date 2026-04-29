__int64 __fastcall sub_250D60(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  unsigned int v4; // esi
  _QWORD *v5; // rcx
  _QWORD *i; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi

  v1 = *(_QWORD **)(a1 + 72);
  v2 = (_QWORD *)*v1;
  if ( *v1 && v1[1] )
  {
    v3 = (_QWORD *)v2[1];
LABEL_4:
    while ( v2 != v3 )
    {
      v4 = *((unsigned __int8 *)v3 + 64);
      if ( !(_BYTE)v4 )
        return 1;
      if ( (*v3 & 2) != 0 )
      {
        while ( *((_BYTE *)v3 + 64) )
          ;
        return v4;
      }
      v5 = (_QWORD *)v3[2];
      if ( (*(_BYTE *)v5 & 2) != 0 )
      {
        v8 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
        v9 = *v8;
        if ( (*v8 & 2) == 0 )
        {
          while ( (_QWORD *)v8[2] == v3 )
          {
            v3 = v8;
            v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
            v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v9 & 2) != 0 )
            {
              v3 = (_QWORD *)v10;
              goto LABEL_4;
            }
            v8 = (_QWORD *)v10;
          }
        }
        v3 = v8;
      }
      else
      {
        for ( i = (_QWORD *)v5[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v5 = i;
        v3 = v5;
      }
    }
  }
  return 0;
}
