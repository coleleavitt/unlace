_QWORD *__fastcall sub_868BC0(__int64 a1)
{
  _QWORD *v1; // rbp
  _QWORD *v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax

  if ( !*(_DWORD *)a1 )
  {
    v1 = *(_QWORD **)(a1 + 32);
    if ( v1 && v1[2] == *(_QWORD *)(a1 + 120) )
      return v1;
    v2 = sub_868B50(a1, 24);
    v1 = v2;
    if ( v2 )
    {
      *v2 = 0;
      v3 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = v3 + 1;
      v1[1] = v3;
      v1[2] = *(_QWORD *)(a1 + 120);
      v4 = *(_QWORD **)(a1 + 32);
      if ( v4 )
        *v4 = v1;
      else
        *(_QWORD *)(a1 + 8) = v1;
      *(_QWORD *)(a1 + 32) = v1;
      v5 = sub_867B60(a1, 1);
      if ( v5 )
      {
        *(_BYTE *)v5 = -1;
        return v1;
      }
    }
  }
  return nullptr;
}
