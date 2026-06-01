__int64 __fastcall sub_558830(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v10; // [rsp+10h] [rbp-48h]
  unsigned __int8 v11; // [rsp+1Fh] [rbp-39h]

  v11 = sub_182A690(a1, *(_QWORD *)a2, a3, *(_QWORD *)a4);
  if ( !v11 )
    return 0;
  v10 = 0;
  if ( *(_DWORD *)(a2 + 16) )
  {
LABEL_3:
    v7 = 0;
    while ( v7 < *(_DWORD *)(a4 + 16) )
    {
      v8 = v7++;
      if ( (unsigned __int8)sub_182A690(
                              a1,
                              *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v8),
                              a5,
                              *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v10)) )
      {
        if ( (unsigned int)++v10 < *(_DWORD *)(a2 + 16) )
          goto LABEL_3;
        return v11;
      }
    }
    return 0;
  }
  return v11;
}

