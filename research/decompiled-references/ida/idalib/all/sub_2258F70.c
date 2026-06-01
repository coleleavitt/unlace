void __fastcall sub_2258F70(_QWORD *a1)
{
  _QWORD *v2; // r12
  _QWORD *v3; // rbx
  volatile signed __int32 *v4; // rdi

  v2 = (_QWORD *)a1[2];
  *a1 = &off_2C75F48;
  v3 = &v2[*((unsigned int *)a1 + 6)];
  if ( v2 != v3 )
  {
    do
    {
      v4 = (volatile signed __int32 *)*--v3;
      if ( *v3 && !_InterlockedSub(v4 + 2, 1u) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    while ( v2 != v3 );
    v3 = (_QWORD *)a1[2];
  }
  if ( v3 != a1 + 4 )
    free(v3);
  operator delete(a1, 0x28u);
}
