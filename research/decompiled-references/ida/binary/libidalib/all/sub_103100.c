__int64 __fastcall sub_103100(__int64 a1)
{
  unsigned int v1; // ebp
  char v2; // al
  __int64 v4; // rax

  v1 = *(unsigned __int8 *)(a1 + 1248);
  if ( !(_BYTE)v1 || *(_QWORD *)(a1 + 1232) == -1 )
  {
    v4 = sub_15E9E0(a1);
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 144LL))(v4, 0);
  }
  else
  {
    v2 = sub_1012D0(a1, 1u);
    sub_102E30(a1, v2);
    return v1;
  }
}

