__int64 __fastcall sub_92240(__int64 a1, char a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbp
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // [rsp+8h] [rbp-10h]

  if ( a2 )
  {
    v2 = (_DWORD *)sub_29450();
    v3 = v2;
    if ( v2 )
    {
      if ( v2[4] != -1 )
      {
        v4 = operator new(0x38u);
        *(_QWORD *)(v4 + 8) = v3;
        *(_DWORD *)v4 = 2;
        v7 = v4;
        sub_91F50(v4);
        return v7;
      }
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  else
  {
    v6 = sub_938E0(a1);
    if ( v6 )
    {
      result = operator new(0x38u);
      *(_DWORD *)result = 1;
      *(_QWORD *)(result + 8) = v6;
      return result;
    }
  }
  return 0;
}

