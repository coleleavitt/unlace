__int64 __fastcall sub_406B50(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  __int64 v3; // rbx

  result = *(_QWORD *)(a1 + 448);
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(result + 64))(*(_QWORD *)(a1 + 448));
    v2 = result;
    if ( result )
    {
      v3 = *(_QWORD *)(result + 24);
      if ( *(_QWORD *)v3 )
        (*(void (__fastcall **)(_QWORD, __int64))v3)(*(_QWORD *)(v3 + 8), a1);
      Tcl_Free(v3);
      return sub_457BC0(v2);
    }
  }
  return result;
}

