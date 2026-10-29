__int64 __fastcall sub_4660A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rax
  __int64 v6; // rax
  unsigned int *v7; // rax
  __int64 v8; // rdi
  __int64 v10; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  _BOOL4 v14; // edx
  _DWORD *v15; // rax
  __int64 v16; // rdi
  _BOOL4 v17; // [rsp+Ch] [rbp-2Ch]

  v5 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v5 && *v5 == 5 )
  {
    v10 = sub_15D1F10(a2);
    v14 = 0;
    v15 = *(_DWORD **)(v10 + 24);
    if ( v15 && *v15 == 5 )
      v14 = v15[1] == 1;
    v16 = a1[6];
    if ( !v16 )
    {
      v17 = v14;
      sub_16669E0(a1 + 5);
      v16 = a1[6];
      v14 = v17;
    }
    sub_166A700(v16, a3, v14, v11, v12, v13);
    v8 = a1[5];
  }
  else
  {
    v6 = sub_15D1F10(a2);
    if ( !(unsigned __int8)sub_1673B10(a1 + 7, v6) )
    {
      sub_1872CE0("");
      sub_1873130(114, 336);
    }
    v7 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(a2) + 24) + 8LL);
    if ( *((_BYTE *)v7 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    sub_1674520(a1 + 7, a3, *v7);
    v8 = a1[8];
  }
  return sub_15E1B70(v8);
}

