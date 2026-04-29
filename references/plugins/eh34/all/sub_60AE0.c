__int64 __fastcall sub_60AE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  bool v9; // zf
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdx
  _QWORD *func; // rax
  __int64 v14; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  bool v28; // cf
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // [rsp+0h] [rbp-68h]
  __int64 v37; // [rsp+0h] [rbp-68h]
  unsigned __int64 v38; // [rsp+0h] [rbp-68h]
  __int64 v39; // [rsp+0h] [rbp-68h]
  __int64 v40; // [rsp+8h] [rbp-60h]
  __int64 v41; // [rsp+8h] [rbp-60h]
  __int64 v42; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v43[9]; // [rsp+20h] [rbp-48h] BYREF

  v9 = *(_BYTE *)(a2 + 189) == 0;
  v43[1] = __readfsqword(0x28u);
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v9 )
    sub_5F340(a2, a3);
  v11 = *(int *)(a3 + 64);
  v12 = *(_QWORD *)(a2 + 200);
  v42 = 0;
  if ( v11 >= v12 )
  {
    if ( v12 >= v11 )
      goto LABEL_5;
    v16 = *(_QWORD *)(a2 + 192);
    v17 = *(_QWORD *)(a2 + 208);
    v18 = a2 + 192;
    if ( (unsigned __int64)&v42 < v16 || (unsigned __int64)&v42 >= v16 + 8 * v17 )
    {
      if ( v17 >= v11 )
        goto LABEL_11;
      v36 = *(_QWORD *)(a2 + 208);
      v21 = qvector_reserve(v18, 0, v11, 8);
      v22 = *(_QWORD *)(a2 + 200);
      v23 = *(_QWORD *)(a2 + 208);
      v24 = *(__int64 **)(a2 + 192);
      *(_QWORD *)(a2 + 208) = v36;
      v25 = v22 - 1;
      if ( v25 >= 0 )
      {
        v26 = v21;
        do
        {
          v27 = *v24;
          v26 += 8;
          ++v24;
          *(_QWORD *)(v26 - 8) = v27;
          v28 = v25-- == 0;
        }
        while ( !v28 );
        v24 = *(__int64 **)(a2 + 192);
      }
      v40 = v23;
      v37 = v21;
      qfree(v24);
      v16 = v37;
      v12 = *(_QWORD *)(a2 + 200);
      *(_QWORD *)(a2 + 192) = v37;
      *(_QWORD *)(a2 + 208) = v40;
      if ( v12 < v11 )
      {
LABEL_11:
        v19 = v42;
        while ( 1 )
        {
          *(_QWORD *)(v16 + 8 * v12++) = v19;
          if ( v11 == v12 )
            break;
          v16 = *(_QWORD *)(a2 + 192);
        }
      }
    }
    else
    {
      v43[0] = 0;
      if ( v17 >= v11 )
        goto LABEL_18;
      v38 = v17;
      v29 = qvector_reserve(v18, 0, v11, 8);
      v30 = *(_QWORD *)(a2 + 200);
      v31 = *(_QWORD *)(a2 + 208);
      v32 = *(__int64 **)(a2 + 192);
      *(_QWORD *)(a2 + 208) = v38;
      v33 = v30 - 1;
      if ( v33 >= 0 )
      {
        v34 = v29;
        do
        {
          v35 = *v32;
          v34 += 8;
          ++v32;
          *(_QWORD *)(v34 - 8) = v35;
          v28 = v33-- == 0;
        }
        while ( !v28 );
        v32 = *(__int64 **)(a2 + 192);
      }
      v41 = v31;
      v39 = v29;
      qfree(v32);
      v16 = v39;
      v12 = *(_QWORD *)(a2 + 200);
      *(_QWORD *)(a2 + 192) = v39;
      *(_QWORD *)(a2 + 208) = v41;
      if ( v12 < v11 )
      {
LABEL_18:
        v20 = v43[0];
        while ( 1 )
        {
          *(_QWORD *)(v16 + 8 * v12++) = v20;
          if ( v11 == v12 )
            break;
          v16 = *(_QWORD *)(a2 + 192);
        }
      }
    }
  }
  *(_QWORD *)(a2 + 200) = v11;
LABEL_5:
  func = (_QWORD *)get_func(a4);
  if ( func )
  {
    if ( a4 == *func )
    {
      *(_QWORD *)(a1 + 16) = func;
      LODWORD(v42) = a5;
      BYTE4(v42) = 1;
      v43[0] = 0;
      v14 = sub_60540((_QWORD *)a2, a3, a4, &v42, v43);
      *(_QWORD *)(a2 + 288) = v14;
      *(_QWORD *)(a1 + 8) = v14;
    }
    else
    {
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)a1 = 1;
    *(_QWORD *)(a1 + 16) = 0;
  }
  return a1;
}
