__int64 __fastcall sub_4C48D0(__int64 a1, __int64 a2)
{
  int i; // ebp
  __int64 v3; // rax

LABEL_1:
  for ( i = 0; i < (*(int (__fastcall **)(__int64))(*(_QWORD *)a2 + 464LL))(a2); ++i )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 456LL))(a2, (unsigned int)i);
    if ( v3 && *(_DWORD *)(v3 + 40) && (unsigned __int8)sub_4C48D0(a1, v3) )
      goto LABEL_1;
  }
  return sub_4D13E0(a2);
}
