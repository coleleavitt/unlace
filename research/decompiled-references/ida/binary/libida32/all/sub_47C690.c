__int64 __fastcall sub_47C690(__int64 ***a1, unsigned int *a2)
{
  __int64 v2; // rsi
  __int64 **v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbx
  _BYTE *v6; // rdx
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  void *v13; // rcx
  void *v14; // rdi
  __int64 v15; // rdx
  __int64 v17; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v19; // [rsp+8h] [rbp-30h]
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v2 = *a2;
  v20 = __readfsqword(0x28u);
  v3 = *a1;
  v4 = sub_3C25A0((*a1)[2][185], v2);
  ptr = nullptr;
  v5 = v4;
  v19 = 0;
  sub_357520((__int64 *)&ptr);
  v6 = *(_BYTE **)(v5 + 8);
  if ( v6 && *v6 )
    sub_357520((__int64 *)&ptr);
  v7 = *(_BYTE **)(v5 + 16);
  if ( v7 && *v7 )
    sub_357520((__int64 *)&ptr);
  v8 = *(_BYTE **)(v5 + 24);
  if ( v8 && *v8 )
    sub_357520((__int64 *)&ptr);
  if ( *(_DWORD *)(v5 + 36) != -1 )
    sub_357520((__int64 *)&ptr);
  v9 = *v3;
  v10 = (*v3)[1];
  v11 = **v3;
  if ( (*v3)[2] < (unsigned __int64)(v10 + 1) )
  {
    v17 = qvector_reserve(*v3, v11, v10 + 1, 24);
    *v9 = v17;
    v10 = v9[1];
    v11 = v17;
  }
  v12 = v11 + 24 * v10;
  *(_QWORD *)v12 = 0;
  v13 = ptr;
  *(_OWORD *)(v12 + 8) = 0;
  ++v9[1];
  v14 = *(void **)v12;
  *(_QWORD *)v12 = v13;
  v15 = *(_QWORD *)(v12 + 16);
  ptr = v14;
  *(_OWORD *)(v12 + 8) = v19;
  *((_QWORD *)&v19 + 1) = v15;
  if ( v14 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v14);
  }
  return 0;
}

