__int64 __fastcall sub_1777870(_QWORD *a1, __int64 a2, __int64 a3, unsigned int *a4, __m128 a5)
{
  __int64 v8; // rbp
  _DWORD *v9; // rbx
  unsigned int v10; // eax
  _BOOL8 v11; // r12
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  __int64 v19; // rbx
  unsigned int v20; // eax
  unsigned int *v21; // rdx
  unsigned int v23; // [rsp+8h] [rbp-60h]
  unsigned int v24; // [rsp+14h] [rbp-54h]
  __int64 v25[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = a3;
  v9 = a4 + 1;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v11 = v9 != nullptr;
  v12 = (unsigned __int64)v9 - v11;
  v15 = sub_17687F0(a1, a2, *(_QWORD *)(v8 + 32), (const __m128i *)(v10 * (v12 / v10 + v11)), v13, v14);
  if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v16 = v15;
    if ( *(_DWORD *)(*a1 + 12632LL) )
    {
      v17 = *(_QWORD *)(v8 + 32);
    }
    else
    {
      sub_F6C520(*(_QWORD *)(v8 + 32));
      v17 = *(_QWORD *)(v8 + 32);
      if ( v16 == v17 )
        goto LABEL_5;
    }
    v24 = *(_DWORD *)(v8 + 20);
    v23 = *a4;
    v18 = (unsigned int)sub_F6C520(v17);
    v25[0] = *(_QWORD *)(v8 + 32);
    v25[1] = v18 * (v11 + v12 / v18);
    v19 = (unsigned int)sub_F6CE20(v25);
    v20 = sub_F6CCB0(v25, a5);
    v8 = sub_1E503F0(*a1, v16, (v19 << 32) | v20, v23, v24);
    if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
LABEL_5:
      sub_1EA6140(a2, v8, 4, 4);
      *v21 = *a4;
      return v8;
    }
  }
  return 0;
}
