__int64 __fastcall sub_3EA020(__int64 a1, int a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *i; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi

  v2 = *(_QWORD **)(a1 + 192);
  if ( v2 && *(_QWORD *)(a1 + 200) )
  {
    v3 = (_QWORD *)v2[1];
LABEL_4:
    while ( v2 != v3 )
    {
      if ( a2 == *((_DWORD *)v3 + 8) )
        return v3[3];
      if ( (*v3 & 2) != 0 )
      {
        while ( *((_DWORD *)v3 + 8) != a2 )
          ;
        return v3[3];
      }
      v4 = (_QWORD *)v3[2];
      if ( (*(_BYTE *)v4 & 2) != 0 )
      {
        v7 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
        v8 = *v7;
        if ( (*v7 & 2) == 0 )
        {
          while ( (_QWORD *)v7[2] == v3 )
          {
            v3 = v7;
            v9 = v8 & 0xFFFFFFFFFFFFFFFCLL;
            v8 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v8 & 2) != 0 )
            {
              v3 = (_QWORD *)v9;
              goto LABEL_4;
            }
            v7 = (_QWORD *)v9;
          }
        }
        v3 = v7;
      }
      else
      {
        for ( i = (_QWORD *)v4[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v4 = i;
        v3 = v4;
      }
    }
  }
  return -1;
}
