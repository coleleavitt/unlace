__int64 __fastcall sub_1764640(__int64 *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned __int16 **v6; // r15
  char v7; // bl
  _QWORD *v8; // rdx
  __int64 v9; // r8
  unsigned __int16 *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  _BYTE *v15; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v21; // [rsp+28h] [rbp-80h]
  _BYTE v22[120]; // [rsp+30h] [rbp-78h] BYREF

  v2 = a2;
  v21 = 0x800000000LL;
  v4 = *(unsigned int *)(a2 + 24);
  ptr = v22;
  v5 = a2 + 32 + 8 * v4;
  if ( a2 + 32 == v5 )
  {
    v9 = 0;
    v15 = v22;
    v7 = 0;
  }
  else
  {
    v6 = (unsigned __int16 **)(a2 + 32);
    v7 = 0;
    do
    {
      v10 = *v6;
      v11 = sub_175B800(a1, *v6);
      if ( v11 == 1 )
      {
        v15 = ptr;
        v2 = 1;
        goto LABEL_9;
      }
      v12 = (unsigned int)v21;
      v13 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v14 = (unsigned int)v21 + 1LL;
      if ( v14 <= HIDWORD(v21) )
      {
        v8 = ptr;
      }
      else
      {
        v19 = v13;
        sub_2237220(&ptr, v22, v14, 8);
        v12 = (unsigned int)v21;
        v8 = ptr;
        v13 = v19;
      }
      v8[v12] = v13;
      ++v6;
      v9 = (unsigned int)(v21 + 1);
      v7 |= v10 != (unsigned __int16 *)v13;
      LODWORD(v21) = v21 + 1;
    }
    while ( (unsigned __int16 **)v5 != v6 );
    v15 = ptr;
  }
  v17 = *a1;
  if ( *(_DWORD *)(*a1 + 12632) || v7 )
  {
    v18 = sub_18C4330(v17, *(unsigned int *)(a2 + 16), *(unsigned int *)(a2 + 20), v15, v9, *(_QWORD *)(a2 + 8));
    v15 = ptr;
    v2 = v18;
  }
LABEL_9:
  if ( v15 != v22 )
    free(v15);
  return v2;
}
