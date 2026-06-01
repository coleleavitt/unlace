__int64 __fastcall sub_A6DBF0(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 result; // rax
  __int64 v3; // r14
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r12
  int v8; // ecx
  __int64 v9; // rdx

  v1 = a1[1];
  result = *(_QWORD *)(v1 + 8560);
  if ( result )
  {
    v3 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v3 )
    {
      v4 = 8 * v3;
      v5 = 0;
      while ( 1 )
      {
        v6 = *(_QWORD *)(result + v5);
        if ( !*(_WORD *)(v6 + 4) )
        {
          result = *(unsigned int *)(v6 + 24);
          if ( !(_DWORD)result )
          {
            result = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 24LL);
            if ( !result || *(_DWORD *)result == -1 )
            {
              if ( !(unsigned int)sub_8E7030(v1)
                || (result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v1 + 7488) + 56LL))(
                               *(_QWORD *)(v1 + 7488),
                               v6),
                    (_BYTE)result) )
              {
                v7 = *(_QWORD *)(v6 + 16);
                v8 = sub_8E80A0((_QWORD *)a1[1], (unsigned int *)v6);
                v9 = *(_QWORD *)(*a1 + 864LL);
                if ( v8 == 1 )
                  v9 = *(_QWORD *)(*a1 + 856LL);
                result = sub_135F9B0(a1[9], v7, v9);
              }
            }
          }
        }
        v5 += 8;
        if ( v4 == v5 )
          break;
        v1 = a1[1];
        result = *(_QWORD *)(v1 + 8560);
      }
    }
  }
  return result;
}

