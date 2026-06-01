void __fastcall sub_179E8F0(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v2 = *(_DWORD *)(*(_QWORD *)(sub_B8C330(a1) + 17448) + 248LL);
  if ( (unsigned int)(v2 - 27) <= 1 || (unsigned int)(v2 - 3) <= 2 )
  {
    v3 = sub_B75130(a1);
    if ( !(unsigned int)sub_B75130(a2) && (unsigned int)(v3 - 4) <= 1 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      v5 = sub_B8C330(a2);
      v6 = sub_B36C70(v5, "default", 7, v4, 0);
      sub_B8CC60(a2, v6, v7, v8, v9, v10);
    }
  }
}
