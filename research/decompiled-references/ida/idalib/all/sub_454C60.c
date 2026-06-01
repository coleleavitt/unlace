__int64 __fastcall sub_454C60(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // r13
  unsigned __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64); // rax
  unsigned __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(); // rax
  __int64 v9; // rax
  __int64 v11; // rdi
  __int64 (*v12)(); // rax

  v3 = (unsigned __int64 *)(a1 + 16);
  switch_dbctx(*(int *)(a1 + 8));
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, 0, 0);
  if ( v4 != -1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)a1;
      v8 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 144LL);
      if ( v8 != sub_455020 )
        break;
      if ( !*(_QWORD *)(a1 + 80) )
        goto LABEL_10;
      v5 = *(__int64 (__fastcall **)(__int64))(v7 + 32);
      if ( v5 == sub_3DB7B0 )
      {
        v6 = v3;
      }
      else
      {
        v6 = (unsigned __int64 *)v5(a1);
        v7 = *(_QWORD *)a1;
      }
      if ( v4 < *v6 || v4 >= v6[1] )
        goto LABEL_10;
      if ( v4 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(v7 + 40))(a1, v4, 0) )
      {
        v11 = *(_QWORD *)(a1 + 80);
        v12 = *(__int64 (**)())(*(_QWORD *)v11 + 96LL);
        if ( v12 != sub_454230 )
        {
          v9 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64, _QWORD, _QWORD))v12)(
                 v11,
                 *(unsigned __int8 *)(a1 + 92),
                 v4,
                 *(_QWORD *)(a1 + 64),
                 *(unsigned int *)(a1 + 12));
          goto LABEL_13;
        }
      }
LABEL_9:
      v7 = *(_QWORD *)a1;
LABEL_10:
      v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(v7 + 40))(a1, v4, 1);
      if ( v4 == -1 )
        return -1;
    }
    v9 = ((__int64 (__fastcall *)(__int64, unsigned __int64))v8)(a1, v4);
LABEL_13:
    if ( v9 != -1 && v9 == a2 )
      return v4;
    goto LABEL_9;
  }
  return -1;
}
