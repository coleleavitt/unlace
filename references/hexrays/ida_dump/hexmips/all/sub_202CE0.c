__int64 __fastcall sub_202CE0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  unsigned __int8 v9; // [rsp+Fh] [rbp-39h]
  __m128i v10; // [rsp+10h] [rbp-38h] BYREF
  int v11; // [rsp+20h] [rbp-28h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 8);
  v12 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v2 + 432);
  v5 = v4 + 104LL * (int)a2;
  if ( (*(_BYTE *)(v5 + 27) & 2) == 0 )
    return 0;
  if ( !*(_DWORD *)(v5 + 92) )
    return 0;
  v7 = v4 + 104LL * *(int *)(*(_QWORD *)(a1 + 72) + 44LL);
  v8 = sub_1BFA00((int *)v5, *(_DWORD *)(v5 + 88), v7, *(_DWORD *)(v7 + 88), &v10);
  if ( !v8 )
    return 0;
  v9 = v8;
  sub_202AB0(a1, (_QWORD *)a2, v11);
  return v9;
}
