__int64 __fastcall sub_70BDB0(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 *v6; // rbx
  char v7; // al
  __int64 v8; // rsi
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax

  v4 = sub_B10DA0(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2);
  if ( !v4 || (result = sub_798DC0(*(_QWORD *)(v4 + 32)), !(_DWORD)result) )
  {
    v6 = (__int64 *)(sub_6CB5B0(a1, a2) & 0xFFFFFFFFFFFFFFF0LL);
    v7 = sub_B19120(*v6, 0);
    v8 = *v6;
    if ( v7 )
    {
      v10 = sub_B10DA0(*v6, v8);
      if ( !v10 || (result = sub_798DC0(*(_QWORD *)(v10 + 32)), !(_DWORD)result) )
      {
        v11 = *v6;
        if ( (unsigned int)*(unsigned __int8 *)(*v6 + 16) - 46 <= 1
          || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 46 <= 1
          && (v11 = sub_B0D320(v11)) != 0 )
        {
          v12 = sub_B14A40(v11);
          return sub_798DC0(v12);
        }
        else
        {
          return 0;
        }
      }
    }
    else if ( a3 )
    {
      return sub_70BB40(a1, v8);
    }
    else
    {
      sub_6F6DE0((__int64)a1, v8);
      return v9;
    }
  }
  return result;
}

