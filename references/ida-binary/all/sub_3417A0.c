__int64 __fastcall sub_3417A0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  char v7; // bp
  _DWORD *v8; // r15
  int v9; // eax
  unsigned __int64 v10; // r13
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v20; // [rsp+0h] [rbp-38h]

  if ( a4 )
    *a4 = 0;
  if ( a2 < 0 )
    return -1;
  v7 = *(_BYTE *)(a1 + 345);
  v8 = *(_DWORD **)(a1 + 32);
  if ( v7 )
    v9 = v8[8] + 1 - v8[6];
  else
    v9 = v8[7] + 1 - v8[5];
  v10 = -1;
  if ( v9 > a2 && *(_QWORD *)(a1 + 168) )
  {
    v20 = *(_QWORD *)(a1 + 200) + a2;
    v10 = sub_3411C0(a1, v20);
    v11 = v7 ? v8[7] + 1 - v8[5] : v8[8] + 1 - v8[6];
    if ( a3 >= v11 - 13 && a3 <= v11 - 3 )
    {
      v12 = *(_QWORD **)(a1 + 368);
      v13 = a1 + 360;
      if ( v12 )
      {
        v14 = (_QWORD *)(a1 + 360);
        do
        {
          while ( 1 )
          {
            v15 = v12[2];
            v16 = v12[3];
            if ( v12[4] < v10 )
              break;
            v14 = v12;
            v12 = (_QWORD *)v12[2];
            if ( !v15 )
              goto LABEL_17;
          }
          v12 = (_QWORD *)v12[3];
        }
        while ( v16 );
LABEL_17:
        if ( (_QWORD *)v13 != v14 )
        {
          v17 = v14[4];
          v18 = sub_33FA20(a1, v17);
          if ( v18 >= v20 - 5 && v20 + 5 >= v18 )
          {
            if ( a4 )
              *a4 = 1;
            return v17;
          }
        }
      }
    }
  }
  return v10;
}
