void __fastcall sub_20375D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rbx
  _BYTE *v13; // rbp
  _BYTE *v14; // rsi
  __int64 v15; // rax
  __int64 *v16; // rbp
  __int64 *v17; // r13
  __int64 v18; // rax
  _BYTE *v19; // rsi
  _BYTE *v20; // [rsp+0h] [rbp-78h] BYREF
  __int64 v21; // [rsp+8h] [rbp-70h]
  _BYTE v22[104]; // [rsp+10h] [rbp-68h] BYREF

  if ( *(_BYTE *)a2 == 85 )
  {
    v6 = *(_QWORD *)(a2 - 32);
    if ( v6 )
    {
      if ( *(_BYTE *)v6 == 13 )
      {
        v7 = *(_QWORD *)(v6 + 24);
        if ( *(_QWORD *)(a2 + 80) == v7 && (*(_BYTE *)(v6 + 33) & 0x20) != 0 )
        {
          v15 = 4LL * (*(_DWORD *)(a2 + 4) & 0x7FFFFFF);
          if ( (*(_BYTE *)(a2 + 7) & 0x40) != 0 )
          {
            v16 = *(__int64 **)(a2 - 8);
            v17 = &v16[v15];
          }
          else
          {
            v17 = (__int64 *)a2;
            v16 = (__int64 *)(a2 - v15 * 8);
          }
          for ( ; v17 != v16; v16 += 4 )
          {
            v18 = *v16;
            if ( *v16 )
            {
              if ( *(_BYTE *)v18 == 24 )
              {
                v19 = *(_BYTE **)(v18 + 24);
                if ( (unsigned int)(unsigned __int8)*v19 - 5 <= 0x20 )
                  sub_2037330(a1, v19, v7, a4, a5);
              }
            }
          }
        }
      }
    }
  }
  v8 = *(_QWORD *)(a2 + 48) == 0;
  v20 = v22;
  v21 = 0x400000000LL;
  if ( !v8 || (*(_BYTE *)(a2 + 7) & 0x20) != 0 )
  {
    sub_20B4CC0(a2, &v20);
    v12 = v20;
    v13 = &v20[16 * (unsigned int)v21];
    if ( v20 != v13 )
    {
      do
      {
        v14 = (_BYTE *)v12[1];
        v12 += 2;
        sub_2037330(a1, v14, v9, v10, v11);
      }
      while ( v12 != (_QWORD *)v13 );
      v13 = v20;
    }
    if ( v13 != v22 )
      free(v13);
  }
}
