__int64 __fastcall sub_1958E20(__int64 *a1, _DWORD *a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned __int16 **v7; // r15
  _QWORD *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // esi
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  unsigned __int64 v20; // [rsp+8h] [rbp-E0h]
  _DWORD v21[3]; // [rsp+14h] [rbp-D4h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+28h] [rbp-C0h]
  _BYTE v24[184]; // [rsp+30h] [rbp-B8h] BYREF

  v5 = (unsigned int)a2[4];
  v23 = 0x1000000000LL;
  ptr = v24;
  if ( v5 > 0x10 )
  {
    sub_2237220(&ptr, v24, v5, 8);
    v5 = (unsigned int)a2[4];
  }
  v6 = (__int64)&a2[2 * v5 + 20];
  v7 = (unsigned __int16 **)(a2 + 20);
  if ( (_DWORD *)v6 == a2 + 20 )
  {
    v9 = (unsigned int)v23;
LABEL_11:
    v14 = *a2;
    v15 = a2[3];
    v21[2] = a2[1];
    v16 = *a1;
    v21[0] = v14;
    v17 = *(_QWORD *)(v16 + 760);
    v21[1] = v15;
    v18 = sub_1B5CA20(v17, ptr, v9, v21);
  }
  else
  {
    while ( 1 )
    {
      v10 = sub_1944E10(a1, *v7, a3, a4);
      if ( v10 == 1 )
        break;
      v11 = (unsigned int)v23;
      v12 = v10 & 0xFFFFFFFFFFFFFFFELL;
      v13 = (unsigned int)v23 + 1LL;
      if ( v13 <= HIDWORD(v23) )
      {
        v8 = ptr;
      }
      else
      {
        v20 = v12;
        sub_2237220(&ptr, v24, v13, 8);
        v11 = (unsigned int)v23;
        v8 = ptr;
        v12 = v20;
      }
      v8[v11] = v12;
      ++v7;
      v9 = (unsigned int)(v23 + 1);
      LODWORD(v23) = v23 + 1;
      if ( (unsigned __int16 **)v6 == v7 )
        goto LABEL_11;
    }
    v18 = 0;
  }
  if ( ptr != v24 )
    free(ptr);
  return v18;
}
