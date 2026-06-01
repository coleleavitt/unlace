unsigned __int64 __fastcall sub_1B10D40(__int64 *a1, unsigned __int64 a2, int a3, int a4, int a5, __m128 a6, __m128 a7)
{
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // r14
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  size_t v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // [rsp+8h] [rbp-80h]
  unsigned __int64 v39; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v40[2]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v41; // [rsp+30h] [rbp-58h]
  void *ptr; // [rsp+38h] [rbp-50h]
  __int64 v43; // [rsp+40h] [rbp-48h]
  _BYTE v44[64]; // [rsp+48h] [rbp-40h] BYREF

  v39 = a2;
  if ( !(unsigned __int8)sub_1B108C0(&v39, *a1, 75, 0, 0, 0x67u, a6, a7, nullptr, nullptr) )
    return 0;
  v10 = a1[1];
  v11 = 103;
  v12 = *(unsigned int *)(v10 + 344);
  if ( (_DWORD)v12 )
  {
    v23 = *(_QWORD *)(v10 + 336) + 6776 * v12 - 6776;
    if ( *(_QWORD *)(v23 + 6768) == *(_QWORD *)(v10 + 328) )
    {
      v24 = *(unsigned int *)(v23 + 8);
      v25 = *(unsigned int *)(v10 + 27504);
      if ( (unsigned int)v24 > (unsigned int)v25 )
      {
        v26 = v24 - v25;
        if ( v26 )
        {
          v27 = *(_QWORD *)v23 + 1688 * (v26 - 1);
          if ( v27 )
            v11 = *(_DWORD *)(v27 + 976);
        }
      }
    }
  }
  v13 = sub_168B6E0((__int64)a1);
  v14 = sub_1AE8290(v11, 75, *(unsigned int *)(v13 + 64), 0x67u);
  if ( v14 == 103 || (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
  {
    v15 = 0;
  }
  else
  {
    v31 = sub_1AF29B0(*a1, v39, a6, a7, v28, v29, v30);
    v40[0] = 0;
    ptr = v44;
    v39 = v31;
    v38 = (_QWORD *)v31;
    v40[1] = 0;
    v41 = 0;
    v43 = 0;
    v32 = j__strlen(".capture_expr.");
    v39 = sub_1B00390((_QWORD *)*a1, v38, (__int64)v40, ".capture_expr.", v32, a6, a7) & 0xFFFFFFFFFFFFFFFELL;
    v33 = (_QWORD *)sub_168B6C0((__int64)a1);
    v15 = sub_1AEDEF0(v33, (__int64)v40, v34, v35, v36, v37);
    if ( ptr != v44 )
      free(ptr);
    operator delete(v40[0], 16LL * v41, 8);
  }
  v16 = (_QWORD *)sub_168B6C0((__int64)a1);
  v19 = v16[294];
  v16[304] += 40LL;
  v20 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v16[295] >= v20 + 40 && v19 )
  {
    v16[294] = v20 + 40;
    result = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    result = sub_986170((__int64)(v16 + 294), 40, 40, 3, v17, v18);
  }
  v22 = v39;
  *(_DWORD *)(result + 8) = 75;
  *(_DWORD *)result = a3;
  *(_DWORD *)(result + 4) = a5;
  *(_DWORD *)(result + 12) = a4;
  *(_QWORD *)(result + 16) = v22;
  *(_QWORD *)(result + 24) = v15;
  *(_DWORD *)(result + 32) = v14;
  return result;
}
