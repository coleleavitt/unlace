void __fastcall sub_11E9780(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  size_t v6; // rax
  __int64 v7; // r14
  int v8; // eax
  size_t v9; // rax
  size_t v10; // rax
  const char *v11; // r14
  size_t v12; // rax
  char v13; // ah
  size_t v14; // rax
  size_t v15; // rax
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // rax
  int v19; // r15d
  int v20; // eax
  size_t v21; // rax
  char *v22; // r13
  size_t v23; // rax
  size_t v24; // rax
  size_t v25; // rax
  size_t v26; // rax
  size_t v27; // rax
  unsigned __int64 v28; // [rsp+10h] [rbp-238h] BYREF
  __int64 v29; // [rsp+18h] [rbp-230h]
  void *v30[2]; // [rsp+20h] [rbp-228h] BYREF
  __int64 v31; // [rsp+30h] [rbp-218h] BYREF
  void **v32; // [rsp+38h] [rbp-210h] BYREF
  void **v33; // [rsp+50h] [rbp-1F8h] BYREF
  void **v34; // [rsp+68h] [rbp-1E0h] BYREF
  void **v35[5]; // [rsp+80h] [rbp-1C8h] BYREF
  char v36; // [rsp+A8h] [rbp-1A0h]
  unsigned __int8 *v37[32]; // [rsp+B0h] [rbp-198h] BYREF
  char v38; // [rsp+1B0h] [rbp-98h]
  char v39; // [rsp+1B1h] [rbp-97h]
  char v40; // [rsp+1E0h] [rbp-68h]
  char v41; // [rsp+1E4h] [rbp-64h]
  char v42; // [rsp+1E8h] [rbp-60h]
  char v43; // [rsp+1EAh] [rbp-5Eh]

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 600LL))(a1);
  if ( sub_10DCD30(a2, 0xCE3u) || sub_10DCD30(a2, 0x1ACu) || sub_10DCD30(a2, 0x992u) )
  {
    if ( a4 )
    {
      v6 = j__strlen("builtins");
      sub_11E7860(a1, a2, a3, (__int64)"builtins", v6, 0, 0);
    }
    return;
  }
  v7 = sub_10DCD30(a2, 0xCDDu);
  if ( !v7 )
  {
    sub_112C5F0((__int64)v37, a1, a2);
    if ( v38 )
    {
      if ( !v40 )
        goto LABEL_34;
      v8 = (int)v37[0];
      if ( ((__int64)v37[0] & 1) != 0 )
      {
        if ( v39 )
        {
          v9 = j__strlen("asan_abi");
          sub_11E7860(a1, a2, a3, (__int64)"asan_abi", v9, 1, 0);
        }
        else
        {
          v25 = j__strlen("asan");
          sub_11E7860(a1, a2, a3, (__int64)"asan", v25, 5, 1);
        }
        v8 = (int)v37[0];
      }
      if ( (v8 & 0x20000) != 0 )
      {
        v10 = j__strlen("rtsan");
        sub_11E7860(a1, a2, a3, (__int64)"rtsan", v10, 5, 1);
        v8 = (int)v37[0];
      }
LABEL_18:
      if ( (v8 & 0x40000) != 0 && (v8 & 0x11) == 0 )
      {
        v26 = j__strlen("lsan");
        sub_11E7860(a1, a2, a3, (__int64)"lsan", v26, 5, 1);
      }
      if ( sub_1120F50((__int64)v37) )
      {
        v11 = "ubsan_minimal";
        if ( !v42 )
          v11 = "ubsan";
        v12 = j__strlen(v11);
        sub_11E7860(a1, a2, a3, (__int64)v11, v12, 5, 1);
      }
      v13 = BYTE1(v37[0]);
      if ( SBYTE1(v37[0]) < 0 )
      {
        v14 = j__strlen("tsan");
        sub_11E7860(a1, a2, a3, (__int64)"tsan", v14, 5, 1);
        v13 = BYTE1(v37[0]);
      }
      if ( (v13 & 0x40) != 0 )
      {
        v15 = j__strlen("tysan");
        sub_11E7860(a1, a2, a3, (__int64)"tysan", v15, 5, 1);
        v13 = BYTE1(v37[0]);
      }
      if ( (v13 & 0x10) != 0 && !sub_10DCD30(a2, 0x142u) )
      {
        v27 = j__strlen("fuzzer");
        sub_11E7860(a1, a2, a3, (__int64)"fuzzer", v27, 1, 0);
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 640LL))(a1, a2, a3);
      }
      if ( v41 )
      {
        v23 = j__strlen("stats_client");
        sub_11E7860(a1, a2, a3, (__int64)"stats_client", v23, 1, 0);
        v24 = j__strlen("stats");
        sub_11E7860(a1, a2, a3, (__int64)"stats", v24, 5, 1);
      }
