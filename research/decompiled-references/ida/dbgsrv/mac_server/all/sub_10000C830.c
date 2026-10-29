/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C830
// Address: 0x000000010000C830

//----- (000000010000C830) ----------------------------------------------------
void __fastcall sub_10000C830(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // rcx
  __int64 *v3; // rax
  __int64 *v4; // rdx
  __int64 **v5; // rdx
  __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 **v11; // rdx
  __int64 v12; // rdx
  __int64 **v13; // rdx

  *((_BYTE *)a2 + 24) = a2 == a1;
  if ( a2 != a1 )
  {
    do
    {
      v2 = (__int64 *)a2[2];
      if ( *((_BYTE *)v2 + 24) )
        return;
      v3 = (__int64 *)v2[2];
      v4 = (__int64 *)*v3;
      if ( (__int64 *)*v3 == v2 )
      {
        v4 = (__int64 *)v3[1];
        if ( !v4 || *((_BYTE *)v4 + 24) == 1 )
        {
          if ( (__int64 *)*v2 == a2 )
          {
            v5 = (__int64 **)a2[2];
          }
          else
          {
            v5 = (__int64 **)v2[1];
            v6 = *v5;
            v2[1] = (__int64)*v5;
            if ( v6 )
            {
              v6[2] = (__int64)v2;
              v3 = (__int64 *)v2[2];
            }
            v5[2] = v3;
            v3[*v3 != (_QWORD)v2] = (__int64)v5;
            *v5 = v2;
            v2[2] = (__int64)v5;
            v3 = v5[2];
          }
          *((_BYTE *)v5 + 24) = 1;
          *((_BYTE *)v3 + 24) = 0;
          v9 = (__int64 *)*v3;
          v12 = *(_QWORD *)(*v3 + 8);
          *v3 = v12;
          if ( v12 )
            *(_QWORD *)(v12 + 16) = v3;
          v13 = (__int64 **)v3[2];
          v9[2] = (__int64)v13;
          v13[*v13 != v3] = v9;
          v9[1] = (__int64)v3;
          goto LABEL_27;
        }
      }
      else if ( !v4 || *((_BYTE *)v4 + 24) == 1 )
      {
        v7 = *v2;
        if ( (__int64 *)*v2 == a2 )
        {
          v8 = *(_QWORD *)(v7 + 8);
          *v2 = v8;
          if ( v8 )
          {
            *(_QWORD *)(v8 + 16) = v2;
            v3 = (__int64 *)v2[2];
          }
          *(_QWORD *)(v7 + 16) = v3;
          v3[*v3 != (_QWORD)v2] = v7;
          *(_QWORD *)(v7 + 8) = v2;
          v2[2] = v7;
          v3 = *(__int64 **)(v7 + 16);
        }
        else
        {
          v7 = a2[2];
        }
        *(_BYTE *)(v7 + 24) = 1;
        *((_BYTE *)v3 + 24) = 0;
        v9 = (__int64 *)v3[1];
        v10 = *v9;
        v3[1] = *v9;
        if ( v10 )
          *(_QWORD *)(v10 + 16) = v3;
        v11 = (__int64 **)v3[2];
        v9[2] = (__int64)v11;
        v11[*v11 != v3] = v9;
        *v9 = (__int64)v3;
LABEL_27:
        v3[2] = (__int64)v9;
        return;
      }
      *((_BYTE *)v2 + 24) = 1;
      a2 = v3;
      *((_BYTE *)v3 + 24) = v3 == a1;
      *((_BYTE *)v4 + 24) = 1;
    }
    while ( v3 != a1 );
  }
}
