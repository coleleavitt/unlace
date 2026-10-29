__int64 __fastcall sub_BA5C80(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 (*v4)(); // rdx
  __int64 *v6; // [rsp+8h] [rbp-10h] BYREF

  v6 = a1;
  if ( (unsigned __int8)sub_BA5B20(&v6, a2) )
  {
    v2 = v6;
    v3 = *v6;
    v4 = *(__int64 (**)())(*v6 + 4864);
    if ( v4 == sub_BA2A10 )
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v3 + 56))(v2, *(_QWORD *)(a2 + 16));
    if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(v6, a2) )
    {
      v2 = v6;
      v3 = *v6;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v3 + 56))(v2, *(_QWORD *)(a2 + 16));
    }
  }
  return 0;
}

