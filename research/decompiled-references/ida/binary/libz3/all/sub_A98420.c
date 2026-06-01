__int64 __fastcall sub_A98420(__int64 *a1, unsigned int a2, unsigned int *a3, unsigned __int8 a4)
{
  __int64 result; // rax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  unsigned int v19; // esi
  unsigned int v20; // esi
  void *v21; // rbx
  unsigned int v23; // [rsp+0h] [rbp-78h]
  unsigned int v24; // [rsp+8h] [rbp-70h]
  void *v25; // [rsp+8h] [rbp-70h]
  void *v26; // [rsp+10h] [rbp-68h]
  __int64 v27; // [rsp+18h] [rbp-60h]
  __int64 v28; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+28h] [rbp-50h]
  __int64 v30; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31; // [rsp+38h] [rbp-40h]

  result = *a3;
  if ( (_DWORD)result == -1 )
  {
    v27 = a1[1];
    v24 = a4;
    v28 = a2;
    v29 = 0;
    v30 = 1;
    v31 = 0;
    sub_182CBA0(qword_1C7F2C0, &v30);
    v11 = a1[3];
    BYTE4(v30) &= ~1u;
    LODWORD(v30) = 1;
    if ( !v11 )
    {
      sub_16669E0(a1 + 2);
      v11 = a1[3];
    }
    v12 = sub_166A700(v11, (unsigned int)&v28, v24, v8, v9, v10);
    v13 = (unsigned int *)v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v26 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v28);
    sub_182CBA0(v26, &v30);
    sub_A72EC0(a1, v13, v14, v15, v16, v17);
    v18 = sub_A83040(a1, v13);
    *a3 = sub_1006C00(a1[63], v18, v24);
    sub_1005020(a1[63]);
    v29 = 0;
    v30 = 1;
    v31 = 0;
    v28 = a2;
    sub_182CBA0(qword_1C7F2C0, &v30);
    v19 = *a3;
    BYTE4(v30) &= ~1u;
    LODWORD(v30) = 1;
    sub_A97E60(a1, v19);
    v25 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v28);
    sub_182CBA0(v25, &v30);
    v28 = a2;
    v29 = 0;
    v30 = 1;
    v31 = 0;
    sub_182CBA0(qword_1C7F2C0, &v30);
    v20 = *a3;
    BYTE4(v30) &= ~1u;
    LODWORD(v30) = 1;
    sub_A97E60(a1, v20);
    v21 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v28);
    sub_182CBA0(v21, &v30);
    result = *a3;
    if ( v13 )
    {
      if ( v13[2]-- == 1 )
      {
        v23 = result;
        sub_15D7BC0(v27, v13);
        return v23;
      }
    }
  }
  return result;
}

