__int64 __fastcall sub_D8CDB0(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // rdi
  __int64 (__fastcall *v4)(__int64); // rax
  _QWORD *v5; // rdi
  __int64 (*v6)(void); // rdx
  _QWORD *v7; // rdi
  _QWORD **v8; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 424);
  v3 = *(_QWORD **)(a1 + 24);
  v4 = *(__int64 (__fastcall **)(__int64))(*v3 + 96LL);
  if ( v4 != sub_CCC500 )
    goto LABEL_8;
  v5 = (_QWORD *)v3[3];
  v6 = *(__int64 (**)(void))(*v5 + 96LL);
  if ( (char *)v6 != (char *)v4 )
  {
LABEL_7:
    result = v6();
    goto LABEL_6;
  }
  v7 = (_QWORD *)v5[3];
  v4 = *(__int64 (__fastcall **)(__int64))(*v7 + 96LL);
  if ( (char *)v4 != (char *)v6 )
  {
LABEL_8:
    result = ((__int64 (*)(void))v4)();
    goto LABEL_6;
  }
  v8 = (_QWORD **)v7[3];
  v6 = (__int64 (*)(void))(*v8)[12];
  if ( (char *)v6 != (char *)v4 )
    goto LABEL_7;
  result = (*(__int64 (__fastcall **)(_QWORD *))(*v8[3] + 96LL))(v8[3]);
LABEL_6:
  *(_QWORD *)(result + 8) = v2;
  *(_QWORD *)(a1 + 424) = 0;
  return result;
}

