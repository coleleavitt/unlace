unsigned __int64 __fastcall sub_19C4A10(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx

  v1 = sub_A8A1F0(a1);
  v5 = *(_QWORD *)(v1 + 48);
  if ( v5 )
    return v5 & 0xFFFFFFFFFFFFFFF0LL;
  else
    return sub_A7AA70((__int64)a1, v1, 0, v2, v3, v4);
}
