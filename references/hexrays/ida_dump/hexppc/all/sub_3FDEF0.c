unsigned __int64 __fastcall sub_3FDEF0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // r13
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 result; // rax
  const void *v10; // r8
  void *v11; // rax
  const void *v12; // [rsp+0h] [rbp-48h]
  _DWORD v13[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v6 = a1 + 24;
  v13[0] = a4;
  sub_121740(a1, (unsigned __int8 *)a2);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  copy_tinfo_t(a1 + 24, a2 + 24);
  v7 = a1 + 32;
  if ( v7 != a2 + 32 )
  {
    v8 = *(_QWORD *)(a2 + 40);
    if ( v8 > 1 )
    {
      v10 = *(const void **)(a2 + 32);
      v11 = *(void **)(a1 + 32);
      if ( *(_QWORD *)(a1 + 48) < v8 )
      {
        v12 = *(const void **)(a2 + 32);
        v11 = (void *)qvector_reserve(v7, *(_QWORD *)(a1 + 32), *(_QWORD *)(a2 + 40), 1);
        v10 = v12;
        *(_QWORD *)(a1 + 32) = v11;
      }
      *(_QWORD *)(a1 + 40) = v8;
      memmove(v11, v10, v8 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v8 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 40) = 0;
    }
  }
  copy_argloc(a1 + 56, a2 + 56);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  copy_tinfo_t(v6, a3);
  if ( *(_BYTE *)a1 == 14 )
    return sub_3FCCF0(a1, v13);
  result = v13[0];
  *(_DWORD *)(a1 + 56) = 3;
  *(_DWORD *)(a1 + 64) = result;
  return result;
}
