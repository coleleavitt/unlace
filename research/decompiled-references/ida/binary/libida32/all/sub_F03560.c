__int64 __fastcall sub_F03560(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax

  v2 = sub_971800(*(_QWORD *)(a1 + 1096), " ");
  v3 = sub_AE6480(a2);
  sub_971800(v2, v3);
  if ( *(_QWORD *)(a2 + 40) )
  {
    v4 = sub_971800(*(_QWORD *)(a1 + 1096), " ");
    sub_9717A0(
      v4,
      (const void *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) + 16LL),
      **(unsigned int **)(*(_QWORD *)(a2 + 40) + 16LL));
  }
  v5 = sub_971800(*(_QWORD *)(a1 + 1096), " ");
  sub_2257BD0(v5, *(_DWORD *)(a2 + 48) & 0x3FFFFFFF);
  v6 = sub_971800(*(_QWORD *)(a1 + 1096), " ");
  result = sub_2257BD0(v6, *(_DWORD *)(a2 + 52) & 0x3FFFFFFF);
  if ( *(_BYTE *)(a2 + 56) )
    return sub_971800(*(_QWORD *)(a1 + 1096), " IsPointer");
  return result;
}

