__int64 __fastcall sub_16EA30(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rdx

  result = 0;
  if ( *(_BYTE *)a2 == 4 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    if ( (unsigned int)(*(_DWORD *)v3 - 12) <= 1 )
    {
      v4 = *(_DWORD **)(a1 + 32);
      if ( *v4 == 2 )
      {
        if ( (_DWORD *)a2 != v4 + 12 )
          return result;
        goto LABEL_7;
      }
      if ( *v4 == 1 && (_DWORD *)a2 == v4 + 16 )
      {
LABEL_7:
        result = 0;
        if ( *(_BYTE *)(v3 + 48) == 4 )
          return (unsigned __int8)sub_121990(
                                    *(unsigned __int8 **)(v3 + 56),
                                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                                    *(unsigned int **)(a1 + 48),
                                    0);
      }
    }
  }
  return result;
}
