void __fastcall sub_3DB580(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int16 v5; // ax
  __int16 v6; // si
  _DWORD *v7; // rax
  void *exception; // rax
  _DWORD *v9; // rax

  if ( !*(_WORD *)(a2 + 4) )
  {
    v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v2 )
    {
      if ( (*v2 == 5 && v2[1] == 9 || *v2 == *(_DWORD *)(a1 + 16) && v2[1] == 6) && *(_DWORD *)(a2 + 24) == 2 )
      {
        v3 = *(_QWORD *)(a2 + 32);
        v4 = *(_QWORD *)(a2 + 40);
        v5 = *(_WORD *)(v3 + 4);
        v6 = *(_WORD *)(v4 + 4);
        if ( v5 != 1 )
        {
          if ( v6 != 1 )
            return;
          if ( !v5 )
          {
            v7 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
            if ( v7 )
            {
              if ( *v7 == 5 )
              {
                if ( !v7[1] )
                  return;
              }
              else if ( *v7 == *(_DWORD *)(a1 + 16) && !v7[1] )
              {
                return;
              }
            }
          }
LABEL_17:
          exception = __cxa_allocate_exception(1u);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'spacer::has_nonlinear_var_mul_ns::found, nullptr);
        }
        if ( v6 )
          goto LABEL_17;
        v9 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
        if ( !v9 )
          goto LABEL_17;
        if ( *v9 == 5 )
        {
          if ( !v9[1] )
            return;
          goto LABEL_17;
        }
        if ( *v9 != *(_DWORD *)(a1 + 16) || v9[1] )
          goto LABEL_17;
      }
    }
  }
}

