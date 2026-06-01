__int64 __fastcall sub_B7F670(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdx
  __int64 v3; // r12
  __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  _QWORD v13[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  v2 = v1;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
  {
    v2 = (_QWORD *)v1[1];
    v1 = (_QWORD *)*v1;
  }
  if ( !v1 )
    return 1;
  v3 = sub_B91570(v2);
  if ( v3 != sub_B91570(v1) )
    return 1;
  v5 = (_QWORD *)sub_B77930(a1);
  if ( v5
    && (*v5 & 0xFFFFFFFFFFFFFFF8LL) != 0
    && (unsigned __int8)sub_B7F5F0((_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFF8LL), v13, v6, v7, v8, v9) )
  {
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 24LL))(v13[0]);
  }
  v10 = *(_QWORD *)(a1 + 152);
  result = 0;
  if ( v10 )
  {
    if ( ((v10 >> 1) & 3) == 2 )
    {
      v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v12 )
        {
          result = sub_B7F5F0(*(_QWORD **)(v12 + 48), v13, v12, 2, v8, v9);
          if ( (_BYTE)result )
            return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 24LL))(v13[0]);
        }
      }
    }
  }
  return result;
}
