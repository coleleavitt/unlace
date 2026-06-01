__int64 __fastcall sub_4ED2F0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int32 v3; // ebp
  unsigned int v4; // ebx
  __int64 v5; // rdx

  v2 = *a2;
  if ( *a2 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      if ( v4 >= *(_DWORD *)(v2 - 4) )
        break;
      v5 = v4++;
      v3 += sub_4ED1A0(a1, *(_QWORD *)(v2 + 8 * v5));
      v2 = *a2;
    }
    while ( *a2 );
  }
  else
  {
    v3 = 0;
  }
  return sub_4EC660(a1, v3);
}

