unsigned __int64 __fastcall sub_6B800(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // r15
  __int64 v7; // r12
  const char *v8; // rax
  __int64 v9; // rdx
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  __int64 v15; // [rsp+18h] [rbp-60h]
  int v16; // [rsp+2Ch] [rbp-4Ch] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( a4 > 0 )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(a3 + 8 * v6);
        v17 = 0;
        if ( (*(unsigned int (__fastcall **)(__int64, int *, __int64 *))(a2 + 344))(v7, &v16, &v17) )
        {
          v8 = (const char *)(*(__int64 (__fastcall **)(__int64))(a2 + 464))(v17);
          sub_1D740((__int64)"ERROR: %s\n", v8);
        }
        v6 = ++v5;
        if ( !v16 )
          break;
        if ( a4 <= v5 )
          return v18 - __readfsqword(0x28u);
      }
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      if ( a4 <= v5 )
        break;
      v15 = *(_QWORD *)(a3 + 8LL * v5);
      if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)sub_6B440(a2, v7, v9)
        && (!v15 || *(_QWORD *)(a1 + 40) < (unsigned __int64)sub_6B440(a2, v15, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL))) )
      {
        goto LABEL_10;
      }
    }
    if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)sub_6B440(a2, v7, v9) )
      return v18 - __readfsqword(0x28u);
LABEL_10:
    v17 = 0;
    if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64 *))(a2 + 352))(v7, a1 + 24, &v17) )
    {
      v10 = (const char *)(*(__int64 (__fastcall **)(__int64))(a2 + 464))(v17);
      sub_1D740((__int64)"ERROR: %s\n", v10);
    }
    v17 = 0;
    if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64 *))(a2 + 384))(v7, a1 + 32, &v17) )
    {
      v11 = (const char *)(*(__int64 (__fastcall **)(__int64))(a2 + 464))(v17);
      sub_1D740((__int64)"ERROR: %s\n", v11);
    }
    v17 = 0;
    if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64 *))(a2 + 360))(v7, a1 + 16, &v17) )
    {
      v12 = (const char *)(*(__int64 (__fastcall **)(__int64))(a2 + 464))(v17);
      sub_1D740((__int64)"ERROR: %s\n", v12);
    }
  }
  return v18 - __readfsqword(0x28u);
}
