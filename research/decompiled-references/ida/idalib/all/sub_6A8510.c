bool __fastcall sub_6A8510(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdi
  int v14; // ecx
  int v15; // edx
  int v16; // edx
  int v17; // esi
  __int16 v18; // cx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  __int16 v22; // ax
  unsigned int v24; // esi
  int v25; // edi
  int v26; // r9d
  int v27; // r8d
  int v28; // edi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r14
  __int64 v33; // r15
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // rdi
  int v38; // [rsp+0h] [rbp-68h]
  __int64 v39; // [rsp+0h] [rbp-68h]
  __int64 v40; // [rsp+10h] [rbp-58h] BYREF
  __int64 v41; // [rsp+18h] [rbp-50h]
  unsigned __int64 v42; // [rsp+28h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  if ( *(_DWORD *)a2 != 2 )
    return (unsigned int)sub_6A7D10(a1, (unsigned int *)a2, (unsigned int)a3, a4, 0) == 0;
  v8 = *(__int64 **)(a2 + 8);
  v9 = v8[1];
  if ( v9 == 1 )
  {
    v10 = *v8;
    if ( (unsigned __int16)(*(_WORD *)(*v8 + 16) - 1) > 0xFFFDu )
    {
      if ( *(unsigned __int16 *)(v10 + 18) >= a3 || a4 && !*(_QWORD *)(a4 + 8) )
      {
        if ( *(_DWORD *)v10 == 1 || !(unsigned int)sub_6A66A0(a1, *(_DWORD *)v10, *(_DWORD *)(v10 + 8), a3) )
        {
          v41 = 0;
          v29 = *(_QWORD *)(v10 + 8);
          v40 = 0;
          v41 = v29;
          LODWORD(v29) = *(_DWORD *)v10;
          *(_QWORD *)(v10 + 8) = 0;
          LODWORD(v40) = v29;
          *(_DWORD *)v10 = 0;
          v30 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)(a2 + 8) = v41;
          v41 = v30;
          LODWORD(v30) = *(_DWORD *)a2;
          *(_DWORD *)a2 = v40;
          LODWORD(v40) = v30;
          cleanup_argloc(&v40);
        }
        if ( *(_DWORD *)a2 != 2 || !v8[1] )
          return (unsigned int)sub_6A7D10(a1, (unsigned int *)a2, (unsigned int)a3, a4, 0) == 0;
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
      v31 = *v8;
      v32 = 24 * v20;
      v33 = *v8 + 24 * v20;
      if ( v31 == v33 )
        return (unsigned int)sub_6A7D10(a1, (unsigned int *)a2, (unsigned int)a3, a4, 0) == 0;
      v34 = 0xAAAAAAAAAAAAAAABLL * (v32 >> 3);
      if ( v34 )
      {
        _BitScanReverse64(&v35, v34);
        sub_6A6B20(v31, v33, 2LL * (int)v35);
        if ( v32 > 384 )
        {
          v36 = v31 + 384;
          sub_6A6570(v31, v31 + 384);
          do
          {
            v37 = v36;
            v36 += 24;
            sub_6A64A0(v37);
          }
          while ( v33 != v36 );
          return (unsigned int)sub_6A7D10(a1, (unsigned int *)a2, (unsigned int)a3, a4, 0) == 0;
        }
      }
      else
      {
        sub_6A6B20(v31, v33, -2);
      }
      sub_6A6570(v31, v33);
      return (unsigned int)sub_6A7D10(a1, (unsigned int *)a2, (unsigned int)a3, a4, 0) == 0;
    }
    return 0;
  }
  if ( v9 != 2 )
  {
    if ( v9 )
    {
      v10 = *v8;
      v11 = *v8;
      goto LABEL_7;
    }
    return 0;
  }
  v10 = *v8;
  v11 = *v8;
  if ( *(_DWORD *)*v8 != 3 )
    goto LABEL_7;
  if ( *(_DWORD *)(v10 + 24) != 3 )
    goto LABEL_7;
  if ( HIWORD(*(_DWORD *)(v10 + 8)) )
    goto LABEL_7;
  v24 = *(_DWORD *)(v10 + 32);
  if ( HIWORD(v24) | a3 & 1 )
    goto LABEL_7;
  v25 = *(unsigned __int16 *)(v10 + 18);
  v26 = *(unsigned __int16 *)(v10 + 42);
  if ( v25 + v26 != a3 )
    goto LABEL_7;
  v27 = a3 >> 1;
  if ( v25 != a3 >> 1 || (unsigned __int16)(*(_WORD *)(v10 + 16) - 1) <= 0xFFFDu )
    goto LABEL_7;
  v28 = *(unsigned __int16 *)(v10 + 40);
  if ( (_WORD)v28 == 0xFFFF )
  {
    if ( !(_WORD)v26 )
      goto LABEL_35;
    v28 = a3 >> 1;
LABEL_55:
    if ( v26 == v28 || *(unsigned __int16 *)(v10 + 42) > 1u )
      goto LABEL_35;
    goto LABEL_7;
  }
  if ( (_WORD)v26 )
  {
    if ( v27 != v28 )
      goto LABEL_7;
    goto LABEL_55;
  }
  if ( v27 == v28 )
  {
LABEL_35:
    v38 = *(_DWORD *)(v10 + 8);
    cleanup_argloc(a2);
    *(_DWORD *)a2 = 4;
    *(_DWORD *)(a2 + 8) = v38 | (v24 << 16);
    return (unsigned int)sub_6A7D10(a1, (unsigned int *)a2, (unsigned int)a3, a4, 0) == 0;
  }
LABEL_7:
  v12 = *(_QWORD *)(v10 + 8);
  v13 = v10 + 24 * v9;
  v14 = v12;
  if ( v10 != v13 )
  {
    while ( *(_DWORD *)v11 == 1 )
    {
      if ( v14 != *(_QWORD *)(v11 + 8) )
        break;
      v15 = *(unsigned __int16 *)(v11 + 16);
      if ( (_WORD)v15 != 0xFFFF && (unsigned int)*(_QWORD *)(v10 + 8) + v15 != (__int64)v14 )
        break;
      v16 = *(unsigned __int16 *)(v11 + 18);
      v11 += 24;
      v14 += v16;
      if ( v11 == v13 )
        goto LABEL_46;
    }
    if ( v13 != v11 )
      goto LABEL_15;
  }
LABEL_46:
  if ( a3 + (_DWORD)v12 != v14 )
    goto LABEL_15;
  v39 = *(_QWORD *)(v10 + 8);
  cleanup_argloc(a2);
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = (int)v39;
  return (unsigned int)sub_6A7D10(a1, (unsigned int *)a2, (unsigned int)a3, a4, 0) == 0;
}
