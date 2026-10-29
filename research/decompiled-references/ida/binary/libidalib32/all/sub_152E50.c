unsigned __int64 __fastcall sub_152E50(__int64 a1)
{
  __int64 v1; // rax
  int v2; // eax
  int v3; // esi
  __int64 v4; // rdx

  if ( *(_DWORD *)(a1 + 740) == *(_DWORD *)(a1 + 744) )
    return 0;
  v1 = sub_FB9C0(*(_QWORD *)(a1 + 848), 0);
  if ( v1 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 8LL))(v1, *(_QWORD *)(a1 + 752));
    v3 = *(_DWORD *)(a1 + 740);
    v4 = (unsigned int)(v2 - v3);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 740);
    v4 = 0;
  }
  return v4 * *(__int16 *)(a1 + 736) / (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 744) - v3);
}

