unsigned __int64 __fastcall sub_19CF780(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int16 v2; // ax
  char v3; // r12
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34[4]; // [rsp+8h] [rbp-20h] BYREF

  v34[0] = a2;
  v2 = sub_F5E9A0(v34);
  v3 = v2;
  if ( HIBYTE(v2) )
  {
    v4 = sub_A8A2C0(a1);
    v8 = *(_QWORD *)(v4 + 48);
    if ( v8 )
    {
      result = a2;
      if ( v34[0] != (v8 & 0xFFFFFFFFFFFFFFF0LL) )
        return result;
    }
    else
    {
      v21 = sub_A7AA70((__int64)a1, v4, 0, v5, v6, v7);
      result = a2;
      if ( v34[0] != v21 )
        return result;
    }
    v22 = sub_A8A250(a1);
    v26 = *(_QWORD *)(v22 + 48);
    if ( v26 )
      v27 = v26 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v27 = sub_A7AA70((__int64)a1, v22, v23, 0, v24, v25);
    v28 = sub_A8A250(a1);
    v32 = *(_QWORD *)(v28 + 48);
    if ( v32 )
      v33 = v32 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v33 = sub_A7AA70((__int64)a1, v28, 0, v29, v30, v31);
    return sub_A719E0((__int64)a1, v3, v33, v27);
  }
  else
  {
    v10 = sub_A8A2C0(a1);
    v14 = *(_QWORD *)(v10 + 48);
    if ( v14 )
      v15 = v14 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v15 = sub_A7AA70((__int64)a1, v10, 0, v11, v12, v13);
    result = a2;
    if ( v34[0] == v15 )
    {
      v16 = sub_A8A250(a1);
      v20 = *(_QWORD *)(v16 + 48);
      if ( v20 )
        return v20 & 0xFFFFFFFFFFFFFFF0LL;
      else
        return sub_A7AA70((__int64)a1, v16, 0, v17, v18, v19);
    }
  }
  return result;
}
