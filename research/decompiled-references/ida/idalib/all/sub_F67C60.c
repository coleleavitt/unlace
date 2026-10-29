bool __fastcall sub_F67C60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v5 = a1;
  return ((unsigned int)*(unsigned __int8 *)(a1 + 16) - 35 <= 1
       || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 <= 1
       && (v5 = sub_F62E70(a1)) != 0)
      && sub_9C7D40(v5, a2, a3, a4, a5)
      && (v9 = (__int64 *)sub_9C7D40(v5, a2, v6, v7, v8)) != nullptr
      && sub_BAE550(v9, a2, v10, v11, v12, v13) != 0;
}
