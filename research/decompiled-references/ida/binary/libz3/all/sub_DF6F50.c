__int64 __fastcall sub_DF6F50(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5, __int64 a6, _BYTE *a7)
{
  __int64 *v8; // rbx
  __int64 *v9; // rbp
  __int64 v10; // r15
  __int64 v11; // r13
  _DWORD *v12; // rax
  _DWORD *v13; // rdx
  __int64 *v14; // [rsp+8h] [rbp-50h]
  _BYTE v15[72]; // [rsp+10h] [rbp-48h] BYREF

  if ( a6 && a6 != *(_QWORD *)(a3 + 40) || a4 != *(_DWORD *)(a3 + 32) )
    return 0;
  if ( a5 )
  {
    *a7 = 0;
    if ( a4 )
    {
      v8 = (__int64 *)(a3 + 48);
      v9 = a5;
      v14 = &a5[a4];
      do
      {
        v10 = *v8;
        v11 = *v9;
        if ( *v9 != *v8 )
        {
          *a7 = 1;
          sub_16669D0(v15, a2);
          v12 = *(_DWORD **)(v10 + 24);
          v13 = *(_DWORD **)(v11 + 24);
          if ( !v12 || *v12 != 5 || v12[1] )
          {
            if ( !v13 || *v13 != 5 || v13[1] || !v12 || *v12 != 5 )
              return 0;
            goto LABEL_22;
          }
          if ( !v13 || *v13 != 5 )
            return 0;
          if ( v13[1] != 1 )
          {
            if ( v13[1] )
              return 0;
LABEL_22:
            if ( v12[1] != 1 )
              return 0;
          }
        }
        ++v9;
        ++v8;
      }
      while ( v9 != v14 );
    }
  }
  return 1;
}

