unsigned __int64 __fastcall sub_7BE1F0(__int64 *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8

  v6 = *a2;
  v7 = v6 + 1;
  if ( (_DWORD)v6 == -1 )
    v7 = 0;
  sub_7BE190(a1, v7, a3, a4, a5);
  v11 = a2[1];
  v12 = v11 + 1;
  if ( (_DWORD)v11 == -1 )
    v12 = 0;
  sub_7BE190(a1, v12, v8, v9, v10);
  sub_7BE190(a1, (int)a2[2] + 1LL, v13, v14, v15);
  return sub_407AD0(a1, a2[3]);
}

