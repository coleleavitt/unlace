/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A9E0
// Address: 0x0005A9E0

//----- (0005A9E0) --------------------------------------------------------
int __fastcall sub_5A9E0(_DWORD *a1, unsigned int a2, unsigned int a3, char *a4, char *s)
{
  _DWORD *v9; // r1
  __int64 v10; // r2
  _BYTE *v11; // r0
  _BYTE *v12; // r0
  const char *v13; // r7
  int v14; // r0
  unsigned int v15; // r2
  void *v16; // r1
  _BYTE *v17; // r0
  size_t v18; // r0
  void *v19; // r0
  void *ptr; // [sp+Ch] [bp-1Ch] BYREF
  int v22; // [sp+10h] [bp-18h]
  unsigned int v23; // [sp+14h] [bp-14h]
  _BYTE v24[5]; // [sp+18h] [bp-10h] BYREF
  _BYTE v25[3]; // [sp+1Dh] [bp-Bh] BYREF
  _BYTE v26[6]; // [sp+22h] [bp-6h] BYREF

  if ( a3 == 1 )
  {
    v9 = &dword_F4;
    if ( a1 )
      v9 = a1 + 36;
    a4 = (char *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v9 + 204))(*v9);
  }
  sub_6DA58((int)&ptr, 56);
  v10 = 0;
  if ( a2 != -1 )
    v10 = a2 + 1LL;
  v11 = pack_dq(v24, (unsigned int)v26, v10, HIDWORD(v10));
  ((void (__fastcall *)(void **, _BYTE *, int))loc_30B84)(&ptr, v24, v11 - v24);
  v12 = pack_dd(v24, (unsigned int)v25, a3);
  ((void (__fastcall *)(void **, _BYTE *, int))loc_30B84)(&ptr, v24, v12 - v24);
  v13 = s;
  v14 = v22;
  v15 = v22 + 1;
  v16 = ptr;
  if ( a4 == s )
  {
    if ( v23 < v15 )
    {
      v16 = qvector_reserve((int)&ptr, ptr, v15, 1u);
      ptr = v16;
      v14 = v22;
    }
    *((_BYTE *)v16 + v14) = 1;
    ++v22;
    if ( !s )
      v13 = &byte_A0742;
    v18 = strlen(v13);
    ((void (__fastcall *)(void **, const char *, size_t))loc_30B84)(&ptr, v13, v18 + 1);
  }
  else
  {
    if ( v23 < v15 )
    {
      v16 = qvector_reserve((int)&ptr, ptr, v15, 1u);
      ptr = v16;
      v14 = v22;
    }
    *((_BYTE *)v16 + v14) = 0;
    ++v22;
    v17 = pack_dq(v24, (unsigned int)v26, (unsigned int)(a4 + 1), (unsigned __int64)(a4 + 1) >> 32);
    ((void (__fastcall *)(void **, _BYTE *, int))loc_30B84)(&ptr, v24, v17 - v24);
  }
  v19 = (void *)(*(int (__fastcall **)(_DWORD *, int, void **))(*a1 + 8))(a1, 56, &ptr);
  qfree(v19);
  if ( ptr )
  {
    v22 = 0;
    qfree(ptr);
    v23 = 0;
    ptr = nullptr;
  }
  return _stack_chk_guard - *(_DWORD *)&v26[2];
}
// F4: using guessed type int;
// A0742: using guessed type char byte_A0742;
