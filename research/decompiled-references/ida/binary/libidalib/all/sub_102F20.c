__int64 __fastcall sub_102F20(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rax
  __int64 v4; // rax

  v1 = *(unsigned __int8 *)(a1 + 1248);
  if ( !(_BYTE)v1 || *(_QWORD *)(a1 + 1232) == -1 )
  {
    v3 = sub_15E9E0(a1);
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 152LL))(v3, 0);
  }
  else
  {
    if ( (unsigned __int8)sub_102E30(a1, 1) )
    {
      v4 = sub_15E9E0(a1);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 152LL))(v4, 0);
    }
    return v1;
  }
}

