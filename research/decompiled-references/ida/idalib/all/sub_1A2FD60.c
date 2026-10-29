__int64 __fastcall sub_1A2FD60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  _QWORD *v12; // rdx
  __int64 v13; // rax
  int v14; // r14d
  __int64 v15; // rbp
  __int64 v16; // r15
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  int v22; // edx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 (*v28)(); // rsi
  __int64 (*v29)(); // rdx
  int v30; // eax
  __int64 result; // rax
  __int64 v32; // r12
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // [rsp+4h] [rbp-A4h]
  __int64 v37; // [rsp+8h] [rbp-A0h]
  __m128 v38; // [rsp+10h] [rbp-98h] BYREF
  __int64 v39; // [rsp+20h] [rbp-88h]
  __int64 v40; // [rsp+28h] [rbp-80h]
  __int64 v41; // [rsp+30h] [rbp-78h]
  __int64 v42; // [rsp+58h] [rbp-50h]

  if ( a10 )
    return sub_BA5620(a2, a2, a3, a4, a5, a6, a7, a8, a9);
  v12 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v12 = (_QWORD *)*v12;
  v13 = *(_QWORD *)(a1 + 9944);
  v14 = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 9944) = 0;
  v15 = *(_QWORD *)(a1 + 544);
  v16 = *(_QWORD *)(a1 + 512);
  *(_QWORD *)(a1 + 544) = v12;
  v42 = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 2632);
  *(_QWORD *)(a1 + 512) = 0;
  v36 = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 40);
  v40 = 0;
  *(_DWORD *)(a1 + 80) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 3688);
  LODWORD(v41) = 0;
  *(_DWORD *)(a1 + 2632) = v13;
  v17 = *(_QWORD *)(a2 + 16);
  BYTE4(v41) = 0;
  if ( (v17 & 4) != 0 )
    v18 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
  sub_1A2F990(&v38, a1, v18, a4, a5, a6);
  v21 = v38.m128_i64[1];
  v39 = v38.m128_u64[0];
  if ( v38.m128_u64[1] )
    goto LABEL_7;
  result = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(result + 60) & 0x10) != 0 || (*(_BYTE *)(result + 96) & 0x30) != 0 )
  {
    if ( v38.m128_u64[0] )
    {
      result = sub_AB35C0(*(_QWORD *)(a1 + 248), 0, v38.m128_i64[0], v19, 0, v20);
      v21 = result;
    }
    else
    {
      v34 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v34 = *(_QWORD *)v34;
      v35 = *(_BYTE *)(v34 + 8) & 0x7F;
      if ( (_BYTE)v35 == 7 )
      {
        while ( v34 != 40 )
        {
          v34 = sub_B72690(v34);
          v35 = *(_BYTE *)(v34 + 8) & 0x7F;
          if ( (_BYTE)v35 != 7 )
            goto LABEL_29;
        }
        v34 = 40;
      }
LABEL_29:
      result = sub_AB31E0(*(_QWORD *)(a1 + 248), v34, v35, v19, v21, v20);
      v21 = result;
    }
    BYTE4(v41) = 1;
    if ( v21 )
    {
LABEL_7:
      v37 = v21;
      v22 = *(_DWORD *)(v21 + 8) + 1;
      LODWORD(v40) = *(_DWORD *)(v21 + 8);
      v23 = *(_QWORD *)v21;
      *(_DWORD *)(v21 + 8) = v22;
      v24 = (*(__int64 (__fastcall **)(__int64, __int64))(v23 + 16))(v21, a3);
      v27 = v37;
      v28 = sub_E34420;
      HIDWORD(v40) = v24;
      v29 = *(__int64 (**)())(*(_QWORD *)v37 + 56LL);
      v30 = 0;
      if ( v29 != sub_E34420 )
      {
        v28 = (__int64 (*)())a3;
        v30 = ((__int64 (__fastcall *)(__int64, __int64))v29)(v37, a3);
      }
      LODWORD(v41) = v30;
      sub_BA5620(a2, (__int64)v28, (__int64)v29, v25, v27, v26, v39, v40, v41);
      result = *(_QWORD *)(a1 + 248);
      v32 = *(_QWORD *)(result + 18360);
      if ( v32 )
      {
        result = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v32 + 232LL))(v32, &unk_2CD8B38);
        if ( (_BYTE)result )
        {
          result = *(_QWORD *)(*(_QWORD *)v32 + 408LL);
          if ( (void (*)())result != nullsub_216 )
            result = ((__int64 (__fastcall *)(__int64, __int64))result)(v32, a2);
        }
      }
    }
  }
  if ( v15 )
  {
    v33 = v42;
    *(_QWORD *)(a1 + 544) = v15;
    *(_QWORD *)(a1 + 512) = v16;
    *(_QWORD *)(a1 + 9944) = v33;
    result = v36;
    *(_DWORD *)(a1 + 80) = v14;
    *(_DWORD *)(a1 + 2632) = v36;
  }
  return result;
}
