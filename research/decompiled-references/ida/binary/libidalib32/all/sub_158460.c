__int64 __fastcall sub_158460(__int64 a1)
{
  __int64 v1; // rax
  __int64 (*v2)(); // rcx

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 232LL))(a1);
  if ( v1 && (v2 = *(__int64 (**)())(*(_QWORD *)v1 + 368LL), v2 != sub_F2FA0) )
    return ((unsigned __int8 (__fastcall *)(__int64, __int64 (*)(), _QWORD))v2)(v1, sub_F2FA0, 0);
  else
    return 0;
}

