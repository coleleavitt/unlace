__int64 __fastcall sub_B53CF0(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 *v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 result; // rax
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // r14
  _DWORD *v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rdi
  bool v24; // zf
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  _DWORD *v34; // rax
  _DWORD *v35; // rax
  __int64 v36; // [rsp+0h] [rbp-88h]
  __int64 v37; // [rsp+8h] [rbp-80h]
  __int64 v38[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v39[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v40; // [rsp+30h] [rbp-58h] BYREF
  __int64 v41; // [rsp+38h] [rbp-50h]
  int v42[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v43; // [rsp+48h] [rbp-40h]

  v7 = a1[4];
  v8 = a1[173];
  v9 = *(__int64 **)(v7 + 8LL * a2);
  v10 = *v9;
  v11 = **(_QWORD **)(v7 + 8LL * a3);
  result = *(unsigned int *)(v8 + 16);
  if ( (*(_WORD *)(*v9 + 4)
     || !*(_QWORD *)(*(_QWORD *)(v10 + 16) + 24LL)
     || **(_QWORD **)(*(_QWORD *)(v10 + 16) + 24LL) != ((unsigned int)result | 0x3000000000LL))
    && (*(_WORD *)(v11 + 4)
     || !*(_QWORD *)(*(_QWORD *)(v11 + 16) + 24LL)
     || **(_QWORD **)(*(_QWORD *)(v11 + 16) + 24LL) != ((unsigned int)result | 0x3000000000LL)) )
  {
    sub_B53280(v38, (__int64)a1, *v9, (__int64)v9, a5, a6);
    v13 = v38[0];
    v37 = v38[1];
    sub_B53280(v39, (__int64)a1, v11, v14, v15, v16);
    v17 = v39[0];
    v40 = 0;
    v36 = v39[1];
    v41 = a1[3];
    v18 = *(_DWORD **)(sub_15D1F10(v10) + 24);
    if ( v18
      && *(_DWORD *)(v8 + 16) == *v18
      && !v18[1]
      && (v35 = *(_DWORD **)(sub_15D1F10(v11) + 24)) != nullptr
      && *(_DWORD *)(v8 + 16) == *v35
      && !v35[1]
      || (v19 = *(_DWORD **)(sub_15D1F10(v10) + 24)) != nullptr
      && *(_DWORD *)(v8 + 16) == *v19
      && v19[1] == 1
      && (v34 = *(_DWORD **)(sub_15D1F10(v11) + 24)) != nullptr
      && *(_DWORD *)(v8 + 16) == *v34
      && v34[1] == 1 )
    {
      sub_D5C100(a1 + 9, v13, v17, &v40);
    }
    else
    {
      v20 = sub_15E1B70(a1[3]);
      v21 = v20;
      if ( v20 )
        ++*(_DWORD *)(v20 + 8);
      v22 = v40;
      if ( v40 )
      {
        v23 = v41;
        v24 = (*(_DWORD *)(v40 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v23, v22);
      }
      v40 = v21;
    }
    sub_14B9B80(a1 + 7, &v40);
    v25 = a1[3];
    v26 = sub_15E1B70(v25);
    v27 = v26;
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    v28 = sub_15E1B70(a1[3]);
    v29 = v28;
    if ( v28 )
      ++*(_DWORD *)(v28 + 8);
    sub_B52AB0((__int64)a1, v28);
    sub_B537F0((__int64 *)v42, a1);
    result = sub_B52AB0((__int64)a1, *(__int64 *)v42);
    v30 = *(_QWORD *)v42;
    if ( *(_QWORD *)v42 )
    {
      v31 = v43;
      v24 = (*(_DWORD *)(*(_QWORD *)v42 + 8LL))-- == 1;
      if ( v24 )
        result = sub_15D7BC0(v31, v30);
    }
    if ( v29 )
    {
      v24 = (*(_DWORD *)(v29 + 8))-- == 1;
      if ( v24 )
        result = sub_15D7BC0(v25, v29);
    }
    if ( v27 )
    {
      v24 = (*(_DWORD *)(v27 + 8))-- == 1;
      if ( v24 )
        result = sub_15D7BC0(v25, v27);
    }
    v32 = v40;
    if ( v40 )
    {
      v33 = v41;
      v24 = (*(_DWORD *)(v40 + 8))-- == 1;
      if ( v24 )
        result = sub_15D7BC0(v33, v32);
    }
    if ( v17 )
    {
      v24 = (*(_DWORD *)(v17 + 8))-- == 1;
      if ( v24 )
        result = sub_15D7BC0(v36, v17);
    }
    if ( v13 )
    {
      v24 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v24 )
        return sub_15D7BC0(v37, v13);
    }
  }
  return result;
}

