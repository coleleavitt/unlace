unsigned __int64 __fastcall sub_7C1190(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rbp
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  unsigned int v11; // esi
  __int64 v13; // [rsp+0h] [rbp-68h]
  void *ptr; // [rsp+8h] [rbp-60h] BYREF
  __int128 v15; // [rsp+10h] [rbp-58h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v2 = a2[1];
  if ( v2 )
  {
    v13 = 0;
    v3 = 0;
    v4 = 0;
    v15 = 0;
    ptr = nullptr;
    do
    {
      v10 = *a2 + 16 * v4;
      v11 = *(_DWORD *)v10;
      if ( v3 )
      {
        if ( (_DWORD)v13 == v11 )
        {
          v6 = HIDWORD(v13);
        }
        else
        {
          sub_407AD0((__int64 *)&ptr, 0);
          sub_407AD0((__int64 *)&ptr, *(_DWORD *)v10);
          LODWORD(v13) = *(_DWORD *)v10;
          v6 = 0;
        }
      }
      else
      {
        sub_407AD0((__int64 *)&ptr, v11);
        LODWORD(v13) = *(_DWORD *)v10;
        v6 = HIDWORD(v13);
      }
      sub_407AD0((__int64 *)&ptr, *(_DWORD *)(v10 + 4) - v6);
      HIDWORD(v13) = *(_DWORD *)(v10 + 4);
      sub_7BE190((__int64 *)&ptr, *(_QWORD *)(v10 + 8) + 1LL, v7, v8, v9);
      ++v4;
      v3 = v15;
    }
    while ( v2 != v4 );
    sub_7C0C50(a1, 8u, ptr, v15);
    if ( ptr )
    {
      *(_QWORD *)&v15 = 0;
      qfree(ptr);
    }
  }
  return v16 - __readfsqword(0x28u);
}

