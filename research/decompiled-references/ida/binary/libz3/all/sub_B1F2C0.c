__int64 __fastcall sub_B1F2C0(__int64 a1, __int64 *a2, __int64 *a3)
{
  _DWORD *v4; // rax
  __int64 result; // rax
  _DWORD *v6; // rax

  v4 = *(_DWORD **)(sub_15D1F10(*a2) + 24);
  if ( v4 && *v4 == 5 && v4[1] == 1 && (v6 = *(_DWORD **)(sub_15D1F10(*a3) + 24)) != nullptr && *v6 == 5 && !v6[1] )
  {
    result = sub_15E1A70(*(_QWORD *)(a1 + 8));
    *a2 = result;
  }
  else
  {
    result = *(_QWORD *)(sub_15D1F10(*a3) + 24);
    if ( result )
    {
      if ( *(_DWORD *)result == 5 && *(_DWORD *)(result + 4) == 1 )
      {
        result = *(_QWORD *)(sub_15D1F10(*a2) + 24);
        if ( result )
        {
          if ( *(_DWORD *)result == 5 )
          {
            result = *(unsigned int *)(result + 4);
            if ( !(_DWORD)result )
            {
              result = sub_15E1A70(*(_QWORD *)(a1 + 8));
              *a3 = result;
            }
          }
        }
      }
    }
  }
  return result;
}

