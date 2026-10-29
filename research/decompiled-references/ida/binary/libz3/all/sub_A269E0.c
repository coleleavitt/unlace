void __fastcall sub_A269E0(__int64 a1, __int64 *a2, unsigned int a3, char a4, _DWORD *a5, __int64 a6)
{
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // r12d
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // r14
  int v14; // r15d
  __int64 *v15; // rcx
  bool v16; // zf
  __int64 *v17; // r15
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int *(__fastcall *v23)(__int64, __int64, __int64, char); // rax
  _QWORD *v24; // r14
  _BOOL8 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  _BOOL8 v30; // rcx
  __int64 v31; // [rsp+8h] [rbp-1B0h]
  __int64 *v32; // [rsp+10h] [rbp-1A8h]
  void *v34; // [rsp+28h] [rbp-190h]
  void *v35; // [rsp+28h] [rbp-190h]
  unsigned __int8 v39; // [rsp+4Fh] [rbp-169h]
  _BYTE *v40; // [rsp+58h] [rbp-160h]
  _QWORD v41[4]; // [rsp+80h] [rbp-138h] BYREF
  _QWORD v42[4]; // [rsp+A0h] [rbp-118h] BYREF
  _QWORD v43[2]; // [rsp+C0h] [rbp-F8h] BYREF
  _QWORD v44[2]; // [rsp+D0h] [rbp-E8h] BYREF
  _QWORD v45[4]; // [rsp+E0h] [rbp-D8h] BYREF
  _QWORD v46[4]; // [rsp+100h] [rbp-B8h] BYREF
  _QWORD v47[4]; // [rsp+120h] [rbp-98h] BYREF
  char v48[32]; // [rsp+140h] [rbp-78h] BYREF
  __int64 v49; // [rsp+160h] [rbp-58h] BYREF
  __int64 v50; // [rsp+168h] [rbp-50h]
  __int64 v51; // [rsp+170h] [rbp-48h]
  __int64 v52; // [rsp+178h] [rbp-40h]

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 336) + 24LL)
    || ((v6 = *(_QWORD **)(a6 + 8), !*v6) || !*(_DWORD *)(*v6 - 4LL)) && ((v7 = v6[1]) == 0 || !*(_DWORD *)(v7 - 4)) )
  {
    v41[0] = 0;
    v41[1] = 0;
    v8 = *a2;
    v41[2] = 1;
    v41[3] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v41, (int *)(v8 + 40LL * a3));
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 336) + 24LL) )
    {
      if ( SLODWORD(v41[0]) < 0 )
        sub_1831620(qword_1C7F2C0, v41);
      sub_9AF730((__int64)qword_1C7F2C0, (__int64)a5, (__int64)v41, (__int64)a5);
    }
    v9 = *a2;
    if ( *a2 )
    {
      v31 = v9 + 40LL * *(unsigned int *)(v9 - 4);
      if ( v31 != v9 )
      {
        v10 = 0;
        while ( 1 )
        {
          v11 = *(unsigned int *)(v9 + 32);
          if ( (_DWORD)v11 == -1 || a3 == v10 )
            goto LABEL_41;
          v12 = *(_DWORD *)v9 >> 31;
          if ( a4 )
            LOBYTE(v12) = *(_DWORD *)v9 > 0;
          v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8LL * (v12 & 1) + 616) + 8 * v11);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13) )
            goto LABEL_41;
          v39 = *(_BYTE *)(*(_QWORD *)(a1 + 336) + 24LL);
          if ( !v39 || !*a5 )
          {
            v25 = 1;
            if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
              v25 = *(_DWORD *)(a1 + 1440) != 0x7FFFFFFF;
            (*(void (__fastcall **)(__int64, __int64, __int64, _BOOL8))(*(_QWORD *)v13 + 24LL))(v13, a6, v9, v25);
            goto LABEL_41;
          }
          v42[0] = 0;
          v42[1] = 0;
          v42[2] = 1;
          v42[3] = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v42, (int *)v9);
          v14 = *(_BYTE *)(v13 + 48) & 1;
          if ( SLODWORD(v42[0]) < 0 )
            sub_1831620(qword_1C7F2C0, v42);
          v43[0] = 1;
          v43[1] = 0;
          v44[0] = 1;
          v44[1] = 0;
          sub_182CBA0(qword_1C7F2C0, v44);
          LODWORD(v44[0]) = 1;
          BYTE4(v44[0]) &= ~1u;
          sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v43, (__int64)v42, (__int64)v43);
          v45[0] = 0;
          v45[1] = 0;
          v45[2] = 1;
          v45[3] = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v45, (int *)(v13 + 16));
          v46[0] = 0;
          v46[1] = 0;
          v46[2] = 1;
          v46[3] = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v46, (int *)v45);
          if ( v14 )
            sub_9AF010((__int64)v46, (__int64)v43, (__int64)a5);
          else
            sub_9AEDC0((__int64)v46, (__int64)v43, (__int64)a5);
          v47[0] = 0;
          v47[1] = 0;
          v47[2] = 1;
          v47[3] = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v47, (int *)v45);
          v15 = *(__int64 **)(*(_QWORD *)(a1 + 632) + 8LL * *(unsigned int *)(v9 + 32));
          if ( !v15 )
            break;
          v32 = &v15[*((unsigned int *)v15 - 1)];
          if ( v32 == v15 )
            break;
          v40 = nullptr;
          v16 = v14 == 0;
          v17 = *(__int64 **)(*(_QWORD *)(a1 + 632) + 8LL * *(unsigned int *)(v9 + 32));
          if ( v16 )
          {
            do
            {
              while ( 1 )
              {
                v26 = *v17;
                if ( *v17 != v13 )
                {
                  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL);
                  v28 = *(char *)(v27 + (unsigned int)(2 * *(_DWORD *)(v26 + 52)));
                  if ( *(_BYTE *)(v27 + (unsigned int)(2 * *(_DWORD *)(v26 + 52))) )
                  {
                    v29 = a1 + 64;
                    v35 = (void *)*v17;
                    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4LL * *(unsigned int *)(v26 + 8) + 3) & 0x40) == 0 )
                      v29 = a1 + 96;
                    sub_9AEC50(v26, v28 == 1, v29);
                    if ( (*(_BYTE *)(v13 + 48) & 1) == (*((_BYTE *)v35 + 48) & 1) )
                      break;
                  }
                }
                if ( v32 == ++v17 )
                  goto LABEL_60;
              }
              v49 = 0;
              v50 = 0;
              v51 = 1;
              v52 = 0;
              sub_27B950((__int64)qword_1C7F2C0, (__int64)&v49, (int *)v35 + 4);
              if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v49, (__int64)v46)
                && sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v49, (__int64)v47) )
              {
                v40 = v35;
                sub_27B950((__int64)qword_1C7F2C0, (__int64)v47, (int *)&v49);
              }
              ++v17;
              sub_25A130((char *)&v49);
            }
            while ( v32 != v17 );
