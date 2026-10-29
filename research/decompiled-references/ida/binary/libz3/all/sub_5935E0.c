__int64 __fastcall sub_5935E0(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
    return (unsigned int)(8 * *(_DWORD *)(a1 + 52) * *(_DWORD *)(v1 - 4));
  else
    return 0;
}

