bool __fastcall sub_687DB0(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r14
  unsigned int v11; // r8d
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rsi
  int v15; // edx
  int v16; // edx
  int v17; // esi
  __int16 v18; // cx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  __int16 v22; // ax
  int v24; // esi
  int v25; // r9d
  int v26; // edi
  int v27; // esi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // r15
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // r14
  __int64 v36; // rdi
  int v37; // [rsp+0h] [rbp-68h]
  unsigned int v38; // [rsp+0h] [rbp-68h]
  int v39; // [rsp+Ch] [rbp-5Ch]
  __int64 v40; // [rsp+10h] [rbp-58h] BYREF
  __int64 v41; // [rsp+18h] [rbp-50h]
  unsigned __int64 v42; // [rsp+28h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  if ( *(_DWORD *)a2 != 2 )
    return (unsigned int)sub_6875D0(a1, (unsigned int *)a2, (unsigned int)a3, a4, 0) == 0;
  v8 = *(__int64 **)(a2 + 8);
  v9 = v8[1];
  if ( v9 == 1 )
  {
    v10 = *v8;
    if ( (unsigned __int16)(*(_WORD *)(*v8 + 16) - 1) > 0xFFFDu )
    {
      if ( *(unsigned __int16 *)(v10 + 18) >= a3 || a4 && !*(_QWORD *)(a4 + 8) )
      {
        if ( *(_DWORD *)v10 == 1 || !(unsigned int)sub_685F50(a1, *(_DWORD *)v10, *(_DWORD *)(v10 + 8), a3) )
        {
          v41 = 0;
          v28 = *(_QWORD *)(v10 + 8);
          v40 = 0;
          v41 = v28;
          LODWORD(v28) = *(_DWORD *)v10;
          *(_QWORD *)(v10 + 8) = 0;
          LODWORD(v40) = v28;
          *(_DWORD *)v10 = 0;
          v29 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)(a2 + 8) = v41;
          v41 = v29;
          LODWORD(v29) = *(_DWORD *)a2;
          *(_DWORD *)a2 = v40;
          LODWORD(v40) = v29;
          cleanup_argloc(&v40);
        }
        if ( *(_DWORD *)a2 != 2 || !v8[1] )
          return (unsigned int)sub_6875D0(a1, (unsigned int *)a2, (unsigned int)a3, a4, 0) == 0;
        v10 = *v8;
      }
LABEL_15:
      v17 = 0;
      v18 = 0;
      v19 = 0;
      while ( 1 )
      {
        v21 = v10 + 24 * v19;
        if ( *(_WORD *)(v21 + 16) == 0xFFFF )
          *(_WORD *)(v21 + 16) = v18;
        v22 = *(_WORD *)(v21 + 18);
        if ( !v22 )
          return 0;
        ++v17;
        v18 = *(_WORD *)(v21 + 16) + v22;
        v20 = v8[1];
        v19 = v17;
        if ( v17 >= v20 )
          break;
        v10 = *v8;
      }
      v30 = *v8;
      v31 = 24 * v20;
      v32 = *v8 + 24 * v20;
      if ( v30 == v32 )
        return (unsigned int)sub_6875D0(a1, (unsigned int *)a2, (unsigned int)a3, a4, 0) == 0;
      v33 = 0xAAAAAAAAAAAAAAABLL * (v31 >> 3);
      if ( v33 )
      {
        _BitScanReverse64(&v34, v33);
        sub_6863D0(v30, v32, 2LL * (int)v34);
        if ( v31 > 384 )
        {
          v35 = v30 + 384;
          sub_685E20(v30, v30 + 384);
          do
          {
            v36 = v35;
            v35 += 24;
            sub_685D50(v36);
          }
          while ( v32 != v35 );
          return (unsigned int)sub_6875D0(a1, (unsigned int *)a2, (unsigned int)a3, a4, 0) == 0;
        }
      }
      else
      {
        sub_6863D0(v30, v32, -2);
      }
      sub_685E20(v30, v32);
      return (unsigned int)sub_6875D0(a1, (unsigned int *)a2, (unsigned int)a3, a4, 0) == 0;
    }
    return 0;
  }
  if ( v9 != 2 )
  {
    if ( v9 )
    {
      v10 = *v8;
      v11 = *(_DWORD *)(*v8 + 8);
      v12 = *v8;
      goto LABEL_7;
    }
    return 0;
  }
  v10 = *v8;
  v11 = *(_DWORD *)(*v8 + 8);
  v12 = *v8;
  if ( *(_DWORD *)*v8 != 3 )
    goto LABEL_7;
  if ( *(_DWORD *)(v10 + 24) != 3 )
    goto LABEL_7;
  if ( HIWORD(v11) )
    goto LABEL_7;
  if ( HIWORD(*(_DWORD *)(v10 + 32)) | a3 & 1 )
    goto LABEL_7;
  v24 = *(unsigned __int16 *)(v10 + 18);
  v25 = *(unsigned __int16 *)(v10 + 42);
  if ( v24 + v25 != a3 )
    goto LABEL_7;
  v26 = a3 >> 1;
  if ( v24 != a3 >> 1 || (unsigned __int16)(*(_WORD *)(v10 + 16) - 1) <= 0xFFFDu )
    goto LABEL_7;
  v27 = *(unsigned __int16 *)(v10 + 40);
  if ( (_WORD)v27 == 0xFFFF )
  {
    if ( !(_WORD)v25 )
      goto LABEL_35;
    v27 = a3 >> 1;
LABEL_55:
    if ( v25 == v27 || *(unsigned __int16 *)(v10 + 42) > 1u )
      goto LABEL_35;
    goto LABEL_7;
  }
  if ( (_WORD)v25 )
  {
    if ( v26 != v27 )
      goto LABEL_7;
    goto LABEL_55;
  }
  if ( v26 == v27 )
  {
LABEL_35:
    v39 = *(_DWORD *)(*v8 + 8);
    v37 = *(_DWORD *)(v10 + 32);
    cleanup_argloc(a2);
    *(_DWORD *)a2 = 4;
    *(_DWORD *)(a2 + 8) = v39 | (v37 << 16);
    return (unsigned int)sub_6875D0(a1, (unsigned int *)a2, (unsigned int)a3, a4, 0) == 0;
  }
LABEL_7:
  v13 = v11;
  v14 = v10 + 24 * v9;
  if ( v14 != v10 )
  {
    while ( *(_DWORD *)v12 == 1 )
    {
      if ( *(_DWORD *)(v12 + 8) != v13 )
        break;
      v15 = *(unsigned __int16 *)(v12 + 16);
      if ( (_WORD)v15 != 0xFFFF && v11 + v15 != v13 )
        break;
      v16 = *(unsigned __int16 *)(v12 + 18);
      v12 += 24;
      v13 += v16;
      if ( v12 == v14 )
        goto LABEL_46;
    }
    if ( v14 != v12 )
      goto LABEL_15;
  }
LABEL_46:
  if ( a3 + v11 != v13 )
    goto LABEL_15;
  v38 = v11;
  cleanup_argloc(a2);
  *(_DWORD *)a2 = 1;
  *(_DWORD *)(a2 + 8) = v38;
  return (unsigned int)sub_6875D0(a1, (unsigned int *)a2, (unsigned int)a3, a4, 0) == 0;
}

