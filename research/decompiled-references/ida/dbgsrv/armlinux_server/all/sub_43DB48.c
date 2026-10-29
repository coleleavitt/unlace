/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DB48
// Address: 0x000000000043DB48

//----- (000000000043DB48) ----------------------------------------------------
__int64 __fastcall sub_43DB48(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // x0
  _QWORD *v7; // x19
  _DWORD *v8; // x2
  unsigned __int64 v9; // x2
  unsigned __int64 v10; // x24
  _QWORD *v12; // x0
  __int64 v13; // x3
  __int64 v14; // x23
  _QWORD *v15; // x0
  __int64 j; // x1
  unsigned int *v17; // x1
  __int64 v18; // x3
  __int64 v19; // x26
  _QWORD *v20; // x0
  __int64 i; // x1
  _QWORD v22[2]; // [xsp+50h] [xbp-10h] BYREF

  v6 = a1[15];
  v7 = (_QWORD *)a1[14];
  if ( v6 && (v8 = &v7[v6 - 1], *v8 == a2) )
  {
    v8[1] = a3;
  }
  else
  {
    v9 = v6 + 1;
    v22[0] = __PAIR64__(a3, a2);
    v10 = a1[16];
    if ( v7 <= v22 && v22 < &v7[v10] )
    {
      if ( v10 < v9 )
      {
        v7 = sub_491288((__int64)(a1 + 14), nullptr, v9, 8u);
        v18 = a1[15];
        v19 = a1[16];
        a1[16] = v10;
        v20 = (_QWORD *)a1[14];
        if ( v18 - 1 >= 0 )
        {
          for ( i = 0; i != v18; ++i )
            v7[i] = v20[i];
          v20 = (_QWORD *)a1[14];
        }
        j__free(v20);
        a1[14] = v7;
        a1[16] = v19;
        v6 = a1[15];
      }
      v17 = (unsigned int *)&v7[v6];
      *v17 = a2;
      v17[1] = a3;
    }
    else
    {
      if ( v10 < v9 )
      {
        v12 = sub_491288((__int64)(a1 + 14), nullptr, v9, 8u);
        v13 = a1[15];
        v14 = a1[16];
        a1[16] = v10;
        v7 = v12;
        v15 = (_QWORD *)a1[14];
        if ( v13 - 1 >= 0 )
        {
          for ( j = 0; j != v13; ++j )
            v7[j] = v15[j];
          v15 = (_QWORD *)a1[14];
        }
        j__free(v15);
        a1[14] = v7;
        a1[16] = v14;
        v6 = a1[15];
      }
      v7[v6] = v22[0];
    }
    ++a1[15];
  }
  return v22[1] ^ _stack_chk_guard;
}
// 43DB48: could not find valid save-restore pair for x26
