__int64 __fastcall sub_7AA160(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 (__fastcall *v2)(); // rax
  _QWORD *v3; // rdi
  __int64 (*v4)(void); // rdx
  __int64 *v5; // rdi
  _QWORD **v6; // rdi
  char v7; // al
  unsigned int v8; // edx
  __int64 result; // rax
  char v10; // al

  v1 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_2CAA880 + 184LL))(qword_2CAA880, a1);
  v2 = *(__int64 (__fastcall **)())(*v1 + 152);
  if ( v2 == sub_7AA620 )
  {
    v3 = (_QWORD *)v1[4];
    v4 = *(__int64 (**)(void))(*v3 + 152LL);
    if ( v4 != v2 )
      goto LABEL_8;
    v5 = (__int64 *)v3[4];
    v2 = *(__int64 (__fastcall **)())(*v5 + 152);
    if ( v2 == v4 )
    {
      v6 = (_QWORD **)v5[4];
      v4 = (__int64 (*)(void))(*v6)[19];
      if ( v4 == v2 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v6[4] + 152LL))(v6[4]);
        goto LABEL_6;
      }
LABEL_8:
      v10 = v4();
      v8 = -1;
      if ( v10 )
        goto LABEL_7;
      goto LABEL_9;
    }
  }
  else
  {
    v5 = v1;
  }
  v7 = ((__int64 (__fastcall *)(__int64 *))v2)(v5);
LABEL_6:
  v8 = -1;
  if ( v7 )
  {
LABEL_7:
    v1[8] = (__int64)"irs";
    return v8;
  }
LABEL_9:
  result = sub_79DA40(v1[4]);
  v8 = result;
  if ( result <= 0 )
    goto LABEL_7;
  return (unsigned int)result;
}

