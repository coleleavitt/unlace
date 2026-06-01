void __fastcall sub_2096B60(__int64 a1, __int64 a2, int a3, int a4, const void *a5, size_t a6, double a7)
{
  std::chrono::_V2::system_clock *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rax
  const char *v20; // rsi
  __int64 v21; // rbx
  const void *v22; // rax
  size_t v23; // rdx
  __int64 v24; // rax
  const char *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-60h]
  __int64 v29; // [rsp+0h] [rbp-60h]
  void *v30[2]; // [rsp+8h] [rbp-58h] BYREF
  _BYTE v31[72]; // [rsp+18h] [rbp-48h] BYREF

  if ( dword_2CFD4D8 <= 2 )
    return;
  v13 = (std::chrono::_V2::system_clock *)sub_221A480(a7);
  v28 = sub_995540((__int64)v13, "[");
  v14 = std::chrono::_V2::system_clock::now(v13);
  v15 = sub_220FBD0(v28, v14);
  v16 = sub_995540(v15, "] ");
  v17 = sub_227B9B0(v16, a1);
  v18 = *(_DWORD *)(a1 + 376);
  v29 = v17;
  v30[0] = v31;
  sub_2096AC0(v30, (unsigned int)(2 * v18 + 1), 32);
  sub_227BF10(v29, v30[0], v30[1]);
  if ( v30[0] != v31 )
    operator delete(v30[0]);
  if ( a3 == 1 )
  {
    v19 = sub_221A480(a7);
    v20 = "Made Modification '";
  }
  else if ( a3 )
  {
    if ( a3 != 2 )
      goto LABEL_9;
    v19 = sub_221A480(a7);
    v20 = " Freeing Pass '";
  }
  else
  {
    v19 = sub_221A480(a7);
    v20 = "Executing Pass '";
  }
  v21 = sub_995540(v19, v20);
  v22 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  sub_9954E0(v21, v22, v23);
LABEL_9:
  switch ( a4 )
  {
    case 3:
      v24 = sub_221A480(a7);
      v25 = "' on Function '";
      goto LABEL_11;
    case 4:
      v24 = sub_221A480(a7);
      v25 = "' on Module '";
      goto LABEL_11;
    case 5:
      v24 = sub_221A480(a7);
      v25 = "' on Region '";
      goto LABEL_11;
    case 6:
      v24 = sub_221A480(a7);
      v25 = "' on Loop '";
      goto LABEL_11;
    case 7:
      v24 = sub_221A480(a7);
      v25 = "' on Call Graph Nodes '";
LABEL_11:
      v26 = sub_995540(v24, v25);
      v27 = sub_9954E0(v26, a5, a6);
      sub_995540(v27, "'...\n");
      break;
    default:
      return;
  }
}
