void __fastcall sub_FCA320(__int64 a1, _QWORD *a2)
{
  unsigned __int8 *v2; // rax
  __int64 v3; // rdx
  size_t v4; // rbx
  const void *v5; // r12
  __int64 v6; // rdi

  if ( *(_BYTE *)(a1 + 72) )
  {
    v4 = *(_QWORD *)(a1 + 64);
    v5 = *(const void **)(a1 + 56);
    v6 = a2[1];
    if ( v4 + v6 > a2[2] )
    {
      sub_2236E10(a2, a2 + 3, v4 + v6, 1);
      v6 = a2[1];
    }
    if ( v4 )
    {
      memcpy((void *)(*a2 + v6), v5, v4);
      v6 = a2[1];
    }
    a2[1] = v6 + v4;
  }
  else
  {
    v2 = (unsigned __int8 *)sub_FD36D0(*(_QWORD *)(*(_QWORD *)a1 + 32LL), *(unsigned int *)(a1 + 12));
    sub_FC80A0((_QWORD *)a1, v2, &v2[v3], a2);
  }
}
