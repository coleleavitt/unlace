void __fastcall sub_159B50(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rbx
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  void (*v7)(void); // rax
  void (__fastcall *v8)(_QWORD); // rdx
  _QWORD *v9; // rax

  v1 = *(_BYTE *)(a1 + 984) == 0;
  qword_253300 = a1;
  if ( !v1 )
  {
    if ( !*(_QWORD *)(a1 + 480) )
    {
      sub_1582F0(a1);
      sub_159C10((void *)a1);
      return;
    }
    if ( *(_DWORD *)(a1 + 472) == 1 )
    {
      v2 = *(_QWORD *)(a1 + 848);
      if ( v2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 656LL))(a1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 256LL))(v2);
      }
    }
  }
  v3 = *(_QWORD **)(a1 + 1096);
  v4 = (_QWORD *)(a1 + 1096);
  while ( v4 != v3 )
  {
    v5 = v3;
    v3 = (_QWORD *)*v3;
    v6 = (_QWORD *)v5[2];
    v7 = *(void (**)(void))(*v6 + 24LL);
    if ( (char *)v7 == (char *)sub_157D60 )
    {
      v8 = (void (__fastcall *)(_QWORD))v6[2];
      v9 = (_QWORD *)(v6[1] + v6[3]);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        v8 = *(void (__fastcall **)(_QWORD))((char *)v8 + *v9 - 1);
      v8(v9);
    }
    else
    {
      v7();
    }
  }
}

