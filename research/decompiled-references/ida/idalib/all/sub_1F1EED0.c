__int64 __fastcall sub_1F1EED0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  int v4; // ebp
  int v5; // r15d
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rdx
  _QWORD *v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 result; // rax
  void *v16; // rdi
  int v17; // ebp
  int v18; // eax
  __int64 v19; // [rsp+0h] [rbp-70h]
  __int64 v20; // [rsp+0h] [rbp-70h]
  void *ptr; // [rsp+8h] [rbp-68h] BYREF
  __int64 v22; // [rsp+10h] [rbp-60h]
  _BYTE v23[88]; // [rsp+18h] [rbp-58h] BYREF

  v1 = a1[2];
  v2 = *(unsigned int *)(v1 + 24);
  *(_DWORD *)(v1 + 24) = v2 + 1;
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 32) + 8 * v2);
  if ( !(_DWORD)v3 )
    return 0;
  v4 = v3;
  v22 = 0x400000000LL;
  ptr = v23;
  if ( (unsigned int)v3 > 4uLL )
  {
    sub_2237220(&ptr, v23, (unsigned int)v3, 8);
    v1 = a1[2];
  }
  v5 = 0;
  while ( 1 )
  {
    v9 = *(_QWORD **)(v1 + 8);
    v10 = sub_1EE13A0((__int64)v9, *(_QWORD *)(v1 + 16), (__int64 *)(v1 + 32), (_DWORD *)(v1 + 24));
    result = sub_1EDB980(v9, v10, v11, v12, v13, v14);
    if ( !result )
    {
      v16 = ptr;
      if ( ptr == v23 )
        return result;
      goto LABEL_11;
    }
    v6 = (unsigned int)v22;
    v7 = (unsigned int)v22 + 1LL;
    if ( v7 > HIDWORD(v22) )
    {
      v20 = result;
      sub_2237220(&ptr, v23, v7, 8);
      v6 = (unsigned int)v22;
      v8 = ptr;
      result = v20;
    }
    else
    {
      v8 = ptr;
    }
    ++v5;
    v8[v6] = result;
    LODWORD(v22) = v22 + 1;
    if ( v4 == v5 )
      break;
    v1 = a1[2];
  }
  v17 = sub_1EE7490(a1[2]);
  v18 = sub_1EE7490(a1[2]);
  result = (__int64)sub_BA9D60(*(_QWORD *)(*a1 + 144), v17, ptr, (unsigned int)v22, v18);
  v16 = ptr;
  if ( ptr != v23 )
  {
LABEL_11:
    v19 = result;
    free(v16);
    return v19;
  }
  return result;
}
