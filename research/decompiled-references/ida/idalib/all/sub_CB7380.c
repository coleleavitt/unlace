__int64 __fastcall sub_CB7380(__int64 a1)
{
  _BYTE *v2; // rbp
  __int64 (__fastcall *v3)(__int64, __int64); // rdx
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // r12d
  __int64 v7; // rdi
  _QWORD v9[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( !**(_BYTE **)a1 )
    goto LABEL_6;
  v2 = *(_BYTE **)(a1 + 24);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 40LL);
  if ( v3 == sub_CAECF0 )
  {
    if ( !v2[40] )
    {
LABEL_6:
      v7 = *(_QWORD *)(a1 + 8);
      v9[0] = **(_QWORD **)(a1 + 16) | 4LL;
      return (unsigned int)sub_D00060(v7, v9);
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v2 + 32LL))(*(_QWORD *)(a1 + 24), 0);
    v5 = *((_QWORD *)v2 + 1);
    v9[0] = 4;
    v6 = v4;
    sub_CFF770(v5, *((unsigned int *)v2 + 9), v9);
  }
  else
  {
    v6 = v3(*(_QWORD *)(a1 + 24), 0);
  }
  if ( (_BYTE)v6 )
    goto LABEL_6;
  return v6;
}