LABEL_34:
      if ( v43 && (unsigned __int8)sub_11E5C00(a2) )
      {
        sub_10DC5D0(a3, (__int64)"-exported_symbol");
        sub_10DC5D0(a3, (__int64)"___memprof_default_options_str");
      }
      sub_112C620((__int64)v30);
      if ( v35[4] && v36 )
      {
        v16 = j__strlen("xray");
        sub_11E7860(a1, a2, a3, (__int64)"xray", v16, 0, 0);
        v17 = j__strlen("xray-basic");
        sub_11E7860(a1, a2, a3, (__int64)"xray-basic", v17, 0, 0);
        v18 = j__strlen("xray-fdr");
        sub_11E7860(a1, a2, a3, (__int64)"xray-fdr", v18, 0, 0);
      }
      if ( *(_DWORD *)(a1 + 3932) == 4 )
      {
        if ( !sub_10DCD30(a2, 0xBDEu) )
        {
          sub_10DC5D0(a3, (__int64)"-framework");
          sub_10DC5D0(a3, (__int64)"DriverKit");
        }
        if ( *(_DWORD *)(a1 + 3932) == 4 )
          goto LABEL_44;
      }
      sub_10DC5D0(a3, (__int64)"-lSystem");
      if ( *(_DWORD *)(a1 + 48) == 3 )
        goto LABEL_44;
      v19 = *(_DWORD *)(a1 + 3932);
      if ( (unsigned int)(v19 - 1) > 1 )
      {
        if ( v19 )
          goto LABEL_44;
      }
      else
      {
        v20 = *(_DWORD *)(a1 + 3936);
        if ( v20 )
        {
          if ( v20 == 1 )
          {
            v28 = 0x8000000000000005LL;
            v29 = 0x80000000LL;
            if ( (unsigned __int8)sub_A09E20((unsigned int *)(a1 + 3940), (unsigned int *)&v28) )
              goto LABEL_44;
          }
        }
        else
        {
          v28 = 0x8000000000000005LL;
          v29 = 0x80000000LL;
          if ( (unsigned __int8)sub_A09E20((unsigned int *)(a1 + 3940), (unsigned int *)&v28) )
          {
LABEL_55:
            sub_10DC5D0(a3, (__int64)"-lgcc_s.1");
            goto LABEL_44;
          }
        }
        if ( v19 != 1 || *(_DWORD *)(a1 + 3936) != 2 )
          goto LABEL_44;
      }
      if ( (unsigned __int8)sub_11E6860(a1, 10, 6, 0) )
        goto LABEL_55;
LABEL_44:
      v21 = j__strlen("builtins");
      sub_11E7860(a1, a2, a3, (__int64)"builtins", v21, 0, 0);
      sub_9B4A30(v35);
      sub_9B4A30(&v34);
      sub_9B4A30(&v33);
      sub_9B4A30(&v32);
      sub_9B4A30((void ***)v30);
      sub_116D110(v37);
      return;
    }
    if ( sub_1120F50((__int64)v37) )
    {
      v22 = "UndefinedBehaviorSanitizer";
    }
    else
    {
      v8 = (int)v37[0];
      if ( ((__int64)v37[0] & 0x20000) != 0 )
      {
        v22 = "RealtimeSanitizer";
      }
      else if ( ((__int64)v37[0] & 1) != 0 )
      {
        v22 = "AddressSanitizer";
      }
      else
      {
        if ( SBYTE1(v37[0]) >= 0 )
        {
          if ( !v40 )
            goto LABEL_34;
          goto LABEL_18;
        }
        v22 = "ThreadSanitizer";
      }
    }
    sub_FC70B0((__int64)v30, **(_QWORD **)(a1 + 8), 0, 500);
    sub_AE9DF0((unsigned __int8 **)v30, (__int64)v22, 1u);
    sub_AEA040((__int64)v30);
    sub_116D110(v37);
    return;
  }
  sub_FC70B0((__int64)v37, **(_QWORD **)(a1 + 8), 0, 493);
  sub_21B5FF0(v30, v7, a2);
  sub_AEC220(v37, (_BYTE *)v30[0], (signed __int64)v30[1]);
  if ( v30[0] != &v31 )
    operator delete(v30[0]);
  sub_AEA040((__int64)v37);
}
