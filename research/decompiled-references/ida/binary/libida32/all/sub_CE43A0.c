__int64 __fastcall sub_CE43A0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD **v4; // rdi
  __int64 (*v5)(void); // rax
  char v6; // dl
  __int64 v7; // rbp
  __int64 v8; // rax

  result = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    *(_QWORD *)(a1 + 1240) = *a2;
    v4 = *(_QWORD ***)(a1 + 408);
    v5 = (__int64 (*)(void))(*v4)[3];
    if ( (char *)v5 == (char *)sub_CCC510 )
      v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v4[3] + 24LL))(v4[3]);
    else
      v6 = v5();
    result = 0;
    if ( !v6 )
    {
      v7 = *(_QWORD *)(a1 + 784) + 88LL;
      v8 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
      sub_DFF4A0(v8, v7);
      return 1;
    }
  }
  return result;
}

