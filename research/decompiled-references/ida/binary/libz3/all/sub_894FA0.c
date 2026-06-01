__int64 __fastcall sub_894FA0(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rbp
  unsigned int *v3; // r12
  _DWORD *v4; // rax
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  _DWORD *v9; // rax
  _QWORD v10[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(unsigned int **)(a2 + 32);
  v3 = *(unsigned int **)(a2 + 40);
  if ( !*((_WORD *)v2 + 2) )
  {
    v4 = *(_DWORD **)(*((_QWORD *)v2 + 2) + 24LL);
    if ( v4 )
    {
      if ( *v4 == 5 && v4[1] == 6 && v2[6] == 2 )
      {
        if ( (unsigned __int8)sub_894D80(a1, *((_QWORD *)v2 + 5), v10) )
        {
          if ( !*((_WORD *)v3 + 2) )
          {
            v9 = *(_DWORD **)(*((_QWORD *)v3 + 2) + 24LL);
            if ( v9 )
            {
              if ( *v9 == 5 && !v9[1] )
                return sub_8E1D30(
                         a1 + 120,
                         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v2),
                         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v3));
            }
          }
        }
      }
    }
  }
  result = *(_QWORD *)(a1 + 96);
  if ( *(_BYTE *)(result + 328) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
    v7 = *(_QWORD *)(v6 + 8LL * *v2);
    v8 = *(_QWORD *)(v6 + 8LL * *v3);
    result = sub_B39350(v7, *(unsigned int *)(a1 + 8));
    if ( (_DWORD)result != -1 )
    {
      result = sub_B39350(v8, *(unsigned int *)(a1 + 8));
      if ( (_DWORD)result != -1 )
        return sub_8E1D30(a1 + 120, v7, v8);
    }
  }
  return result;
}

