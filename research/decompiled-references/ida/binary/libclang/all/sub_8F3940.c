__int64 __fastcall sub_8F3940(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  unsigned int v4; // eax
  __int64 *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  char v8; // [rsp+8h] [rbp-20h]

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v3 = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(a1 + 800) = *a2;
  v4 = sub_A1A260(*(_QWORD *)(a1 + 584), v3);
  v5 = (__int64 *)sub_A2E1A0(a1 + 384, v4, 2283, 0);
  v6 = sub_A1A2D0(*(_QWORD *)(a1 + 584), v3);
  if ( v5 )
  {
    v7 = v6;
    v8 = 1;
    sub_839C90(v5, &v7);
  }
  return 0;
}

