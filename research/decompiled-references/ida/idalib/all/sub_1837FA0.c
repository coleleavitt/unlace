__int64 __fastcall sub_1837FA0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v4; // rdi

  v1 = *a1;
  v2 = (*a1 >> 1) & 3;
  if ( v2 == 1 )
    return (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))(v1 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v2 != 2 )
    return *(_QWORD *)(*(_QWORD *)&byte_8[sub_B98AD0((__int64)a1) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v4 = *(_QWORD *)(*(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                 + 8LL * *(unsigned int *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                 - 8);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
}
