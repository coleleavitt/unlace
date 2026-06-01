__int64 __fastcall sub_1EE7680(__int64 *a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 result; // rax

  v5 = sub_1EE7490(*a1);
  v6 = *a1;
  *(_DWORD *)a3 = v5;
  v7 = sub_1EE7490(v6);
  v8 = *a1;
  *(_DWORD *)(a3 + 4) = v7;
  result = *(unsigned int *)(v8 + 24);
  *(_DWORD *)(v8 + 24) = result + 1;
  if ( *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * result) )
  {
    result = sub_1F6A0A0(*(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
    *(_QWORD *)(a3 + 8) = result;
  }
  else
  {
    *(_QWORD *)(a3 + 8) = 0;
  }
  return result;
}
