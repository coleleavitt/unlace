__int64 __fastcall sub_4FD5C0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  bool v9; // zf
  int v10; // r12d
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  unsigned int v19; // r14d
  _QWORD **v20; // rbx
  void *v22; // rdi
  char v23; // [rsp+0h] [rbp-78h]
  unsigned int v24; // [rsp+Ch] [rbp-6Ch] BYREF
  _BYTE v25[8]; // [rsp+10h] [rbp-68h] BYREF
  int v26; // [rsp+18h] [rbp-60h] BYREF
  void *v27; // [rsp+20h] [rbp-58h]
  int *v28; // [rsp+28h] [rbp-50h]
  int *v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+38h] [rbp-40h]
  unsigned __int64 v31; // [rsp+48h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 48) == 0;
  v26 = 0;
  v27 = nullptr;
  v28 = &v26;
  v29 = &v26;
  v30 = 0;
  if ( v9 )
  {
    return 1;
  }
  else
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 72 * v11 + 56);
      v24 = v12;
      if ( v12 )
      {
        sub_37BDF0((__int64)v25, (int *)&v24);
        v19 = v13;
        if ( !(_BYTE)v13 )
        {
          sub_169630((int)"Duplicate field id %d", v12, v13, v14, v15, v16, a2, a3, a4, a5, v17, v18, a8, a9, v23);
          v20 = (_QWORD **)v27;
          if ( !v27 )
            return v19;
          goto LABEL_9;
        }
      }
      v11 = ++v10;
    }
    while ( (unsigned __int64)v10 < *(_QWORD *)(a1 + 48) );
    v20 = (_QWORD **)v27;
    v19 = 1;
    if ( !v27 )
      return v19;
    do
    {
LABEL_9:
      sub_4F8E60(v20[3]);
      v22 = v20;
      v20 = (_QWORD **)v20[2];
      operator delete(v22, 0x28u);
    }
    while ( v20 );
  }
  return v19;
}
