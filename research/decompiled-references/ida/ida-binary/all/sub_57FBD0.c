void __fastcall sub_57FBD0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  volatile signed __int32 *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v3 = *(_QWORD *)(a1 + 1256);
  if ( v3 && (unsigned __int8)sub_57C4D0(v3) )
  {
    v4 = (volatile signed __int32 *)sub_57C660(*(_QWORD *)(a1 + 1256));
    sub_57F960(a1, v4, v5, v6, v7, v8);
    sub_57C770((__int64)v4);
  }
  nullsub_335();
  *(_QWORD *)(a1 + 1264) = a2;
}
