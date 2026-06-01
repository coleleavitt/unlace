unsigned __int64 __fastcall sub_1B00950(
        __int64 *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8,
        int a9,
        int a10)
{
  __int64 v10; // r11
  unsigned __int64 v12; // r14
  int v14; // r12d
  __int64 v15; // r13
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r12d
  __int64 v25; // rax
  int v26; // eax
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  _QWORD *v32; // r13
  size_t v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD v40[2]; // [rsp+20h] [rbp-68h] BYREF
  int v41; // [rsp+30h] [rbp-58h]
  char *v42; // [rsp+38h] [rbp-50h]
  __int64 v43; // [rsp+40h] [rbp-48h]
  char v44; // [rsp+48h] [rbp-40h] BYREF

  v10 = (__int64)a1;
  v12 = (unsigned __int64)a3;
  if ( (*a3 & 0x3C000) != 0 )
  {
    v14 = 103;
    v15 = 0;
  }
  else
  {
    v22 = sub_19179E0(*a1, a4, (unsigned __int64)a3, 0, a7, a8);
    if ( v22 == 1 )
      return 0;
    v12 = v22 & 0xFFFFFFFFFFFFFFFELL;
    v23 = sub_1AE5FF0(a1[1]);
    if ( v23 )
      v24 = *(_DWORD *)(v23 + 976);
    else
      v24 = 103;
    v15 = 0;
    v25 = sub_168B6E0((__int64)a1);
    v26 = sub_1AE8290(v24, 44, *(unsigned int *)(v25 + 64), a2);
    v10 = (__int64)a1;
    v14 = v26;
    if ( v26 != 103 )
    {
      v27 = sub_B8E180(*(_QWORD *)(*a1 + 544));
      v10 = (__int64)a1;
      if ( !v27 )
      {
        v31 = sub_1AF29B0(*a1, v12, a7, a8, v28, v29, v30);
        v40[0] = 0;
        v32 = (_QWORD *)v31;
        v40[1] = 0;
        v41 = 0;
        v42 = &v44;
        v43 = 0;
        v33 = j__strlen(".capture_expr.");
        v12 = sub_1B00390((_QWORD *)*a1, v32, (__int64)v40, ".capture_expr.", v33, a7, a8) & 0xFFFFFFFFFFFFFFFELL;
        v34 = (_QWORD *)sub_168B6C0((__int64)a1);
        v15 = sub_1AEDEF0(v34, (__int64)v40, v35, v36, v37, v38);
        sub_1AF4310((__int64)v40);
        v10 = (__int64)a1;
      }
    }
  }
  v16 = (_QWORD *)sub_168B6C0(v10);
  v19 = v16[294];
  v16[304] += 56LL;
  v20 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v16[295] >= v20 + 56 && v19 )
  {
    v16[294] = v20 + 56;
    result = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    result = sub_986170((__int64)(v16 + 294), 56, 56, 3, v17, v18);
  }
  *(_DWORD *)result = a4;
  *(_DWORD *)(result + 8) = 44;
  *(_DWORD *)(result + 4) = a10;
  *(_DWORD *)(result + 28) = a5;
  *(_QWORD *)(result + 32) = v12;
  *(_DWORD *)(result + 40) = a9;
  *(_DWORD *)(result + 44) = a2;
  *(_DWORD *)(result + 48) = a6;
  *(_QWORD *)(result + 16) = v15;
  *(_DWORD *)(result + 24) = v14;
  return result;
}
