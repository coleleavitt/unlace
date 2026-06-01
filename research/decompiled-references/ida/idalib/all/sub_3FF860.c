__int64 __fastcall sub_3FF860(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 (*v3)(void); // rax
  __int64 *v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rdi
  __int64 (*v7)(void); // rax
  __int64 result; // rax

  v2 = (__int64 *)a1[1];
  v3 = *(__int64 (**)(void))(*v2 + 32);
  if ( (char *)v3 == (char *)sub_3DB7B0 )
    v4 = v2 + 2;
  else
    v4 = (__int64 *)v3();
  v5 = *v4;
  v6 = (_QWORD *)a1[2];
  a1[3] = v5;
  v7 = *(__int64 (**)(void))(*v6 + 32LL);
  if ( (char *)v7 == (char *)sub_3DB7B0 )
    result = v6[2];
  else
    result = *(_QWORD *)v7();
  a1[4] = result;
  return result;
}
