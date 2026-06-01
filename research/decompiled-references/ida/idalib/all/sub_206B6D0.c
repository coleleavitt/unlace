char __fastcall sub_206B6D0(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  int v3; // ecx
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  unsigned __int8 *v8; // r13
  unsigned __int8 *i; // r14
  __m128 v10; // [rsp-10h] [rbp-58h] BYREF
  char v11; // [rsp+0h] [rbp-48h]

  if ( !a3 )
    return 0;
  v3 = *a3;
  if ( (unsigned int)(v3 - 5) > 0x20 )
    return 0;
  if ( (_BYTE)v3 == 6 )
    return 1;
  if ( sub_A5F460(a2, (__int64)a3) )
    return 1;
  sub_206B630(&v10, a1, (__int64)a3);
  if ( !v11 )
    return 0;
  v6 = *(a3 - 16);
  if ( (v6 & 2) != 0 )
  {
    v8 = *((unsigned __int8 **)a3 - 4);
    v7 = *((unsigned int *)a3 - 6);
  }
  else
  {
    v7 = (*((_WORD *)a3 - 8) >> 6) & 0xF;
    v8 = &a3[-8 * ((v6 >> 2) & 0xF) - 16];
  }
  for ( i = &v8[8 * v7]; i != v8; v8 += 8 )
  {
    if ( (unsigned __int8)sub_206B6D0(a1, a2, *(_QWORD *)v8) )
      sub_206B630(&v10, a2, (__int64)a3);
  }
  return sub_A5F460(a2, (__int64)a3);
}
