__int64 __fastcall sub_365280(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 *v3; // r12
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned int v6; // edx
  int v7; // edx
  unsigned int v8; // edx

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 > 0xF )
  {
    v8 = v2 - 52;
    result = 0;
    if ( v8 > 4 )
      return result;
  }
  else if ( v2 <= 2 )
  {
    if ( v2 != 2 )
      return 0;
    v3 = (__int64 *)(a1 + 64);
    result = sub_24E700((__int64 *)(a1 + 64), *(_QWORD *)(a2 + 24), 0);
    if ( (_DWORD)result )
      return (unsigned __int8)sub_295D10(*(_QWORD *)(a2 + 32)) ^ 1u;
    v5 = *(_QWORD *)(a2 + 32);
    v6 = *(_DWORD *)(v5 + 8);
    if ( v6 > 0xF )
    {
      if ( v6 - 52 > 4 )
        goto LABEL_18;
    }
    else if ( v6 <= 2 )
    {
      if ( v6 == 2 )
      {
        if ( (unsigned int)sub_24E700(v3, *(_QWORD *)(v5 + 24), 0) )
          result = (unsigned __int8)sub_295D10(*(_QWORD *)(v5 + 32)) ^ 1u;
        else
          result = sub_365280(a1, *(_QWORD *)(v5 + 32));
        v7 = *(_DWORD *)(a1 + 8) | 1;
        goto LABEL_19;
      }
LABEL_18:
      v7 = *(_DWORD *)(a1 + 8) | 1;
LABEL_19:
      *(_DWORD *)(a1 + 8) = v7;
      return result;
    }
    result = (unsigned int)sub_24E700(v3, *(_QWORD *)(v5 + 24), 0) != 0;
    goto LABEL_18;
  }
  return (unsigned int)sub_24E700((__int64 *)(a1 + 64), *(_QWORD *)(a2 + 24), 0) != 0;
}
