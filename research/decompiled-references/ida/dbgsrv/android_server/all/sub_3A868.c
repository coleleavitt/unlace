/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A868
// Address: 0x000000000003A868

//----- (000000000003A868) ----------------------------------------------------
void __fastcall sub_3A868(_QWORD *a1, char *s2)
{
  __int64 *v2; // x21
  __int64 *v3; // x22
  _QWORD *v6; // x23
  _QWORD *v7; // x9
  unsigned __int64 v8; // x8
  _QWORD *v9; // x25
  unsigned __int64 v10; // x10
  bool v11; // cf
  _BOOL4 v12; // w10
  const char *v13; // x0
  __int64 *v14; // x8
  __int64 *v15; // x8
  __int64 *v16; // x25
  __int64 v17; // x8
  __int64 v18; // x9
  __int64 *v19; // t1
  __int64 *v20; // x0
  __int64 v21; // x8
  __int64 **v22; // x9
  __int64 v23; // x9
  __int64 *v24; // t1

  if ( a1[213] )
  {
    v2 = (__int64 *)a1[211];
    v3 = a1 + 212;
    if ( a1 + 212 != v2 )
    {
      v6 = a1 + 215;
      do
      {
        while ( 1 )
        {
          v7 = (_QWORD *)*v6;
          if ( !*v6 )
            goto LABEL_21;
          v8 = v2[4];
          v9 = a1 + 215;
          do
          {
            v10 = v7[4];
            v11 = v10 >= v8;
            v12 = v10 < v8;
            if ( v11 )
              v9 = v7;
            v7 = (_QWORD *)v7[v12];
          }
          while ( v7 );
          if ( v9 == v6 || v8 < v9[4] )
            goto LABEL_21;
          if ( !s2 || (!v9[11] ? (v13 = &byte_F154B) : (v13 = (const char *)v9[10]), !strcmp(v13, s2)) )
          {
            sub_41A94((__int64)a1, (__int64)(v9 + 5));
LABEL_21:
            v15 = (__int64 *)v2[1];
            if ( v15 )
            {
              do
              {
                v16 = v15;
                v15 = (__int64 *)*v15;
              }
              while ( v15 );
            }
            else
            {
              v17 = (__int64)(v2 + 2);
              v16 = (__int64 *)v2[2];
              if ( (__int64 *)*v16 != v2 )
              {
                do
                {
                  v18 = *(_QWORD *)v17;
                  v19 = *(__int64 **)(*(_QWORD *)v17 + 16LL);
                  v17 = *(_QWORD *)v17 + 16LL;
                  v16 = v19;
                }
                while ( *v19 != v18 );
              }
            }
            if ( (__int64 *)a1[211] == v2 )
              a1[211] = v16;
            v20 = (__int64 *)a1[212];
            --a1[213];
            sub_4AD74(v20, v2);
            operator delete(v2);
            v2 = v16;
            goto LABEL_29;
          }
          v14 = (__int64 *)v2[1];
          if ( !v14 )
            break;
          do
          {
            v2 = v14;
            v14 = (__int64 *)*v14;
          }
          while ( v14 );
LABEL_29:
          if ( v3 == v2 )
            return;
        }
        v21 = (__int64)(v2 + 2);
        v22 = (__int64 **)v2[2];
        if ( *v22 != v2 )
        {
          do
          {
            v23 = *(_QWORD *)v21;
            v24 = *(__int64 **)(*(_QWORD *)v21 + 16LL);
            v21 = *(_QWORD *)v21 + 16LL;
            v2 = v24;
          }
          while ( *v24 != v23 );
          goto LABEL_29;
        }
        v2 = (__int64 *)v2[2];
      }
      while ( v3 != (__int64 *)v22 );
    }
  }
}
// F154B: using guessed type char byte_F154B;
