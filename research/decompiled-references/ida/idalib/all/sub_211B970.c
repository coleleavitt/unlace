__int64 __fastcall sub_211B970(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 (*v9)(); // rcx
  _QWORD v10[4]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v11; // [rsp+20h] [rbp-28h]

  v3 = a1[1];
  v4 = *(_QWORD *)(v3 + 152);
  if ( *(_DWORD *)(v4 + 312) == 4 && (v6 = *(_DWORD *)(v4 + 320)) != 0 && v6 != 6 )
  {
    v7 = a1[13];
    if ( !v7 || *(_QWORD *)(v7 + 8) )
    {
      v11 = 259;
      v10[0] = ".seh_ directive must appear within an active frame";
      return sub_2100A30(v3, a2, (__int64)v10);
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 96);
      if ( v8 )
      {
        v9 = *(__int64 (**)())(*a1 + 88LL);
        result = 1;
        if ( v9 != sub_2119CA0 )
        {
          result = ((__int64 (__fastcall *)(_QWORD *))v9)(a1);
          v8 = *(_QWORD *)(v7 + 96);
        }
        *(_QWORD *)(v7 + 8) = result;
        a1[13] = v8;
      }
      else
      {
        v10[0] = "End of a chained region outside a chained region!";
        v11 = 259;
        return sub_2100A30(v3, a2, (__int64)v10);
      }
    }
  }
  else
  {
    v10[0] = ".seh_* directives are not supported on this target";
    v11 = 259;
    return sub_2100A30(v3, a2, (__int64)v10);
  }
  return result;
}
