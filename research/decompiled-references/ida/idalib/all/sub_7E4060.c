unsigned __int64 __fastcall sub_7E4060(__int64 *a1, _QWORD *a2, unsigned __int8 a3)
{
  __int64 v3; // r13
  size_t v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r14
  unsigned int v8; // esi
  int v9; // eax
  __int64 v10; // rdx
  size_t v11; // r15
  const void *v12; // r14
  __int64 v15; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+18h] [rbp-60h] BYREF
  __int128 v17; // [rsp+20h] [rbp-58h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v3 = a2[1];
  if ( !v3 )
    return v18 - __readfsqword(0x28u);
  v5 = 0;
  v6 = 0;
  v15 = 0;
  ptr = nullptr;
  v17 = 0;
  do
  {
    while ( 1 )
    {
      v7 = *a2 + 32 * v6;
      v8 = *(_DWORD *)v7;
      if ( v5 )
      {
        if ( (_DWORD)v15 == v8 )
        {
          v9 = HIDWORD(v15);
        }
        else
        {
          sub_3A0970((__int64 *)&ptr, 0);
          sub_3A0970((__int64 *)&ptr, *(_DWORD *)v7);
          LODWORD(v15) = *(_DWORD *)v7;
          v9 = 0;
        }
      }
      else
      {
        sub_3A0970((__int64 *)&ptr, v8);
        LODWORD(v15) = *(_DWORD *)v7;
        v9 = HIDWORD(v15);
      }
      sub_3A0970((__int64 *)&ptr, *(_DWORD *)(v7 + 4) - v9);
      v10 = *(_QWORD *)(v7 + 16);
      HIDWORD(v15) = *(_DWORD *)(v7 + 4);
      if ( v10 )
        break;
      sub_3A0970((__int64 *)&ptr, 0);
LABEL_4:
      ++v6;
      v5 = v17;
      if ( v3 == v6 )
        goto LABEL_12;
    }
    v11 = v10 - 1;
    v12 = *(const void **)(v7 + 8);
    if ( (unsigned __int64)(v10 - 1) > 0xFFFFFFFF )
    {
      if ( !under_debugger )
        interr(5);
      BUG();
    }
    sub_3A0970((__int64 *)&ptr, v11);
    if ( !v11 )
      goto LABEL_4;
    sub_7DE6E0((__int64 *)&ptr, v12, v11);
    ++v6;
    v5 = v17;
  }
  while ( v3 != v6 );
LABEL_12:
  sub_7E3F90(a1, a3 + 5, ptr, v5);
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
  }
  return v18 - __readfsqword(0x28u);
}
