unsigned __int64 __fastcall sub_3CCD00(_QWORD *a1, unsigned int a2, unsigned __int64 a3, char a4)
{
  unsigned int v4; // r15d
  __int64 v5; // r12
  _DWORD *v7; // r13
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 i; // rax
  __int64 v14; // rsi
  char v16; // [rsp+Bh] [rbp-6Dh]
  _DWORD v18[4]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v5 = (__int64)(a1 + 1);
  v21 = __readfsqword(0x28u);
  v19 = a3;
  v20 = a3 + a2;
  if ( a3 >= v20 )
  {
    v7 = a1 + 1;
  }
  else
  {
    v16 = 1;
    v7 = a1 + 1;
    do
    {
      while ( 1 )
      {
        v4 = unpack_dd(&v19);
        v8 = unpack_dd(&v19);
        v9 = unpack_dd(&v19);
        if ( !a4 )
          break;
        v18[1] = v8;
        v18[0] = v4;
        v18[2] = v9;
        v7 = sub_3C8070(a1, (__int64)v7, (__int64)v18);
        if ( v19 >= v20 )
          goto LABEL_15;
      }
      if ( v16 )
      {
        v7 = a1 + 1;
        v10 = a1[2];
        if ( v10 )
        {
          do
          {
            while ( 1 )
            {
              v11 = *(_QWORD *)(v10 + 16);
              v12 = *(_QWORD *)(v10 + 24);
              if ( *(_DWORD *)(v10 + 32) < v4 )
                break;
              v7 = (_DWORD *)v10;
              v10 = *(_QWORD *)(v10 + 16);
              if ( !v11 )
                goto LABEL_10;
            }
            v10 = *(_QWORD *)(v10 + 24);
          }
          while ( v12 );
LABEL_10:
          if ( (_DWORD *)v5 != v7 && v4 < v7[8] )
            v7 = a1 + 1;
        }
        v16 = 0;
      }
    }
    while ( v19 < v20 );
  }
LABEL_15:
  if ( !a4 )
  {
    for ( i = a1[2]; i; i = *(_QWORD *)(i + 24) )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(i + 16);
        if ( v4 >= *(_DWORD *)(i + 32) )
          break;
        v5 = i;
        i = *(_QWORD *)(i + 16);
        if ( !v14 )
          goto LABEL_20;
      }
    }
LABEL_20:
    sub_3CCC70((__int64)a1, (__int64)v7, v5);
  }
  return v21 - __readfsqword(0x28u);
}

