__int64 __fastcall sub_AAFC50(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // rsi
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax

  v4 = sub_F6AC00(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v4 || (result = sub_B8C970(*(_QWORD *)(v4 + 32)), !(_DWORD)result) )
  {
    v6 = (__int64 *)(sub_A71450((__int64)a1, a2) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)sub_F62670(*v6, 0) )
    {
      v9 = sub_F6AC00(*v6);
      if ( !v9 || (result = sub_B8C970(*(_QWORD *)(v9 + 32)), !(_DWORD)result) )
      {
        v12 = *v6;
        v13 = (unsigned int)*(unsigned __int8 *)(*v6 + 16) - 47;
        if ( (unsigned int)v13 <= 1
          || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 <= 1
          && (v12 = sub_F63050(v12, 0, v13, v10)) != 0 )
        {
          v14 = sub_F60F10(v12, 0, v13, v10, v11);
          return sub_B8C970(v14);
        }
        else
        {
          return 0;
        }
      }
    }
    else
    {
      v7 = *v6;
      if ( a3 )
      {
        return sub_AAFA10(a1, v7);
      }
      else
      {
        sub_A97D20((__int64)a1, v7);
        return v8;
      }
    }
  }
  return result;
}
