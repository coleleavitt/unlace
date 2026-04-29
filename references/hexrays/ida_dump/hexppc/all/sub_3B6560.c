__int64 __fastcall sub_3B6560(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v5; // rsi
  const char *v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // [rsp+Ch] [rbp-3Ch]
  const char *v9; // [rsp+10h] [rbp-38h] BYREF
  __int128 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(a2 + 80) != 1 )
    return 0;
  v3 = *(_QWORD *)(a2 + 88);
  if ( *(int *)(v3 + 8) <= 69 )
  {
    v5 = *(_QWORD *)(a2 + 32);
    v9 = nullptr;
    v10 = 0;
    if ( (unsigned __int8)sub_20DDF0((__int64 *)&v9, v5, v3) )
    {
      v6 = v9;
      v7 = sub_3895A0(a2 + 80);
      LOBYTE(result) = sub_393570(a2, v7, v6, 1u, 0.0);
    }
    else
    {
      LOBYTE(result) = sub_20DC10(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 88));
    }
    result = (unsigned __int8)result;
    if ( v9 )
    {
      v8 = (unsigned __int8)result;
      *(_QWORD *)&v10 = 0;
      qfree(v9);
      return v8;
    }
  }
  return result;
}
