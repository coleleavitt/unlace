_BOOL8 __fastcall sub_1CBA4C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6, _DWORD *a7)
{
  unsigned int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _BOOL4 v13; // r15d
  __int64 v15; // rbx
  size_t v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // [rsp+0h] [rbp-118h]
  __int64 v25; // [rsp+8h] [rbp-110h]
  __int64 v26[3]; // [rsp+10h] [rbp-108h] BYREF
  void *v27; // [rsp+28h] [rbp-F0h]
  __int64 v28; // [rsp+38h] [rbp-E0h] BYREF
  __m128i v29; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v31; // [rsp+70h] [rbp-A8h] BYREF
  char v32; // [rsp+C8h] [rbp-50h]
  unsigned int v33; // [rsp+D0h] [rbp-48h]
  char v34; // [rsp+D4h] [rbp-44h]

  if ( a5
    && *(_QWORD *)(a5 + 8)
    && (v9 = a3, v13 = sub_169D3A0(a1, a5, a3, a4, a5, (__int64)a6))
    && !sub_16A2930(a1, a5, 0, v10, v11, v12) )
  {
    v25 = *(_QWORD *)(a5 + 8);
    v24 = *(_QWORD *)(a1 + 248);
    sub_F228E0(v26, a2);
    sub_F22FF0((unsigned __int64 *)&v29, v25, v26[0], 0);
    *a6 = sub_A80B60(v24, &v29);
    sub_168B9F0((__int64)&v29, (__int64 *)(a1 + 8), v9, 0x1404u, 0);
    sub_F22A90(v26, *a6);
    v15 = v26[0];
    if ( v32 )
    {
      sub_F23A70(&v31, v26[0]);
    }
    else if ( v34 )
    {
      v21 = sub_168B9E0(&v29);
      v22 = v30;
      if ( v30 )
        v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
      v26[0] = v22;
      v23 = sub_1587BC0(v21, v26, v17, v18, v19, v20);
      sub_F23A70((unsigned __int8 **)(*v23 + 32LL * v33 + 8), v15);
    }
    v16 = j__strlen("template ");
    sub_9EC740((__int64)v26, v9, "template ", v16, 0);
    sub_1589170((__int64)&v29, v26);
    if ( v27 != &v28 )
      operator delete(v27);
    sub_15F7200(&v29);
    *a7 = 4;
  }
  else
  {
    return 0;
  }
  return v13;
}
