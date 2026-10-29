__int64 __fastcall sub_2F0B0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // ebp
  __int64 v8; // r12
  __int64 v9; // r15
  __int128 v10; // xmm0
  __int64 i; // rbx
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rbp
  void *v15; // rax
  void *v16; // rax
  size_t na; // [rsp+8h] [rbp-70h]
  size_t n; // [rsp+8h] [rbp-70h]
  __int64 (__fastcall **v19)(); // [rsp+10h] [rbp-68h] BYREF
  char v20; // [rsp+18h] [rbp-60h]
  __int64 v21; // [rsp+20h] [rbp-58h]
  __int128 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v2 = a2[1];
  v23 = __readfsqword(0x28u);
  v20 = 18;
  v21 = 0;
  v22 = 0;
  v19 = &off_161568;
  if ( v2 )
  {
    v8 = 0;
    v9 = 0;
    *((_QWORD *)&v22 + 1) = v2;
    v10 = 0;
    v21 = sub_96030(56 * v2);
    for ( i = v21; ; i = v21 )
    {
      v12 = *a2;
      v13 = v8 + i;
      *(_QWORD *)v13 = 0;
      v14 = v8 + v12;
      *(_OWORD *)(v13 + 8) = v10;
      if ( *(_QWORD *)(v14 + 8) )
      {
        na = *(_QWORD *)(v14 + 8);
        v15 = (void *)sub_96030(na);
        *(_QWORD *)v13 = v15;
        *(_QWORD *)(v13 + 16) = na;
        memcpy(v15, *(const void **)v14, na);
        v10 = 0;
        *(_QWORD *)(v13 + 8) = na;
      }
      *(_QWORD *)(v13 + 24) = 0;
      *(_OWORD *)(v13 + 32) = v10;
      if ( *(_QWORD *)(v14 + 32) )
      {
        n = *(_QWORD *)(v14 + 32);
        v16 = (void *)sub_96030(n);
        *(_QWORD *)(v13 + 24) = v16;
        *(_QWORD *)(v13 + 40) = n;
        memcpy(v16, *(const void **)(v14 + 24), n);
        v10 = 0;
        *(_QWORD *)(v13 + 32) = n;
      }
      ++v9;
      v8 += 56;
      *(_DWORD *)(v13 + 48) = *(_DWORD *)(v14 + 48);
      if ( v2 == v9 )
        break;
    }
    *(_QWORD *)&v22 = v2;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(a1 + 40, &v19);
  v6 = sub_2A6A0((_QWORD *)(a1 + 40), v3, 10, nullptr, v4, v5);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  sub_3D770(&v19);
  return v6;
}

