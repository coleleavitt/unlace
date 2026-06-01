__int64 __fastcall sub_448F20(__int64 (__fastcall **a1)(__int64))
{
  __int64 (__fastcall *v1)(__int64); // r12
  __int64 (__fastcall *v2)(__int64); // rbx

  v1 = *a1;
  v2 = a1[1];
  Tcl_Free((__int64)a1);
  return v1((__int64)v2);
}

