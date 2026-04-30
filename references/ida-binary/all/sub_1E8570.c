__int64 __fastcall sub_1E8570(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = i;
        qfree(*(_QWORD *)(v3 + 16 * v6), a2);
        v3 = *(_QWORD *)(a1 + 16);
      }
    }
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v3, a2);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  *(_BYTE *)(a1 + 40) = 0;
  return sub_1E84B0(a1, (_BYTE *)&dword_0 + 1);
}
