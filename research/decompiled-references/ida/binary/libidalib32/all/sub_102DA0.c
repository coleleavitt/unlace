__int64 __fastcall sub_102DA0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rax
  __int64 v4; // rax

  v1 = *(unsigned __int8 *)(a1 + 1232);
  if ( !(_BYTE)v1 || *(_DWORD *)(a1 + 1224) == -1 )
  {
    v3 = sub_15E0E0(a1);
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 160LL))(v3, 0);
  }
  else
  {
    if ( (unsigned __int8)sub_102BB0(a1, 1) )
    {
      v4 = sub_15E0E0(a1);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 160LL))(v4, 0);
    }
    return v1;
  }
}

