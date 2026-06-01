/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56880
// Address: 0x0000000000056880

//----- (0000000000056880) ----------------------------------------------------
unsigned __int64 __fastcall sub_56880(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  char *v3; // rax
  __int64 v4; // rcx
  __int128 v5; // xmm0
  char *v6; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  __int64 i; // rbx
  void *v10; // rdi
  void *v12; // [rsp+0h] [rbp-98h] BYREF
  __int64 v13; // [rsp+8h] [rbp-90h]
  __int64 v14; // [rsp+10h] [rbp-88h]
  void *v15; // [rsp+18h] [rbp-80h]
  unsigned __int64 v16; // [rsp+20h] [rbp-78h]
  __int64 v17; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+40h] [rbp-58h]
  _OWORD v21[2]; // [rsp+48h] [rbp-50h]
  unsigned __int64 v22; // [rsp+68h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  sub_56780((__int64)&v12, a2);
  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v2 + 1) )
  {
    v3 = *(char **)a1;
  }
  else
  {
    v3 = (char *)qvector_reserve(a1, *(char **)a1, v2 + 1, 0x68u);
    *(_QWORD *)a1 = v3;
    v2 = *(_QWORD *)(a1 + 8);
  }
  v4 = 104 * v2;
  *(_QWORD *)&v3[v4] = v12;
  v12 = nullptr;
  *(_QWORD *)&v3[v4 + 8] = v13;
  v13 = 0;
  *(_QWORD *)&v3[v4 + 16] = v14;
  v14 = 0;
  *(_QWORD *)&v3[v4 + 24] = v15;
  v15 = nullptr;
  *(_QWORD *)&v3[v4 + 32] = v16;
  v16 = 0;
  *(_QWORD *)&v3[v4 + 40] = v17;
  v17 = 0;
  *(_QWORD *)&v3[v4 + 48] = ptr;
  ptr = nullptr;
  *(_QWORD *)&v3[v4 + 56] = v19;
  v19 = 0;
  *(_QWORD *)&v3[v4 + 64] = v20;
  v20 = 0;
  v5 = v21[0];
  *(_OWORD *)&v3[v4 + 81] = *(_OWORD *)((char *)v21 + 9);
  *(_OWORD *)&v3[v4 + 72] = v5;
  ++*(_QWORD *)(a1 + 8);
  if ( ptr )
  {
    v19 = 0;
    qfree(ptr);
    ptr = nullptr;
    v20 = 0;
  }
  v6 = (char *)v15;
  if ( v15 )
  {
    v7 = v16;
    if ( v16 )
    {
      v8 = 1;
      for ( i = 0; ; i += 40 )
      {
        v10 = *(void **)&v6[i];
        if ( v10 )
        {
          *(_QWORD *)&v6[i + 8] = 0;
          qfree(v10);
          *(_QWORD *)&v6[i] = 0;
          *(_QWORD *)&v6[i + 16] = 0;
        }
        if ( v8 >= v7 )
          break;
        v6 = (char *)v15;
        ++v8;
      }
      v6 = (char *)v15;
    }
    v16 = 0;
    qfree(v6);
    v15 = nullptr;
    v17 = 0;
  }
  if ( v12 )
  {
    v13 = 0;
    qfree(v12);
    v12 = nullptr;
    v14 = 0;
  }
  return __readfsqword(0x28u);
}
