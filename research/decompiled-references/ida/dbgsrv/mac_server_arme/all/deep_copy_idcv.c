/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deep_copy_idcv
// Address: 0x0000000100035940

//----- (0000000100035940) ----------------------------------------------------
__int64 __fastcall deep_copy_idcv(unsigned __int8 *a1, __int64 a2)
{
  _QWORD **v4; // x20
  __int64 v5; // x23
  _QWORD *v6; // x25
  int v7; // w8
  void *v8; // x0
  __int64 **v9; // x22
  _QWORD *v10; // x9
  __int64 *v11; // x1
  __int64 v12; // x8
  _QWORD *v13; // x8
  _QWORD *v14; // x8
  bool v15; // zf
  _Unwind_Exception *v17; // x0
  int v18; // w1
  __int64 v19; // [xsp+0h] [xbp-70h] BYREF
  __int64 v20; // [xsp+8h] [xbp-68h] BYREF
  __int64 *v21; // [xsp+10h] [xbp-60h] BYREF
  __int64 vars8; // [xsp+78h] [xbp+8h]

  if ( *(_BYTE *)a2 == 5 )
  {
    v4 = (_QWORD **)operator new(0x20u);
    v5 = *(_QWORD *)(a2 + 8);
    v4[1] = nullptr;
    v4[2] = nullptr;
    *v4 = v4 + 1;
    v6 = *(_QWORD **)v5;
    if ( *(_QWORD *)v5 == v5 + 8 )
    {
LABEL_3:
      *((_DWORD *)v4 + 6) = 1;
      *((_DWORD *)v4 + 7) = *(_DWORD *)(v5 + 28);
      if ( !a1 )
      {
        if ( under_debugger == 1 )
          __break(1u);
        interr(2656);
        if ( v18 )
          sub_10000150C(v17);
        _Unwind_Resume(v17);
      }
      v7 = *a1;
      if ( v7 == 5 )
      {
        sub_10003307C(*((_QWORD *)a1 + 1), a1);
      }
      else if ( v7 == 7 )
      {
        v8 = *((void **)a1 + 1);
        if ( v8 )
        {
          *((_QWORD *)a1 + 2) = 0;
          qfree(v8);
          *((_QWORD *)a1 + 1) = 0;
          *((_QWORD *)a1 + 3) = 0;
        }
      }
      *a1 = 5;
      *((_QWORD *)a1 + 1) = v4;
      return 0;
    }
    while ( 1 )
    {
      v9 = (__int64 **)sub_10003E5A0(v4, v4 + 1, &v20, &v19, (__int64)(v6 + 4));
      if ( *v9 )
      {
        v10 = (_QWORD *)v6[1];
        if ( v10 )
          goto LABEL_15;
      }
      else
      {
        sub_10003E804((__int64)v4, (__int64)(v6 + 4), (__int64)&v21);
        v12 = v20;
        v11 = v21;
        *v21 = 0;
        v11[1] = 0;
        v11[2] = v12;
        *v9 = v11;
        v13 = (_QWORD *)**v4;
        if ( v13 )
        {
          *v4 = v13;
          v11 = *v9;
        }
        sub_10000BD00(v4[1], v11);
        v4[2] = (_QWORD *)((char *)v4[2] + 1);
        v10 = (_QWORD *)v6[1];
        if ( v10 )
        {
          do
          {
LABEL_15:
            v14 = v10;
            v10 = (_QWORD *)*v10;
          }
          while ( v10 );
          goto LABEL_8;
        }
      }
      do
      {
        v14 = (_QWORD *)v6[2];
        v15 = *v14 == (_QWORD)v6;
        v6 = v14;
      }
      while ( !v15 );
LABEL_8:
      v6 = v14;
      if ( v14 == (_QWORD *)(v5 + 8) )
        goto LABEL_3;
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return copy_idcv(a1, (unsigned __int8 *)a2);
}
// 100035B6C: variable 'v18' is possibly undefined
// 100035B74: variable 'v17' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
