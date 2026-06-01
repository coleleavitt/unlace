__int64 __fastcall sub_4DFC20(__int64 a1, _QWORD *a2, double a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rsi
  void *v9; // rdi
  void (__fastcall *v10)(void *, __int64, __int64); // rcx
  __int64 *v11; // rax
  __int64 v12; // rdx
  void *v14; // rbp
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // rax
  __int64 v19; // r12
  __int64 (__fastcall *v20)(__int64); // rdx
  char v21; // al
  void *v22; // rax

  sub_4DC9E0(a1, a2, a3);
  if ( *(_BYTE *)(a1 + 72) )
  {
    v5 = a2[1];
    if ( v5 && (v6 = *(unsigned int *)(a1 + 96), (unsigned int)v6 < *(_DWORD *)(v5 - 4)) && *(_QWORD *)(v5 + 8 * v6) )
    {
      v7 = sub_4DA320(a2);
      v8 = *(_QWORD *)(a1 + 80);
      v9 = v7;
      v10 = *(void (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v7 + 296LL);
      v11 = (__int64 *)(a2[1] + 8LL * *(unsigned int *)(a1 + 96));
      v12 = *v11;
      *v11 = 0;
      v10(v9, v8, v12);
      return 1;
    }
    else
    {
      v14 = sub_4DA320(a2);
      v15 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v14 + 208LL))(v14, *(_QWORD *)(a1 + 80));
      v16 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v14 + 192LL))(v14);
      v17 = sub_4C70D0(v16, (__int64 *)(v15 + 16), *(_QWORD *)(a1 + 80));
      (*(void (__fastcall **)(void *, _QWORD, __int64))(*(_QWORD *)v14 + 296LL))(v14, *(_QWORD *)(a1 + 80), v17);
      return 1;
    }
  }
  else
  {
    v18 = sub_4DA320(a2);
    v19 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v18 + 208LL))(v18, *(_QWORD *)(a1 + 80));
    v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL);
    if ( v20 == sub_4C9A90 )
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
    else
      v21 = v20(v19);
    if ( v21 )
    {
      sub_4DF2D0((__int64)a2, *(_DWORD *)(a1 + 96));
    }
    else
    {
      v22 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 72LL))(v19);
      sub_4DF0F0((__int64)a2, *(_DWORD *)(a1 + 96), v22);
    }
    return 1;
  }
}

