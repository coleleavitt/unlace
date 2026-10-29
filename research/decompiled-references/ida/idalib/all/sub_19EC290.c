void __fastcall sub_19EC290(__int64 a1, __int64 a2, unsigned __int8 **a3)
{
  char *v3; // r9
  char v4; // r10
  unsigned __int8 v5; // cl
  unsigned __int8 *v6; // rax
  char *v7; // r8
  __int64 v8; // rax

  v3 = (char *)a3[1];
  if ( !v3 )
    return;
  v4 = 0;
  v5 = **a3;
  v6 = *a3 + 1;
  v7 = (char *)&(*a3)[(_QWORD)v3];
  while ( (dword_2646E30[v5] & 1) == 0 )
  {
    if ( v7 == (char *)v6 )
      goto LABEL_7;
LABEL_4:
    v5 = *v6++;
  }
  v4 = 1;
  *(_QWORD *)(a1 + 17432) |= 1LL << v5;
  if ( v7 != (char *)v6 )
    goto LABEL_4;
LABEL_7:
  if ( v4 )
  {
    v8 = *(unsigned int *)(a1 + 17376);
    if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 17380) )
    {
      sub_2237220(a1 + 17368, a1 + 17384, v8 + 1, 8);
      v8 = *(unsigned int *)(a1 + 17376);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 17368) + 8 * v8) = a2;
    ++*(_DWORD *)(a1 + 17376);
  }
}
