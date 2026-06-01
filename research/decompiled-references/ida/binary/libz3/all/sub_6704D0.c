__int64 __fastcall sub_6704D0(__int64 a1)
{
  __int64 v1; // rax

  if ( *(_BYTE *)(a1 + 968) )
  {
    sub_66E8A0(a1);
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 184) + 232LL))(*(_QWORD *)(a1 + 184));
  }
  else
  {
    v1 = *(_QWORD *)(a1 + 176);
    if ( v1 )
      return *(unsigned int *)(v1 - 4);
    else
      return 0;
  }
}

