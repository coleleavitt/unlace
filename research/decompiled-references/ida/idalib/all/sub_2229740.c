__int64 __fastcall sub_2229740(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _BYTE *v4; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8) - 8;
  if ( *(_BYTE *)(v2 + 4) )
  {
    v3 = *(_QWORD *)(a1 + 160);
    v4 = *(_BYTE **)(v3 + 32);
    if ( (unsigned __int64)v4 >= *(_QWORD *)(v3 + 24) )
    {
      sub_227BA10(v3, 44);
    }
    else
    {
      *(_QWORD *)(v3 + 32) = v4 + 1;
      *v4 = 44;
    }
    v2 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8) - 8;
  }
  if ( *(_DWORD *)v2 == 1 && *(_DWORD *)(a1 + 168) )
  {
    sub_227BA10(*(_QWORD *)(a1 + 160), 10);
    sub_227D090(*(_QWORD *)(a1 + 160), *(unsigned int *)(a1 + 172));
  }
  if ( *(_QWORD *)(a1 + 152) )
    sub_2229220(a1);
  result = *(_QWORD *)a1;
  *(_BYTE *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8) - 4) = 1;
  return result;
}
