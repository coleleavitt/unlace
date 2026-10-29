unsigned __int64 __fastcall sub_A75E60(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // edx
  unsigned __int64 v6; // [rsp+8h] [rbp-10h] BYREF

  v6 = a2;
  v2 = sub_A73320(a1, a2);
  v3 = a1[290];
  v6 = v2;
  if ( (*(_BYTE *)(v3 + 89) & 1) != 0 )
  {
    v4 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL);
    if ( (unsigned int)(v4 - 2) <= 1 )
    {
      v2 = sub_A72990((__int64)a1, v2);
      goto LABEL_6;
    }
  }
  else
  {
    LOBYTE(v4) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL);
  }
  if ( (unsigned __int8)(v4 - 25) <= 1u || (unsigned __int8)(v4 - 2) <= 4u )
    v2 = sub_A75D20(a1, v2);
LABEL_6:
  v6 = v2;
  return sub_6D5440(&v6);
}
