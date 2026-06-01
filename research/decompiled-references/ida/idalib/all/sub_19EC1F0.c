char __fastcall sub_19EC1F0(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r13
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx

  v7 = *a2;
  if ( (*(_BYTE *)(*a2 + 28) & 0x7Fu) - 34 > 5 )
    goto LABEL_4;
  v8 = sub_B75A50(v7, 0);
  if ( v8 )
  {
    v11 = sub_19E9EE0(v8);
    a2[2] = v11;
    if ( v11 )
LABEL_4:
      LOBYTE(v11) = sub_19EB530(*(_QWORD *)(a1 + 16), *(__int64 **)(a1 + 24), (__int64)a2, a3, *(_QWORD *)(a1 + 40), a6);
  }
  else
  {
    if ( !(unsigned __int8)sub_B74ED0(v7, 0, v9, v10) )
      goto LABEL_4;
    v11 = *(_QWORD *)(**(_QWORD **)(a1 + 16) + 232LL);
    if ( (*(_BYTE *)(v11 + 1) & 8) != 0 )
    {
      LOBYTE(v11) = sub_19EA510(v7, 0, v12, v13);
      if ( !(_BYTE)v11 )
        goto LABEL_4;
    }
  }
  return v11;
}
