/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140004340
// Address: 0x0000000140004340

//----- (0000000140004340) ----------------------------------------------------
__int64 __fastcall sub_140004340(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  _QWORD *v5; // rdi
  __int64 result; // rax
  unsigned int i; // r13d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rsi
  _OWORD *v14; // rdx
  _QWORD *v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _DWORD *v19; // rdx
  _DWORD *v20; // rbx
  _DWORD *v21; // rdi
  _DWORD *v22; // rsi
  _DWORD *v23; // r14
  _DWORD *v24; // r15
  _DWORD *v25; // rbp
  _DWORD *v26; // rdx
  __int64 v27; // rbx
  unsigned int v28; // [rsp+20h] [rbp-278h] BYREF
  int v29; // [rsp+24h] [rbp-274h] BYREF
  int v30; // [rsp+28h] [rbp-270h]
  unsigned int v31; // [rsp+2Ch] [rbp-26Ch]
  __int64 v32; // [rsp+30h] [rbp-268h]
  __int64 v33; // [rsp+38h] [rbp-260h] BYREF
  _DWORD *v34; // [rsp+40h] [rbp-258h]
  _QWORD *v35; // [rsp+48h] [rbp-250h]
  _QWORD v36[64]; // [rsp+50h] [rbp-248h] BYREF

  v3 = *a3;
  v35 = a3;
  v29 = 0;
  v5 = a3;
  result = (*(__int64 (__fastcall **)(_QWORD *, int *))(v3 + 32))(a3, &v29);
  v31 = result;
  if ( !(_DWORD)result )
  {
    v28 = 0;
    v30 = 0;
    if ( v29 > 0 )
    {
      do
      {
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD *, unsigned int *))(*v5 + 48LL))(v5, 64, v36, &v28);
        if ( !v28 )
          break;
        for ( i = 0; i < v28; ++i )
        {
          v8 = *(_QWORD *)(a2 + 16);
          v9 = *(_QWORD *)(a2 + 8) + 1LL;
          v10 = v36[i];
          v32 = v10;
          if ( v9 > v8 )
          {
            v11 = sub_14005ABE0(a2, nullptr, v9, 0x28u);
            v12 = *(_QWORD *)(a2 + 8) - 1LL;
            v13 = *(_QWORD *)(a2 + 16);
            v14 = *(_OWORD **)a2;
            v15 = v11;
            for ( *(_QWORD *)(a2 + 16) = v8; v12 >= 0; *(v15 - 1) = *((_QWORD *)v14 - 1) )
            {
              --v12;
              v15 += 5;
              v16 = *v14;
              v14 = (_OWORD *)((char *)v14 + 40);
              *(_OWORD *)(v15 - 5) = v16;
              *(_OWORD *)(v15 - 3) = *(_OWORD *)((char *)v14 - 24);
            }
            j_free(*(void **)a2);
            v10 = v32;
            *(_QWORD *)a2 = v11;
            *(_QWORD *)(a2 + 16) = v13;
          }
          v17 = 5LL * *(_QWORD *)(a2 + 8);
          v18 = *(_QWORD **)a2;
          v18[v17] = -1;
          v19 = &v18[v17];
          v19[2] = 0;
          v19[3] = 0;
          v20 = v19 + 2;
          v19[4] = 0;
          v21 = v19 + 3;
          v19[5] = 0;
          v22 = v19 + 4;
          v19[6] = 0;
          v23 = v19 + 5;
          v19[8] = 0;
          v24 = v19 + 6;
          v19[7] = -1;
          v25 = v19 + 8;
          ++*(_QWORD *)(a2 + 8);
          v34 = v19 + 7;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 96LL))(v10);
          v26 = v20;
          v27 = v32;
          (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v32 + 104LL))(v32, v26);
          (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v27 + 56LL))(v27, v21);
          (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v27 + 64LL))(v27, v22);
          (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v27 + 40LL))(v27, v23);
          (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v27 + 48LL))(v27, v24);
          (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v27 + 120LL))(v27, v25);
          v33 = 0;
          if ( !(*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 32LL))(v27, &v33) )
          {
            (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v33 + 24LL))(v33, v34);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          }
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v36[i] + 16LL))(v36[i]);
        }
        v5 = v35;
        v30 += v28;
      }
      while ( v30 < v29 );
      return v31;
    }
  }
  return result;
}
