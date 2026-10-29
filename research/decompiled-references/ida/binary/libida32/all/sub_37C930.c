__int64 __fastcall sub_37C930(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 func; // r12
  char v4; // bp
  const char *v5; // r12
  const char *v6; // rax

  if ( (*(_BYTE *)(a1 + 145) & 4) != 0
    && (unsigned __int8)getinf_flag(44, 2)
    && (unsigned __int8)sub_3C4B50(a1, 0xFFFFFFFFLL) )
  {
    v2 = closing_comment();
    sub_359A50(a1, (__int64)&unk_22AF064, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 48LL), v2);
  }
  result = getinf_flag(45, 16);
  if ( (_BYTE)result )
  {
    result = *(_QWORD *)(a1 + 96);
    if ( result )
    {
      if ( *(_DWORD *)(a1 + 108) == *(_QWORD *)(result + 8) )
      {
        func = get_func(*(unsigned int *)(a1 + 16));
        result = netnode_charval(*(unsigned int *)(*(_QWORD *)(a1 + 464) + 104LL), *(unsigned int *)(a1 + 16), 256);
        v4 = result;
        if ( (_BYTE)result )
        {
          if ( !func || (result = getinf(45), (result & 0x40) != 0) || (*(_BYTE *)(func + 8) & 0x40) == 0 )
          {
            v5 = "EPILOG";
            if ( v4 != 2 )
            {
              v5 = "SWITCH";
              if ( v4 != 3 )
              {
                v5 = "PROLOG";
                if ( v4 != 1 )
                  v5 = "MICRO?";
              }
            }
            v6 = (const char *)closing_comment();
            return sub_359A50(a1, (__int64)" %s %s%s", *(const char **)(*(_QWORD *)(a1 + 480) + 48LL), v5, v6);
          }
        }
      }
    }
  }
  return result;
}

