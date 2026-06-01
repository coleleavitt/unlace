_QWORD *__fastcall sub_5B1080(__int64 a1, __int64 *a2, __int64 a3, __m128i a4)
{
  __int64 *v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // r15
  _QWORD *v9; // rdx
  __int64 v10; // rax
  void (***v11)(void); // r15
  void (***v12)(void); // rdi
  __int64 **v13; // r15
  int v14; // edx
  __int64 v15; // r9
  _QWORD *v16; // r13
  int *v17; // r12
  unsigned int v18; // r14d
  void (***v20)(void); // rdi
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  void (***v24)(void); // r13
  __int64 v25; // rax
  int *v26; // r8
  __int64 v27; // [rsp+0h] [rbp-50h]
  int *v28; // [rsp+0h] [rbp-50h]
  void (***v29)(void); // [rsp+0h] [rbp-50h]
  _QWORD *ptr; // [rsp+8h] [rbp-48h]
  int v31; // [rsp+14h] [rbp-3Ch] BYREF
  _QWORD v32[7]; // [rsp+18h] [rbp-38h] BYREF

  v6 = *(__int64 **)(a2[1] + 24);
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 32) + 16LL))(
         *(_QWORD *)(a1 + 32),
         a2[13],
         *(_QWORD *)(a3 + 104));
  v32[0] = 0;
  v8 = (_QWORD *)v7;
  v9 = (_QWORD *)sub_186B270(0x28u);
  *v9 = off_1C520F8;
  v10 = *v6;
  v9[3] = a3;
  v9[1] = a1;
  v9[2] = a2;
  v9[4] = v32;
  ptr = v8;
  v11 = (void (***)(void))(*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v10 + 16))(v6, v8);
  ((void (__fastcall *)(void (***)(void), _QWORD *))(*v11)[2])(v11, ptr);
  sub_568170(v11);
  v12 = *(void (****)(void))(a1 + 104);
  if ( !v12 )
  {
    v21 = ptr[2];
    v22 = v21 ? *(_DWORD *)(v21 - 4) - 1 : -1;
    v31 = v22;
    v23 = sub_4C5900((__int64)v6, (__int64)ptr, 1u, (unsigned int *)&v31);
    v12 = *(void (****)(void))(a1 + 104);
    v24 = (void (***)(void))v23;
    if ( (void (***)(void))v23 != v12 )
    {
      sub_4CFE00(v12);
      *(_QWORD *)(a1 + 104) = v24;
      v12 = v24;
    }
  }
  v13 = (__int64 **)((__int64 (__fastcall *)(void (***)(void), _QWORD *))(*v12)[2])(v12, ptr);
  if ( v32[0] && (v14 = *(_DWORD *)(v32[0] - 4LL)) != 0 )
    v15 = *(_QWORD *)(*(_QWORD *)(v32[0] + 8LL * (unsigned int)(v14 - 1)) + 8LL);
  else
    v15 = a2[11];
  v27 = v15;
  v16 = (_QWORD *)sub_186B270(0xA0u);
  sub_5A4AC0((__int64)v16, a2[1], (__int64 *)(a1 + 8), *(char **)(a1 + 112), v13[1], v27, -1);
  sub_5A3D20((__int64)v16, (__int64)v13, v32, 1, a4);
  v17 = *(int **)(a1 + 80);
  if ( v17 )
  {
    v18 = *(v17 - 1);
    if ( v18 )
    {
      v20 = *(void (****)(void))(a1 + 96);
      if ( !v20 )
      {
        v28 = *(int **)(a1 + 88);
        v25 = sub_186B270(0x38u);
        v26 = v28;
        v29 = (void (***)(void))v25;
        sub_5B0C30(v25, v16, v18, v17, v26);
        v20 = *(void (****)(void))(a1 + 96);
        if ( v29 != v20 )
        {
          sub_4CF1F0(v20);
          *(_QWORD *)(a1 + 96) = v29;
          v20 = v29;
        }
      }
      ((void (__fastcall *)(void (***)(void), _QWORD *))(*v20)[2])(v20, v16);
    }
  }
  sub_4D63E0(v13);
  if ( v32[0] )
    sub_186B220((void *)(v32[0] - 8LL));
  if ( ptr )
    sub_4D63E0(ptr);
  return v16;
}

