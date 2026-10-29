__int64 __fastcall sub_3D05E0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  unsigned int v4; // r13d
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = a1[6];
  sub_654110(v2, a2);
  v3 = a1[41];
  if ( v3 && *(_DWORD *)(v3 - 4) )
  {
    v4 = 0;
LABEL_4:
    v5 = *(_QWORD *)(v2 + 2384);
    if ( v5 )
    {
      if ( v4 < *(_DWORD *)(v5 - 4) )
      {
        v6 = 0;
        while ( 1 )
        {
          v7 = a1[41];
          if ( !v7 || v6 >= *(_DWORD *)(v7 - 4) )
            break;
          v8 = v6++;
          if ( (unsigned __int8)sub_64C280(
                                  a1[6],
                                  *(_QWORD *)(v7 + 8 * v8),
                                  *(_QWORD *)(*(_QWORD *)(v2 + 2384) + 8LL * v4)) )
          {
            ++v4;
            goto LABEL_4;
          }
        }
        sub_400CE0(a1[69]);
      }
    }
  }
  return sub_63ECD0(a1 + 38, v2 + 2360);
}

