unsigned __int64 __fastcall sub_1924920(__int64 a1, unsigned int a2, char *a3, __int64 *a4, __m128 a5, __m128 a6)
{
  unsigned __int16 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 result; // rax
  __int64 v16; // rsi
  _QWORD *v17; // rdi
  int v18; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+10h] [rbp-48h]
  int v21; // [rsp+18h] [rbp-40h]
  __int64 v22; // [rsp+20h] [rbp-38h]

  v10 = (unsigned __int16 *)sub_BFB9F0((__int64)a3);
  v13 = *v10;
  v14 = (unsigned int)(v13 + 432);
  LOWORD(v14) = (v13 + 432) & 0x1FF;
  if ( (unsigned __int16)v14 <= 8u )
  {
    v16 = **((_QWORD **)v10 + 3);
    v21 = 0;
    v19 = 0;
    *a4 = v16;
    v17 = *(_QWORD **)(a1 + 248);
    v18 = 1;
    v20 = sub_A73320(v17, v16);
    v22 = 0;
    return sub_1A24E20(a1, &v18, a2, a3, 0, 0);
  }
  else
  {
    result = sub_19245F0(a1, a3, v13, v14, v11, v12, a5, a6);
    if ( result != 1 )
      *a4 = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFFELL) + 8);
  }
  return result;
}
