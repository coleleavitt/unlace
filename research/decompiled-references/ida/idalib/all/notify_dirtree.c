__int64 __fastcall notify_dirtree(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( !a2 )
  {
    ++*(_DWORD *)(a1 + 104);
    sub_39ADA0(0x46u, *(_QWORD *)(a1 + 32));
    return sub_774BB0(a1, 70, a3);
  }
  return result;
}
