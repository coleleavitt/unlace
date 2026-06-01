__int64 __fastcall sub_17634A0(__int64 *a1, unsigned __int16 **a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // rax

  v3 = sub_175B800(a1, a2[2]);
  if ( v3 == 1 )
    return 0;
  v4 = v3 & 0xFFFFFFFFFFFFFFFELL;
  v5 = *a1;
  if ( a2[2] != (unsigned __int16 *)v4 || *(_DWORD *)(v5 + 12632) )
    return sub_1B11630(
             *(_QWORD *)(v5 + 760),
             v4,
             *(unsigned int *)a2,
             *((unsigned int *)a2 + 3),
             *((unsigned int *)a2 + 1));
  else
    return (__int64)a2;
}
