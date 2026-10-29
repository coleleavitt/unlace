__int64 __fastcall sub_1837BF0(__int64 *a1, __int64 a2)
{
  unsigned __int64 *v2; // rax
  __int64 v3; // r12
  unsigned __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rbp
  __int64 v8; // rax
  _DWORD *v9; // rax
  __int128 v10; // [rsp+0h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-48h]
  __int128 v12; // [rsp+20h] [rbp-38h]

  v2 = (unsigned __int64 *)a1[1];
  v3 = *a1;
  v10 = 0;
  v4 = *v2;
  *(_OWORD *)ptr = 0;
  v12 = 0;
  v5 = sub_EEB7E0(v4, a2, 0.0);
  v6 = sub_19CB370(v3, v4, *(_QWORD *)(v4 + 8), v5, 0, (unsigned int)&v10, 0, 0, a2, 0, 0, 0, 0);
  if ( HIDWORD(ptr[1]) )
    free(ptr[0]);
  if ( v6 == 1 )
    return 1;
  v8 = sub_192A5E0(*a1, *(_DWORD *)a1[2], 0, 0, 1);
  if ( v8 == 1 )
    return 1;
  v9 = (_DWORD *)(v8 & 0xFFFFFFFFFFFFFFFELL);
  if ( ((*v9 >> 14) & 0xC) != 0 )
    return 1;
  else
    return sub_1A0BEA0(*a1, v9);
}
