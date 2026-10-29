__int64 __fastcall sub_7CB810(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rax
  unsigned int *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 (*v8)(void); // rdx

  if ( *(_BYTE *)(a1 + 168) )
  {
    v2 = *(_QWORD *)(a1 + 200);
    result = 0;
    if ( v2 )
    {
      if ( a2 < *(_DWORD *)(v2 - 4) )
        return *(unsigned __int8 *)(v2 + a2);
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 2328);
    if ( v4
      && a2 < *(_DWORD *)(v4 - 4)
      && (v5 = *(unsigned int **)(v4 + 8LL * a2)) != nullptr
      && (v6 = *(_QWORD *)(a1 + 1720)) != 0
      && (v7 = *v5, (unsigned int)v7 < *(_DWORD *)(v6 - 4))
      && *(_QWORD *)(v6 + 8 * v7) )
    {
      v8 = *(__int64 (**)(void))(*(_QWORD *)a1 + 488LL);
      result = 1;
      if ( (char *)v8 != (char *)sub_795570 )
        return v8();
    }
    else
    {
      return 1;
    }
  }
  return result;
}

