void __fastcall sub_40A230(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v6; // rax
  __int64 *v7; // rax
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  int *v11; // rdx

  if ( *(_QWORD *)(a2 + 8) && (*(_UNKNOWN ***)(a2 + 24) != &off_655E20 || !*(_DWORD *)(*(_QWORD *)(a2 + 32) + 12LL)) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 1000) + 64LL))(*(_QWORD *)(a1 + 1000), a2);
    if ( v6 )
    {
      v7 = *(__int64 **)(v6 + 24);
      v8 = *((_DWORD *)v7 + 2);
      v9 = *v7;
      *a4 = v8;
      *a3 = v9;
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 992) + 64LL))(*(_QWORD *)(a1 + 992), a2);
      if ( v10 )
      {
        v11 = *(int **)(v10 + 24);
        *(_QWORD *)(*(_QWORD *)v11 + 48LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 40LL) + 104LL) + v11[2];
        *a3 = *(_QWORD *)v11;
        *a4 = v11[3];
      }
    }
  }
}

