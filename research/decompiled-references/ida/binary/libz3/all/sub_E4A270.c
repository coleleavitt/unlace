void __fastcall sub_E4A270(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 (__fastcall *v3)(); // rax
  _QWORD *v4; // rdi
  __int64 (*v5)(void); // rdx
  _QWORD *v6; // rdi
  _QWORD **v7; // rdi
  __int64 v8; // rdi

  *a1 = &off_1C5CE28;
  if ( *((_BYTE *)a1 + 24) )
  {
    v2 = (_QWORD *)a1[2];
    v3 = *(__int64 (__fastcall **)())(*v2 + 72LL);
    if ( v3 == sub_E4A320 )
    {
      v4 = (_QWORD *)v2[13];
      v5 = *(__int64 (**)(void))(*v4 + 72LL);
      if ( v5 != v3 )
        goto LABEL_10;
      v6 = (_QWORD *)v4[13];
      v3 = *(__int64 (__fastcall **)())(*v6 + 72LL);
      if ( v3 == v5 )
      {
        v7 = (_QWORD **)v6[13];
        v5 = (__int64 (*)(void))(*v7)[9];
        if ( v5 == v3 )
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v7[13] + 72LL))(v7[13]);
LABEL_7:
          sub_18296D0(v8);
          goto LABEL_8;
        }
LABEL_10:
        v8 = v5();
        goto LABEL_7;
      }
    }
    v8 = v3();
    goto LABEL_7;
  }
LABEL_8:
  operator delete(a1, 0x20u);
}

