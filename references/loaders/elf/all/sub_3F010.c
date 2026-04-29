__int64 __fastcall sub_3F010(__int64 *a1, int a2)
{
  __int64 *v2; // r14
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  struct _Unwind_Exception *v13; // rbx
  __int64 v14; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v15; // [rsp+8h] [rbp-F0h]
  __int64 v16; // [rsp+18h] [rbp-E0h]
  __int128 v17; // [rsp+20h] [rbp-D8h]
  __int64 v18; // [rsp+30h] [rbp-C8h]
  __int128 v19; // [rsp+38h] [rbp-C0h]
  __int128 v20; // [rsp+48h] [rbp-B0h]
  int v21; // [rsp+58h] [rbp-A0h]
  __int16 v22; // [rsp+5Ch] [rbp-9Ch]
  char v23; // [rsp+5Eh] [rbp-9Ah]
  __int64 v24; // [rsp+60h] [rbp-98h] BYREF
  __int128 v25; // [rsp+68h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-80h]
  __int128 v27; // [rsp+80h] [rbp-78h]
  __int64 v28; // [rsp+90h] [rbp-68h]
  __int128 v29; // [rsp+98h] [rbp-60h]
  __int128 v30; // [rsp+A8h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-40h]
  __int16 v32; // [rsp+BCh] [rbp-3Ch]
  char v33; // [rsp+BEh] [rbp-3Ah]
  unsigned __int64 v34; // [rsp+C8h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  if ( (unsigned int)(a2 - 1) > 2 )
  {
    sub_30AA0(a1);
    goto LABEL_13;
  }
  v3 = a1[1];
  if ( a2 == 1 )
  {
    v6 = a1[3];
    a1[3] = v6 + 1;
    if ( v6 != v3 )
    {
      if ( v3 >= v6 )
      {
        v7 = *a1;
        v8 = 96 * v6;
        v22 = 0;
        v5 = v7 + 96 * v6;
        v14 = 0;
        v16 = 0;
        v9 = v5;
        v21 = 0;
        v23 = 0;
        v24 = 0;
        v26 = 0;
        v28 = 0;
        v31 = 0;
        v32 = 0;
        v33 = 0;
        v15 = 0;
        v17 = 0;
        v20 = 0;
        v25 = 0;
        v27 = 0;
        v29 = 0;
        v30 = 0;
        if ( a1[2] < v3 + 1 )
        {
          v11 = qvector_reserve(a1, v7, v3 + 1, 96);
          *a1 = v11;
          v3 = a1[1];
          v9 = v11 + v8;
        }
        memmove((void *)(v9 + 96), (const void *)v9, 96 * v3 - v8);
        sub_344F0(v9, (__int64)&v24);
        ++a1[1];
        return v5;
      }
LABEL_13:
      if ( !under_debugger )
      {
        v13 = (struct _Unwind_Exception *)interr(20133);
        sub_34660(v2);
        v18 = 0;
        v19 = 0;
        sub_34660(&v14);
        _Unwind_Resume(v13);
      }
      BUG();
    }
  }
  v4 = *a1;
  if ( a1[2] < v3 + 1 )
  {
    v12 = qvector_reserve(a1, v4, v3 + 1, 96);
    v3 = a1[1];
    *a1 = v12;
    v4 = v12;
  }
  v5 = v4 + 96 * v3;
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 88) = 0;
  *(_WORD *)(v5 + 92) = 0;
  *(_BYTE *)(v5 + 94) = 0;
  *(_OWORD *)(v5 + 8) = 0;
  *(_OWORD *)(v5 + 32) = 0;
  *(_OWORD *)(v5 + 56) = 0;
  *(_OWORD *)(v5 + 72) = 0;
  ++a1[1];
  return v5;
}
