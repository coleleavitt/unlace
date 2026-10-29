__int64 __fastcall sub_4083F0(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 *v6; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rbx
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  int v21; // [rsp+24h] [rbp-54h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h] BYREF
  char v23; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v24[8]; // [rsp+38h] [rbp-40h] BYREF
  const char *v25; // [rsp+40h] [rbp-38h] BYREF

  result = 0;
  v6 = nullptr;
  if ( (*(_BYTE *)(a1 + 424) & 1) == 0 )
  {
    if ( strstr(a2, "::") )
    {
      sub_473C40(a1, (_DWORD)a2, 0, 2048, (unsigned int)&v22, (unsigned int)&v23, (__int64)v24, (__int64)&v25);
      v9 = v22;
      if ( !v22 )
        return 0;
      a2 = v25;
      if ( !v25 )
        return 0;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 40);
      v25 = a2;
      v22 = v9;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, const char *, int *))(v9 + 232))(v9 + 160, a2, &v21);
    v11 = v10;
    if ( v21 )
    {
      v16 = v22;
      if ( *(_DWORD *)(v22 + 352) )
        ++*(_DWORD *)(v22 + 392);
      if ( *(_DWORD *)(v16 + 416) )
        ++*(_DWORD *)(v16 + 360);
      sub_475510(v16);
    }
    else
    {
      v12 = *(_QWORD *)(v10 + 24);
      ++*(_DWORD *)(v12 + 16);
      if ( *(_QWORD *)(v12 + 88) )
        *(_DWORD *)(v12 + 80) |= 0x10u;
      sub_4075E0(a1, (_QWORD *)v12);
      if ( (*(_BYTE *)(v12 + 80) & 0x10) != 0 )
      {
        v6 = *(__int64 **)(v12 + 88);
        *(_QWORD *)(v12 + 88) = 0;
      }
      v13 = *(_DWORD *)(v12 + 16) - 1;
      v14 = *(_DWORD *)(v12 + 16) == 1;
      *(_DWORD *)(v12 + 16) = v13;
      if ( v13 < 0 || v14 )
        Tcl_Free(v12);
      v15 = (*(__int64 (__fastcall **)(__int64, const char *, int *))(v22 + 232))(v22 + 160, v25, &v21);
      v11 = v15;
      if ( !v21 )
        Tcl_Free(*(_QWORD *)(v15 + 24));
    }
    v17 = sub_40FB00(104);
    *(_QWORD *)(v11 + 24) = v17;
    *(_QWORD *)v17 = v11;
    v18 = v22;
    *(_DWORD *)(v17 + 16) = 1;
    *(_DWORD *)(v17 + 20) = 0;
    *(_QWORD *)(v17 + 24) = 0;
    *(_QWORD *)(v17 + 40) = v17;
    *(_QWORD *)(v17 + 48) = a3;
    *(_QWORD *)(v17 + 8) = v18;
    *(_QWORD *)(v17 + 56) = a4;
    *(_QWORD *)(v17 + 72) = a4;
    *(_DWORD *)(v17 + 80) = 0;
    *(_QWORD *)(v17 + 96) = 0;
    *(_QWORD *)(v17 + 32) = TclInvokeStringCommand;
    *(_QWORD *)(v17 + 64) = a5;
    if ( v6 )
    {
      *(_QWORD *)(v17 + 88) = v6;
      do
      {
        v19 = *v6;
        v6 = (__int64 *)v6[1];
        **(_QWORD **)(v19 + 40) = v17;
      }
      while ( v6 );
      sub_475540(a1, v17);
      return v17;
    }
    else
    {
      *(_QWORD *)(v17 + 88) = 0;
      sub_475540(a1, v17);
      return v17;
    }
  }
  return result;
}

