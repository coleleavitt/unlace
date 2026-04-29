__int64 __fastcall sub_7E9C0(__int64 a1, __int64 a2)
{
  unsigned int v3; // r12d
  unsigned __int8 *v4; // rax
  unsigned __int8 v5; // dl

  if ( !(unsigned __int8)sub_7E720((unsigned __int8 **)(a1 + 8), (unsigned __int8 **)a2) )
    return 0;
  v3 = sub_7E720((unsigned __int8 **)(a1 + 144), (unsigned __int8 **)a2);
  if ( !(_BYTE)v3 )
    return 0;
  v4 = *(unsigned __int8 **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    sub_79F30(a1 + 144);
  v5 = *v4;
  *(_QWORD *)a2 = v4 + 1;
  *(_BYTE *)(a1 + 288) = v5;
  sub_7CAC0(a1 + 296, a2);
  *(_DWORD *)(a1 + 352) = sub_7C760((_QWORD *)a2);
  return v3;
}
