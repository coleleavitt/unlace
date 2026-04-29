__int64 __fastcall sub_73650(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 (__fastcall *v3)(__int64); // rax
  _QWORD *v4; // rdi
  __int64 (*v5)(void); // rdx
  _QWORD *v6; // rdi
  _QWORD **v7; // rdi
  unsigned int v8; // eax

  v3 = *(__int64 (__fastcall **)(__int64))(*a1 + 16LL);
  if ( v3 == sub_15A20 )
  {
    v4 = (_QWORD *)a1[1];
    v5 = *(__int64 (**)(void))(*v4 + 16LL);
    if ( (char *)v5 != (char *)v3 )
    {
LABEL_9:
      v8 = v5();
      goto LABEL_6;
    }
    v6 = (_QWORD *)v4[1];
    v3 = *(__int64 (__fastcall **)(__int64))(*v6 + 16LL);
    if ( (char *)v3 == (char *)v5 )
    {
      v7 = (_QWORD **)v6[1];
      v5 = (__int64 (*)(void))(*v7)[2];
      if ( (char *)v5 == (char *)v3 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v7[1] + 16LL))(v7[1]);
        goto LABEL_6;
      }
      goto LABEL_9;
    }
  }
  v8 = ((__int64 (*)(void))v3)();
LABEL_6:
  if ( v8 )
    return a1[8] + v8;
  return v1;
}
