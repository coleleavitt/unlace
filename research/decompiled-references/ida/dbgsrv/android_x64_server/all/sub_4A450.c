/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A450
// Address: 0x000000000004A450

//----- (000000000004A450) ----------------------------------------------------
void __fastcall sub_4A450(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdx
  _BYTE *v3; // r8
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx

  *((_BYTE *)a2 + 24) = a2 == a1;
  if ( a2 != a1 )
  {
    do
    {
      v2 = a2[2];
      if ( *(_BYTE *)(v2 + 24) )
        break;
      v3 = (_BYTE *)(v2 + 24);
      v4 = *(__int64 **)(v2 + 16);
      v5 = *v4;
      if ( *v4 == v2 )
      {
        v5 = v4[1];
        if ( !v5 || *(_BYTE *)(v5 + 24) )
        {
          if ( *(__int64 **)v2 != a2 )
          {
            v9 = *(_QWORD **)(v2 + 8);
            v10 = *v9;
            *(_QWORD *)(v2 + 8) = *v9;
            if ( v10 )
            {
              *(_QWORD *)(v10 + 16) = v2;
              v4 = *(__int64 **)(v2 + 16);
            }
            v9[2] = v4;
            *(_QWORD *)(*(_QWORD *)(v2 + 16) + 8LL * (**(_QWORD **)(v2 + 16) != v2)) = v9;
            *v9 = v2;
            *(_QWORD *)(v2 + 16) = v9;
            v4 = (__int64 *)v9[2];
            v3 = v9 + 3;
          }
          *v3 = 1;
          *((_BYTE *)v4 + 24) = 0;
          v11 = *v4;
          v12 = *(_QWORD *)(*v4 + 8);
          *v4 = v12;
          if ( v12 )
            *(_QWORD *)(v12 + 16) = v4;
          *(_QWORD *)(v11 + 16) = v4[2];
          *(_QWORD *)(v4[2] + 8LL * (*(_QWORD *)v4[2] != (_QWORD)v4)) = v11;
          *(_QWORD *)(v11 + 8) = v4;
          v4[2] = v11;
          return;
        }
      }
      else if ( !v5 || *(_BYTE *)(v5 + 24) )
      {
        if ( *(__int64 **)v2 == a2 )
        {
          v6 = a2[1];
          *(_QWORD *)v2 = v6;
          if ( v6 )
          {
            *(_QWORD *)(v6 + 16) = v2;
            v4 = *(__int64 **)(v2 + 16);
          }
          a2[2] = (__int64)v4;
          *(_QWORD *)(*(_QWORD *)(v2 + 16) + 8LL * (**(_QWORD **)(v2 + 16) != v2)) = a2;
          a2[1] = v2;
          *(_QWORD *)(v2 + 16) = a2;
          v4 = (__int64 *)a2[2];
          v3 = a2 + 3;
        }
        *v3 = 1;
        *((_BYTE *)v4 + 24) = 0;
        v7 = (__int64 *)v4[1];
        v8 = *v7;
        v4[1] = *v7;
        if ( v8 )
          *(_QWORD *)(v8 + 16) = v4;
        v7[2] = v4[2];
        *(_QWORD *)(v4[2] + 8LL * (*(_QWORD *)v4[2] != (_QWORD)v4)) = v7;
        *v7 = (__int64)v4;
        v4[2] = (__int64)v7;
        return;
      }
      *v3 = 1;
      a2 = v4;
      *((_BYTE *)v4 + 24) = v4 == a1;
      *(_BYTE *)(v5 + 24) = 1;
    }
    while ( v4 != a1 );
  }
}
