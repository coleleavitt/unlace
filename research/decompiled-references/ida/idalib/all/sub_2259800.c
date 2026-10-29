void __fastcall sub_2259800(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi

  *a1 = &off_2BEB888;
  v2 = (volatile signed __int32 *)a1[2];
  if ( v2 && !_InterlockedSub(v2 + 2, 1u) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    operator delete(a1, 0x48u);
  }
  else
  {
    operator delete(a1, 0x48u);
  }
}
