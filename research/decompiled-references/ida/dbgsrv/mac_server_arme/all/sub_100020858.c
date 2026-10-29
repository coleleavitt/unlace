/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020858
// Address: 0x0000000100020858

//----- (0000000100020858) ----------------------------------------------------
void __fastcall sub_100020858(int *a1, __int64 a2, __int64 a3)
{
  int v3; // w8
  __int64 v4; // x9
  __int64 v5; // x8
  __int64 v6; // x10
  __int64 v7; // x9

  v3 = *a1;
  if ( *a1 == 3 )
  {
    (*((void (__fastcall **)(__int64, __int64, _QWORD))a1 + 2))(a3, a2, *((_QWORD *)a1 + 4));
  }
  else
  {
    v4 = *((_QWORD *)a1 + 2);
    switch ( v3 )
    {
      case 2:
        sub_100020944(a2, (const void *)(a3 + v4), *((_QWORD *)a1 + 3), 0);
        break;
      case 1:
        sub_100020944(a2, (const void *)(a3 + v4), *((_QWORD *)a1 + 3), -1);
        break;
      case 0:
        v5 = 0;
        v6 = *((_QWORD *)a1 + 3);
        if ( v6 > 3 )
        {
          if ( v6 == 4 )
          {
            v5 = *(unsigned int *)(a3 + v4);
          }
          else if ( v6 == 8 )
          {
            v5 = *(_QWORD *)(a3 + v4);
          }
        }
        else if ( v6 == 1 )
        {
          v5 = *(unsigned __int8 *)(a3 + v4);
        }
        else if ( v6 == 2 )
        {
          v5 = *(unsigned __int16 *)(a3 + v4);
        }
        v7 = *((_QWORD *)a1 + 4);
        switch ( v7 )
        {
          case 4LL:
            v5 = (unsigned int)v5;
            break;
          case 2LL:
            v5 = (unsigned __int16)v5;
            break;
          case 1LL:
            v5 = (unsigned __int8)v5;
            break;
        }
        *(_QWORD *)(a2 + 8) = v5;
        break;
    }
  }
}
