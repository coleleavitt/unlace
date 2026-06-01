const __m128i *__fastcall sub_1854990(
        __int64 a1,
        __int64 *a2,
        char a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _DWORD *a9)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  const __m128i *result; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // al
  unsigned int *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  _QWORD *v31; // [rsp+8h] [rbp-100h]
  const __m128i *v32; // [rsp+8h] [rbp-100h]
  _QWORD *v33; // [rsp+8h] [rbp-100h]
  _QWORD *v34; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v35; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v36; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v37[2]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v38[200]; // [rsp+40h] [rbp-C8h] BYREF

  v34 = nullptr;
  v35 = sub_1E5F010(a8, &v34);
  v17 = (__int64 *)(v35 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( (*(_BYTE *)(*v17 + 17) & 4) != 0 )
    {
      sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), a6, 0x1524u, 0);
      sub_15F7200(v38);
      return nullptr;
    }
    else
    {
      v18 = sub_F631C0(*v17, (__int64)&v34, v13, v14, v15, v16);
      if ( v18 && (*((_BYTE *)v18 + 28) & 0x7F) == 0x3E )
      {
        v31 = v18;
        v22 = sub_B7E870((__int64)v18, (__int64)&v34, (__int64)v18, v19, v20, v21);
        v23 = v34;
        if ( !v22 )
          v22 = v31;
        if ( !v34 )
        {
          v33 = v22;
          v23 = sub_A81910(*(_QWORD **)(a1 + 248), v35, a6);
          v22 = v33;
          v34 = v23;
        }
        result = sub_1854420((_QWORD *)a1, a2, a3, a4, a5, a6, v23, v22);
        if ( result )
        {
          v32 = result;
          sub_17B7670(a1, (__int64)result, (__int64)a2, 0, v25, v26);
          return v32;
        }
      }
      else
      {
        sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), a6, 0x1525u, 0);
        sub_1605D30((__int64)v38, &v35);
        sub_15F7200(v38);
        return nullptr;
      }
    }
  }
  else
  {
    v27 = sub_169D3A0(a1, (__int64)a9, v13, v14, v15, v16);
    sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), a6, !v27 ? 5376 : 5412, 0);
    v28 = *(unsigned int **)(a7 + 16);
    v29 = *v28;
    v37[0] = v28 + 4;
    v37[1] = v29;
    v30 = sub_166BAF0((__int64)v38, (__int64)v37);
    HIDWORD(v36) = HIDWORD(a6);
    LODWORD(v36) = *a9;
    sub_1587DB0(v30, &v36);
    sub_15F7200(v38);
    return nullptr;
  }
  return result;
}
