__int64 __fastcall sub_458800(__int64 a1, __int64 a2)
{
  int *v2; // rax
  int v3; // edx
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  _DWORD v6[14]; // [rsp+10h] [rbp-38h] BYREF

  sub_16744A0(v6, a2);
  sub_16669D0(&v5, a2);
  if ( *(_WORD *)(a1 + 4) )
    return 0;
  v2 = *(int **)(*(_QWORD *)(a1 + 16) + 24LL);
  if ( !v2 )
    return 0;
  v3 = *v2;
  if ( *v2 )
  {
    if ( v3 == 5 )
    {
LABEL_9:
      if ( (unsigned int)sub_3D4AD0(a1) == 1 )
        return (unsigned int)sub_3D9C60(a1, a2) ^ 1;
      return 0;
    }
LABEL_5:
    if ( v3 != v6[0] || v2[1] != 22 && v2[1] != 23 )
      return 0;
    goto LABEL_9;
  }
  if ( v2[1] != 8 || *(_DWORD *)(a1 + 24) != 1 )
    goto LABEL_5;
  return sub_458800(*(_QWORD *)(a1 + 32), a2);
}

