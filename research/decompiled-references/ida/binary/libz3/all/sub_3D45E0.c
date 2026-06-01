__int64 __fastcall sub_3D45E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *v3; // rdx

  result = sub_3D4510(a1, a2);
  if ( !(_BYTE)result && !*(_WORD *)(a2 + 4) )
  {
    v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v3 )
    {
      if ( !*v3 && v3[1] == 8 )
        return sub_3D4510(a1, *(_QWORD *)(a2 + 32));
    }
  }
  return result;
}

