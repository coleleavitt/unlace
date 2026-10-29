unsigned __int64 __fastcall sub_1F175A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rdi
  _QWORD *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  char v13; // bp
  unsigned int v14; // eax
  __int64 v15; // r14
  const void *v16; // r15
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbp
  __int64 v21; // rcx
  int v22; // ebx
  _QWORD *v23; // [rsp+8h] [rbp-140h]
  __int64 v24; // [rsp+10h] [rbp-138h]
  unsigned __int8 v25; // [rsp+18h] [rbp-130h]
  int v26; // [rsp+1Ch] [rbp-12Ch]
  unsigned __int64 v27; // [rsp+20h] [rbp-128h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-120h] BYREF
  unsigned __int64 v29[2]; // [rsp+30h] [rbp-118h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v31[248]; // [rsp+50h] [rbp-F8h] BYREF

  v7 = (_QWORD *)*a1;
  v8 = (_QWORD *)*v7;
  v23 = sub_1F16FA0((__int64)v7, a2, a3, a4, a5, a6);
  v9 = sub_1EE3540(*(_QWORD **)(*a1 + 8), *(_QWORD *)(*a1 + 16), (_QWORD *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v10 = *a1;
  v11 = v9;
  if ( v9 )
  {
    v26 = 0;
    v12 = *(_QWORD *)(v10 + 32);
    v13 = 1;
    v14 = *(_DWORD *)(v10 + 24);
  }
  else
  {
    v21 = *(unsigned int *)(v10 + 24);
    v12 = *(_QWORD *)(v10 + 32);
    v13 = 0;
    v22 = *(_DWORD *)(v12 + 8 * v21);
    v14 = v21 + 1;
    *(_DWORD *)(v10 + 24) = v21 + 1;
    v26 = v22;
  }
  v25 = *(_QWORD *)(v12 + 8LL * v14) != 0;
  *(_DWORD *)(v10 + 24) = v14 + 2;
  v15 = *(_QWORD *)(v12 + 8LL * (v14 + 1));
  ptr[0] = v31;
  ptr[1] = (void *)0x800000000LL;
  v16 = (const void *)sub_1F0BD10(v10, (unsigned int *)ptr);
  v24 = v17;
  if ( v13 )
  {
    sub_F228E0(&v27, v11);
    v18 = v27;
  }
  else
  {
    sub_F228F0(&v28, v26);
    v18 = v28;
  }
  sub_F22FF0(v29, (__int64)v23, v18, v25);
  v19 = sub_AB72A0(v8, v15, v29, v16, v24, 0);
  if ( ptr[0] != v31 )
    free(ptr[0]);
  return v19;
}
