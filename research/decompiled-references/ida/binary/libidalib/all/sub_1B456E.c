__int64 __fastcall sub_1B456E(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // r12d
  __int64 v3; // rax
  int v4; // r12d
  unsigned int v5; // r12d
  int v6; // r12d
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  _BYTE v26[68]; // [rsp+10h] [rbp-90h] BYREF
  int v27; // [rsp+54h] [rbp-4Ch] BYREF
  __int64 v28; // [rsp+58h] [rbp-48h] BYREF
  _BYTE v29[40]; // [rsp+60h] [rbp-40h] BYREF
  unsigned int v30; // [rsp+88h] [rbp-18h]
  unsigned int v31; // [rsp+8Ch] [rbp-14h]

  v31 = 13;
  google_breakpad::TypedMDRVA<MDRawDirectory>::TypedMDRVA(v29, a1 + 40);
  google_breakpad::TypedMDRVA<MDRawHeader>::TypedMDRVA(v26, a1 + 40);
  if ( (unsigned __int8)google_breakpad::TypedMDRVA<MDRawHeader>::Allocate(v26) != 1 )
  {
    v1 = 0;
    v2 = 0;
  }
  else if ( (unsigned __int8)google_breakpad::TypedMDRVA<MDRawDirectory>::AllocateArray(v29, v31) != 1 )
  {
    v1 = 0;
    v2 = 0;
  }
  else
  {
    v3 = google_breakpad::TypedMDRVA<MDRawHeader>::get(v26);
    my_memset(v3, 0, 32);
    *(_DWORD *)google_breakpad::TypedMDRVA<MDRawHeader>::get(v26) = 1347241037;
    *(_DWORD *)(google_breakpad::TypedMDRVA<MDRawHeader>::get(v26) + 4) = 42899;
    v4 = time(nullptr);
    *(_DWORD *)(google_breakpad::TypedMDRVA<MDRawHeader>::get(v26) + 20) = v4;
    v5 = v31;
    *(_DWORD *)(google_breakpad::TypedMDRVA<MDRawHeader>::get(v26) + 8) = v5;
    v6 = google_breakpad::UntypedMDRVA::position((google_breakpad::UntypedMDRVA *)v29);
    *(_DWORD *)(google_breakpad::TypedMDRVA<MDRawHeader>::get(v26) + 12) = v6;
    v2 = 1;
  }
  google_breakpad::TypedMDRVA<MDRawHeader>::~TypedMDRVA(v26);
  if ( v2 == 1 )
  {
    v30 = 0;
    if ( (unsigned __int8)sub_1B4EE8(a1, &v27) != 1 )
    {
      v1 = 0;
    }
    else
    {
      v7 = v30++;
      google_breakpad::TypedMDRVA<MDRawDirectory>::CopyIndex(v29, v7, &v27);
      if ( (unsigned __int8)sub_1B5A02(a1, &v27) != 1 )
      {
        v1 = 0;
      }
      else
      {
        v8 = v30++;
        google_breakpad::TypedMDRVA<MDRawDirectory>::CopyIndex(v29, v8, &v27);
        if ( (unsigned __int8)sub_1B571A(a1) != 1 )
        {
          v1 = 0;
        }
        else if ( (unsigned __int8)sub_1B636C(a1, &v27) != 1 )
        {
          v1 = 0;
        }
        else
        {
          v9 = v30++;
          google_breakpad::TypedMDRVA<MDRawDirectory>::CopyIndex(v29, v9, &v27);
          if ( (unsigned __int8)sub_1B64D2(a1, &v27) != 1 )
          {
            v1 = 0;
          }
          else
          {
            v10 = v30++;
            google_breakpad::TypedMDRVA<MDRawDirectory>::CopyIndex(v29, v10, &v27);
            if ( (unsigned __int8)sub_1B66CA(a1, &v27) != 1 )
            {
              v1 = 0;
            }
            else
            {
              v11 = v30++;
              google_breakpad::TypedMDRVA<MDRawDirectory>::CopyIndex(v29, v11, &v27);
              v27 = 1197932547;
              if ( (unsigned __int8)sub_1B73B6(a1, &v28, "/proc/cpuinfo") != 1 )
                sub_1B6FDE(a1, &v27);
              v12 = v30++;
              google_breakpad::TypedMDRVA<MDRawDirectory>::CopyIndex(v29, v12, &v27);
              v27 = 1197932548;
              v13 = sub_1B6FC0(a1);
              if ( (unsigned __int8)sub_1B77EE(a1, &v28, v13, "status") != 1 )
                sub_1B6FDE(a1, &v27);
              v14 = v30++;
              google_breakpad::TypedMDRVA<MDRawDirectory>::CopyIndex(v29, v14, &v27);
              v27 = 1197932549;
              if ( (unsigned __int8)sub_1B73B6(a1, &v28, "/etc/lsb-release") != 1 )
                sub_1B6FDE(a1, &v27);
              v15 = v30++;
              google_breakpad::TypedMDRVA<MDRawDirectory>::CopyIndex(v29, v15, &v27);
              v27 = 1197932550;
              v16 = sub_1B6FC0(a1);
              if ( (unsigned __int8)sub_1B77EE(a1, &v28, v16, "cmdline") != 1 )
                sub_1B6FDE(a1, &v27);
              v17 = v30++;
              google_breakpad::TypedMDRVA<MDRawDirectory>::CopyIndex(v29, v17, &v27);
              v27 = 1197932551;
              v18 = sub_1B6FC0(a1);
              if ( (unsigned __int8)sub_1B77EE(a1, &v28, v18, "environ") != 1 )
                sub_1B6FDE(a1, &v27);
              v19 = v30++;
              google_breakpad::TypedMDRVA<MDRawDirectory>::CopyIndex(v29, v19, &v27);
              v27 = 1197932552;
              v20 = sub_1B6FC0(a1);
              if ( (unsigned __int8)sub_1B77EE(a1, &v28, v20, "auxv") != 1 )
                sub_1B6FDE(a1, &v27);
              v21 = v30++;
              google_breakpad::TypedMDRVA<MDRawDirectory>::CopyIndex(v29, v21, &v27);
              v27 = 1197932553;
              v22 = sub_1B6FC0(a1);
              if ( (unsigned __int8)sub_1B77EE(a1, &v28, v22, "maps") != 1 )
                sub_1B6FDE(a1, &v27);
              v23 = v30++;
              google_breakpad::TypedMDRVA<MDRawDirectory>::CopyIndex(v29, v23, &v27);
              v27 = 1197932554;
              if ( (unsigned __int8)sub_1B67BA(a1, &v27) != 1 )
                sub_1B6FDE(a1, &v27);
              v24 = v30++;
              google_breakpad::TypedMDRVA<MDRawDirectory>::CopyIndex(v29, v24, &v27);
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 48LL))(*(_QWORD *)(a1 + 32));
              v1 = 1;
            }
          }
        }
      }
    }
  }
  google_breakpad::TypedMDRVA<MDRawDirectory>::~TypedMDRVA(v29);
  return v1;
}

