void __fastcall sub_21B5F60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  const void *v5; // r13
  signed __int64 v6; // rbp
  __int64 v7; // r12

  if ( (*(_BYTE *)(*(_QWORD *)a1 + 48LL) & 2) != 0 )
  {
    v4 = *(unsigned int *)(a3 + 8);
    v5 = *(const void **)(a1 + 48);
    v6 = 8LL * *(unsigned int *)(a1 + 56);
    v7 = v6 >> 3;
    if ( (v6 >> 3) + v4 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v7 + v4, 8);
      v4 = *(unsigned int *)(a3 + 8);
      if ( !v6 )
        goto LABEL_5;
    }
    else if ( !v6 )
    {
LABEL_5:
      *(_DWORD *)(a3 + 8) = v4 + v7;
      return;
    }
    memcpy((void *)(*(_QWORD *)a3 + 8 * v4), v5, v6);
    LODWORD(v4) = *(_DWORD *)(a3 + 8);
    goto LABEL_5;
  }
  sub_21B5A40(a1, a2, a3);
}
