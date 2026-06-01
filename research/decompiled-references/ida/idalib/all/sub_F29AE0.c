__int64 __fastcall sub_F29AE0(__int64 a1, __int64 a2)
{
  char v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rdi
  _BYTE *v6; // rax
  __int64 result; // rax

  v3 = *(_BYTE *)(a1 + 1104);
  v4 = *(_QWORD *)(a1 + 1096);
  v5 = v4;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, 3, 0, 0);
    v5 = *(_QWORD *)(a1 + 1096);
  }
  v6 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v6 >= *(_QWORD *)(v5 + 24) )
  {
    v5 = sub_227BA10(v5, 32);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v6 + 1;
    *v6 = 32;
  }
  result = sub_227B9B0(v5, a2);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  return result;
}
