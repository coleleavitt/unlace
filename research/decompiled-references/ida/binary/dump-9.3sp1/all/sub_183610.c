unsigned __int64 __fastcall sub_183610(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int8 *v8; // [rsp+8h] [rbp-50h] BYREF
  char v9[8]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v10; // [rsp+18h] [rbp-40h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 4 )
  {
    v4 = *(_DWORD **)(a2 + 8);
    if ( *v4 == 12 )
    {
      v5 = sub_11C8A0((__int64)v4, &v8);
      if ( v5 )
      {
        if ( *v8 == 10 && **((_BYTE **)v8 + 1) == 6 && !(unsigned __int8)is_spec_ea() )
        {
          sub_123A40((__int64)v9, v8, v6, v7);
          *(_QWORD *)(v10 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL)
                               & (*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + *(_QWORD *)(v10 + 8));
          sub_11CA10((char *)a2, v9);
          sub_11CDA0((__int64)v9);
        }
      }
    }
  }
  return v11 - __readfsqword(0x28u);
}
