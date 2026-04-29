bool __fastcall sub_1726D0(_QWORD *a1, int a2, int a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64, int); // rax
  __int64 (__fastcall *v7)(__int64, int, int); // r8
  __int64 (__fastcall *v8)(__int64, int); // rax
  int v9; // eax
  __int64 (__fastcall *v11)(__int64, int); // rax
  int v12; // eax

  v3 = a3;
  v4 = a2;
  v5 = *a1;
  if ( a2 == a3 )
  {
LABEL_14:
    v11 = *(__int64 (__fastcall **)(__int64, int))(v5 + 104);
    if ( v11 == sub_12DC50 )
      v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528LL) + 8 * v3) + 352LL);
    else
      v12 = v11((__int64)a1, v3);
    return v12 == 1;
  }
  else
  {
LABEL_2:
    v6 = *(__int64 (__fastcall **)(__int64, int))(v5 + 96);
    if ( v6 == sub_12DC30 )
    {
LABEL_3:
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528LL) + 8LL * (int)v4) + 376LL) == 1 )
        goto LABEL_4;
    }
    else
    {
      while ( (unsigned int)v6((__int64)a1, v4) == 1 )
      {
LABEL_4:
        v5 = *a1;
        v7 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
        if ( v7 == sub_12DC70 )
        {
          LODWORD(v4) = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528LL) + 8 * v4) + 368LL);
          if ( (_DWORD)v3 == (_DWORD)v4 )
            goto LABEL_14;
        }
        else
        {
          v4 = (int)v7((__int64)a1, v4, 0);
          v5 = *a1;
          if ( (_DWORD)v3 == (_DWORD)v4 )
            goto LABEL_14;
        }
        if ( a2 == (_DWORD)v4 )
          goto LABEL_2;
        v8 = *(__int64 (__fastcall **)(__int64, int))(v5 + 104);
        if ( v8 == sub_12DC50 )
          v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528LL) + 8LL * (int)v4) + 352LL);
        else
          v9 = v8((__int64)a1, v4);
        if ( v9 != 1 )
          return 0;
        v6 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
        if ( v6 == sub_12DC30 )
          goto LABEL_3;
      }
    }
    return 0;
  }
}
