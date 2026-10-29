__int64 __fastcall sub_B52AB0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  int v4; // edx
  unsigned int v5; // eax
  __int64 v6; // r13
  __int64 v8; // [rsp-10h] [rbp-40h]
  int v9; // [rsp-8h] [rbp-38h]
  int v10; // [rsp+0h] [rbp-30h]
  __int64 v11; // [rsp+8h] [rbp-28h] BYREF
  int v12; // [rsp+10h] [rbp-20h]
  void *v13; // [rsp+18h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 24);
  result = *(_QWORD *)(v2 + 856);
  if ( !a2 )
  {
    if ( !result )
      return result;
    goto LABEL_3;
  }
  v4 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v4 + 1;
  if ( a2 != result )
  {
LABEL_3:
    if ( *(_QWORD *)(v2 + 912) )
    {
      sub_966750(a1, a2, -1, 0, 0, -1, (__int64 ***)&v11, v9, v10, 0, v12, v13);
      if ( v11 )
        sub_186B220((void *)(v11 - 8));
    }
    sub_B6F780(*(_QWORD *)(a1 + 16));
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
      std::__ostream_insert<char,std::char_traits<char>>();
    v5 = sub_B645B0(*(_QWORD *)(a1 + 16), a2);
    v6 = *(_QWORD *)(a1 + 16);
    LODWORD(v11) = v5;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 7488) + 48LL))(
      *(_QWORD *)(v6 + 7488),
      *(_QWORD *)(*(_QWORD *)(v6 + 8840) + 8LL * (v5 >> 1)));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 7488) + 64LL))(*(_QWORD *)(v6 + 7488));
    sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 1, (unsigned int)&v11, 0, 0, 1);
    result = v8;
    if ( a2 )
    {
      if ( (*(_DWORD *)(a2 + 8))-- == 1 )
        return sub_15D7BC0(v2, a2);
    }
    return result;
  }
  *(_DWORD *)(a2 + 8) = v4;
  if ( !v4 )
    return sub_15D7BC0(v2, a2);
  return result;
}

