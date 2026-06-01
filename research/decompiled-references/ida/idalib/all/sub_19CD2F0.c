__int64 __fastcall sub_19CD2F0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rax
  unsigned int v5; // ecx
  _QWORD *v6; // rdx
  __int64 v7; // rsi
  unsigned int v9; // ecx

  v2 = *a1;
  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v3 == sub_A01140 )
    v4 = sub_B70A60(a2);
  else
    v4 = v3(a2);
  v5 = *(unsigned __int8 *)(v2 + 20);
  if ( (_BYTE)v5 )
  {
    v6 = *(_QWORD **)v2;
    v7 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 12);
    if ( *(_QWORD *)v2 != v7 )
    {
      while ( v4 != *v6 )
      {
        if ( (_QWORD *)v7 == ++v6 )
          return v5;
      }
      return 0;
    }
    return v5;
  }
  else
  {
    LOBYTE(v9) = sub_2236570(v2, v4) == 0;
    return v9;
  }
}
