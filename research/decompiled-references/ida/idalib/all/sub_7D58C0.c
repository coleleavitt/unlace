void sub_7D58C0()
{
  void *v0; // rbx
  void (__fastcall *v1)(void *); // rax
  void *v2; // rbx
  void (__fastcall *v3)(void *); // rax
  void *v4; // rbx
  void (__fastcall *v5)(void *); // rax
  void *v6; // rbx
  void (__fastcall *v7)(void *); // rax

  v0 = qword_2CD4800;
  if ( qword_2CD4800 )
  {
    v1 = *(void (__fastcall **)(void *))(*(_QWORD *)qword_2CD4800 + 16LL);
    if ( (char *)v1 == (char *)sub_7D3F30 )
    {
      sub_7D3E20(qword_2CD4800);
      operator delete(v0, 0xB8u);
    }
    else
    {
      v1(qword_2CD4800);
    }
  }
  v2 = qword_2CD47F8;
  if ( qword_2CD47F8 )
  {
    v3 = *(void (__fastcall **)(void *))(*(_QWORD *)qword_2CD47F8 + 16LL);
    if ( (char *)v3 == (char *)sub_7D3F30 )
    {
      sub_7D3E20(qword_2CD47F8);
      operator delete(v2, 0xB8u);
    }
    else
    {
      v3(qword_2CD47F8);
    }
  }
  v4 = qword_2CD47F0;
  if ( qword_2CD47F0 )
  {
    v5 = *(void (__fastcall **)(void *))(*(_QWORD *)qword_2CD47F0 + 16LL);
    if ( (char *)v5 == (char *)sub_7D3F30 )
    {
      sub_7D3E20(qword_2CD47F0);
      operator delete(v4, 0xB8u);
    }
    else
    {
      v5(qword_2CD47F0);
    }
  }
  v6 = qword_2CD47E8;
  if ( qword_2CD47E8 )
  {
    v7 = *(void (__fastcall **)(void *))(*(_QWORD *)qword_2CD47E8 + 16LL);
    if ( (char *)v7 == (char *)sub_7D3F30 )
    {
      sub_7D3E20(qword_2CD47E8);
      operator delete(v6, 0xB8u);
    }
    else
    {
      v7(qword_2CD47E8);
    }
  }
}
