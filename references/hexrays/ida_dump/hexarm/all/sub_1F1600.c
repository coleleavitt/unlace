unsigned __int64 __fastcall sub_1F1600(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD v6[6]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v7[5]; // [rsp+30h] [rbp-68h] BYREF
  char v8; // [rsp+58h] [rbp-40h]
  __int64 v9; // [rsp+60h] [rbp-38h]
  __int128 v10; // [rsp+68h] [rbp-30h]
  unsigned __int64 v11; // [rsp+78h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v8 = 0;
  v7[0] = off_4D92C8;
  memset(&v7[1], 0, 32);
  v10 = 0;
  v9 = 0;
  sub_11F5F0(a1, (__int64)v7);
  if ( (_QWORD)v10 )
  {
    v1 = 0;
    v2 = 0;
    do
    {
      ++v1;
      v3 = 13LL * *(int *)(v9 + 4 * v2);
      *(_DWORD *)(*(_QWORD *)(a1 + 432) + 8 * v3 + 24) &= ~0x800u;
      v2 = v1;
    }
    while ( v1 < (unsigned __int64)v10 );
  }
  v4 = *(_QWORD *)(a1 + 1504);
  memset(&v6[1], 0, 32);
  v6[0] = &off_4D92F0;
  v6[5] = v4;
  sub_11F660(a1, (__int64)v6);
  v7[0] = off_4D92C8;
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v11 - __readfsqword(0x28u);
}
