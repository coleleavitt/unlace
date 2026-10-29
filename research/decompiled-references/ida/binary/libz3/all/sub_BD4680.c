__int64 __fastcall sub_BD4680(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rdx
  int v5; // ecx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx

  v3 = *a3;
  v4 = *(__int64 **)(*(_QWORD *)(a1 + 448) + 8LL * a2);
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 - 4);
    v6 = *v4;
    if ( *v4 )
    {
LABEL_3:
      v7 = *(_DWORD *)(v6 - 4);
      goto LABEL_4;
    }
  }
  else
  {
    v6 = *v4;
    v5 = 0;
    if ( *v4 )
      goto LABEL_3;
  }
  v7 = 0;
LABEL_4:
  v8 = v4[1];
  if ( v8 )
    v7 += *(_DWORD *)(v8 - 4);
  return (unsigned int)(v5 + 2 * v7);
}

