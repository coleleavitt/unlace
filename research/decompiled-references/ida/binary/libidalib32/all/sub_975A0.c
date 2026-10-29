unsigned __int64 __fastcall sub_975A0(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  int v5; // r9d
  const char *v7; // rdx
  const char *v8; // rsi
  _DWORD *v10; // rax
  _DWORD *v11; // [rsp+0h] [rbp-40h] BYREF
  __int128 v12; // [rsp+8h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-28h]

  v5 = *(_DWORD *)(a3 + 8);
  v13 = __readfsqword(0x28u);
  v11 = nullptr;
  v12 = 0;
  if ( v5 )
  {
    sub_94360((__int64 *)&v11);
  }
  else
  {
    v10 = (_DWORD *)qvector_reserve();
    v11 = v10;
    *(_QWORD *)&v12 = 8;
    *v10 = 1886217532;
    *(_DWORD *)((char *)v10 + 3) = 1048147056;
    *((_BYTE *)v11 + 7) = 0;
  }
  if ( (*(&debug + 1) & 2) != 0 )
  {
    v7 = s1;
    if ( (_QWORD)v12 )
      v7 = (const char *)v11;
    v8 = "";
    if ( a4 )
      v8 = "(borrowed) ";
    sub_91EA0((__int64)"Switched to %slicense: %s\n", v8, v7);
  }
  if ( *(_DWORD *)(a3 + 8) )
    sub_96630(a1, a3, a4, 0);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v13 - __readfsqword(0x28u);
}

