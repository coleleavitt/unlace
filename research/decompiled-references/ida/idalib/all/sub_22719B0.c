__int64 __fastcall sub_22719B0(__int64 a1, int a2, int a3, unsigned __int64 *a4, __int64 a5, __int64 a6)
{
  int v6; // r13d
  __int64 v8; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+10h] [rbp-58h]
  void *v16; // [rsp+18h] [rbp-50h]
  __int64 v17; // [rsp+20h] [rbp-48h]
  _BYTE v18[64]; // [rsp+28h] [rbp-40h] BYREF

  if ( *(_DWORD *)(a1 + 68) )
    return 1;
  v6 = *(_DWORD *)(a1 + 56);
  if ( v6 < a2 )
  {
    v8 = *(unsigned int *)(a1 + 200);
    v11 = *(unsigned int *)(a1 + 204);
    if ( v8 + 1 > v11 )
    {
      sub_2237220(a1 + 192, (const void *)(a1 + 208), v8 + 1, 4);
      v8 = *(unsigned int *)(a1 + 200);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 192) + 4 * v8) = v6;
    v12 = *(_QWORD *)(a1 + 40);
    ++*(_DWORD *)(a1 + 200);
    *(_DWORD *)(a1 + 56) = a2;
    v16 = v18;
    v17 = 0;
    v18[0] = 0;
    v13 = a3;
    v14 = v12;
    v15 = 0;
    sub_2270C60((__int64 *)(a1 + 80), a4, &v13, v11, a5, a6);
    if ( v16 != v18 )
      operator delete(v16);
  }
  return 1;
}
