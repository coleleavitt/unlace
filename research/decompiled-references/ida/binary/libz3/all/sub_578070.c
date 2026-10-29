__int64 __fastcall sub_578070(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 && *(_DWORD *)(v1 - 4) )
  {
    sub_1872CE0("");
    sub_1873130(114, 1099);
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  *(_BYTE *)(result + 28) = *(_BYTE *)(a1 + 28) ^ 1;
  return result;
}

