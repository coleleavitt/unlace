__int64 __fastcall sub_7E2160(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 *v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 result; // rax
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // r15
  _DWORD *v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdi
  bool v24; // zf
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  unsigned int v28; // ebp
  unsigned int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // rdi
  _DWORD *v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // [rsp+0h] [rbp-88h]
  __int64 v35; // [rsp+8h] [rbp-80h]
  __int64 v36; // [rsp+18h] [rbp-70h] BYREF
  __int64 v37[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v38[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v39; // [rsp+40h] [rbp-48h] BYREF
  __int64 v40; // [rsp+48h] [rbp-40h]

  v7 = a1[11];
  v8 = a1[172];
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
    sub_7E1020(v37, (__int64)a1, *v9, (__int64)v9, a5, a6);
    v13 = v37[0];
    v35 = v37[1];
    sub_7E1020(v38, (__int64)a1, v11, v14, v15, v16);
    v17 = v38[0];
    v39 = 0;
    v34 = v38[1];
    v40 = a1[9];
    v18 = *(_DWORD **)(sub_15D1F10(v10) + 24);
    if ( v18
      && *(_DWORD *)(v8 + 16) == *v18
      && !v18[1]
      && (v33 = *(_DWORD **)(sub_15D1F10(v11) + 24)) != nullptr
      && *(_DWORD *)(v8 + 16) == *v33
      && !v33[1]
      || (v19 = *(_DWORD **)(sub_15D1F10(v10) + 24)) != nullptr
      && *(_DWORD *)(v8 + 16) == *v19
      && v19[1] == 1
      && (v32 = *(_DWORD **)(sub_15D1F10(v11) + 24)) != nullptr
      && *(_DWORD *)(v8 + 16) == *v32
      && v32[1] == 1 )
    {
      sub_D5C100(a1 + 16, v13, v17, &v39);
    }
    else
    {
      v20 = sub_15E1B70(a1[9]);
      v21 = v20;
      if ( v20 )
        ++*(_DWORD *)(v20 + 8);
      v22 = v39;
      if ( v39 )
      {
        v23 = v40;
        v24 = (*(_DWORD *)(v39 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v23, v22);
      }
      v39 = v21;
    }
    sub_14B9B80(a1 + 14, &v39);
    v28 = sub_7E58D0((_DWORD)a1, v10, v11, v25, v26, v27);
    v29 = sub_7E58C0(a1, v39);
    sub_7E5800(a1, v28, v29);
    sub_7E1590(&v36, a1);
    result = sub_7E5290(a1, &v36);
    if ( v36 )
      result = sub_186B220((void *)(v36 - 8));
    v30 = v39;
    if ( v39 )
    {
      v31 = v40;
      v24 = (*(_DWORD *)(v39 + 8))-- == 1;
      if ( v24 )
        result = sub_15D7BC0(v31, v30);
    }
    if ( v17 )
    {
      v24 = (*(_DWORD *)(v17 + 8))-- == 1;
      if ( v24 )
        result = sub_15D7BC0(v34, v17);
    }
    if ( v13 )
    {
      v24 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v24 )
        return sub_15D7BC0(v35, v13);
    }
  }
  return result;
}

