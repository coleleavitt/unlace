__int64 __fastcall sub_1F0B7C0(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rax
  __int64 v4; // r15
  int v5; // r14d
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  int *v10; // rsi
  __int64 v12; // r15
  int v13[30]; // [rsp+0h] [rbp-78h] BYREF

  v3 = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v3 + 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v3);
  v5 = v4;
  if ( a2[3] < (unsigned int)v4 )
    sub_C25F00((__int64)a2, (unsigned int)v4);
  v6 = 0;
  if ( (_DWORD)v4 )
  {
    do
    {
      while ( 1 )
      {
        sub_1F0A560((__int64)v13, a1);
        v7 = a2[2];
        v8 = v7 + 1;
        if ( v7 + 1 > (unsigned __int64)a2[3] )
        {
          v12 = *(_QWORD *)a2;
          if ( *(_QWORD *)a2 <= (unsigned __int64)v13 && (unsigned __int64)v13 < v12 + 56 * v7 )
          {
            sub_C25F00((__int64)a2, v8);
            v9 = *(_QWORD *)a2;
            v7 = a2[2];
            v10 = (int *)((char *)v13 + *(_QWORD *)a2 - v12);
          }
          else
          {
            sub_C25F00((__int64)a2, v8);
            v9 = *(_QWORD *)a2;
            v7 = a2[2];
            v10 = v13;
          }
        }
        else
        {
          v9 = *(_QWORD *)a2;
          v10 = v13;
        }
        sub_A4F8A0(v9 + 56 * v7, (__int64)v10);
        ++a2[2];
        if ( v13[0] > 1u )
          break;
        if ( ++v6 == v5 )
          return *(_QWORD *)a2;
      }
      ++v6;
      sub_A4F8E0(v13);
    }
    while ( v5 != v6 );
  }
  return *(_QWORD *)a2;
}
