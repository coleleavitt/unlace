void __fastcall sub_15D2550(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rdi

  v2 = (_QWORD *)a1[2];
  *a1 = &off_2C48C18;
  v3 = &v2[*((unsigned int *)a1 + 6)];
  if ( v2 != v3 )
  {
    do
    {
      v4 = *v2;
      if ( (*(_DWORD *)(*v2 + 8LL))-- == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      ++v2;
    }
    while ( v3 != v2 );
    v3 = (_QWORD *)a1[2];
  }
  if ( v3 != a1 + 4 )
    free(v3);
  sub_15F0060(a1);
  operator delete(a1, 0x30u);
}
