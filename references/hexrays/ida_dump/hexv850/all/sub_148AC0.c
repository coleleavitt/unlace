__int64 __fastcall sub_148AC0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  unsigned __int8 *v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  _QWORD *v8; // r13
  int v9; // ebp
  __int64 v10; // r12
  __int64 v11; // rax
  int v12; // r15d
  int v13; // eax
  __int64 v14; // r14
  __int128 v15; // rdi
  __int64 *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  unsigned int v21; // [rsp+14h] [rbp-74h]
  __int64 v22; // [rsp+18h] [rbp-70h] BYREF
  __int64 *v23; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  __int128 v26; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v22 = a2;
  v27 = __readfsqword(0x28u);
  v3 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 10 )
    return (unsigned __int8)sub_11A420(*(unsigned __int8 **)(a2 + 8), *(unsigned __int8 **)(a1 + 48), 2u);
  if ( v3 == 8 )
    return v3 == 15;
  v5 = (unsigned __int8 *)v22;
  if ( !sub_11A420((unsigned __int8 *)a2, *(unsigned __int8 **)(a1 + 48), 2u) )
  {
    v3 = *(_BYTE *)v22;
    return v3 == 15;
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v6 + 184) || *(_BYTE *)(v6 + 24) )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v15 + 1) = &v23;
    v23 = nullptr;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    sub_11F2E0(v15, v22, 0, 0xFFFF0000);
    v16 = *(__int64 **)(*(_QWORD *)(a1 + 64) + 32LL);
    sub_5FBC0((__int64 *)&v23, v16, v17, v18, v19, v20);
    sub_3123A0(&v25, v16 + 2);
    if ( !(unsigned __int8)sub_5FE00(&v23) || (_QWORD)v26 )
    {
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v25);
      }
      qfree(v23);
      return 1;
    }
    if ( v25 )
      qfree(v25);
    qfree(v23);
    v5 = (unsigned __int8 *)v22;
  }
  v23 = &v22;
  v7 = sub_148960((__m128i *)(a1 + 120), (unsigned __int64 *)&v22, &v23);
  sub_1205C0(v7 + 32, v5);
  if ( *(_BYTE *)v22 != 15 )
    return (unsigned __int8)sub_131F20(a1, v22) ^ 1u;
  v8 = *(_QWORD **)(*(_QWORD *)(v22 + 8) + 8LL);
  if ( !v8[1] )
    return 1;
  v21 = 1;
  v9 = 0;
  v10 = -1;
  v11 = 0;
  do
  {
    v24 = 0;
    v23 = (__int64 *)0xFFFFFFFF00000000LL;
    v14 = *v8 + 24 * v11;
    if ( v8[1] - 1LL == v11 )
      v12 = *(_DWORD *)(v22 + 4) - *(unsigned __int16 *)(v14 + 16);
    else
      v12 = *(unsigned __int16 *)(v14 + 18);
    sub_121860((__int64)&v23, *(_QWORD *)(a1 + 8), v14, v12);
    if ( (unsigned __int8)sub_131F20(a1, (__int64)&v23) )
    {
      if ( (_DWORD)v10 != -1
        && ((_DWORD)v10 != v9 - 1
         || *(unsigned __int16 *)(v14 + 16)
          + *(unsigned __int16 *)(*v8 + 24 * v10 + 8)
          - *(unsigned __int16 *)(*v8 + 24 * v10 + 16) != (_DWORD)v24) )
      {
        sub_1181E0((__int64)&v23);
        return 1;
      }
      if ( (_BYTE)v23 != 1 )
      {
        if ( !under_debugger )
          sub_37CFE0(51730);
        BUG();
      }
      v13 = v24;
      v21 = 0;
      v10 = v9;
      *(_DWORD *)v14 = 3;
      *(_DWORD *)(v14 + 8) = v13;
      *(_WORD *)(v14 + 18) = v12;
    }
    ++v9;
    sub_1181E0((__int64)&v23);
    v11 = v9;
  }
  while ( (unsigned __int64)v9 < v8[1] );
  if ( v21 )
    return 1;
  sub_121BF0(v22);
  return v21;
}
