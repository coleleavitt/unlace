__int64 __fastcall sub_214D150(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned int v9; // ebp
  std::_V2 *v10; // r9
  __int64 v11; // r13
  unsigned int v12; // eax
  std::_V2 *v13; // r9
  unsigned int v14; // ecx
  __int64 v15; // r15
  __int64 (*v16)(void); // rax
  _BYTE *v17; // rdi
  const char *v18; // rsi
  size_t v19; // r10
  __int64 v20; // rax
  _BYTE *v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rax
  _BYTE *v25; // rdx
  const char *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  size_t v31; // rdx
  std::_V2 *v32; // [rsp+8h] [rbp-170h]
  unsigned int v33; // [rsp+8h] [rbp-170h]
  unsigned int v34; // [rsp+8h] [rbp-170h]
  __int64 v35; // [rsp+8h] [rbp-170h]
  size_t v36; // [rsp+8h] [rbp-170h]
  std::_V2 *v37; // [rsp+10h] [rbp-168h]
  unsigned int v38; // [rsp+10h] [rbp-168h]
  std::_V2 *v39; // [rsp+10h] [rbp-168h]
  unsigned int v40; // [rsp+18h] [rbp-160h]
  _QWORD v41[4]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v42; // [rsp+130h] [rbp-48h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 168LL))(*(_QWORD *)(a1 + 8));
  v6 = *(_QWORD *)(a1 + 8);
  v7 = v4;
  if ( **(_DWORD **)(v6 + 48) != 9 )
  {
    LOWORD(v42) = 259;
    v41[0] = "unexpected token in '.secure_log_unique' directive";
    return (unsigned int)sub_21543E0(v6, v41, 0, 0);
  }
  v8 = *(_QWORD *)(v6 + 16);
  v9 = *(unsigned __int8 *)(v8 + 1504);
  if ( (_BYTE)v9 )
  {
    v27 = ".secure_log_unique specified multiple times";
LABEL_16:
    v41[0] = v27;
    LOWORD(v42) = 259;
    return (unsigned int)sub_2153E90(v6, a2, v41, 0, 0);
  }
  if ( !*(_QWORD *)(v8 + 1472) )
  {
    v27 = ".secure_log_unique used but AS_SECURE_LOG_FILE environment variable unset.";
    goto LABEL_16;
  }
  v10 = *(std::_V2 **)(v8 + 1496);
  v11 = v5;
  if ( !v10 )
  {
    v35 = *(_QWORD *)(v8 + 1464);
    std::_V2::system_category((std::_V2 *)v6);
    v37 = (std::_V2 *)operator new(0x60u);
    sub_227D450(v37);
    v10 = v37;
    v6 = *(_QWORD *)(a1 + 8);
    v28 = *(_QWORD *)(v6 + 16);
    v29 = *(_QWORD *)(v28 + 1496);
    *(_QWORD *)(v28 + 1496) = v37;
    if ( v29 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 8LL))(v29, v35);
      v6 = *(_QWORD *)(a1 + 8);
      v10 = v37;
    }
  }
  v32 = v10;
  v12 = sub_2239B50(*(_QWORD *)(v6 + 32), a2);
  v13 = v32;
  v14 = v12;
  v15 = (__int64)v32;
  v16 = *(__int64 (**)(void))(**(_QWORD **)(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 32LL) + 24LL * (v12 - 1)) + 16LL);
  if ( (char *)v16 != (char *)sub_FC62B0 )
  {
    v38 = v14;
    v30 = v16();
    v13 = v32;
    v14 = v38;
    v19 = v31;
    v18 = (const char *)v30;
    v21 = *((_BYTE **)v32 + 3);
    v17 = *((_BYTE **)v32 + 4);
    if ( v21 - v17 < v19 )
      goto LABEL_7;
    if ( !v19 )
      goto LABEL_8;
LABEL_23:
    v40 = v14;
    v39 = v13;
    v36 = v19;
    memcpy(v17, v18, v19);
    v14 = v40;
    v17 = (_BYTE *)(*((_QWORD *)v39 + 4) + v36);
    v21 = *((_BYTE **)v39 + 3);
    *((_QWORD *)v39 + 4) = v17;
    goto LABEL_8;
  }
  v17 = *((_BYTE **)v32 + 4);
  v18 = "Unknown buffer";
  v19 = 14;
  if ( *((_QWORD *)v32 + 3) - (_QWORD)v17 > 0xDu )
    goto LABEL_23;
LABEL_7:
  v33 = v14;
  v20 = sub_227BF10(v13, v18, v19);
  v14 = v33;
  v21 = *(_BYTE **)(v20 + 24);
  v17 = *(_BYTE **)(v20 + 32);
  v15 = v20;
LABEL_8:
  if ( v21 == v17 )
  {
    v34 = v14;
    v22 = sub_227BF10(v15, ":", 1);
    v14 = v34;
    v15 = v22;
  }
  else
  {
    *v17 = 58;
    ++*(_QWORD *)(v15 + 32);
  }
  v23 = sub_223B700(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), a2, v14);
  v24 = sub_227B910(v15, v23);
  v25 = *(_BYTE **)(v24 + 32);
  if ( *(_BYTE **)(v24 + 24) == v25 )
  {
    v24 = sub_227BF10(v24, ":", 1);
  }
  else
  {
    *v25 = 58;
    ++*(_QWORD *)(v24 + 32);
  }
  v41[0] = v7;
  LOWORD(v42) = 773;
  v41[1] = v11;
  v41[2] = "\n";
  sub_2254180(v41, v24);
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 1504LL) = 1;
  return v9;
}
