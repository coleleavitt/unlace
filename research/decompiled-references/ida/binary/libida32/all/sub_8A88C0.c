__int64 __fastcall sub_8A88C0(_QWORD *a1, unsigned __int8 a2, __int64 a3)
{
  void (*v5)(void); // rax
  _QWORD *v6; // rdi
  __int64 v7; // rdi
  __int64 (*v8)(); // rax

  if ( !a2 )
  {
    v5 = *(void (**)(void))(*a1 + 192LL);
    if ( (char *)v5 == (char *)sub_8A8180 )
    {
      v6 = (_QWORD *)a1[1];
      if ( v6 )
        sub_8A8050(v6);
    }
    else
    {
      v5();
    }
  }
  v7 = a1[3];
  if ( v7 && (v8 = *(__int64 (**)())(*(_QWORD *)v7 + 8LL), v8 != sub_8A46A0) )
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v8)(v7, a2, a3);
  else
    return 0;
}

