__int64 __fastcall sub_19F7690(unsigned int *a1, __int64 a2, double a3, double a4)
{
  __int64 v4; // rax
  __int64 *v5; // rdx
  __int64 i; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v4 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v4 & 8) != 0
    && (*(_DWORD *)((char *)&qword_18 + (v4 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v4 & 7)) >> 9 == 20 )
  {
    return 1;
  }
  v5 = (__int64 *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  for ( i = *v5; (unsigned int)*(unsigned __int8 *)(i + 16) - 2 <= 1; i = sub_F649E0(i) )
    ;
  if ( sub_F63500(i, a2) && !sub_9B48E0(a2) && sub_F67910(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2) )
    return sub_19F71F0(a1, a2, v9, v10, v11, v12, a3, a4);
  else
    return 0;
}
