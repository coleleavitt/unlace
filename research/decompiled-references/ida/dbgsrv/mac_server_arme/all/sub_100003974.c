/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100003974
// Address: 0x0000000100003974

//----- (0000000100003974) ----------------------------------------------------
void __fastcall sub_100003974(__int64 a1)
{
  mach_error_t v2; // w0
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  char v9; // w0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  __int64 v16; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  __int64 v23; // x20
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  size_t v30; // x0
  size_t v31; // x21
  void *v32; // x22
  void *v33; // x0
  __int64 v34; // x20
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  char v41; // [xsp+0h] [xbp-480h]
  char v42; // [xsp+0h] [xbp-480h]
  __int128 task_info_outCnt; // [xsp+8h] [xbp-478h] BYREF
  void *v44[2]; // [xsp+18h] [xbp-468h] BYREF
  void *v45[2]; // [xsp+28h] [xbp-458h] BYREF
  __int128 v46; // [xsp+38h] [xbp-448h]
  integer_t task_info_out[256]; // [xsp+48h] [xbp-438h] BYREF

  sub_100016C80(a1 + 1560);
  LODWORD(task_info_outCnt) = 4;
  v2 = task_info(*(_DWORD *)(a1 + 1544), 0x11u, task_info_out, (mach_msg_type_number_t *)&task_info_outCnt);
  if ( v2 )
  {
    v9 = (unsigned __int8)mach_error_string(v2);
    sub_100004BD4(a1, "task_info(DYLD_TASK_INFO) failed: %s\n", v10, v11, v12, v13, v14, v15, v9);
LABEL_3:
    sub_1000067E4(a1, "failed to find dyld_all_image_infos in the target process", v3, v4, v5, v6, v7, v8, v41);
    return;
  }
  v16 = *(_QWORD *)task_info_out;
  if ( *(_QWORD *)task_info_out == -1 )
    goto LABEL_3;
  sub_100004BD4(a1, "dyld_all_image_infos: %a\n", v3, v4, v5, v6, v7, v8, task_info_out[0]);
  *(_QWORD *)(a1 + 1632) = v16;
  if ( (sub_100018BF0(a1 + 1560) & 1) != 0 )
  {
    v23 = *(_QWORD *)(a1 + 1672);
    bzero(task_info_out, 0x400u);
    if ( (sub_100019918(a1 + 1560, v23, task_info_out, 1024) & 1) != 0 )
    {
      *(_QWORD *)(a1 + 1616) = v23;
      v46 = 0u;
      *(_OWORD *)v45 = 0u;
      *(_OWORD *)v44 = 0u;
      task_info_outCnt = (unsigned __int64)v23;
      v30 = strlen((const char *)task_info_out);
      if ( v30 )
      {
        v31 = v30;
        v32 = (void *)(v30 + 1);
        if ( v30 == -1 )
        {
          v33 = nullptr;
        }
        else
        {
          v33 = qvector_reserve(v44, nullptr, (unsigned __int64)v32, 1u);
          v44[0] = v33;
        }
        v44[1] = v32;
        memmove(v33, task_info_out, v31);
        *((_BYTE *)v44[0] + v31) = 0;
      }
      sub_1000184C4(a1 + 1560, nullptr, (_QWORD *)&task_info_outCnt + 1, (__int64)&v45[1], v23);
      sub_100004E80(a1, &task_info_outCnt);
      v34 = *(_QWORD *)(a1 + 1664);
      sub_100004BD4(a1, "%a: setting bpt for library notifications\n", v35, v36, v37, v38, v39, v40, v34);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 688LL))(a1, v34);
      if ( v45[1] )
      {
        *(_QWORD *)&v46 = 0;
        qfree(v45[1]);
        v45[1] = nullptr;
        *((_QWORD *)&v46 + 1) = 0;
      }
      if ( v44[0] )
      {
        v44[1] = nullptr;
        qfree(v44[0]);
      }
    }
    else
    {
      sub_1000067E4(a1, "invalid dyld header at %a\n", v24, v25, v26, v27, v28, v29, v23);
    }
  }
  else
  {
    sub_1000067E4(a1, "failed to read dyld_all_image_infos in the target process", v17, v18, v19, v20, v21, v22, v42);
  }
}
// 1000039E0: variable 'v10' is possibly undefined
// 1000039E0: variable 'v11' is possibly undefined
// 1000039E0: variable 'v12' is possibly undefined
// 1000039E0: variable 'v13' is possibly undefined
// 1000039E0: variable 'v14' is possibly undefined
// 1000039E0: variable 'v15' is possibly undefined
// 1000039F0: variable 'v3' is possibly undefined
// 1000039F0: variable 'v4' is possibly undefined
// 1000039F0: variable 'v5' is possibly undefined
// 1000039F0: variable 'v6' is possibly undefined
// 1000039F0: variable 'v7' is possibly undefined
// 1000039F0: variable 'v8' is possibly undefined
// 1000039F0: variable 'v41' is possibly undefined
// 100003AC4: variable 'v17' is possibly undefined
// 100003AC4: variable 'v18' is possibly undefined
// 100003AC4: variable 'v19' is possibly undefined
// 100003AC4: variable 'v20' is possibly undefined
// 100003AC4: variable 'v21' is possibly undefined
// 100003AC4: variable 'v22' is possibly undefined
// 100003AC4: variable 'v42' is possibly undefined
// 100003ADC: variable 'v24' is possibly undefined
// 100003ADC: variable 'v25' is possibly undefined
// 100003ADC: variable 'v26' is possibly undefined
// 100003ADC: variable 'v27' is possibly undefined
// 100003ADC: variable 'v28' is possibly undefined
// 100003ADC: variable 'v29' is possibly undefined
// 100003B4C: variable 'v35' is possibly undefined
// 100003B4C: variable 'v36' is possibly undefined
// 100003B4C: variable 'v37' is possibly undefined
// 100003B4C: variable 'v38' is possibly undefined
// 100003B4C: variable 'v39' is possibly undefined
// 100003B4C: variable 'v40' is possibly undefined
