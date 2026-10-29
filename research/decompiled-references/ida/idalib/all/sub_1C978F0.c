__int64 __fastcall sub_1C978F0(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  _DWORD *v9; // rbx
  unsigned int v10; // eax
  _BOOL8 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  __int64 v19; // r15
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int16 *v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _DWORD *v30; // rdx

  v9 = a4 + 1;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v11 = v9 != nullptr;
  v12 = v10;
  v13 = (unsigned __int64)v9 - v11;
  v14 = 0;
  v17 = sub_1C892C0(a1, a2, *(_QWORD *)(a3 + 40), (const __m128i *)(v12 * (v13 / v12 + v11)), v15, v16, a5, a6);
  if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v19 = *a1;
    v20 = v17;
    sub_18C74E0(*a1, 4, 0, 4);
    v24 = sub_1C7CFE0(a1, *(_QWORD *)(a3 + 32), a5, a6, v21, v22, v23);
    v29 = sub_19146D0(*a1, (unsigned __int64)v24, v25, v26, v27, v28, a5, a6);
    if ( v29 == 1
      || (v14 = sub_1E716E0(*a1, v20, v29 & 0xFFFFFFFFFFFFFFFELL, *(unsigned int *)(a3 + 48)),
          (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
    {
      v14 = 0;
    }
    else
    {
      sub_1EA6140(a2, v14, 4, 4);
      *v30 = *a4;
    }
    sub_190D5E0(v19, a5);
  }
  return v14;
}
