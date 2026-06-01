/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000063E8
// Address: 0x00000001000063E8

//----- (00000001000063E8) ----------------------------------------------------
bool __fastcall sub_1000063E8(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _BOOL8 result; // x0
  int v11; // w0
  int v12; // w21
  int *v13; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  int v20; // w0
  int v21; // w9
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x20
  char v25; // w0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  __int64 v32; // x8
  __int64 v33; // x23
  void *v34; // x24
  void *v35; // x21
  void *v36; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  void *v43; // x8
  _BOOL8 v44; // x19
  const char *v45; // [xsp+0h] [xbp-8A0h]
  char v46; // [xsp+0h] [xbp-8A0h]
  __int64 v47; // [xsp+30h] [xbp-870h] BYREF
  int v48; // [xsp+38h] [xbp-868h]
  void *__src[2]; // [xsp+40h] [xbp-860h]
  __int64 v50; // [xsp+50h] [xbp-850h]
  _BYTE v51[1024]; // [xsp+58h] [xbp-848h] BYREF
  _BYTE msg[1024]; // [xsp+458h] [xbp-448h] BYREF

  sub_1000560A0(a1, "handle process start: %d\n", a3, a4, a5, a6, a7, a8, a2);
  *(_DWORD *)(a1 + 1556) = 0;
  *(_DWORD *)(a1 + 528) = a2;
  result = sub_1000062A0(a1, a2);
  if ( result )
  {
    sub_100005D58(a1);
    v11 = ptrace(14, a2, nullptr, 0);
    v12 = v11;
    if ( *(_BYTE *)(a1 + 664) == 1 )
    {
      if ( v11 )
      {
        v13 = __error();
        winerr(*v13);
      }
      v45 = "PT_ATTACHEXC";
      sub_100000AA0();
    }
    if ( v12 )
      return 0;
    v50 = 0;
    *(_OWORD *)__src = 0u;
    v47 = 0;
    v48 = 0;
    if ( (sub_1000027A0(a1, 5000, (mach_msg_header_t *)msg, (__int64)v51, (__int64)&v47) & 1) == 0 )
    {
      sub_100004854(a1, "failed to retrieve initial stop signal\n", v14, v15, v16, v17, v18, v19, (char)v45);
      goto LABEL_37;
    }
    v20 = sub_1000009A8(a1, *(_DWORD *)(a1 + 528));
    *(_DWORD *)(a1 + 1548) = v20;
    if ( (v20 & 0x1000000) != 0 )
      v21 = 8;
    else
      v21 = 4;
    if ( *(_BYTE *)(a1 + 36) == 1 )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + ((unsigned __int64)(v20 & 0x1000000) >> 21) + 8);
      *(_DWORD *)(a1 + 32) = v21;
    }
    *(_DWORD *)(a1 + 244) = v21;
    *(_BYTE *)(a1 + 1929) = (v20 & 0x1000000u) >> 24;
    v22 = *(_QWORD *)(a1 + 536);
    if ( v22 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      sub_100001404(a1 + 544);
    }
    *(_QWORD *)(a1 + 536) = 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 592LL))(a1);
    if ( *(_DWORD *)(a1 + 652) == -1 || *(_DWORD *)(a1 + 656) == -1 )
      goto LABEL_42;
    v23 = *(_QWORD *)(a1 + 552);
    if ( !v23 )
      LODWORD(v23) = *(_DWORD *)(a1 + 648);
    if ( (int)v23 <= 0 )
    {
LABEL_42:
      if ( under_debugger != 1 )
        interr(30016);
    }
    else
    {
      nullsub_21(1);
      v24 = sub_100005A70(a1, 0);
      v25 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 672LL))(a1, v24);
      sub_1000560A0(a1, "initially stopped at %a pid=%d tid=%d task=%d\n", v26, v27, v28, v29, v30, v31, v25);
      if ( (_DWORD)v24 == HIDWORD(v47) )
      {
        v32 = *(_QWORD *)(a1 + 1912);
        if ( v32 )
        {
          v33 = a1 + 1912;
          do
          {
            if ( *(_DWORD *)(v32 + 32) >= (int)v24 )
              v33 = v32;
            v32 = *(_QWORD *)(v32 + 8LL * (*(_DWORD *)(v32 + 32) < (int)v24));
          }
          while ( v32 );
          if ( v33 != a1 + 1912 && *(_DWORD *)(v33 + 32) <= (int)v24 )
          {
            *(_QWORD *)(v33 + 2112) = v47;
            *(_DWORD *)(v33 + 2120) = v48;
            v34 = __src[1];
            if ( __src[1] )
            {
              v35 = qalloc_or_throw(8 * (__int64)__src[1]);
              memcpy(v35, __src[0], 8LL * (_QWORD)v34);
              v36 = *(void **)(v33 + 2128);
              if ( !v36 )
                goto LABEL_35;
            }
            else
            {
              v35 = nullptr;
              v36 = *(void **)(v33 + 2128);
              if ( !v36 )
              {
LABEL_35:
                *(_QWORD *)(v33 + 2128) = v35;
                *(_QWORD *)(v33 + 2136) = v34;
                *(_QWORD *)(v33 + 2144) = v34;
                memcpy((void *)(v33 + 60), msg, 0x400u);
                memcpy((void *)(v33 + 1084), v51, 0x400u);
                sub_10000368C(a1);
                sub_1000067F8((_QWORD *)a1, *(unsigned int *)(a1 + 528), v24);
                if ( (*(_DWORD *)(a1 + 1552) & 0xFFFFFF) != 2 )
                {
                  sub_1000038E0(a1);
                  result = 1;
                  v43 = __src[0];
                  if ( !__src[0] )
                    return result;
                  goto LABEL_40;
                }
                sub_100006388(
                  a1,
                  "Please use mac_server_arm64e to debug arm64e processes",
                  v37,
                  v38,
                  v39,
                  v40,
                  v41,
                  v42,
                  v46);
LABEL_37:
                result = 0;
                v43 = __src[0];
                if ( !__src[0] )
                  return result;
LABEL_40:
                __src[1] = nullptr;
                v44 = result;
                qfree(v43);
                return v44;
              }
            }
            *(_QWORD *)(v33 + 2136) = 0;
            qfree(v36);
            goto LABEL_35;
          }
        }
        if ( under_debugger != 1 )
          interr(2021);
      }
      else if ( under_debugger != 1 )
      {
        goto LABEL_48;
      }
    }
    while ( 1 )
    {
      __break(1u);
LABEL_48:
      interr(2020);
    }
  }
  return result;
}
// 1000065DC: variable 'v26' is possibly undefined
// 1000065DC: variable 'v27' is possibly undefined
// 1000065DC: variable 'v28' is possibly undefined
// 1000065DC: variable 'v29' is possibly undefined
// 1000065DC: variable 'v30' is possibly undefined
// 1000065DC: variable 'v31' is possibly undefined
// 100006674: variable 'v14' is possibly undefined
// 100006674: variable 'v15' is possibly undefined
// 100006674: variable 'v16' is possibly undefined
// 100006674: variable 'v17' is possibly undefined
// 100006674: variable 'v18' is possibly undefined
// 100006674: variable 'v19' is possibly undefined
// 100006674: variable 'v45' is possibly undefined
// 1000066F0: variable 'v37' is possibly undefined
// 1000066F0: variable 'v38' is possibly undefined
// 1000066F0: variable 'v39' is possibly undefined
// 1000066F0: variable 'v40' is possibly undefined
// 1000066F0: variable 'v41' is possibly undefined
// 1000066F0: variable 'v42' is possibly undefined
// 1000066F0: variable 'v46' is possibly undefined
// 1000598A0: using guessed type __int64 __fastcall nullsub_21(_QWORD);
// 10009D90D: using guessed type char under_debugger;
