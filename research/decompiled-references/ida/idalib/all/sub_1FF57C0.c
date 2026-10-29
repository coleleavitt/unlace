void __fastcall sub_1FF57C0(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi
  __int64 v3; // rdi

  *a1 = &off_2BE4D18;
  v2 = (volatile signed __int32 *)a1[3];
  if ( v2 && !_InterlockedSub(v2 + 2, 1u) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = a1[1];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  nullsub_1254();
  operator delete(a1, 0x20u);
}
