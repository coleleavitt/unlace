unsigned __int64 __fastcall sub_107970(_QWORD *a1, __int64 **a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 *v8; // r15
  __int64 v10; // r14
  unsigned __int64 v11; // r8
  size_t v12; // r9
  const void *v13; // r10
  void *v14; // rdi
  __int64 *v15; // r15
  size_t v16; // rax
  size_t v17; // r12
  void *v19; // rsi
  void *v20; // rdi
  size_t v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+8h] [rbp-60h]
  size_t v26; // [rsp+8h] [rbp-60h]
  unsigned __int64 v27; // [rsp+8h] [rbp-60h]
  size_t v28; // [rsp+10h] [rbp-58h]
  const void *v29; // [rsp+18h] [rbp-50h]
  char s[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v8 = *a2;
  v31 = __readfsqword(0x28u);
  if ( a5 >= a1[24] )
  {
    v19 = (void *)*v8;
    if ( (unsigned __int64)v8[2] <= 0xB )
    {
      v22 = qvector_reserve();
      *v8 = v22;
      v19 = (void *)v22;
    }
    v8[1] = 12;
    qmemcpy(v19, "FINAL STATE", 11);
    *(_BYTE *)(*v8 + 11) = 0;
    pretty_print_size();
  }
  else
  {
    v10 = a1[23] + 32 * a5;
    if ( (__int64 *)v10 != v8 )
    {
      v11 = *(_QWORD *)(v10 + 8);
      if ( !v11 || (v12 = v11 - 1, v11 == 1) )
      {
        v8[1] = 0;
      }
      else
      {
        v13 = *(const void **)v10;
        v14 = (void *)*v8;
        if ( v8[2] < v11 )
        {
          v29 = *(const void **)v10;
          v28 = v11 - 1;
          v27 = *(_QWORD *)(v10 + 8);
          v24 = qvector_reserve();
          v13 = v29;
          v12 = v28;
          *v8 = v24;
          v11 = v27;
          v14 = (void *)v24;
        }
        v8[1] = v11;
        v25 = v11;
        memmove(v14, v13, v12);
        *(_BYTE *)(*v8 + v25 - 1) = 0;
      }
    }
    pretty_print_size();
    if ( a5 >= a1[26] )
      *(_DWORD *)(a4 + 4) |= 2u;
  }
  v15 = *a2;
  v16 = strlen(s);
  v17 = v16;
  if ( v16 )
  {
    v20 = (void *)v15[3];
    v21 = v16 + 1;
    if ( v15[5] < v16 + 1 )
    {
      v26 = v16 + 1;
      v23 = qvector_reserve();
      v21 = v26;
      v15[3] = v23;
      v20 = (void *)v23;
    }
    v15[4] = v21;
    memmove(v20, s, v17);
    *(_BYTE *)(v15[3] + v17) = 0;
  }
  else
  {
    v15[4] = 0;
  }
  if ( a1[26] == a5 )
    *(_DWORD *)(a4 + 4) |= 1u;
  return v31 - __readfsqword(0x28u);
}