LABEL_60:
            if ( !v40 )
              break;
            sub_3EBB80((__int64)v48, (__int64)v45, (__int64)v47);
            sub_3EBE30((__int64)&v49, (__int64)v42, (__int64)v48);
            sub_89ABF0((__int64)qword_1C7F2C0, (__int64)a5, (__int64)&v49, (__int64)a5);
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v18 = *v17;
                if ( v13 != *v17 )
                {
                  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL);
                  v20 = *(char *)(v19 + (unsigned int)(2 * *(_DWORD *)(v18 + 52)));
                  if ( *(_BYTE *)(v19 + (unsigned int)(2 * *(_DWORD *)(v18 + 52))) )
                  {
                    v21 = a1 + 96;
                    v34 = (void *)*v17;
                    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4LL * *(unsigned int *)(v18 + 8) + 3) & 0x40) != 0 )
                      v21 = a1 + 64;
                    sub_9AEC50(v18, v20 == 1, v21);
                    if ( (*(_BYTE *)(v13 + 48) & 1) == (*((_BYTE *)v34 + 48) & 1) )
                      break;
                  }
                }
                if ( v32 == ++v17 )
                  goto LABEL_33;
              }
              v49 = 0;
              v50 = 0;
              v51 = 1;
              v52 = 0;
              sub_27B950((__int64)qword_1C7F2C0, (__int64)&v49, (int *)v34 + 4);
              if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)v46, (__int64)&v49)
                && sub_3ED700((__int64)qword_1C7F2C0, (__int64)v47, (__int64)&v49) )
              {
                v40 = v34;
                sub_27B950((__int64)qword_1C7F2C0, (__int64)v47, (int *)&v49);
              }
              ++v17;
              sub_25A130((char *)&v49);
            }
            while ( v32 != v17 );
LABEL_33:
            if ( !v40 )
              break;
            sub_3EBB80((__int64)v48, (__int64)v47, (__int64)v45);
            sub_3EBE30((__int64)&v49, (__int64)v42, (__int64)v48);
            sub_89ABF0((__int64)qword_1C7F2C0, (__int64)a5, (__int64)&v49, (__int64)a5);
          }
          sub_25A130((char *)&v49);
          sub_25A130(v48);
          v22 = 1;
          v23 = *(int *(__fastcall **)(__int64, __int64, __int64, char))(*(_QWORD *)v40 + 24LL);
          if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
          {
            v39 = *(_DWORD *)(a1 + 1440) != 0x7FFFFFFF;
            v22 = v39;
          }
          if ( v23 == sub_A20190 )
          {
            v24 = *(_QWORD **)(a6 + 8);
            LODWORD(v49) = ((v40[88] & 4) == 0) + 2 * *((_DWORD *)v40 + 13);
            sub_98CFC0(v24, (unsigned int *)&v49);
            if ( v39 )
              sub_98D840(v24 + 2, (__int64)v42);
          }
          else
          {
            v23((__int64)v40, a6, (__int64)v42, v22);
          }
          sub_25A130((char *)v47);
          sub_25A130((char *)v46);
          sub_25A130((char *)v45);
          sub_25A130((char *)v43);
          sub_25A130((char *)v42);
LABEL_41:
          v9 += 40;
          ++v10;
          if ( v9 == v31 )
            goto LABEL_42;
        }
        v30 = 1;
        if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
          v30 = *(_DWORD *)(a1 + 1440) != 0x7FFFFFFF;
        (*(void (__fastcall **)(__int64, __int64, _QWORD *, _BOOL8))(*(_QWORD *)v13 + 24LL))(v13, a6, v42, v30);
        sub_25A130((char *)v47);
        sub_25A130((char *)v46);
        sub_25A130((char *)v45);
        sub_25A130((char *)v43);
        sub_25A130((char *)v42);
        goto LABEL_41;
      }
    }
LABEL_42:
    sub_25A130((char *)v41);
  }
}

