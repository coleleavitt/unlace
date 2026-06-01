unsigned __int64 __fastcall sub_7E44D0(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rbp
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v10; // [rsp+0h] [rbp-68h]
  void *ptr; // [rsp+8h] [rbp-60h] BYREF
  __int128 v12; // [rsp+10h] [rbp-58h]
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v2 = a2[1];
  if ( v2 )
  {
    v10 = 0;
    v3 = 0;
    v4 = 0;
    v12 = 0;
    ptr = nullptr;
    do
    {
      v7 = *a2 + 16 * v4;
      v8 = *(_DWORD *)v7;
      if ( v3 )
      {
        if ( (_DWORD)v10 == v8 )
        {
          v6 = HIDWORD(v10);
        }
        else
        {
          sub_3A0970((__int64 *)&ptr, 0);
          sub_3A0970((__int64 *)&ptr, *(_DWORD *)v7);
          LODWORD(v10) = *(_DWORD *)v7;
          v6 = 0;
        }
      }
      else
      {
        sub_3A0970((__int64 *)&ptr, v8);
        LODWORD(v10) = *(_DWORD *)v7;
        v6 = HIDWORD(v10);
      }
      sub_3A0970((__int64 *)&ptr, *(_DWORD *)(v7 + 4) - v6);
      HIDWORD(v10) = *(_DWORD *)(v7 + 4);
      sub_3A0A80((__int64 *)&ptr, *(_QWORD *)(v7 + 8) + 1LL);
      ++v4;
      v3 = v12;
    }
    while ( v2 != v4 );
    sub_7E3F90(a1, 8u, ptr, v12);
    if ( ptr )
    {
      *(_QWORD *)&v12 = 0;
      qfree(ptr);
    }
  }
  return v13 - __readfsqword(0x28u);
}
