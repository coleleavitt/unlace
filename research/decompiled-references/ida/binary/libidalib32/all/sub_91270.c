__int64 __fastcall sub_91270(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int v6; // r14d
  __int64 v10; // rdi
  __int64 v11; // rdi
  const char *v12; // rsi
  int v13; // eax
  const char *v14; // rsi
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-F0h]
  int v27; // [rsp+8h] [rbp-F0h]
  __int64 v28; // [rsp+10h] [rbp-E8h] BYREF
  int v29; // [rsp+18h] [rbp-E0h]
  __int64 v30; // [rsp+20h] [rbp-D8h] BYREF
  int v31; // [rsp+28h] [rbp-D0h]
  __int128 v32; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-B8h]
  int v34; // [rsp+48h] [rbp-B0h]
  int v35; // [rsp+4Ch] [rbp-ACh]
  int v36; // [rsp+50h] [rbp-A8h]
  __int64 v37; // [rsp+58h] [rbp-A0h]
  _BYTE v38[88]; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v39; // [rsp+B8h] [rbp-40h]

  v6 = 0;
  v39 = __readfsqword(0x28u);
  if ( (unsigned __int64)xmmword_2508F8 > 1 )
  {
    sub_168770((unsigned int)v38, *(_QWORD *)(a1 + 8), 0, a4, a5, a6);
    v10 = *(_QWORD *)(a1 + 8);
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    if ( !(unsigned __int8)sub_161120(v10, &v28, &v30, 0) )
    {
      v20 = *(_QWORD *)(sub_15CFF0(*(_QWORD *)(a1 + 8) + 440LL) + 40);
      if ( v20 )
      {
        v26 = v20;
        v21 = sub_15CFF0(*(_QWORD *)(a1 + 8) + 440LL);
        v22 = v26;
        v27 = *(__int16 *)(v21 + 28);
        if ( (BYTE10(xmmword_244090) & 1) != 0 )
        {
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          v11 = v28;
          v23 = *(_QWORD *)(a1 + 8);
          v31 = 0;
          v24 = *(_QWORD *)(v23 + 888);
          v29 = v27;
          v30 = v24;
LABEL_5:
          if ( !v11 )
          {
            v6 = 0;
            goto LABEL_18;
          }
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          v12 = s1;
          if ( (_QWORD)xmmword_2508F8 )
            v12 = (const char *)qword_2508F0;
          v13 = sub_163130(
                  *(_QWORD *)(a1 + 8),
                  v12,
                  &v28,
                  &v30,
                  (unsigned __int8)(BYTE10(xmmword_244090) | (2 * (a2 & 1))));
          if ( v13 )
          {
            if ( (unsigned int)(v13 - 1) <= 1 )
            {
              v14 = "aborted";
              if ( v13 == 1 )
                v14 = "completed";
              sub_8F660((__int64)"Search %s\n", v14);
              v15 = sub_15D010(*(_QWORD *)(a1 + 8) + 440LL);
              v16 = *(_OWORD *)v15;
              v17 = *(_QWORD *)(v15 + 16);
              v18 = *(_DWORD *)(v15 + 24);
              v19 = *(_DWORD *)(v15 + 32);
              LODWORD(v15) = *(unsigned __int16 *)(v15 + 30);
              v32 = v16;
              v34 = v18;
              v36 = v19;
              v37 = v28;
              v35 = (unsigned __int16)v29 | ((_DWORD)v15 << 16);
              v33 = v17;
              if ( v28 )
                v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
              (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 8) + 304LL))(*(_QWORD *)(a1 + 8), &v32);
              sub_16BD30(*(_QWORD *)(a1 + 8), &v32, 3, (a2 >> 1) & 1);
              if ( v37 )
                qfree();
              v6 = 1;
              goto LABEL_17;
            }
          }
          else
          {
            sub_8F660((__int64)"Pattern not found\n");
          }
          v6 = 0;
LABEL_17:
          qfree();
          qfree();
LABEL_18:
          sub_16C9F0(v38);
          return v6;
        }
        v25 = *(_QWORD *)(a1 + 8);
        v29 = 0;
        v28 = *(_QWORD *)(v25 + 880);
        v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        v31 = v27;
      }
    }
    v11 = v28;
    goto LABEL_5;
  }
  return v6;
}

