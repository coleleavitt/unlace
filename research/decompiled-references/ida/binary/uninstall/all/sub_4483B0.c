__int64 __fastcall sub_4483B0(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  _QWORD *v7; // rbx
  _DWORD *v8; // rdi
  bool v9; // zf

  result = sub_406BD0(a1, (__int64)"tclBgError", nullptr);
  v7 = (_QWORD *)result;
  if ( !a2 )
    result = sub_47D740(
               (unsigned int)"TclSetBgErrorHandler: NULL cmdPrefix argument",
               (unsigned int)"tclBgError",
               v3,
               v4,
               v5,
               v6);
  if ( !v7 )
  {
    v7 = (_QWORD *)sub_40FB00(32);
    *v7 = a1;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    result = (__int64)sub_406A90(a1, (__int64)"tclBgError", (__int64)sub_448600, (__int64)v7);
  }
  v8 = (_DWORD *)v7[1];
  if ( v8 )
  {
    result = (unsigned int)(*v8 - 1);
    v9 = *v8 == 1;
    *v8 = result;
    if ( (int)result < 0 || v9 )
      result = sub_47B120(v8);
  }
  ++*a2;
  v7[1] = a2;
  return result;
}

