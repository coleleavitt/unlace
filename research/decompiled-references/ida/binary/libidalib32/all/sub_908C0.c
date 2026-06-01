__int64 __fastcall sub_908C0(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // r12
  __int64 result; // rax
  const void *v7; // r13
  void *v8; // rax

  a1[4] = 0xFFFFFFFF00000001LL;
  a1[24] = 0xFFFFFFFFLL;
  v3 = a1 + 1;
  a1[5] = 0;
  a1[6] = 0;
  a1[9] = 0;
  a1[12] = 0;
  a1[15] = 0;
  a1[18] = 0;
  a1[21] = 0;
  *(_OWORD *)a1 = 0;
  *((_OWORD *)a1 + 1) = 0;
  *(_OWORD *)(a1 + 7) = 0;
  *((_OWORD *)a1 + 5) = 0;
  *(_OWORD *)(a1 + 13) = 0;
  *((_OWORD *)a1 + 8) = 0;
  *(_OWORD *)(a1 + 19) = 0;
  *((_OWORD *)a1 + 11) = 0;
  v4 = *a2;
  *a1 = *a2;
  if ( v3 != a2 + 1 )
  {
    v5 = a2[2];
    if ( v5 > 1 )
    {
      v7 = (const void *)a2[1];
      v8 = (void *)qvector_reserve();
      a1[1] = (__int64)v8;
      a1[2] = v5;
      memmove(v8, v7, v5 - 1);
      *(_BYTE *)(a1[1] + v5 - 1) = 0;
      v4 = *a1;
    }
  }
  *((_BYTE *)a1 + 32) = *((_BYTE *)a2 + 32);
  *((_DWORD *)a1 + 9) = *((_DWORD *)a2 + 9);
  result = *((unsigned __int8 *)a2 + 40);
  *((_BYTE *)a1 + 40) = result;
  if ( v4 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *a1 = result;
  }
  return result;
}

