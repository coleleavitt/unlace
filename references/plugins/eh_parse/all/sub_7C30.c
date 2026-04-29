__int64 __fastcall sub_7C30(_QWORD *a1)
{
  void *v2; // rdi
  void (*v3)(void); // rax

  *a1 = off_2E028;
  clr_module_data((unsigned int)dword_2F624);
  v2 = (void *)a1[78];
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 8LL);
    if ( (char *)v3 == (char *)sub_7B80 )
      operator delete(v2, 0x48u);
    else
      v3();
  }
  a1[75] = &off_2EC60;
  remove_event_listener(a1 + 75);
  a1[72] = &off_2EC60;
  return remove_event_listener(a1 + 72);
}
