unsigned __int64 __fastcall sub_7E4250(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r15
  unsigned int v9; // esi
  int v10; // edx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  const void *v14; // r15
  const void *v16; // [rsp+8h] [rbp-80h]
  size_t v17; // [rsp+8h] [rbp-80h]
  size_t v18; // [rsp+10h] [rbp-78h]
  __int64 v19; // [rsp+20h] [rbp-68h]
  void *ptr; // [rsp+28h] [rbp-60h] BYREF
  __int128 v21; // [rsp+30h] [rbp-58h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v2 = a2[1];
  if ( !v2 )
    return v22 - __readfsqword(0x28u);
  v4 = 0;
  v5 = 0;
  v19 = 0;
  v6 = 0;
  ptr = nullptr;
  v21 = 0;
  do
  {
    v8 = v4 + *a2;
    v9 = *(_DWORD *)v8;
    if ( v5 )
    {
      if ( (_DWORD)v19 == v9 )
      {
        v10 = HIDWORD(v19);
      }
      else
      {
        sub_3A0970((__int64 *)&ptr, 0);
        sub_3A0970((__int64 *)&ptr, *(_DWORD *)v8);
        LODWORD(v19) = *(_DWORD *)v8;
        v10 = 0;
      }
    }
    else
    {
      sub_3A0970((__int64 *)&ptr, v9);
      LODWORD(v19) = *(_DWORD *)v8;
      v10 = HIDWORD(v19);
    }
    sub_3A0970((__int64 *)&ptr, *(_DWORD *)(v8 + 4) - v10);
    HIDWORD(v19) = *(_DWORD *)(v8 + 4);
    v11 = *(_QWORD *)(v8 + 16);
    if ( !v11 )
    {
      sub_3A0970((__int64 *)&ptr, 0);
LABEL_4:
      v7 = *(_QWORD *)(v8 + 40);
      if ( !v7 )
        goto LABEL_5;
      goto LABEL_14;
    }
    v12 = v11 - 1;
    v16 = *(const void **)(v8 + 8);
    if ( v12 > 0xFFFFFFFF )
    {
      if ( !under_debugger )
        interr(5);
LABEL_26:
      BUG();
    }
    v18 = v12;
    sub_3A0970((__int64 *)&ptr, v12);
    if ( !v18 )
      goto LABEL_4;
    sub_7DE6E0((__int64 *)&ptr, v16, v18);
    v7 = *(_QWORD *)(v8 + 40);
    if ( !v7 )
    {
LABEL_5:
      sub_3A0970((__int64 *)&ptr, 0);
      goto LABEL_6;
    }
LABEL_14:
    v13 = v7 - 1;
    v14 = *(const void **)(v8 + 32);
    if ( v13 > 0xFFFFFFFF )
    {
      if ( !under_debugger )
        interr(5);
      goto LABEL_26;
    }
    v17 = v13;
    sub_3A0970((__int64 *)&ptr, v13);
    if ( v17 )
      sub_7DE6E0((__int64 *)&ptr, v14, v17);
LABEL_6:
    ++v6;
    v5 = v21;
    v4 += 56;
  }
  while ( v2 != v6 );
  sub_7E3F90(a1, 7u, ptr, v21);
  if ( ptr )
  {
    *(_QWORD *)&v21 = 0;
    qfree(ptr);
  }
  return v22 - __readfsqword(0x28u);
}
