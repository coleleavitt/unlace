__int64 __fastcall sub_407770(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 *v6; // rbp
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rbx
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v19; // [rsp+24h] [rbp-54h] BYREF
  __int64 v20; // [rsp+28h] [rbp-50h] BYREF
  char v21; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v22[8]; // [rsp+38h] [rbp-40h] BYREF
  const char *v23; // [rsp+40h] [rbp-38h] BYREF

  result = 0;
  v6 = nullptr;
  if ( (*(_BYTE *)(a1 + 424) & 1) == 0 )
  {
    if ( !strstr(a2, "::") )
    {
      v9 = *(_QWORD *)(a1 + 40);
      v23 = a2;
      v20 = v9;
      goto LABEL_5;
    }
    sub_473C40(a1, (_DWORD)a2, 0, 2048, (unsigned int)&v20, (unsigned int)&v21, (__int64)v22, (__int64)&v23);
    v9 = v20;
    if ( v20 )
    {
      a2 = v23;
      if ( v23 )
      {
LABEL_5:
        v10 = (*(__int64 (__fastcall **)(__int64, const char *, int *))(v9 + 232))(v9 + 160, a2, &v19);
        sub_475510(v20);
        if ( v19 )
        {
          v15 = v20;
          if ( *(_DWORD *)(v20 + 352) )
            ++*(_DWORD *)(v20 + 392);
          if ( *(_DWORD *)(v15 + 416) )
            ++*(_DWORD *)(v15 + 360);
        }
        else
        {
          v11 = *(_QWORD *)(v10 + 24);
          if ( *(__int64 (__fastcall **)(__int64, __int64, unsigned int, __int64))(v11 + 32) == TclInvokeStringCommand
            && *(_QWORD *)(v11 + 56) == a4
            && *(_QWORD *)(v11 + 72) == a4
            && *(_QWORD *)(v11 + 64) == a5 )
          {
            *(_QWORD *)(v11 + 32) = a3;
            *(_QWORD *)(v11 + 40) = a4;
            return v11;
          }
          ++*(_DWORD *)(v11 + 16);
          if ( *(_QWORD *)(v11 + 88) )
            *(_DWORD *)(v11 + 80) |= 0x10u;
          sub_4075E0(a1, (_QWORD *)v11);
          if ( (*(_BYTE *)(v11 + 80) & 0x10) != 0 )
          {
            v6 = *(__int64 **)(v11 + 88);
            *(_QWORD *)(v11 + 88) = 0;
          }
          v12 = *(_DWORD *)(v11 + 16) - 1;
          v13 = *(_DWORD *)(v11 + 16) == 1;
          *(_DWORD *)(v11 + 16) = v12;
          if ( v12 < 0 || v13 )
            Tcl_Free(v11);
          v14 = (*(__int64 (__fastcall **)(__int64, const char *, int *))(v20 + 232))(v20 + 160, v23, &v19);
          v10 = v14;
          if ( !v19 )
            Tcl_Free(*(_QWORD *)(v14 + 24));
        }
        v11 = sub_40FB00(104);
        *(_QWORD *)(v10 + 24) = v11;
        *(_QWORD *)v11 = v10;
        v16 = v20;
        *(_DWORD *)(v11 + 16) = 1;
        *(_DWORD *)(v11 + 20) = 0;
        *(_QWORD *)(v11 + 24) = 0;
        *(_QWORD *)(v11 + 32) = a3;
        *(_QWORD *)(v11 + 40) = a4;
        *(_QWORD *)(v11 + 8) = v16;
        *(_QWORD *)(v11 + 56) = v11;
        *(_QWORD *)(v11 + 72) = a4;
        *(_DWORD *)(v11 + 80) = 0;
        *(_QWORD *)(v11 + 96) = 0;
        *(_QWORD *)(v11 + 48) = TclInvokeObjectCommand;
        *(_QWORD *)(v11 + 64) = a5;
        if ( v6 )
        {
          *(_QWORD *)(v11 + 88) = v6;
          do
          {
            v17 = *v6;
            v6 = (__int64 *)v6[1];
            **(_QWORD **)(v17 + 40) = v11;
          }
          while ( v6 );
        }
        else
        {
          *(_QWORD *)(v11 + 88) = 0;
        }
        sub_475540(a1, v11);
        return v11;
      }
    }
    return 0;
  }
  return result;
}

