__int64 __fastcall sub_211B880(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // eax
  _QWORD *v7; // rbp
  __int64 (*v8)(); // rdx
  _QWORD v9[4]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v10; // [rsp+20h] [rbp-28h]

  v3 = a1[1];
  v4 = *(_QWORD *)(v3 + 152);
  if ( *(_DWORD *)(v4 + 312) == 4 && (v6 = *(_DWORD *)(v4 + 320)) != 0 && v6 != 6 )
  {
    v7 = (_QWORD *)a1[13];
    if ( !v7 || v7[1] )
    {
      v10 = 259;
      v9[0] = ".seh_ directive must appear within an active frame";
      return sub_2100A30(v3, a2, (__int64)v9);
    }
    else
    {
      if ( v7[12] )
      {
        v9[0] = "Not all chained regions terminated!";
        v10 = 259;
        sub_2100A30(v3, a2, (__int64)v9);
      }
      v8 = *(__int64 (**)())(*a1 + 88LL);
      result = 1;
      if ( v8 != sub_2119CA0 )
        result = ((__int64 (__fastcall *)(_QWORD *))v8)(a1);
      v7[2] = result;
    }
  }
  else
  {
    v9[0] = ".seh_* directives are not supported on this target";
    v10 = 259;
    return sub_2100A30(v3, a2, (__int64)v9);
  }
  return result;
}
