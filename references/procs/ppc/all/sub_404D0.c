__int64 __fastcall sub_404D0(__int64 a1, const void *a2, unsigned __int8 *a3, _QWORD *a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+0h] [rbp-198h] BYREF
  __int128 v10; // [rsp+8h] [rbp-190h]
  _QWORD v11[47]; // [rsp+20h] [rbp-178h] BYREF

  v11[45] = __readfsqword(0x28u);
  v9 = 0;
  qmemcpy(v11, a2, 0x168u);
  v5 = *(_QWORD *)(a1 + 16);
  v10 = 0;
  v7 = sub_400E0(v5, v11, a3, a4, a5, (__int64)&v9);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9, v11, v6, 0.0);
  }
  return v7;
}
