/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003F290
// Address: 0x000000014003F290

//----- (000000014003F290) ----------------------------------------------------
void __fastcall sub_14003F290(__int64 a1, __int64 a2, int a3, const __m128i **a4)
{
  __int64 v8; // r14
  const __m128i *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx

  v8 = *(_QWORD *)(a1 + 88) + 48LL * a3;
  *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 120);
  v9 = sub_14006C4B8(*a4, *(const __m128i **)(v8 + 24));
  if ( v9 )
  {
    v10 = *(_QWORD *)(v8 + 32);
    v11 = v10 - 1;
    if ( !v10 )
      v11 = 0;
    *a4 = (const __m128i *)((char *)v9 + v11);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, 0);
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 116);
  }
  else
  {
    *a4 = (const __m128i *)sub_14006CA14((__int64)*a4, 0);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, (unsigned int)(a3 + 1));
  }
  sub_14003ED40(a1, a2, (unsigned __int64)*a4, *(_DWORD *)(a1 + 120));
}
