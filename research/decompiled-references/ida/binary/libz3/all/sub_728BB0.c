__int64 __fastcall sub_728BB0(_DWORD *a1)
{
  void (*v1)(void); // rax

  v1 = *(void (**)(void))(*(_QWORD *)a1 + 144LL);
  if ( (char *)v1 == (char *)sub_728B60 )
    a1[216] = 0;
  else
    v1();
  return sub_8E4B90(a1 + 198);
}

