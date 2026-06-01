__int64 __fastcall notify_dirtree(__int64 a1, char a2, unsigned int a3)
{
  __int64 result; // rax

  if ( !a2 )
  {
    ++*(_DWORD *)(a1 + 100);
    sub_396090(0x46u, *(_QWORD *)(a1 + 32));
    return sub_754740(a1, 70, a3);
  }
  return result;
}

