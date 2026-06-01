__int64 __fastcall sub_BE5C80(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 (*v2)(void); // rax

  v1 = *(_QWORD **)(*(_QWORD *)a1 + 8672LL);
  if ( v1 )
  {
    if ( *((_DWORD *)v1 - 1) <= 5u )
      v1 = nullptr;
    else
      v1 = (_QWORD *)v1[5];
  }
  v2 = *(__int64 (**)(void))(*v1 + 152LL);
  if ( v2 == sub_967660 )
    return 0;
  else
    return v2();
}

