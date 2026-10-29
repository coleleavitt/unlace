__int64 __fastcall sub_7B2C80(_QWORD *a1, double a2)
{
  __int64 (*v3)(void); // rax
  __int64 *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // r15d
  __int64 v9; // rdi
  char v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int i; // ebp
  unsigned int v14; // r12d
  __int64 (__fastcall *v15)(); // rcx
  __int64 (__fastcall *v16)(_QWORD); // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  char v22; // al
  __int64 v23; // [rsp+0h] [rbp-48h]
  _BYTE v24[64]; // [rsp+8h] [rbp-40h] BYREF

  v3 = *(__int64 (**)(void))(*a1 + 608LL);
  if ( v3 == sub_7C5860 )
  {
    v4 = (__int64 *)a1[20];
    if ( v4 )
      v5 = *v4;
    else
      v5 = a1[3];
    v6 = v5 + 24;
  }
  else
  {
    v6 = v3();
  }
  if ( !*(_BYTE *)(v6 + 408) )
    return 0;
  v23 = a1[3] + 3904LL;
  sub_17F9A60(v24, "sat");
  v9 = a1[3];
  if ( !*(_BYTE *)(v9 + 289) || (v22 = sub_1859630(v23, "override_incremental", v24, 0), v9 = a1[3], v22) )
  {
    v10 = sub_11B5060(v9);
    sub_18572D0(v24);
    if ( v10 )
      return 0;
    v11 = a1[3];
    v12 = *(_QWORD *)(v11 + 3296);
    if ( !v12 )
      return 0;
    v7 = 0;
    for ( i = 0; ; ++i )
    {
      if ( i >= *(_DWORD *)(v12 - 4) )
        return v7;
      v14 = 2 * i;
      v15 = *(__int64 (__fastcall **)())(*a1 + 528LL);
      if ( v15 == sub_7C5BC0 )
      {
        v16 = *(__int64 (__fastcall **)(_QWORD))(*a1 + 536LL);
        if ( v16 == sub_7C55E0 )
        {
          v17 = a1[20];
          if ( v17 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v17 + 880) + 4LL * (i & 0x7FFFFFFF)) < *(_DWORD *)(v17 + 888) )
              goto LABEL_17;
            goto LABEL_21;
          }
          v21 = *(_DWORD *)(*(_QWORD *)(v11 + 3288) + 4LL * v14);
        }
        else
        {
          v21 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v16)(a1, v14);
        }
      }
      else
      {
        v21 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v15)(a1, i);
      }
      if ( !v21 )
      {
LABEL_17:
        v18 = a1[117];
        v19 = *(_QWORD *)(v18 + 8LL * v14);
        if ( (v19 && *(_DWORD *)(v19 - 4) || (v20 = *(_QWORD *)(v18 + 8LL * (v14 | 1))) != 0 && *(_DWORD *)(v20 - 4))
          && ((unsigned __int8)sub_7B2AC0(a1, v14, a2) || (unsigned __int8)sub_7B2AC0(a1, v14 ^ 1, a2)) )
        {
          v11 = a1[3];
          ++v7;
        }
        else
        {
          v11 = a1[3];
        }
        goto LABEL_21;
      }
      v11 = a1[3];
LABEL_21:
      v12 = *(_QWORD *)(v11 + 3296);
      if ( !v12 )
        return v7;
    }
  }
  sub_11B5060(v9);
  sub_18572D0(v24);
  return 0;
}

