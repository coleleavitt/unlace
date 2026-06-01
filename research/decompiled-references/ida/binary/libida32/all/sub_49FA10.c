__int64 __fastcall sub_49FA10(__int64 a1)
{
  __int64 v1; // r12
  __int64 i; // rbx
  __int64 v3; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1520);
  for ( i = 0; i != 9; ++i )
  {
    v3 = operator new(0x18u);
    *(_DWORD *)(v3 + 16) = i;
    *(_QWORD *)(v3 + 8) = 0;
    *(_QWORD *)v3 = off_2B02C28;
    *(_QWORD *)(v1 + 8 * i + 184) = v3;
    result = hook_event_listener(*(unsigned int *)(v3 + 16), v3, 0, 0);
  }
  return result;
}

