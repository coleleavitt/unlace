__int64 __fastcall sub_99610(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v4; // rdi
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 152);
  if ( *(_BYTE *)(v1 + 248) )
    return v8 - __readfsqword(0x28u);
  v2 = *(_QWORD *)(v1 + 240);
  if ( !v2 )
    return v8 - __readfsqword(0x28u);
  v4 = *(_QWORD *)(v2 + 856);
  if ( !v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  if ( (unsigned __int8)sub_FB090(v4, &v6, &v7, 0)
    && (!*(_QWORD *)(a1 + 160)
     || !*(_QWORD *)(a1 + 168)
     || (unsigned int)sub_161BA0(v2, v6, *(_QWORD *)(a1 + 160))
     || (unsigned int)sub_161BA0(v2, v7, *(_QWORD *)(a1 + 168))) )
  {
    qfree();
    qfree();
    *(_OWORD *)(a1 + 160) = 0;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  }
  return v8 - __readfsqword(0x28u);
}

