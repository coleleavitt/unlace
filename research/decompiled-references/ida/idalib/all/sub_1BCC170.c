unsigned __int64 __fastcall sub_1BCC170(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rdx

  v4 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v5 + 16) == 42 )
    goto LABEL_2;
  v5 = sub_1BC7590(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  if ( v5 )
    goto LABEL_2;
  v9 = *v4;
  v10 = (unsigned int)*(unsigned __int8 *)(*v4 + 16) - 43;
  if ( (unsigned int)v10 <= 1 || (v9 = sub_1BC7530(v9, a2, v10, v7)) != 0 )
  {
    v4 = (__int64 *)(sub_9B4870(v9, a2, v10, v7, v8) & 0xFFFFFFFFFFFFFFF0LL);
    return *(_QWORD *)(v4[1] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
  }
  v5 = *v4;
  if ( *(_BYTE *)(*v4 + 16) == 33 || (v5 = sub_1BC75F0(*v4, a2, v10, v7)) != 0 )
LABEL_2:
    v4 = (__int64 *)(*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  return *(_QWORD *)(v4[1] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
}
