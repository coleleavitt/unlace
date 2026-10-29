/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deref_idcv
// Address: 0x0000000100031410

//----- (0000000100031410) ----------------------------------------------------
unsigned __int8 *__fastcall deref_idcv(unsigned __int8 *a1, char a2)
{
  unsigned __int8 *v2; // x19
  __int64 v4; // x21
  __int64 v5; // x22
  unsigned __int64 v6; // x8
  __int64 v7; // x9
  void *v8; // x1
  __int64 v9; // x8
  _QWORD *v10; // x9
  __int64 v11; // x10
  void *v13; // [xsp+0h] [xbp-50h] BYREF
  __int64 v14; // [xsp+8h] [xbp-48h]
  unsigned __int64 v15; // [xsp+10h] [xbp-40h]

  v2 = a1;
  if ( a1 )
  {
    if ( *a1 == 10 )
    {
      v13 = nullptr;
      v14 = 0;
      v15 = 0;
      v4 = sub_10002BEEC();
      v5 = (__int64)v2;
      while ( 1 )
      {
        v6 = *(unsigned int *)(v5 + 16);
        if ( (v6 & 0x80000000) != 0 )
        {
          v5 = sub_10003136C(v4, ~(_DWORD)v6);
          if ( !v5 )
            goto LABEL_23;
        }
        else
        {
          v7 = *(_QWORD *)(v5 + 8);
          if ( !v7 )
            goto LABEL_23;
          if ( *(_DWORD *)v7 != 289621065 )
            goto LABEL_23;
          if ( *(_QWORD *)(v7 + 32) <= v6 )
            goto LABEL_23;
          v5 = *(_QWORD *)(v7 + 24) + 32 * v6;
          if ( !v5 )
            goto LABEL_23;
        }
        if ( (a2 & 1) != 0 || *(_BYTE *)v5 != 10 )
          break;
        v8 = v13;
        v9 = v14;
        v10 = v13;
        if ( (v14 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
        {
          v11 = 8 * v14;
          v10 = v13;
          while ( v5 != *v10 )
          {
            ++v10;
            v11 -= 8;
            if ( !v11 )
              goto LABEL_20;
          }
        }
        if ( v10 != (_QWORD *)((char *)v13 + 8 * v14) )
        {
LABEL_23:
          set_qerrno();
LABEL_24:
          v2 = nullptr;
          goto LABEL_25;
        }
LABEL_20:
        if ( v15 < v14 + 1 )
        {
          v8 = qvector_reserve(&v13, v13, v14 + 1, 8u);
          v13 = v8;
          v9 = v14;
        }
        *((_QWORD *)v8 + v9) = v5;
        ++v14;
      }
      if ( (a2 & 2) != 0 )
      {
        *v2 = 2;
        if ( (unsigned int)copy_idcv(v2, (unsigned __int8 *)v5) )
          goto LABEL_24;
      }
      else
      {
        v2 = (unsigned __int8 *)v5;
      }
LABEL_25:
      if ( v13 )
      {
        v14 = 0;
        qfree(v13);
      }
    }
  }
  else
  {
    set_qerrno();
  }
  return v2;
}
