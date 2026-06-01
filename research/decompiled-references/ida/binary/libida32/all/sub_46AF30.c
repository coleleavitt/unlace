__int64 __fastcall sub_46AF30(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int *v3; // rax

  v2 = switch_dbctx(*(int *)(a1 + 8));
  v3 = (unsigned int *)sub_4EE960(*(_QWORD *)(v2 + 1480) + 1552LL, a2);
  if ( v3 )
    return *v3;
  else
    return 0xFFFFFFFFLL;
}

